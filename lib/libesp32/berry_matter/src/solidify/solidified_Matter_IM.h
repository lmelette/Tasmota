/* Solidification of Matter_IM.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"

extern const bclass be_class_Matter_IM;

/********************************************************************
** Solidified function: process_read_request_pull
********************************************************************/
extern const bclass be_class_Matter_IM;
be_local_closure(class_Matter_IM_process_read_request_pull,   /* name */
  be_nested_proto(
    13,                          /* nstack */
    3,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_IM, 
    1,                          /* has constants */
    ( &(const bvalue[ 8]) {     /* constants */
    /* K0   */  be_nested_str_weak(matter),
    /* K1   */  be_nested_str_weak(ReadRequestMessage),
    /* K2   */  be_nested_str_weak(from_TLV),
    /* K3   */  be_nested_str_weak(process_read_or_subscribe_request_pull),
    /* K4   */  be_nested_str_weak(process_read_or_subscribe_request_event_pull),
    /* K5   */  be_nested_str_weak(send_queue),
    /* K6   */  be_nested_str_weak(push),
    /* K7   */  be_nested_str_weak(IM_ReportData_Pull),
    }),
    be_str_weak(process_read_request_pull),
    &be_const_str_solidified,
    ( &(const binstruction[25]) {  /* code */
      0xB80E0000,  //  0000  GETNGBL	R3	K0
      0x8C0C0701,  //  0001  GETMET	R3	R3	K1
      0x7C0C0200,  //  0002  CALL	R3	1
      0x8C0C0702,  //  0003  GETMET	R3	R3	K2
      0x5C140400,  //  0004  MOVE	R5	R2
      0x7C0C0400,  //  0005  CALL	R3	2
      0x8C100103,  //  0006  GETMET	R4	R0	K3
      0x5C180600,  //  0007  MOVE	R6	R3
      0x5C1C0200,  //  0008  MOVE	R7	R1
      0x7C100600,  //  0009  CALL	R4	3
      0x8C140104,  //  000A  GETMET	R5	R0	K4
      0x5C1C0600,  //  000B  MOVE	R7	R3
      0x5C200200,  //  000C  MOVE	R8	R1
      0x7C140600,  //  000D  CALL	R5	3
      0x88180105,  //  000E  GETMBR	R6	R0	K5
      0x8C180D06,  //  000F  GETMET	R6	R6	K6
      0xB8220000,  //  0010  GETNGBL	R8	K0
      0x8C201107,  //  0011  GETMET	R8	R8	K7
      0x5C280200,  //  0012  MOVE	R10	R1
      0x5C2C0800,  //  0013  MOVE	R11	R4
      0x5C300A00,  //  0014  MOVE	R12	R5
      0x7C200800,  //  0015  CALL	R8	4
      0x7C180400,  //  0016  CALL	R6	2
      0x50180200,  //  0017  LDBOOL	R6	1	0
      0x80040C00,  //  0018  RET	1	R6
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: process_incoming_ack
********************************************************************/
extern const bclass be_class_Matter_IM;
be_local_closure(class_Matter_IM_process_incoming_ack,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_IM, 
    1,                          /* has constants */
    ( &(const bvalue[ 5]) {     /* constants */
    /* K0   */  be_nested_str_weak(find_sendqueue_by_exchangeid),
    /* K1   */  be_nested_str_weak(exchange_id),
    /* K2   */  be_nested_str_weak(ack_received),
    /* K3   */  be_nested_str_weak(finished),
    /* K4   */  be_nested_str_weak(remove_sendqueue_by_exchangeid),
    }),
    be_str_weak(process_incoming_ack),
    &be_const_str_solidified,
    ( &(const binstruction[15]) {  /* code */
      0x8C080100,  //  0000  GETMET	R2	R0	K0
      0x88100301,  //  0001  GETMBR	R4	R1	K1
      0x7C080400,  //  0002  CALL	R2	2
      0x780A0008,  //  0003  JMPF	R2	#000D
      0x8C0C0502,  //  0004  GETMET	R3	R2	K2
      0x5C140200,  //  0005  MOVE	R5	R1
      0x7C0C0400,  //  0006  CALL	R3	2
      0x88100503,  //  0007  GETMBR	R4	R2	K3
      0x78120002,  //  0008  JMPF	R4	#000C
      0x8C100104,  //  0009  GETMET	R4	R0	K4
      0x88180301,  //  000A  GETMBR	R6	R1	K1
      0x7C100400,  //  000B  CALL	R4	2
      0x80040600,  //  000C  RET	1	R3
      0x500C0000,  //  000D  LDBOOL	R3	0	0
      0x80040600,  //  000E  RET	1	R3
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: process_invoke_request
********************************************************************/
extern const bclass be_class_Matter_IM;
be_local_closure(class_Matter_IM_process_invoke_request,   /* name */
  be_nested_proto(
    19,                          /* nstack */
    3,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_IM, 
    1,                          /* has constants */
    ( &(const bvalue[41]) {     /* constants */
    /* K0   */  be_nested_str_weak(matter),
    /* K1   */  be_nested_str_weak(Path),
    /* K2   */  be_nested_str_weak(msg),
    /* K3   */  be_nested_str_weak(InvokeRequestMessage),
    /* K4   */  be_nested_str_weak(from_TLV),
    /* K5   */  be_nested_str_weak(invoke_requests),
    /* K6   */  be_nested_str_weak(InvokeResponseMessage),
    /* K7   */  be_nested_str_weak(suppress_response),
    /* K8   */  be_nested_str_weak(invoke_responses),
    /* K9   */  be_nested_str_weak(endpoint),
    /* K10  */  be_nested_str_weak(command_path),
    /* K11  */  be_nested_str_weak(cluster),
    /* K12  */  be_nested_str_weak(command),
    /* K13  */  be_nested_str_weak(status),
    /* K14  */  be_nested_str_weak(UNSUPPORTED_COMMAND),
    /* K15  */  be_nested_str_weak(get_command_name),
    /* K16  */  be_nested_str_weak(device),
    /* K17  */  be_nested_str_weak(invoke_request),
    /* K18  */  be_nested_str_weak(session),
    /* K19  */  be_nested_str_weak(command_fields),
    /* K20  */  be_nested_str_weak(log),
    /* K21  */  be_nested_str_weak(_X28),
    /* K22  */  be_nested_str_weak(_X29_X20),
    /* K23  */  be_nested_str_weak(),
    /* K24  */  be_nested_str_weak(MTR_X3A_X20_X3ECommand_X20_X20_X20_X28_X256i_X29_X20_X25s_X20_X25s_X20_X25s),
    /* K25  */  be_nested_str_weak(local_session_id),
    /* K26  */  be_const_int(3),
    /* K27  */  be_nested_str_weak(SUCCESS),
    /* K28  */  be_nested_str_weak(invokeresponse2raw),
    /* K29  */  be_nested_str_weak(push),
    /* K30  */  be_nested_str_weak(tasmota),
    /* K31  */  be_nested_str_weak(loglevel),
    /* K32  */  be_nested_str_weak(MTR_X3A_X20_X3CReplied_X20_X20_X20_X28_X256i_X29_X20OK_X20exch_X3D_X25i),
    /* K33  */  be_nested_str_weak(exchange_id),
    /* K34  */  be_nested_str_weak(MTR_X3A_X20_X3CReplied_X20_X20_X20_X28_X256i_X29_X20_X25s_X20_X25s),
    /* K35  */  be_nested_str_weak(MTR_X3A_X20_X3CReplied_X20_X20_X20_X28_X256i_X29_X20Status_X3D0x_X2502X_X20exch_X3D_X25i),
    /* K36  */  be_nested_str_weak(MTR_X3A_X20_Ignore_X20_X20_X20_X20_X28_X256i_X29_X20exch_X3D_X25i),
    /* K37  */  be_nested_str_weak(stop_iteration),
    /* K38  */  be_const_int(0),
    /* K39  */  be_nested_str_weak(send_queue),
    /* K40  */  be_nested_str_weak(IM_InvokeResponse),
    }),
    be_str_weak(process_invoke_request),
    &be_const_str_solidified,
    ( &(const binstruction[222]) {  /* code */
      0xB80E0000,  //  0000  GETNGBL	R3	K0
      0x8C0C0701,  //  0001  GETMET	R3	R3	K1
      0x7C0C0200,  //  0002  CALL	R3	1
      0x900E0401,  //  0003  SETMBR	R3	K2	R1
      0xB8120000,  //  0004  GETNGBL	R4	K0
      0x8C100903,  //  0005  GETMET	R4	R4	K3
      0x7C100200,  //  0006  CALL	R4	1
      0x8C100904,  //  0007  GETMET	R4	R4	K4
      0x5C180400,  //  0008  MOVE	R6	R2
      0x7C100400,  //  0009  CALL	R4	2
      0x88140905,  //  000A  GETMBR	R5	R4	K5
      0x4C180000,  //  000B  LDNIL	R6
      0x20140A06,  //  000C  NE	R5	R5	R6
      0x781600CE,  //  000D  JMPF	R5	#00DD
      0xB8160000,  //  000E  GETNGBL	R5	K0
      0x8C140B06,  //  000F  GETMET	R5	R5	K6
      0x7C140200,  //  0010  CALL	R5	1
      0x50180000,  //  0011  LDBOOL	R6	0	0
      0x90160E06,  //  0012  SETMBR	R5	K7	R6
      0x60180012,  //  0013  GETGBL	R6	G18
      0x7C180000,  //  0014  CALL	R6	0
      0x90161006,  //  0015  SETMBR	R5	K8	R6
      0x60180010,  //  0016  GETGBL	R6	G16
      0x881C0905,  //  0017  GETMBR	R7	R4	K5
      0x7C180200,  //  0018  CALL	R6	1
      0xA80200AD,  //  0019  EXBLK	0	#00C8
      0x5C1C0C00,  //  001A  MOVE	R7	R6
      0x7C1C0000,  //  001B  CALL	R7	0
      0x88200F0A,  //  001C  GETMBR	R8	R7	K10
      0x88201109,  //  001D  GETMBR	R8	R8	K9
      0x900E1208,  //  001E  SETMBR	R3	K9	R8
      0x88200F0A,  //  001F  GETMBR	R8	R7	K10
      0x8820110B,  //  0020  GETMBR	R8	R8	K11
      0x900E1608,  //  0021  SETMBR	R3	K11	R8
      0x88200F0A,  //  0022  GETMBR	R8	R7	K10
      0x8820110C,  //  0023  GETMBR	R8	R8	K12
      0x900E1808,  //  0024  SETMBR	R3	K12	R8
      0xB8220000,  //  0025  GETNGBL	R8	K0
      0x8820110E,  //  0026  GETMBR	R8	R8	K14
      0x900E1A08,  //  0027  SETMBR	R3	K13	R8
      0xB8220000,  //  0028  GETNGBL	R8	K0
      0x8C20110F,  //  0029  GETMET	R8	R8	K15
      0x8828070B,  //  002A  GETMBR	R10	R3	K11
      0x882C070C,  //  002B  GETMBR	R11	R3	K12
      0x7C200600,  //  002C  CALL	R8	3
      0x60240008,  //  002D  GETGBL	R9	G8
      0x5C280600,  //  002E  MOVE	R10	R3
      0x7C240200,  //  002F  CALL	R9	1
      0x88280110,  //  0030  GETMBR	R10	R0	K16
      0x8C281511,  //  0031  GETMET	R10	R10	K17
      0x88300312,  //  0032  GETMBR	R12	R1	K18
      0x88340F13,  //  0033  GETMBR	R13	R7	K19
      0x5C380600,  //  0034  MOVE	R14	R3
      0x7C280800,  //  0035  CALL	R10	4
      0x882C0714,  //  0036  GETMBR	R11	R3	K20
      0x4C300000,  //  0037  LDNIL	R12
      0x202C160C,  //  0038  NE	R11	R11	R12
      0x782E0005,  //  0039  JMPF	R11	#0040
      0x602C0008,  //  003A  GETGBL	R11	G8
      0x88300714,  //  003B  GETMBR	R12	R3	K20
      0x7C2C0200,  //  003C  CALL	R11	1
      0x002E2A0B,  //  003D  ADD	R11	K21	R11
      0x002C1716,  //  003E  ADD	R11	R11	K22
      0x70020000,  //  003F  JMP		#0041
      0x582C0017,  //  0040  LDCONST	R11	K23
      0xB8322800,  //  0041  GETNGBL	R12	K20
      0x60340018,  //  0042  GETGBL	R13	G24
      0x58380018,  //  0043  LDCONST	R14	K24
      0x883C0312,  //  0044  GETMBR	R15	R1	K18
      0x883C1F19,  //  0045  GETMBR	R15	R15	K25
      0x5C401200,  //  0046  MOVE	R16	R9
      0x78220001,  //  0047  JMPF	R8	#004A
      0x5C441000,  //  0048  MOVE	R17	R8
      0x70020000,  //  0049  JMP		#004B
      0x58440017,  //  004A  LDCONST	R17	K23
      0x5C481600,  //  004B  MOVE	R18	R11
      0x7C340A00,  //  004C  CALL	R13	5
      0x5838001A,  //  004D  LDCONST	R14	K26
      0x7C300400,  //  004E  CALL	R12	2
      0x4C300000,  //  004F  LDNIL	R12
      0x900E280C,  //  0050  SETMBR	R3	K20	R12
      0x60300015,  //  0051  GETGBL	R12	G21
      0x5436001F,  //  0052  LDINT	R13	32
      0x7C300200,  //  0053  CALL	R12	1
      0x50340200,  //  0054  LDBOOL	R13	1	0
      0x1C34140D,  //  0055  EQ	R13	R10	R13
      0x74360004,  //  0056  JMPT	R13	#005C
      0x8834070D,  //  0057  GETMBR	R13	R3	K13
      0xB83A0000,  //  0058  GETNGBL	R14	K0
      0x88381D1B,  //  0059  GETMBR	R14	R14	K27
      0x1C341A0E,  //  005A  EQ	R13	R13	R14
      0x7836001A,  //  005B  JMPF	R13	#0077
      0xB8360000,  //  005C  GETNGBL	R13	K0
      0x88341B1B,  //  005D  GETMBR	R13	R13	K27
      0x900E1A0D,  //  005E  SETMBR	R3	K13	R13
      0x8C34011C,  //  005F  GETMET	R13	R0	K28
      0x5C3C1800,  //  0060  MOVE	R15	R12
      0x5C400600,  //  0061  MOVE	R16	R3
      0x4C440000,  //  0062  LDNIL	R17
      0x7C340800,  //  0063  CALL	R13	4
      0x88340B08,  //  0064  GETMBR	R13	R5	K8
      0x8C341B1D,  //  0065  GETMET	R13	R13	K29
      0x5C3C1800,  //  0066  MOVE	R15	R12
      0x7C340400,  //  0067  CALL	R13	2
      0xB8363C00,  //  0068  GETNGBL	R13	K30
      0x8C341B1F,  //  0069  GETMET	R13	R13	K31
      0x583C001A,  //  006A  LDCONST	R15	K26
      0x7C340400,  //  006B  CALL	R13	2
      0x78360008,  //  006C  JMPF	R13	#0076
      0xB8362800,  //  006D  GETNGBL	R13	K20
      0x60380018,  //  006E  GETGBL	R14	G24
      0x583C0020,  //  006F  LDCONST	R15	K32
      0x88400312,  //  0070  GETMBR	R16	R1	K18
      0x88402119,  //  0071  GETMBR	R16	R16	K25
      0x88440321,  //  0072  GETMBR	R17	R1	K33
      0x7C380600,  //  0073  CALL	R14	3
      0x583C001A,  //  0074  LDCONST	R15	K26
      0x7C340400,  //  0075  CALL	R13	2
      0x7002004F,  //  0076  JMP		#00C7
      0x4C340000,  //  0077  LDNIL	R13
      0x2034140D,  //  0078  NE	R13	R10	R13
      0x78360021,  //  0079  JMPF	R13	#009C
      0x8C34011C,  //  007A  GETMET	R13	R0	K28
      0x5C3C1800,  //  007B  MOVE	R15	R12
      0x5C400600,  //  007C  MOVE	R16	R3
      0x5C441400,  //  007D  MOVE	R17	R10
      0x7C340800,  //  007E  CALL	R13	4
      0x88340B08,  //  007F  GETMBR	R13	R5	K8
      0x8C341B1D,  //  0080  GETMET	R13	R13	K29
      0x5C3C1800,  //  0081  MOVE	R15	R12
      0x7C340400,  //  0082  CALL	R13	2
      0xB8360000,  //  0083  GETNGBL	R13	K0
      0x8C341B0F,  //  0084  GETMET	R13	R13	K15
      0x883C070B,  //  0085  GETMBR	R15	R3	K11
      0x8840070C,  //  0086  GETMBR	R16	R3	K12
      0x7C340600,  //  0087  CALL	R13	3
      0x5C201A00,  //  0088  MOVE	R8	R13
      0x5C341000,  //  0089  MOVE	R13	R8
      0x74360000,  //  008A  JMPT	R13	#008C
      0x58200017,  //  008B  LDCONST	R8	K23
      0xB8363C00,  //  008C  GETNGBL	R13	K30
      0x8C341B1F,  //  008D  GETMET	R13	R13	K31
      0x583C001A,  //  008E  LDCONST	R15	K26
      0x7C340400,  //  008F  CALL	R13	2
      0x78360009,  //  0090  JMPF	R13	#009B
      0xB8362800,  //  0091  GETNGBL	R13	K20
      0x60380018,  //  0092  GETGBL	R14	G24
      0x583C0022,  //  0093  LDCONST	R15	K34
      0x88400312,  //  0094  GETMBR	R16	R1	K18
      0x88402119,  //  0095  GETMBR	R16	R16	K25
      0x5C440600,  //  0096  MOVE	R17	R3
      0x5C481000,  //  0097  MOVE	R18	R8
      0x7C380800,  //  0098  CALL	R14	4
      0x583C001A,  //  0099  LDCONST	R15	K26
      0x7C340400,  //  009A  CALL	R13	2
      0x7002002A,  //  009B  JMP		#00C7
      0x8834070D,  //  009C  GETMBR	R13	R3	K13
      0x4C380000,  //  009D  LDNIL	R14
      0x20341A0E,  //  009E  NE	R13	R13	R14
      0x78360018,  //  009F  JMPF	R13	#00B9
      0x8C34011C,  //  00A0  GETMET	R13	R0	K28
      0x5C3C1800,  //  00A1  MOVE	R15	R12
      0x5C400600,  //  00A2  MOVE	R16	R3
      0x4C440000,  //  00A3  LDNIL	R17
      0x7C340800,  //  00A4  CALL	R13	4
      0x88340B08,  //  00A5  GETMBR	R13	R5	K8
      0x8C341B1D,  //  00A6  GETMET	R13	R13	K29
      0x5C3C1800,  //  00A7  MOVE	R15	R12
      0x7C340400,  //  00A8  CALL	R13	2
      0xB8363C00,  //  00A9  GETNGBL	R13	K30
      0x8C341B1F,  //  00AA  GETMET	R13	R13	K31
      0x583C001A,  //  00AB  LDCONST	R15	K26
      0x7C340400,  //  00AC  CALL	R13	2
      0x78360009,  //  00AD  JMPF	R13	#00B8
      0xB8362800,  //  00AE  GETNGBL	R13	K20
      0x60380018,  //  00AF  GETGBL	R14	G24
      0x583C0023,  //  00B0  LDCONST	R15	K35
      0x88400312,  //  00B1  GETMBR	R16	R1	K18
      0x88402119,  //  00B2  GETMBR	R16	R16	K25
      0x8844070D,  //  00B3  GETMBR	R17	R3	K13
      0x88480321,  //  00B4  GETMBR	R18	R1	K33
      0x7C380800,  //  00B5  CALL	R14	4
      0x583C001A,  //  00B6  LDCONST	R15	K26
      0x7C340400,  //  00B7  CALL	R13	2
      0x7002000D,  //  00B8  JMP		#00C7
      0xB8363C00,  //  00B9  GETNGBL	R13	K30
      0x8C341B1F,  //  00BA  GETMET	R13	R13	K31
      0x583C001A,  //  00BB  LDCONST	R15	K26
      0x7C340400,  //  00BC  CALL	R13	2
      0x78360008,  //  00BD  JMPF	R13	#00C7
      0xB8362800,  //  00BE  GETNGBL	R13	K20
      0x60380018,  //  00BF  GETGBL	R14	G24
      0x583C0024,  //  00C0  LDCONST	R15	K36
      0x88400312,  //  00C1  GETMBR	R16	R1	K18
      0x88402119,  //  00C2  GETMBR	R16	R16	K25
      0x88440321,  //  00C3  GETMBR	R17	R1	K33
      0x7C380600,  //  00C4  CALL	R14	3
      0x583C001A,  //  00C5  LDCONST	R15	K26
      0x7C340400,  //  00C6  CALL	R13	2
      0x7001FF51,  //  00C7  JMP		#001A
      0x58180025,  //  00C8  LDCONST	R6	K37
      0xAC180200,  //  00C9  CATCH	R6	1	0
      0xB0080000,  //  00CA  RAISE	2	R0	R0
      0x6018000C,  //  00CB  GETGBL	R6	G12
      0x881C0B08,  //  00CC  GETMBR	R7	R5	K8
      0x7C180200,  //  00CD  CALL	R6	1
      0x24180D26,  //  00CE  GT	R6	R6	K38
      0x781A0008,  //  00CF  JMPF	R6	#00D9
      0x88180127,  //  00D0  GETMBR	R6	R0	K39
      0x8C180D1D,  //  00D1  GETMET	R6	R6	K29
      0xB8220000,  //  00D2  GETNGBL	R8	K0
      0x8C201128,  //  00D3  GETMET	R8	R8	K40
      0x5C280200,  //  00D4  MOVE	R10	R1
      0x5C2C0A00,  //  00D5  MOVE	R11	R5
      0x7C200600,  //  00D6  CALL	R8	3
      0x7C180400,  //  00D7  CALL	R6	2
      0x70020001,  //  00D8  JMP		#00DB
      0x50180000,  //  00D9  LDBOOL	R6	0	0
      0x80040C00,  //  00DA  RET	1	R6
      0x50180200,  //  00DB  LDBOOL	R6	1	0
      0x80040C00,  //  00DC  RET	1	R6
      0x80000000,  //  00DD  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: write_single_attribute_status_to_bytes
********************************************************************/
extern const bclass be_class_Matter_IM;
be_local_closure(class_Matter_IM_write_single_attribute_status_to_bytes,   /* name */
  be_nested_proto(
    16,                          /* nstack */
    4,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_IM, 
    1,                          /* has constants */
    ( &(const bvalue[25]) {     /* constants */
    /* K0   */  be_nested_str_weak(matter),
    /* K1   */  be_nested_str_weak(TLV),
    /* K2   */  be_nested_str_weak(get_attribute_name),
    /* K3   */  be_nested_str_weak(cluster),
    /* K4   */  be_nested_str_weak(attribute),
    /* K5   */  be_nested_str_weak(_X20_X28),
    /* K6   */  be_nested_str_weak(_X29),
    /* K7   */  be_nested_str_weak(),
    /* K8   */  be_nested_str_weak(status),
    /* K9   */  be_nested_str_weak(AttributeStatusIB),
    /* K10  */  be_nested_str_weak(path),
    /* K11  */  be_nested_str_weak(AttributePathIB),
    /* K12  */  be_nested_str_weak(StatusIB),
    /* K13  */  be_nested_str_weak(endpoint),
    /* K14  */  be_nested_str_weak(write_responses),
    /* K15  */  be_nested_str_weak(push),
    /* K16  */  be_nested_str_weak(log),
    /* K17  */  be_nested_str_weak(MTR_X3A_X20_X3EWrite_Attr_X25s_X25s_X20_X2D_X20_X25s_X20STATUS_X3A_X200x_X2502X_X20_X25s),
    /* K18  */  be_nested_str_weak(SUCCESS),
    /* K19  */  be_const_int(0),
    /* K20  */  be_const_int(2),
    /* K21  */  be_const_int(3),
    /* K22  */  be_nested_str_weak(tasmota),
    /* K23  */  be_nested_str_weak(loglevel),
    /* K24  */  be_nested_str_weak(MTR_X3A_X20_X3EWrite_Attr_X25s_X25s_X20_X2D_X20IGNORED),
    }),
    be_str_weak(write_single_attribute_status_to_bytes),
    &be_const_str_solidified,
    ( &(const binstruction[86]) {  /* code */
      0xB8120000,  //  0000  GETNGBL	R4	K0
      0x88100901,  //  0001  GETMBR	R4	R4	K1
      0xB8160000,  //  0002  GETNGBL	R5	K0
      0x8C140B02,  //  0003  GETMET	R5	R5	K2
      0x881C0503,  //  0004  GETMBR	R7	R2	K3
      0x88200504,  //  0005  GETMBR	R8	R2	K4
      0x7C140600,  //  0006  CALL	R5	3
      0x78160002,  //  0007  JMPF	R5	#000B
      0x001A0A05,  //  0008  ADD	R6	K5	R5
      0x00180D06,  //  0009  ADD	R6	R6	K6
      0x70020000,  //  000A  JMP		#000C
      0x58180007,  //  000B  LDCONST	R6	K7
      0x5C140C00,  //  000C  MOVE	R5	R6
      0x88180508,  //  000D  GETMBR	R6	R2	K8
      0x4C1C0000,  //  000E  LDNIL	R7
      0x20180C07,  //  000F  NE	R6	R6	R7
      0x781A0034,  //  0010  JMPF	R6	#0046
      0xB81A0000,  //  0011  GETNGBL	R6	K0
      0x8C180D09,  //  0012  GETMET	R6	R6	K9
      0x7C180200,  //  0013  CALL	R6	1
      0xB81E0000,  //  0014  GETNGBL	R7	K0
      0x8C1C0F0B,  //  0015  GETMET	R7	R7	K11
      0x7C1C0200,  //  0016  CALL	R7	1
      0x901A1407,  //  0017  SETMBR	R6	K10	R7
      0xB81E0000,  //  0018  GETNGBL	R7	K0
      0x8C1C0F0C,  //  0019  GETMET	R7	R7	K12
      0x7C1C0200,  //  001A  CALL	R7	1
      0x901A1007,  //  001B  SETMBR	R6	K8	R7
      0x881C0D0A,  //  001C  GETMBR	R7	R6	K10
      0x8820050D,  //  001D  GETMBR	R8	R2	K13
      0x901E1A08,  //  001E  SETMBR	R7	K13	R8
      0x881C0D0A,  //  001F  GETMBR	R7	R6	K10
      0x88200503,  //  0020  GETMBR	R8	R2	K3
      0x901E0608,  //  0021  SETMBR	R7	K3	R8
      0x881C0D0A,  //  0022  GETMBR	R7	R6	K10
      0x88200504,  //  0023  GETMBR	R8	R2	K4
      0x901E0808,  //  0024  SETMBR	R7	K4	R8
      0x881C0D08,  //  0025  GETMBR	R7	R6	K8
      0x88200508,  //  0026  GETMBR	R8	R2	K8
      0x901E1008,  //  0027  SETMBR	R7	K8	R8
      0x881C030E,  //  0028  GETMBR	R7	R1	K14
      0x8C1C0F0F,  //  0029  GETMET	R7	R7	K15
      0x5C240C00,  //  002A  MOVE	R9	R6
      0x7C1C0400,  //  002B  CALL	R7	2
      0xB81E2000,  //  002C  GETNGBL	R7	K16
      0x60200018,  //  002D  GETGBL	R8	G24
      0x58240011,  //  002E  LDCONST	R9	K17
      0x60280008,  //  002F  GETGBL	R10	G8
      0x5C2C0400,  //  0030  MOVE	R11	R2
      0x7C280200,  //  0031  CALL	R10	1
      0x5C2C0A00,  //  0032  MOVE	R11	R5
      0x5C300600,  //  0033  MOVE	R12	R3
      0x88340508,  //  0034  GETMBR	R13	R2	K8
      0x88380508,  //  0035  GETMBR	R14	R2	K8
      0xB83E0000,  //  0036  GETNGBL	R15	K0
      0x883C1F12,  //  0037  GETMBR	R15	R15	K18
      0x1C381C0F,  //  0038  EQ	R14	R14	R15
      0x783A0001,  //  0039  JMPF	R14	#003C
      0x58380012,  //  003A  LDCONST	R14	K18
      0x70020000,  //  003B  JMP		#003D
      0x58380007,  //  003C  LDCONST	R14	K7
      0x7C200C00,  //  003D  CALL	R8	6
      0x8824050D,  //  003E  GETMBR	R9	R2	K13
      0x20241313,  //  003F  NE	R9	R9	K19
      0x78260001,  //  0040  JMPF	R9	#0043
      0x58240014,  //  0041  LDCONST	R9	K20
      0x70020000,  //  0042  JMP		#0044
      0x58240015,  //  0043  LDCONST	R9	K21
      0x7C1C0400,  //  0044  CALL	R7	2
      0x7002000E,  //  0045  JMP		#0055
      0xB81A2C00,  //  0046  GETNGBL	R6	K22
      0x8C180D17,  //  0047  GETMET	R6	R6	K23
      0x58200015,  //  0048  LDCONST	R8	K21
      0x7C180400,  //  0049  CALL	R6	2
      0x781A0009,  //  004A  JMPF	R6	#0055
      0xB81A2000,  //  004B  GETNGBL	R6	K16
      0x601C0018,  //  004C  GETGBL	R7	G24
      0x58200018,  //  004D  LDCONST	R8	K24
      0x60240008,  //  004E  GETGBL	R9	G8
      0x5C280400,  //  004F  MOVE	R10	R2
      0x7C240200,  //  0050  CALL	R9	1
      0x5C280A00,  //  0051  MOVE	R10	R5
      0x7C1C0600,  //  0052  CALL	R7	3
      0x58200015,  //  0053  LDCONST	R8	K21
      0x7C180400,  //  0054  CALL	R6	2
      0x80000000,  //  0055  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: subscribe_request
********************************************************************/
extern const bclass be_class_Matter_IM;
be_local_closure(class_Matter_IM_subscribe_request,   /* name */
  be_nested_proto(
    17,                          /* nstack */
    3,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_IM, 
    1,                          /* has constants */
    ( &(const bvalue[35]) {     /* constants */
    /* K0   */  be_nested_str_weak(matter),
    /* K1   */  be_nested_str_weak(SubscribeRequestMessage),
    /* K2   */  be_nested_str_weak(from_TLV),
    /* K3   */  be_nested_str_weak(keep_subscriptions),
    /* K4   */  be_nested_str_weak(subs_shop),
    /* K5   */  be_nested_str_weak(remove_by_session),
    /* K6   */  be_nested_str_weak(session),
    /* K7   */  be_nested_str_weak(new_subscription),
    /* K8   */  be_nested_str_weak(tasmota),
    /* K9   */  be_nested_str_weak(loglevel),
    /* K10  */  be_const_int(3),
    /* K11  */  be_nested_str_weak(attributes_requests),
    /* K12  */  be_nested_str_weak(Path),
    /* K13  */  be_nested_str_weak(msg),
    /* K14  */  be_nested_str_weak(endpoint),
    /* K15  */  be_nested_str_weak(cluster),
    /* K16  */  be_nested_str_weak(attribute),
    /* K17  */  be_nested_str_weak(push),
    /* K18  */  be_nested_str_weak(stop_iteration),
    /* K19  */  be_nested_str_weak(log),
    /* K20  */  be_nested_str_weak(MTR_X3A_X20_X3ESubscribe_X20_X28_X256i_X29_X20_X25s_X20_X28min_X3D_X25i_X2C_X20max_X3D_X25i_X2C_X20keep_X3D_X25i_X29_X20sub_X3D_X25i_X20fabric_filtered_X3D_X25s),
    /* K21  */  be_nested_str_weak(local_session_id),
    /* K22  */  be_nested_str_weak(concat),
    /* K23  */  be_nested_str_weak(_X20),
    /* K24  */  be_nested_str_weak(min_interval),
    /* K25  */  be_nested_str_weak(max_interval),
    /* K26  */  be_const_int(1),
    /* K27  */  be_const_int(0),
    /* K28  */  be_nested_str_weak(subscription_id),
    /* K29  */  be_nested_str_weak(fabric_filtered),
    /* K30  */  be_nested_str_weak(process_read_or_subscribe_request_pull),
    /* K31  */  be_nested_str_weak(process_read_or_subscribe_request_event_pull),
    /* K32  */  be_nested_str_weak(set_event_generator_or_arr),
    /* K33  */  be_nested_str_weak(send_queue),
    /* K34  */  be_nested_str_weak(IM_SubscribeResponse_Pull),
    }),
    be_str_weak(subscribe_request),
    &be_const_str_solidified,
    ( &(const binstruction[96]) {  /* code */
      0xB80E0000,  //  0000  GETNGBL	R3	K0
      0x8C0C0701,  //  0001  GETMET	R3	R3	K1
      0x7C0C0200,  //  0002  CALL	R3	1
      0x8C0C0702,  //  0003  GETMET	R3	R3	K2
      0x5C140400,  //  0004  MOVE	R5	R2
      0x7C0C0400,  //  0005  CALL	R3	2
      0x88100703,  //  0006  GETMBR	R4	R3	K3
      0x74120003,  //  0007  JMPT	R4	#000C
      0x88100104,  //  0008  GETMBR	R4	R0	K4
      0x8C100905,  //  0009  GETMET	R4	R4	K5
      0x88180306,  //  000A  GETMBR	R6	R1	K6
      0x7C100400,  //  000B  CALL	R4	2
      0x88100104,  //  000C  GETMBR	R4	R0	K4
      0x8C100907,  //  000D  GETMET	R4	R4	K7
      0x88180306,  //  000E  GETMBR	R6	R1	K6
      0x5C1C0600,  //  000F  MOVE	R7	R3
      0x7C100600,  //  0010  CALL	R4	3
      0xB8161000,  //  0011  GETNGBL	R5	K8
      0x8C140B09,  //  0012  GETMET	R5	R5	K9
      0x581C000A,  //  0013  LDCONST	R7	K10
      0x7C140400,  //  0014  CALL	R5	2
      0x78160032,  //  0015  JMPF	R5	#0049
      0x8814070B,  //  0016  GETMBR	R5	R3	K11
      0x4C180000,  //  0017  LDNIL	R6
      0x20140A06,  //  0018  NE	R5	R5	R6
      0x7816002E,  //  0019  JMPF	R5	#0049
      0x60140012,  //  001A  GETGBL	R5	G18
      0x7C140000,  //  001B  CALL	R5	0
      0xB81A0000,  //  001C  GETNGBL	R6	K0
      0x8C180D0C,  //  001D  GETMET	R6	R6	K12
      0x7C180200,  //  001E  CALL	R6	1
      0x901A1A01,  //  001F  SETMBR	R6	K13	R1
      0x601C0010,  //  0020  GETGBL	R7	G16
      0x8820070B,  //  0021  GETMBR	R8	R3	K11
      0x7C1C0200,  //  0022  CALL	R7	1
      0xA802000D,  //  0023  EXBLK	0	#0032
      0x5C200E00,  //  0024  MOVE	R8	R7
      0x7C200000,  //  0025  CALL	R8	0
      0x8824110E,  //  0026  GETMBR	R9	R8	K14
      0x901A1C09,  //  0027  SETMBR	R6	K14	R9
      0x8824110F,  //  0028  GETMBR	R9	R8	K15
      0x901A1E09,  //  0029  SETMBR	R6	K15	R9
      0x88241110,  //  002A  GETMBR	R9	R8	K16
      0x901A2009,  //  002B  SETMBR	R6	K16	R9
      0x8C240B11,  //  002C  GETMET	R9	R5	K17
      0x602C0008,  //  002D  GETGBL	R11	G8
      0x5C300C00,  //  002E  MOVE	R12	R6
      0x7C2C0200,  //  002F  CALL	R11	1
      0x7C240400,  //  0030  CALL	R9	2
      0x7001FFF1,  //  0031  JMP		#0024
      0x581C0012,  //  0032  LDCONST	R7	K18
      0xAC1C0200,  //  0033  CATCH	R7	1	0
      0xB0080000,  //  0034  RAISE	2	R0	R0
      0xB81E2600,  //  0035  GETNGBL	R7	K19
      0x60200018,  //  0036  GETGBL	R8	G24
      0x58240014,  //  0037  LDCONST	R9	K20
      0x88280306,  //  0038  GETMBR	R10	R1	K6
      0x88281515,  //  0039  GETMBR	R10	R10	K21
      0x8C2C0B16,  //  003A  GETMET	R11	R5	K22
      0x58340017,  //  003B  LDCONST	R13	K23
      0x7C2C0400,  //  003C  CALL	R11	2
      0x88300918,  //  003D  GETMBR	R12	R4	K24
      0x88340919,  //  003E  GETMBR	R13	R4	K25
      0x88380703,  //  003F  GETMBR	R14	R3	K3
      0x783A0001,  //  0040  JMPF	R14	#0043
      0x5838001A,  //  0041  LDCONST	R14	K26
      0x70020000,  //  0042  JMP		#0044
      0x5838001B,  //  0043  LDCONST	R14	K27
      0x883C091C,  //  0044  GETMBR	R15	R4	K28
      0x8840071D,  //  0045  GETMBR	R16	R3	K29
      0x7C201000,  //  0046  CALL	R8	8
      0x5824000A,  //  0047  LDCONST	R9	K10
      0x7C1C0400,  //  0048  CALL	R7	2
      0x8C14011E,  //  0049  GETMET	R5	R0	K30
      0x5C1C0600,  //  004A  MOVE	R7	R3
      0x5C200200,  //  004B  MOVE	R8	R1
      0x7C140600,  //  004C  CALL	R5	3
      0x8C18011F,  //  004D  GETMET	R6	R0	K31
      0x5C200600,  //  004E  MOVE	R8	R3
      0x5C240200,  //  004F  MOVE	R9	R1
      0x7C180600,  //  0050  CALL	R6	3
      0x8C1C0920,  //  0051  GETMET	R7	R4	K32
      0x5C240C00,  //  0052  MOVE	R9	R6
      0x7C1C0400,  //  0053  CALL	R7	2
      0x881C0121,  //  0054  GETMBR	R7	R0	K33
      0x8C1C0F11,  //  0055  GETMET	R7	R7	K17
      0xB8260000,  //  0056  GETNGBL	R9	K0
      0x8C241322,  //  0057  GETMET	R9	R9	K34
      0x5C2C0200,  //  0058  MOVE	R11	R1
      0x5C300A00,  //  0059  MOVE	R12	R5
      0x5C340C00,  //  005A  MOVE	R13	R6
      0x5C380800,  //  005B  MOVE	R14	R4
      0x7C240A00,  //  005C  CALL	R9	5
      0x7C1C0400,  //  005D  CALL	R7	2
      0x501C0200,  //  005E  LDBOOL	R7	1	0
      0x80040E00,  //  005F  RET	1	R7
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: process_read_or_subscribe_request_pull
********************************************************************/
extern const bclass be_class_Matter_IM;
be_local_closure(class_Matter_IM_process_read_or_subscribe_request_pull,   /* name */
  be_nested_proto(
    16,                          /* nstack */
    3,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_IM, 
    1,                          /* has constants */
    ( &(const bvalue[25]) {     /* constants */
    /* K0   */  be_nested_str_weak(attributes_requests),
    /* K1   */  be_const_int(0),
    /* K2   */  be_const_int(1),
    /* K3   */  be_nested_str_weak(matter),
    /* K4   */  be_nested_str_weak(PathGenerator),
    /* K5   */  be_nested_str_weak(device),
    /* K6   */  be_nested_str_weak(start),
    /* K7   */  be_nested_str_weak(endpoint),
    /* K8   */  be_nested_str_weak(cluster),
    /* K9   */  be_nested_str_weak(attribute),
    /* K10  */  be_nested_str_weak(fabric_filtered),
    /* K11  */  be_nested_str_weak(push),
    /* K12  */  be_nested_str_weak(tasmota),
    /* K13  */  be_nested_str_weak(loglevel),
    /* K14  */  be_const_int(3),
    /* K15  */  be_nested_str_weak(Path),
    /* K16  */  be_nested_str_weak(get_attribute_name),
    /* K17  */  be_nested_str_weak(log),
    /* K18  */  be_nested_str_weak(MTR_X3A_X20_X3ERead_Attr_X20_X28_X256i_X29_X20_X25s),
    /* K19  */  be_nested_str_weak(session),
    /* K20  */  be_nested_str_weak(local_session_id),
    /* K21  */  be_nested_str_weak(_X20_X28),
    /* K22  */  be_nested_str_weak(_X29),
    /* K23  */  be_nested_str_weak(),
    /* K24  */  be_nested_str_weak(stop_iteration),
    }),
    be_str_weak(process_read_or_subscribe_request_pull),
    &be_const_str_solidified,
    ( &(const binstruction[115]) {  /* code */
      0x880C0300,  //  0000  GETMBR	R3	R1	K0
      0x4C100000,  //  0001  LDNIL	R4
      0x200C0604,  //  0002  NE	R3	R3	R4
      0x780E006C,  //  0003  JMPF	R3	#0071
      0x4C0C0000,  //  0004  LDNIL	R3
      0x88100300,  //  0005  GETMBR	R4	R1	K0
      0x78120003,  //  0006  JMPF	R4	#000B
      0x6010000C,  //  0007  GETGBL	R4	G12
      0x88140300,  //  0008  GETMBR	R5	R1	K0
      0x7C100200,  //  0009  CALL	R4	1
      0x70020000,  //  000A  JMP		#000C
      0x58100001,  //  000B  LDCONST	R4	K1
      0x24140902,  //  000C  GT	R5	R4	K2
      0x78160002,  //  000D  JMPF	R5	#0011
      0x60140012,  //  000E  GETGBL	R5	G18
      0x7C140000,  //  000F  CALL	R5	0
      0x5C0C0A00,  //  0010  MOVE	R3	R5
      0x60140010,  //  0011  GETGBL	R5	G16
      0x88180300,  //  0012  GETMBR	R6	R1	K0
      0x7C140200,  //  0013  CALL	R5	1
      0xA8020057,  //  0014  EXBLK	0	#006D
      0x5C180A00,  //  0015  MOVE	R6	R5
      0x7C180000,  //  0016  CALL	R6	0
      0xB81E0600,  //  0017  GETNGBL	R7	K3
      0x8C1C0F04,  //  0018  GETMET	R7	R7	K4
      0x88240105,  //  0019  GETMBR	R9	R0	K5
      0x7C1C0400,  //  001A  CALL	R7	2
      0x8C200F06,  //  001B  GETMET	R8	R7	K6
      0x88280D07,  //  001C  GETMBR	R10	R6	K7
      0x882C0D08,  //  001D  GETMBR	R11	R6	K8
      0x88300D09,  //  001E  GETMBR	R12	R6	K9
      0x8834030A,  //  001F  GETMBR	R13	R1	K10
      0x7C200A00,  //  0020  CALL	R8	5
      0x24200902,  //  0021  GT	R8	R4	K2
      0x78220003,  //  0022  JMPF	R8	#0027
      0x8C20070B,  //  0023  GETMET	R8	R3	K11
      0x5C280E00,  //  0024  MOVE	R10	R7
      0x7C200400,  //  0025  CALL	R8	2
      0x70020000,  //  0026  JMP		#0028
      0x5C0C0E00,  //  0027  MOVE	R3	R7
      0xB8221800,  //  0028  GETNGBL	R8	K12
      0x8C20110D,  //  0029  GETMET	R8	R8	K13
      0x5828000E,  //  002A  LDCONST	R10	K14
      0x7C200400,  //  002B  CALL	R8	2
      0x7822003E,  //  002C  JMPF	R8	#006C
      0x88200D07,  //  002D  GETMBR	R8	R6	K7
      0x4C240000,  //  002E  LDNIL	R9
      0x1C201009,  //  002F  EQ	R8	R8	R9
      0x74220007,  //  0030  JMPT	R8	#0039
      0x88200D08,  //  0031  GETMBR	R8	R6	K8
      0x4C240000,  //  0032  LDNIL	R9
      0x1C201009,  //  0033  EQ	R8	R8	R9
      0x74220003,  //  0034  JMPT	R8	#0039
      0x88200D09,  //  0035  GETMBR	R8	R6	K9
      0x4C240000,  //  0036  LDNIL	R9
      0x1C201009,  //  0037  EQ	R8	R8	R9
      0x78220032,  //  0038  JMPF	R8	#006C
      0xB8220600,  //  0039  GETNGBL	R8	K3
      0x8C20110F,  //  003A  GETMET	R8	R8	K15
      0x7C200200,  //  003B  CALL	R8	1
      0x88240D07,  //  003C  GETMBR	R9	R6	K7
      0x90220E09,  //  003D  SETMBR	R8	K7	R9
      0x88240D08,  //  003E  GETMBR	R9	R6	K8
      0x90221009,  //  003F  SETMBR	R8	K8	R9
      0x88240D09,  //  0040  GETMBR	R9	R6	K9
      0x90221209,  //  0041  SETMBR	R8	K9	R9
      0x8824030A,  //  0042  GETMBR	R9	R1	K10
      0x90221409,  //  0043  SETMBR	R8	K10	R9
      0x60240008,  //  0044  GETGBL	R9	G8
      0x5C281000,  //  0045  MOVE	R10	R8
      0x7C240200,  //  0046  CALL	R9	1
      0x88280D08,  //  0047  GETMBR	R10	R6	K8
      0x4C2C0000,  //  0048  LDNIL	R11
      0x2028140B,  //  0049  NE	R10	R10	R11
      0x782A0017,  //  004A  JMPF	R10	#0063
      0x88280D09,  //  004B  GETMBR	R10	R6	K9
      0x4C2C0000,  //  004C  LDNIL	R11
      0x2028140B,  //  004D  NE	R10	R10	R11
      0x782A0013,  //  004E  JMPF	R10	#0063
      0xB82A0600,  //  004F  GETNGBL	R10	K3
      0x8C281510,  //  0050  GETMET	R10	R10	K16
      0x88300D08,  //  0051  GETMBR	R12	R6	K8
      0x88340D09,  //  0052  GETMBR	R13	R6	K9
      0x7C280600,  //  0053  CALL	R10	3
      0xB82E2200,  //  0054  GETNGBL	R11	K17
      0x60300018,  //  0055  GETGBL	R12	G24
      0x58340012,  //  0056  LDCONST	R13	K18
      0x88380513,  //  0057  GETMBR	R14	R2	K19
      0x88381D14,  //  0058  GETMBR	R14	R14	K20
      0x782A0002,  //  0059  JMPF	R10	#005D
      0x003E2A0A,  //  005A  ADD	R15	K21	R10
      0x003C1F16,  //  005B  ADD	R15	R15	K22
      0x70020000,  //  005C  JMP		#005E
      0x583C0017,  //  005D  LDCONST	R15	K23
      0x003C120F,  //  005E  ADD	R15	R9	R15
      0x7C300600,  //  005F  CALL	R12	3
      0x5834000E,  //  0060  LDCONST	R13	K14
      0x7C2C0400,  //  0061  CALL	R11	2
      0x70020008,  //  0062  JMP		#006C
      0xB82A2200,  //  0063  GETNGBL	R10	K17
      0x602C0018,  //  0064  GETGBL	R11	G24
      0x58300012,  //  0065  LDCONST	R12	K18
      0x88340513,  //  0066  GETMBR	R13	R2	K19
      0x88341B14,  //  0067  GETMBR	R13	R13	K20
      0x5C381200,  //  0068  MOVE	R14	R9
      0x7C2C0600,  //  0069  CALL	R11	3
      0x5830000E,  //  006A  LDCONST	R12	K14
      0x7C280400,  //  006B  CALL	R10	2
      0x7001FFA7,  //  006C  JMP		#0015
      0x58140018,  //  006D  LDCONST	R5	K24
      0xAC140200,  //  006E  CATCH	R5	1	0
      0xB0080000,  //  006F  RAISE	2	R0	R0
      0x80040600,  //  0070  RET	1	R3
      0x4C0C0000,  //  0071  LDNIL	R3
      0x80040600,  //  0072  RET	1	R3
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: process_incoming
********************************************************************/
extern const bclass be_class_Matter_IM;
be_local_closure(class_Matter_IM_process_incoming,   /* name */
  be_nested_proto(
    8,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_IM, 
    1,                          /* has constants */
    ( &(const bvalue[22]) {     /* constants */
    /* K0   */  be_nested_str_weak(opcode),
    /* K1   */  be_const_int(2),
    /* K2   */  be_nested_str_weak(read_request_solo),
    /* K3   */  be_nested_str_weak(from_raw),
    /* K4   */  be_nested_str_weak(raw),
    /* K5   */  be_nested_str_weak(app_payload_idx),
    /* K6   */  be_nested_str_weak(process_read_request_solo),
    /* K7   */  be_nested_str_weak(invoke_request_solo),
    /* K8   */  be_nested_str_weak(process_invoke_request_solo),
    /* K9   */  be_nested_str_weak(matter),
    /* K10  */  be_nested_str_weak(TLV),
    /* K11  */  be_nested_str_weak(parse),
    /* K12  */  be_const_int(1),
    /* K13  */  be_nested_str_weak(process_status_response),
    /* K14  */  be_nested_str_weak(send_ack_now),
    /* K15  */  be_nested_str_weak(process_read_request_pull),
    /* K16  */  be_const_int(3),
    /* K17  */  be_nested_str_weak(subscribe_request),
    /* K18  */  be_nested_str_weak(process_write_request),
    /* K19  */  be_nested_str_weak(process_write_response),
    /* K20  */  be_nested_str_weak(process_invoke_request),
    /* K21  */  be_nested_str_weak(process_timed_request),
    }),
    be_str_weak(process_incoming),
    &be_const_str_solidified,
    ( &(const binstruction[127]) {  /* code */
      0x88080300,  //  0000  GETMBR	R2	R1	K0
      0x1C0C0501,  //  0001  EQ	R3	R2	K1
      0x780E000D,  //  0002  JMPF	R3	#0011
      0x880C0102,  //  0003  GETMBR	R3	R0	K2
      0x8C0C0703,  //  0004  GETMET	R3	R3	K3
      0x88140304,  //  0005  GETMBR	R5	R1	K4
      0x88180305,  //  0006  GETMBR	R6	R1	K5
      0x7C0C0600,  //  0007  CALL	R3	3
      0x4C100000,  //  0008  LDNIL	R4
      0x20100604,  //  0009  NE	R4	R3	R4
      0x78120004,  //  000A  JMPF	R4	#0010
      0x8C100106,  //  000B  GETMET	R4	R0	K6
      0x5C180200,  //  000C  MOVE	R6	R1
      0x5C1C0600,  //  000D  MOVE	R7	R3
      0x7C100600,  //  000E  CALL	R4	3
      0x80040800,  //  000F  RET	1	R4
      0x7002000F,  //  0010  JMP		#0021
      0x540E0007,  //  0011  LDINT	R3	8
      0x1C0C0403,  //  0012  EQ	R3	R2	R3
      0x780E000C,  //  0013  JMPF	R3	#0021
      0x880C0107,  //  0014  GETMBR	R3	R0	K7
      0x8C0C0703,  //  0015  GETMET	R3	R3	K3
      0x88140304,  //  0016  GETMBR	R5	R1	K4
      0x88180305,  //  0017  GETMBR	R6	R1	K5
      0x7C0C0600,  //  0018  CALL	R3	3
      0x4C100000,  //  0019  LDNIL	R4
      0x20100604,  //  001A  NE	R4	R3	R4
      0x78120004,  //  001B  JMPF	R4	#0021
      0x8C100108,  //  001C  GETMET	R4	R0	K8
      0x5C180200,  //  001D  MOVE	R6	R1
      0x5C1C0600,  //  001E  MOVE	R7	R3
      0x7C100600,  //  001F  CALL	R4	3
      0x80040800,  //  0020  RET	1	R4
      0xB80E1200,  //  0021  GETNGBL	R3	K9
      0x880C070A,  //  0022  GETMBR	R3	R3	K10
      0x8C0C070B,  //  0023  GETMET	R3	R3	K11
      0x88140304,  //  0024  GETMBR	R5	R1	K4
      0x88180305,  //  0025  GETMBR	R6	R1	K5
      0x7C0C0600,  //  0026  CALL	R3	3
      0x1C10050C,  //  0027  EQ	R4	R2	K12
      0x78120005,  //  0028  JMPF	R4	#002F
      0x8C10010D,  //  0029  GETMET	R4	R0	K13
      0x5C180200,  //  002A  MOVE	R6	R1
      0x5C1C0600,  //  002B  MOVE	R7	R3
      0x7C100600,  //  002C  CALL	R4	3
      0x80040800,  //  002D  RET	1	R4
      0x7002004D,  //  002E  JMP		#007D
      0x1C100501,  //  002F  EQ	R4	R2	K1
      0x78120008,  //  0030  JMPF	R4	#003A
      0x8C10010E,  //  0031  GETMET	R4	R0	K14
      0x5C180200,  //  0032  MOVE	R6	R1
      0x7C100400,  //  0033  CALL	R4	2
      0x8C10010F,  //  0034  GETMET	R4	R0	K15
      0x5C180200,  //  0035  MOVE	R6	R1
      0x5C1C0600,  //  0036  MOVE	R7	R3
      0x7C100600,  //  0037  CALL	R4	3
      0x80040800,  //  0038  RET	1	R4
      0x70020042,  //  0039  JMP		#007D
      0x1C100510,  //  003A  EQ	R4	R2	K16
      0x78120008,  //  003B  JMPF	R4	#0045
      0x8C10010E,  //  003C  GETMET	R4	R0	K14
      0x5C180200,  //  003D  MOVE	R6	R1
      0x7C100400,  //  003E  CALL	R4	2
      0x8C100111,  //  003F  GETMET	R4	R0	K17
      0x5C180200,  //  0040  MOVE	R6	R1
      0x5C1C0600,  //  0041  MOVE	R7	R3
      0x7C100600,  //  0042  CALL	R4	3
      0x80040800,  //  0043  RET	1	R4
      0x70020037,  //  0044  JMP		#007D
      0x54120003,  //  0045  LDINT	R4	4
      0x1C100404,  //  0046  EQ	R4	R2	R4
      0x78120002,  //  0047  JMPF	R4	#004B
      0x50100000,  //  0048  LDBOOL	R4	0	0
      0x80040800,  //  0049  RET	1	R4
      0x70020031,  //  004A  JMP		#007D
      0x54120004,  //  004B  LDINT	R4	5
      0x1C100404,  //  004C  EQ	R4	R2	R4
      0x78120002,  //  004D  JMPF	R4	#0051
      0x50100000,  //  004E  LDBOOL	R4	0	0
      0x80040800,  //  004F  RET	1	R4
      0x7002002B,  //  0050  JMP		#007D
      0x54120005,  //  0051  LDINT	R4	6
      0x1C100404,  //  0052  EQ	R4	R2	R4
      0x78120008,  //  0053  JMPF	R4	#005D
      0x8C10010E,  //  0054  GETMET	R4	R0	K14
      0x5C180200,  //  0055  MOVE	R6	R1
      0x7C100400,  //  0056  CALL	R4	2
      0x8C100112,  //  0057  GETMET	R4	R0	K18
      0x5C180200,  //  0058  MOVE	R6	R1
      0x5C1C0600,  //  0059  MOVE	R7	R3
      0x7C100600,  //  005A  CALL	R4	3
      0x80040800,  //  005B  RET	1	R4
      0x7002001F,  //  005C  JMP		#007D
      0x54120006,  //  005D  LDINT	R4	7
      0x1C100404,  //  005E  EQ	R4	R2	R4
      0x78120005,  //  005F  JMPF	R4	#0066
      0x8C100113,  //  0060  GETMET	R4	R0	K19
      0x5C180200,  //  0061  MOVE	R6	R1
      0x5C1C0600,  //  0062  MOVE	R7	R3
      0x7C100600,  //  0063  CALL	R4	3
      0x80040800,  //  0064  RET	1	R4
      0x70020016,  //  0065  JMP		#007D
      0x54120007,  //  0066  LDINT	R4	8
      0x1C100404,  //  0067  EQ	R4	R2	R4
      0x78120005,  //  0068  JMPF	R4	#006F
      0x8C100114,  //  0069  GETMET	R4	R0	K20
      0x5C180200,  //  006A  MOVE	R6	R1
      0x5C1C0600,  //  006B  MOVE	R7	R3
      0x7C100600,  //  006C  CALL	R4	3
      0x80040800,  //  006D  RET	1	R4
      0x7002000D,  //  006E  JMP		#007D
      0x54120008,  //  006F  LDINT	R4	9
      0x1C100404,  //  0070  EQ	R4	R2	R4
      0x78120002,  //  0071  JMPF	R4	#0075
      0x50100000,  //  0072  LDBOOL	R4	0	0
      0x80040800,  //  0073  RET	1	R4
      0x70020007,  //  0074  JMP		#007D
      0x54120009,  //  0075  LDINT	R4	10
      0x1C100404,  //  0076  EQ	R4	R2	R4
      0x78120004,  //  0077  JMPF	R4	#007D
      0x8C100115,  //  0078  GETMET	R4	R0	K21
      0x5C180200,  //  0079  MOVE	R6	R1
      0x5C1C0600,  //  007A  MOVE	R7	R3
      0x7C100600,  //  007B  CALL	R4	3
      0x80040800,  //  007C  RET	1	R4
      0x50100000,  //  007D  LDBOOL	R4	0	0
      0x80040800,  //  007E  RET	1	R4
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: process_invoke_request_solo
********************************************************************/
extern const bclass be_class_Matter_IM;
be_local_closure(class_Matter_IM_process_invoke_request_solo,   /* name */
  be_nested_proto(
    15,                          /* nstack */
    3,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_IM, 
    1,                          /* has constants */
    ( &(const bvalue[38]) {     /* constants */
    /* K0   */  be_nested_str_weak(msg),
    /* K1   */  be_nested_str_weak(status),
    /* K2   */  be_nested_str_weak(matter),
    /* K3   */  be_nested_str_weak(UNSUPPORTED_COMMAND),
    /* K4   */  be_nested_str_weak(get_command_name),
    /* K5   */  be_nested_str_weak(cluster),
    /* K6   */  be_nested_str_weak(command),
    /* K7   */  be_nested_str_weak(device),
    /* K8   */  be_nested_str_weak(invoke_request),
    /* K9   */  be_nested_str_weak(session),
    /* K10  */  be_nested_str_weak(command_fields),
    /* K11  */  be_nested_str_weak(log),
    /* K12  */  be_nested_str_weak(_X28),
    /* K13  */  be_nested_str_weak(_X29_X20),
    /* K14  */  be_nested_str_weak(),
    /* K15  */  be_nested_str_weak(tasmota),
    /* K16  */  be_nested_str_weak(loglevel),
    /* K17  */  be_const_int(3),
    /* K18  */  be_nested_str_weak(MTR_X3A_X20_X3ECommand1_X20_X20_X28_X256i_X29_X20_X25s_X20_X25s_X20_X25s),
    /* K19  */  be_nested_str_weak(local_session_id),
    /* K20  */  be_nested_str_weak(add),
    /* K21  */  be_const_int(354943030),
    /* K22  */  be_const_int(1),
    /* K23  */  be_nested_str_weak(SUCCESS),
    /* K24  */  be_nested_str_weak(invokeresponse2raw),
    /* K25  */  be_nested_str_weak(MTR_X3A_X20_X3CReplied_X20_X20_X20_X28_X256i_X29_X20OK_X20exch_X3D_X25i),
    /* K26  */  be_nested_str_weak(exchange_id),
    /* K27  */  be_nested_str_weak(MTR_X3A_X20_X3CReplied_X20_X20_X20_X28_X256i_X29_X20_X25s_X20_X25s),
    /* K28  */  be_nested_str_weak(MTR_X3A_X20_X3CReplied_X20_X20_X20_X28_X256i_X29_X20Status_X3D0x_X2502X_X20exch_X3D_X25i),
    /* K29  */  be_nested_str_weak(MTR_X3A_X20_Ignore_X20_X20_X20_X20_X28_X256i_X29_X20exch_X3D_X25i),
    /* K30  */  be_const_int(405077761),
    /* K31  */  be_nested_str_weak(build_response),
    /* K32  */  be_nested_str_weak(message_handler),
    /* K33  */  be_nested_str_weak(raw),
    /* K34  */  be_nested_str_weak(clear),
    /* K35  */  be_nested_str_weak(encode_frame),
    /* K36  */  be_nested_str_weak(encrypt),
    /* K37  */  be_nested_str_weak(send_response_frame),
    }),
    be_str_weak(process_invoke_request_solo),
    &be_const_str_solidified,
    ( &(const binstruction[188]) {  /* code */
      0x900A0001,  //  0000  SETMBR	R2	K0	R1
      0xB80E0400,  //  0001  GETNGBL	R3	K2
      0x880C0703,  //  0002  GETMBR	R3	R3	K3
      0x900A0203,  //  0003  SETMBR	R2	K1	R3
      0xB80E0400,  //  0004  GETNGBL	R3	K2
      0x8C0C0704,  //  0005  GETMET	R3	R3	K4
      0x88140505,  //  0006  GETMBR	R5	R2	K5
      0x88180506,  //  0007  GETMBR	R6	R2	K6
      0x7C0C0600,  //  0008  CALL	R3	3
      0x60100008,  //  0009  GETGBL	R4	G8
      0x5C140400,  //  000A  MOVE	R5	R2
      0x7C100200,  //  000B  CALL	R4	1
      0x88140107,  //  000C  GETMBR	R5	R0	K7
      0x8C140B08,  //  000D  GETMET	R5	R5	K8
      0x881C0309,  //  000E  GETMBR	R7	R1	K9
      0x8820050A,  //  000F  GETMBR	R8	R2	K10
      0x5C240400,  //  0010  MOVE	R9	R2
      0x7C140800,  //  0011  CALL	R5	4
      0x8818050B,  //  0012  GETMBR	R6	R2	K11
      0x4C1C0000,  //  0013  LDNIL	R7
      0x20180C07,  //  0014  NE	R6	R6	R7
      0x781A0005,  //  0015  JMPF	R6	#001C
      0x60180008,  //  0016  GETGBL	R6	G8
      0x881C050B,  //  0017  GETMBR	R7	R2	K11
      0x7C180200,  //  0018  CALL	R6	1
      0x001A1806,  //  0019  ADD	R6	K12	R6
      0x00180D0D,  //  001A  ADD	R6	R6	K13
      0x70020000,  //  001B  JMP		#001D
      0x5818000E,  //  001C  LDCONST	R6	K14
      0xB81E1E00,  //  001D  GETNGBL	R7	K15
      0x8C1C0F10,  //  001E  GETMET	R7	R7	K16
      0x58240011,  //  001F  LDCONST	R9	K17
      0x7C1C0400,  //  0020  CALL	R7	2
      0x781E000D,  //  0021  JMPF	R7	#0030
      0xB81E1600,  //  0022  GETNGBL	R7	K11
      0x60200018,  //  0023  GETGBL	R8	G24
      0x58240012,  //  0024  LDCONST	R9	K18
      0x88280309,  //  0025  GETMBR	R10	R1	K9
      0x88281513,  //  0026  GETMBR	R10	R10	K19
      0x5C2C0800,  //  0027  MOVE	R11	R4
      0x780E0001,  //  0028  JMPF	R3	#002B
      0x5C300600,  //  0029  MOVE	R12	R3
      0x70020000,  //  002A  JMP		#002C
      0x5830000E,  //  002B  LDCONST	R12	K14
      0x5C340C00,  //  002C  MOVE	R13	R6
      0x7C200A00,  //  002D  CALL	R8	5
      0x58240011,  //  002E  LDCONST	R9	K17
      0x7C1C0400,  //  002F  CALL	R7	2
      0x4C1C0000,  //  0030  LDNIL	R7
      0x900A1607,  //  0031  SETMBR	R2	K11	R7
      0x601C0015,  //  0032  GETGBL	R7	G21
      0x5422002F,  //  0033  LDINT	R8	48
      0x7C1C0200,  //  0034  CALL	R7	1
      0x8C200F14,  //  0035  GETMET	R8	R7	K20
      0x58280015,  //  0036  LDCONST	R10	K21
      0x542DFFFB,  //  0037  LDINT	R11	-4
      0x7C200600,  //  0038  CALL	R8	3
      0x8C200F14,  //  0039  GETMET	R8	R7	K20
      0x58280016,  //  003A  LDCONST	R10	K22
      0x582C0016,  //  003B  LDCONST	R11	K22
      0x7C200600,  //  003C  CALL	R8	3
      0x50200200,  //  003D  LDBOOL	R8	1	0
      0x1C200A08,  //  003E  EQ	R8	R5	R8
      0x74220004,  //  003F  JMPT	R8	#0045
      0x88200501,  //  0040  GETMBR	R8	R2	K1
      0xB8260400,  //  0041  GETNGBL	R9	K2
      0x88241317,  //  0042  GETMBR	R9	R9	K23
      0x1C201009,  //  0043  EQ	R8	R8	R9
      0x78220016,  //  0044  JMPF	R8	#005C
      0xB8220400,  //  0045  GETNGBL	R8	K2
      0x88201117,  //  0046  GETMBR	R8	R8	K23
      0x900A0208,  //  0047  SETMBR	R2	K1	R8
      0x8C200118,  //  0048  GETMET	R8	R0	K24
      0x5C280E00,  //  0049  MOVE	R10	R7
      0x5C2C0400,  //  004A  MOVE	R11	R2
      0x4C300000,  //  004B  LDNIL	R12
      0x7C200800,  //  004C  CALL	R8	4
      0xB8221E00,  //  004D  GETNGBL	R8	K15
      0x8C201110,  //  004E  GETMET	R8	R8	K16
      0x58280011,  //  004F  LDCONST	R10	K17
      0x7C200400,  //  0050  CALL	R8	2
      0x78220008,  //  0051  JMPF	R8	#005B
      0xB8221600,  //  0052  GETNGBL	R8	K11
      0x60240018,  //  0053  GETGBL	R9	G24
      0x58280019,  //  0054  LDCONST	R10	K25
      0x882C0309,  //  0055  GETMBR	R11	R1	K9
      0x882C1713,  //  0056  GETMBR	R11	R11	K19
      0x8830031A,  //  0057  GETMBR	R12	R1	K26
      0x7C240600,  //  0058  CALL	R9	3
      0x58280011,  //  0059  LDCONST	R10	K17
      0x7C200400,  //  005A  CALL	R8	2
      0x70020043,  //  005B  JMP		#00A0
      0x4C200000,  //  005C  LDNIL	R8
      0x20200A08,  //  005D  NE	R8	R5	R8
      0x78220017,  //  005E  JMPF	R8	#0077
      0x8C200118,  //  005F  GETMET	R8	R0	K24
      0x5C280E00,  //  0060  MOVE	R10	R7
      0x5C2C0400,  //  0061  MOVE	R11	R2
      0x5C300A00,  //  0062  MOVE	R12	R5
      0x7C200800,  //  0063  CALL	R8	4
      0x5C200600,  //  0064  MOVE	R8	R3
      0x74220000,  //  0065  JMPT	R8	#0067
      0x580C000E,  //  0066  LDCONST	R3	K14
      0xB8221E00,  //  0067  GETNGBL	R8	K15
      0x8C201110,  //  0068  GETMET	R8	R8	K16
      0x58280011,  //  0069  LDCONST	R10	K17
      0x7C200400,  //  006A  CALL	R8	2
      0x78220009,  //  006B  JMPF	R8	#0076
      0xB8221600,  //  006C  GETNGBL	R8	K11
      0x60240018,  //  006D  GETGBL	R9	G24
      0x5828001B,  //  006E  LDCONST	R10	K27
      0x882C0309,  //  006F  GETMBR	R11	R1	K9
      0x882C1713,  //  0070  GETMBR	R11	R11	K19
      0x5C300400,  //  0071  MOVE	R12	R2
      0x5C340600,  //  0072  MOVE	R13	R3
      0x7C240800,  //  0073  CALL	R9	4
      0x58280011,  //  0074  LDCONST	R10	K17
      0x7C200400,  //  0075  CALL	R8	2
      0x70020028,  //  0076  JMP		#00A0
      0x88200501,  //  0077  GETMBR	R8	R2	K1
      0x4C240000,  //  0078  LDNIL	R9
      0x20201009,  //  0079  NE	R8	R8	R9
      0x78220014,  //  007A  JMPF	R8	#0090
      0x8C200118,  //  007B  GETMET	R8	R0	K24
      0x5C280E00,  //  007C  MOVE	R10	R7
      0x5C2C0400,  //  007D  MOVE	R11	R2
      0x4C300000,  //  007E  LDNIL	R12
      0x7C200800,  //  007F  CALL	R8	4
      0xB8221E00,  //  0080  GETNGBL	R8	K15
      0x8C201110,  //  0081  GETMET	R8	R8	K16
      0x58280011,  //  0082  LDCONST	R10	K17
      0x7C200400,  //  0083  CALL	R8	2
      0x78220009,  //  0084  JMPF	R8	#008F
      0xB8221600,  //  0085  GETNGBL	R8	K11
      0x60240018,  //  0086  GETGBL	R9	G24
      0x5828001C,  //  0087  LDCONST	R10	K28
      0x882C0309,  //  0088  GETMBR	R11	R1	K9
      0x882C1713,  //  0089  GETMBR	R11	R11	K19
      0x88300501,  //  008A  GETMBR	R12	R2	K1
      0x8834031A,  //  008B  GETMBR	R13	R1	K26
      0x7C240800,  //  008C  CALL	R9	4
      0x58280011,  //  008D  LDCONST	R10	K17
      0x7C200400,  //  008E  CALL	R8	2
      0x7002000F,  //  008F  JMP		#00A0
      0xB8221E00,  //  0090  GETNGBL	R8	K15
      0x8C201110,  //  0091  GETMET	R8	R8	K16
      0x58280011,  //  0092  LDCONST	R10	K17
      0x7C200400,  //  0093  CALL	R8	2
      0x78220008,  //  0094  JMPF	R8	#009E
      0xB8221600,  //  0095  GETNGBL	R8	K11
      0x60240018,  //  0096  GETGBL	R9	G24
      0x5828001D,  //  0097  LDCONST	R10	K29
      0x882C0309,  //  0098  GETMBR	R11	R1	K9
      0x882C1713,  //  0099  GETMBR	R11	R11	K19
      0x8830031A,  //  009A  GETMBR	R12	R1	K26
      0x7C240600,  //  009B  CALL	R9	3
      0x58280011,  //  009C  LDCONST	R10	K17
      0x7C200400,  //  009D  CALL	R8	2
      0x50200000,  //  009E  LDBOOL	R8	0	0
      0x80041000,  //  009F  RET	1	R8
      0x8C200F14,  //  00A0  GETMET	R8	R7	K20
      0x5828001E,  //  00A1  LDCONST	R10	K30
      0x542DFFFB,  //  00A2  LDINT	R11	-4
      0x7C200600,  //  00A3  CALL	R8	3
      0x8C200F14,  //  00A4  GETMET	R8	R7	K20
      0x542A0017,  //  00A5  LDINT	R10	24
      0x582C0016,  //  00A6  LDCONST	R11	K22
      0x7C200600,  //  00A7  CALL	R8	3
      0x8C20031F,  //  00A8  GETMET	R8	R1	K31
      0x542A0008,  //  00A9  LDINT	R10	9
      0x502C0200,  //  00AA  LDBOOL	R11	1	0
      0x7C200600,  //  00AB  CALL	R8	3
      0x88240107,  //  00AC  GETMBR	R9	R0	K7
      0x88241320,  //  00AD  GETMBR	R9	R9	K32
      0x88280321,  //  00AE  GETMBR	R10	R1	K33
      0x8C2C1522,  //  00AF  GETMET	R11	R10	K34
      0x7C2C0200,  //  00B0  CALL	R11	1
      0x8C2C1123,  //  00B1  GETMET	R11	R8	K35
      0x5C340E00,  //  00B2  MOVE	R13	R7
      0x5C381400,  //  00B3  MOVE	R14	R10
      0x7C2C0600,  //  00B4  CALL	R11	3
      0x8C2C1124,  //  00B5  GETMET	R11	R8	K36
      0x7C2C0200,  //  00B6  CALL	R11	1
      0x8C2C1325,  //  00B7  GETMET	R11	R9	K37
      0x5C341000,  //  00B8  MOVE	R13	R8
      0x7C2C0400,  //  00B9  CALL	R11	2
      0x502C0200,  //  00BA  LDBOOL	R11	1	0
      0x80041600,  //  00BB  RET	1	R11
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: invokeresponse2raw
********************************************************************/
extern const bclass be_class_Matter_IM;
be_local_closure(class_Matter_IM_invokeresponse2raw,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    4,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_IM, 
    1,                          /* has constants */
    ( &(const bvalue[11]) {     /* constants */
    /* K0   */  be_nested_str_weak(add),
    /* K1   */  be_const_int(1),
    /* K2   */  be_nested_str_weak(endpoint),
    /* K3   */  be_const_int(2),
    /* K4   */  be_nested_str_weak(cluster),
    /* K5   */  be_nested_str_weak(command),
    /* K6   */  be_nested_str_weak(status),
    /* K7   */  be_nested_str_weak(matter),
    /* K8   */  be_nested_str_weak(SUCCESS),
    /* K9   */  be_nested_str_weak(tag_sub),
    /* K10  */  be_nested_str_weak(tlv2raw),
    }),
    be_str_weak(invokeresponse2raw),
    &be_const_str_solidified,
    ( &(const binstruction[148]) {  /* code */
      0x8C100300,  //  0000  GETMET	R4	R1	K0
      0x541A0014,  //  0001  LDINT	R6	21
      0x581C0001,  //  0002  LDCONST	R7	K1
      0x7C100600,  //  0003  CALL	R4	3
      0x4C100000,  //  0004  LDNIL	R4
      0x1C100604,  //  0005  EQ	R4	R3	R4
      0x78120004,  //  0006  JMPF	R4	#000C
      0x8C100300,  //  0007  GETMET	R4	R1	K0
      0x541A3500,  //  0008  LDINT	R6	13569
      0x541DFFFD,  //  0009  LDINT	R7	-2
      0x7C100600,  //  000A  CALL	R4	3
      0x70020003,  //  000B  JMP		#0010
      0x8C100300,  //  000C  GETMET	R4	R1	K0
      0x541A34FF,  //  000D  LDINT	R6	13568
      0x541DFFFD,  //  000E  LDINT	R7	-2
      0x7C100600,  //  000F  CALL	R4	3
      0x8C100300,  //  0010  GETMET	R4	R1	K0
      0x541A36FF,  //  0011  LDINT	R6	14080
      0x541DFFFD,  //  0012  LDINT	R7	-2
      0x7C100600,  //  0013  CALL	R4	3
      0x88100502,  //  0014  GETMBR	R4	R2	K2
      0x541600FE,  //  0015  LDINT	R5	255
      0x18100805,  //  0016  LE	R4	R4	R5
      0x78120008,  //  0017  JMPF	R4	#0021
      0x8C100300,  //  0018  GETMET	R4	R1	K0
      0x541A23FF,  //  0019  LDINT	R6	9216
      0x541DFFFD,  //  001A  LDINT	R7	-2
      0x7C100600,  //  001B  CALL	R4	3
      0x8C100300,  //  001C  GETMET	R4	R1	K0
      0x88180502,  //  001D  GETMBR	R6	R2	K2
      0x581C0001,  //  001E  LDCONST	R7	K1
      0x7C100600,  //  001F  CALL	R4	3
      0x70020007,  //  0020  JMP		#0029
      0x8C100300,  //  0021  GETMET	R4	R1	K0
      0x541A24FF,  //  0022  LDINT	R6	9472
      0x541DFFFD,  //  0023  LDINT	R7	-2
      0x7C100600,  //  0024  CALL	R4	3
      0x8C100300,  //  0025  GETMET	R4	R1	K0
      0x88180502,  //  0026  GETMBR	R6	R2	K2
      0x581C0003,  //  0027  LDCONST	R7	K3
      0x7C100600,  //  0028  CALL	R4	3
      0x88100504,  //  0029  GETMBR	R4	R2	K4
      0x541600FE,  //  002A  LDINT	R5	255
      0x18100805,  //  002B  LE	R4	R4	R5
      0x78120008,  //  002C  JMPF	R4	#0036
      0x8C100300,  //  002D  GETMET	R4	R1	K0
      0x541A2400,  //  002E  LDINT	R6	9217
      0x541DFFFD,  //  002F  LDINT	R7	-2
      0x7C100600,  //  0030  CALL	R4	3
      0x8C100300,  //  0031  GETMET	R4	R1	K0
      0x88180504,  //  0032  GETMBR	R6	R2	K4
      0x581C0001,  //  0033  LDCONST	R7	K1
      0x7C100600,  //  0034  CALL	R4	3
      0x70020014,  //  0035  JMP		#004B
      0x88100504,  //  0036  GETMBR	R4	R2	K4
      0x5416FFFE,  //  0037  LDINT	R5	65535
      0x18100805,  //  0038  LE	R4	R4	R5
      0x78120008,  //  0039  JMPF	R4	#0043
      0x8C100300,  //  003A  GETMET	R4	R1	K0
      0x541A2500,  //  003B  LDINT	R6	9473
      0x541DFFFD,  //  003C  LDINT	R7	-2
      0x7C100600,  //  003D  CALL	R4	3
      0x8C100300,  //  003E  GETMET	R4	R1	K0
      0x88180504,  //  003F  GETMBR	R6	R2	K4
      0x581C0003,  //  0040  LDCONST	R7	K3
      0x7C100600,  //  0041  CALL	R4	3
      0x70020007,  //  0042  JMP		#004B
      0x8C100300,  //  0043  GETMET	R4	R1	K0
      0x541A2600,  //  0044  LDINT	R6	9729
      0x541DFFFD,  //  0045  LDINT	R7	-2
      0x7C100600,  //  0046  CALL	R4	3
      0x8C100300,  //  0047  GETMET	R4	R1	K0
      0x88180504,  //  0048  GETMBR	R6	R2	K4
      0x541E0003,  //  0049  LDINT	R7	4
      0x7C100600,  //  004A  CALL	R4	3
      0x88100505,  //  004B  GETMBR	R4	R2	K5
      0x541600FE,  //  004C  LDINT	R5	255
      0x18100805,  //  004D  LE	R4	R4	R5
      0x78120008,  //  004E  JMPF	R4	#0058
      0x8C100300,  //  004F  GETMET	R4	R1	K0
      0x541A2401,  //  0050  LDINT	R6	9218
      0x541DFFFD,  //  0051  LDINT	R7	-2
      0x7C100600,  //  0052  CALL	R4	3
      0x8C100300,  //  0053  GETMET	R4	R1	K0
      0x88180505,  //  0054  GETMBR	R6	R2	K5
      0x581C0001,  //  0055  LDCONST	R7	K1
      0x7C100600,  //  0056  CALL	R4	3
      0x70020014,  //  0057  JMP		#006D
      0x88100505,  //  0058  GETMBR	R4	R2	K5
      0x5416FFFE,  //  0059  LDINT	R5	65535
      0x18100805,  //  005A  LE	R4	R4	R5
      0x78120008,  //  005B  JMPF	R4	#0065
      0x8C100300,  //  005C  GETMET	R4	R1	K0
      0x541A2501,  //  005D  LDINT	R6	9474
      0x541DFFFD,  //  005E  LDINT	R7	-2
      0x7C100600,  //  005F  CALL	R4	3
      0x8C100300,  //  0060  GETMET	R4	R1	K0
      0x88180505,  //  0061  GETMBR	R6	R2	K5
      0x581C0003,  //  0062  LDCONST	R7	K3
      0x7C100600,  //  0063  CALL	R4	3
      0x70020007,  //  0064  JMP		#006D
      0x8C100300,  //  0065  GETMET	R4	R1	K0
      0x541A2601,  //  0066  LDINT	R6	9730
      0x541DFFFD,  //  0067  LDINT	R7	-2
      0x7C100600,  //  0068  CALL	R4	3
      0x8C100300,  //  0069  GETMET	R4	R1	K0
      0x88180505,  //  006A  GETMBR	R6	R2	K5
      0x541E0003,  //  006B  LDINT	R7	4
      0x7C100600,  //  006C  CALL	R4	3
      0x8C100300,  //  006D  GETMET	R4	R1	K0
      0x541A0017,  //  006E  LDINT	R6	24
      0x581C0001,  //  006F  LDCONST	R7	K1
      0x7C100600,  //  0070  CALL	R4	3
      0x4C100000,  //  0071  LDNIL	R4
      0x1C100604,  //  0072  EQ	R4	R3	R4
      0x78120016,  //  0073  JMPF	R4	#008B
      0x88100506,  //  0074  GETMBR	R4	R2	K6
      0x4C140000,  //  0075  LDNIL	R5
      0x1C140805,  //  0076  EQ	R5	R4	R5
      0x78160001,  //  0077  JMPF	R5	#007A
      0xB8160E00,  //  0078  GETNGBL	R5	K7
      0x88100B08,  //  0079  GETMBR	R4	R5	K8
      0x8C140300,  //  007A  GETMET	R5	R1	K0
      0x541E3500,  //  007B  LDINT	R7	13569
      0x5421FFFD,  //  007C  LDINT	R8	-2
      0x7C140600,  //  007D  CALL	R5	3
      0x8C140300,  //  007E  GETMET	R5	R1	K0
      0x541E23FF,  //  007F  LDINT	R7	9216
      0x5421FFFD,  //  0080  LDINT	R8	-2
      0x7C140600,  //  0081  CALL	R5	3
      0x8C140300,  //  0082  GETMET	R5	R1	K0
      0x881C0506,  //  0083  GETMBR	R7	R2	K6
      0x58200001,  //  0084  LDCONST	R8	K1
      0x7C140600,  //  0085  CALL	R5	3
      0x8C140300,  //  0086  GETMET	R5	R1	K0
      0x541E0017,  //  0087  LDINT	R7	24
      0x58200001,  //  0088  LDCONST	R8	K1
      0x7C140600,  //  0089  CALL	R5	3
      0x70020003,  //  008A  JMP		#008F
      0x900E1301,  //  008B  SETMBR	R3	K9	K1
      0x8C10070A,  //  008C  GETMET	R4	R3	K10
      0x5C180200,  //  008D  MOVE	R6	R1
      0x7C100400,  //  008E  CALL	R4	2
      0x8C100300,  //  008F  GETMET	R4	R1	K0
      0x541A1817,  //  0090  LDINT	R6	6168
      0x541DFFFD,  //  0091  LDINT	R7	-2
      0x7C100600,  //  0092  CALL	R4	3
      0x80000000,  //  0093  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: expire_sendqueue
********************************************************************/
extern const bclass be_class_Matter_IM;
be_local_closure(class_Matter_IM_expire_sendqueue,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_IM, 
    1,                          /* has constants */
    ( &(const bvalue[ 8]) {     /* constants */
    /* K0   */  be_const_int(0),
    /* K1   */  be_nested_str_weak(send_queue),
    /* K2   */  be_nested_str_weak(tasmota),
    /* K3   */  be_nested_str_weak(time_reached),
    /* K4   */  be_nested_str_weak(expiration),
    /* K5   */  be_nested_str_weak(reached_timeout),
    /* K6   */  be_nested_str_weak(remove),
    /* K7   */  be_const_int(1),
    }),
    be_str_weak(expire_sendqueue),
    &be_const_str_solidified,
    ( &(const binstruction[24]) {  /* code */
      0x58040000,  //  0000  LDCONST	R1	K0
      0x6008000C,  //  0001  GETGBL	R2	G12
      0x880C0101,  //  0002  GETMBR	R3	R0	K1
      0x7C080200,  //  0003  CALL	R2	1
      0x14080202,  //  0004  LT	R2	R1	R2
      0x780A000F,  //  0005  JMPF	R2	#0016
      0x88080101,  //  0006  GETMBR	R2	R0	K1
      0x94080401,  //  0007  GETIDX	R2	R2	R1
      0xB80E0400,  //  0008  GETNGBL	R3	K2
      0x8C0C0703,  //  0009  GETMET	R3	R3	K3
      0x88140504,  //  000A  GETMBR	R5	R2	K4
      0x7C0C0400,  //  000B  CALL	R3	2
      0x780E0006,  //  000C  JMPF	R3	#0014
      0x8C0C0505,  //  000D  GETMET	R3	R2	K5
      0x7C0C0200,  //  000E  CALL	R3	1
      0x880C0101,  //  000F  GETMBR	R3	R0	K1
      0x8C0C0706,  //  0010  GETMET	R3	R3	K6
      0x5C140200,  //  0011  MOVE	R5	R1
      0x7C0C0400,  //  0012  CALL	R3	2
      0x70020000,  //  0013  JMP		#0015
      0x00040307,  //  0014  ADD	R1	R1	K7
      0x7001FFEA,  //  0015  JMP		#0001
      0x4C080000,  //  0016  LDNIL	R2
      0x80040400,  //  0017  RET	1	R2
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: send_enqueued
********************************************************************/
extern const bclass be_class_Matter_IM;
be_local_closure(class_Matter_IM_send_enqueued,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_IM, 
    1,                          /* has constants */
    ( &(const bvalue[ 9]) {     /* constants */
    /* K0   */  be_const_int(0),
    /* K1   */  be_nested_str_weak(send_queue),
    /* K2   */  be_nested_str_weak(finished),
    /* K3   */  be_nested_str_weak(ready),
    /* K4   */  be_nested_str_weak(send_im),
    /* K5   */  be_nested_str_weak(remove_sendqueue_by_exchangeid),
    /* K6   */  be_nested_str_weak(resp),
    /* K7   */  be_nested_str_weak(exchange_id),
    /* K8   */  be_const_int(1),
    }),
    be_str_weak(send_enqueued),
    &be_const_str_solidified,
    ( &(const binstruction[25]) {  /* code */
      0x58080000,  //  0000  LDCONST	R2	K0
      0x600C000C,  //  0001  GETGBL	R3	G12
      0x88100101,  //  0002  GETMBR	R4	R0	K1
      0x7C0C0200,  //  0003  CALL	R3	1
      0x140C0403,  //  0004  LT	R3	R2	R3
      0x780E0011,  //  0005  JMPF	R3	#0018
      0x880C0101,  //  0006  GETMBR	R3	R0	K1
      0x940C0602,  //  0007  GETIDX	R3	R3	R2
      0x88100702,  //  0008  GETMBR	R4	R3	K2
      0x74120004,  //  0009  JMPT	R4	#000F
      0x88100703,  //  000A  GETMBR	R4	R3	K3
      0x78120002,  //  000B  JMPF	R4	#000F
      0x8C100704,  //  000C  GETMET	R4	R3	K4
      0x5C180200,  //  000D  MOVE	R6	R1
      0x7C100400,  //  000E  CALL	R4	2
      0x88100702,  //  000F  GETMBR	R4	R3	K2
      0x78120004,  //  0010  JMPF	R4	#0016
      0x8C100105,  //  0011  GETMET	R4	R0	K5
      0x88180706,  //  0012  GETMBR	R6	R3	K6
      0x88180D07,  //  0013  GETMBR	R6	R6	K7
      0x7C100400,  //  0014  CALL	R4	2
      0x70020000,  //  0015  JMP		#0017
      0x00080508,  //  0016  ADD	R2	R2	K8
      0x7001FFE8,  //  0017  JMP		#0001
      0x80000000,  //  0018  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: process_write_request
********************************************************************/
extern const bclass be_class_Matter_IM;
be_local_closure(class_Matter_IM_process_write_request,   /* name */
  be_nested_proto(
    21,                          /* nstack */
    3,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_IM, 
    1,                          /* has constants */
    ( &(const bvalue[41]) {     /* constants */
    /* K0   */  be_nested_str_weak(matter),
    /* K1   */  be_nested_str_weak(WriteRequestMessage),
    /* K2   */  be_nested_str_weak(from_TLV),
    /* K3   */  be_nested_str_weak(Path),
    /* K4   */  be_nested_str_weak(suppress_response),
    /* K5   */  be_nested_str_weak(write_requests),
    /* K6   */  be_nested_str_weak(WriteResponseMessage),
    /* K7   */  be_nested_str_weak(write_responses),
    /* K8   */  be_nested_str_weak(PathGenerator),
    /* K9   */  be_nested_str_weak(device),
    /* K10  */  be_nested_str_weak(path),
    /* K11  */  be_nested_str_weak(data),
    /* K12  */  be_nested_str_weak(copy),
    /* K13  */  be_nested_str_weak(cluster),
    /* K14  */  be_nested_str_weak(attribute),
    /* K15  */  be_nested_str_weak(status),
    /* K16  */  be_nested_str_weak(INVALID_ACTION),
    /* K17  */  be_nested_str_weak(write_single_attribute_status_to_bytes),
    /* K18  */  be_nested_str_weak(endpoint),
    /* K19  */  be_nested_str_weak(tasmota),
    /* K20  */  be_nested_str_weak(loglevel),
    /* K21  */  be_const_int(3),
    /* K22  */  be_nested_str_weak(get_attribute_name),
    /* K23  */  be_nested_str_weak(log),
    /* K24  */  be_nested_str_weak(MTR_X3A_X20Write_Attr_X20),
    /* K25  */  be_nested_str_weak(_X20_X28),
    /* K26  */  be_nested_str_weak(_X29),
    /* K27  */  be_nested_str_weak(),
    /* K28  */  be_nested_str_weak(start),
    /* K29  */  be_nested_str_weak(is_direct),
    /* K30  */  be_nested_str_weak(next_attribute),
    /* K31  */  be_nested_str_weak(msg),
    /* K32  */  be_nested_str_weak(get_pi),
    /* K33  */  be_nested_str_weak(UNSUPPORTED_WRITE),
    /* K34  */  be_nested_str_weak(write_attribute),
    /* K35  */  be_nested_str_weak(session),
    /* K36  */  be_nested_str_weak(SUCCESS),
    /* K37  */  be_nested_str_weak(stop_iteration),
    /* K38  */  be_nested_str_weak(send_queue),
    /* K39  */  be_nested_str_weak(push),
    /* K40  */  be_nested_str_weak(IM_WriteResponse),
    }),
    be_str_weak(process_write_request),
    &be_const_str_solidified,
    ( &(const binstruction[145]) {  /* code */
      0xB80E0000,  //  0000  GETNGBL	R3	K0
      0x8C0C0701,  //  0001  GETMET	R3	R3	K1
      0x7C0C0200,  //  0002  CALL	R3	1
      0x8C0C0702,  //  0003  GETMET	R3	R3	K2
      0x5C140400,  //  0004  MOVE	R5	R2
      0x7C0C0400,  //  0005  CALL	R3	2
      0xB8120000,  //  0006  GETNGBL	R4	K0
      0x8C100903,  //  0007  GETMET	R4	R4	K3
      0x7C100200,  //  0008  CALL	R4	1
      0x88140704,  //  0009  GETMBR	R5	R3	K4
      0x88180705,  //  000A  GETMBR	R6	R3	K5
      0x4C1C0000,  //  000B  LDNIL	R7
      0x20180C07,  //  000C  NE	R6	R6	R7
      0x781A0080,  //  000D  JMPF	R6	#008F
      0xB81A0000,  //  000E  GETNGBL	R6	K0
      0x8C180D06,  //  000F  GETMET	R6	R6	K6
      0x7C180200,  //  0010  CALL	R6	1
      0x601C0012,  //  0011  GETGBL	R7	G18
      0x7C1C0000,  //  0012  CALL	R7	0
      0x901A0E07,  //  0013  SETMBR	R6	K7	R7
      0xB81E0000,  //  0014  GETNGBL	R7	K0
      0x8C1C0F08,  //  0015  GETMET	R7	R7	K8
      0x88240109,  //  0016  GETMBR	R9	R0	K9
      0x7C1C0400,  //  0017  CALL	R7	2
      0x60200010,  //  0018  GETGBL	R8	G16
      0x88240705,  //  0019  GETMBR	R9	R3	K5
      0x7C200200,  //  001A  CALL	R8	1
      0xA8020065,  //  001B  EXBLK	0	#0082
      0x5C241000,  //  001C  MOVE	R9	R8
      0x7C240000,  //  001D  CALL	R9	0
      0x8828130A,  //  001E  GETMBR	R10	R9	K10
      0x882C130B,  //  001F  GETMBR	R11	R9	K11
      0x8C30090C,  //  0020  GETMET	R12	R4	K12
      0x5C381400,  //  0021  MOVE	R14	R10
      0x7C300400,  //  0022  CALL	R12	2
      0x8830150D,  //  0023  GETMBR	R12	R10	K13
      0x4C340000,  //  0024  LDNIL	R13
      0x1C30180D,  //  0025  EQ	R12	R12	R13
      0x74320003,  //  0026  JMPT	R12	#002B
      0x8830150E,  //  0027  GETMBR	R12	R10	K14
      0x4C340000,  //  0028  LDNIL	R13
      0x1C30180D,  //  0029  EQ	R12	R12	R13
      0x78320008,  //  002A  JMPF	R12	#0034
      0xB8320000,  //  002B  GETNGBL	R12	K0
      0x88301910,  //  002C  GETMBR	R12	R12	K16
      0x90121E0C,  //  002D  SETMBR	R4	K15	R12
      0x8C300111,  //  002E  GETMET	R12	R0	K17
      0x5C380C00,  //  002F  MOVE	R14	R6
      0x5C3C0800,  //  0030  MOVE	R15	R4
      0x4C400000,  //  0031  LDNIL	R16
      0x7C300800,  //  0032  CALL	R12	4
      0x7001FFE7,  //  0033  JMP		#001C
      0x88301512,  //  0034  GETMBR	R12	R10	K18
      0x4C340000,  //  0035  LDNIL	R13
      0x1C30180D,  //  0036  EQ	R12	R12	R13
      0x78320016,  //  0037  JMPF	R12	#004F
      0xB8322600,  //  0038  GETNGBL	R12	K19
      0x8C301914,  //  0039  GETMET	R12	R12	K20
      0x58380015,  //  003A  LDCONST	R14	K21
      0x7C300400,  //  003B  CALL	R12	2
      0x78320011,  //  003C  JMPF	R12	#004F
      0xB8320000,  //  003D  GETNGBL	R12	K0
      0x8C301916,  //  003E  GETMET	R12	R12	K22
      0x8838150D,  //  003F  GETMBR	R14	R10	K13
      0x883C150E,  //  0040  GETMBR	R15	R10	K14
      0x7C300600,  //  0041  CALL	R12	3
      0xB8362E00,  //  0042  GETNGBL	R13	K23
      0x60380008,  //  0043  GETGBL	R14	G8
      0x5C3C0800,  //  0044  MOVE	R15	R4
      0x7C380200,  //  0045  CALL	R14	1
      0x003A300E,  //  0046  ADD	R14	K24	R14
      0x78320002,  //  0047  JMPF	R12	#004B
      0x003E320C,  //  0048  ADD	R15	K25	R12
      0x003C1F1A,  //  0049  ADD	R15	R15	K26
      0x70020000,  //  004A  JMP		#004C
      0x583C001B,  //  004B  LDCONST	R15	K27
      0x00381C0F,  //  004C  ADD	R14	R14	R15
      0x583C0015,  //  004D  LDCONST	R15	K21
      0x7C340400,  //  004E  CALL	R13	2
      0x8C300F1C,  //  004F  GETMET	R12	R7	K28
      0x88381512,  //  0050  GETMBR	R14	R10	K18
      0x883C150D,  //  0051  GETMBR	R15	R10	K13
      0x8840150E,  //  0052  GETMBR	R16	R10	K14
      0x7C300800,  //  0053  CALL	R12	4
      0x8C300F1D,  //  0054  GETMET	R12	R7	K29
      0x7C300200,  //  0055  CALL	R12	1
      0x4C340000,  //  0056  LDNIL	R13
      0x8C380F1E,  //  0057  GETMET	R14	R7	K30
      0x7C380200,  //  0058  CALL	R14	1
      0x5C341C00,  //  0059  MOVE	R13	R14
      0x783A0025,  //  005A  JMPF	R14	#0081
      0x90363E01,  //  005B  SETMBR	R13	K31	R1
      0x88381B0F,  //  005C  GETMBR	R14	R13	K15
      0x4C3C0000,  //  005D  LDNIL	R15
      0x20381C0F,  //  005E  NE	R14	R14	R15
      0x783A0007,  //  005F  JMPF	R14	#0068
      0x4C380000,  //  0060  LDNIL	R14
      0x90361E0E,  //  0061  SETMBR	R13	K15	R14
      0x8C380111,  //  0062  GETMET	R14	R0	K17
      0x5C400C00,  //  0063  MOVE	R16	R6
      0x5C441A00,  //  0064  MOVE	R17	R13
      0x5C481600,  //  0065  MOVE	R18	R11
      0x7C380800,  //  0066  CALL	R14	4
      0x70020017,  //  0067  JMP		#0080
      0x8C380F20,  //  0068  GETMET	R14	R7	K32
      0x7C380200,  //  0069  CALL	R14	1
      0xB83E0000,  //  006A  GETNGBL	R15	K0
      0x883C1F21,  //  006B  GETMBR	R15	R15	K33
      0x90361E0F,  //  006C  SETMBR	R13	K15	R15
      0x4C3C0000,  //  006D  LDNIL	R15
      0x203C1C0F,  //  006E  NE	R15	R14	R15
      0x783E0005,  //  006F  JMPF	R15	#0076
      0x8C3C1D22,  //  0070  GETMET	R15	R14	K34
      0x88440323,  //  0071  GETMBR	R17	R1	K35
      0x5C481A00,  //  0072  MOVE	R18	R13
      0x5C4C1600,  //  0073  MOVE	R19	R11
      0x7C3C0800,  //  0074  CALL	R15	4
      0x70020000,  //  0075  JMP		#0077
      0x4C3C0000,  //  0076  LDNIL	R15
      0x783E0002,  //  0077  JMPF	R15	#007B
      0xB8420000,  //  0078  GETNGBL	R16	K0
      0x88402124,  //  0079  GETMBR	R16	R16	K36
      0x90361E10,  //  007A  SETMBR	R13	K15	R16
      0x8C400111,  //  007B  GETMET	R16	R0	K17
      0x5C480C00,  //  007C  MOVE	R18	R6
      0x5C4C1A00,  //  007D  MOVE	R19	R13
      0x5C501600,  //  007E  MOVE	R20	R11
      0x7C400800,  //  007F  CALL	R16	4
      0x7001FFD5,  //  0080  JMP		#0057
      0x7001FF99,  //  0081  JMP		#001C
      0x58200025,  //  0082  LDCONST	R8	K37
      0xAC200200,  //  0083  CATCH	R8	1	0
      0xB0080000,  //  0084  RAISE	2	R0	R0
      0x5C200A00,  //  0085  MOVE	R8	R5
      0x74220007,  //  0086  JMPT	R8	#008F
      0x88200126,  //  0087  GETMBR	R8	R0	K38
      0x8C201127,  //  0088  GETMET	R8	R8	K39
      0xB82A0000,  //  0089  GETNGBL	R10	K0
      0x8C281528,  //  008A  GETMET	R10	R10	K40
      0x5C300200,  //  008B  MOVE	R12	R1
      0x5C340C00,  //  008C  MOVE	R13	R6
      0x7C280600,  //  008D  CALL	R10	3
      0x7C200400,  //  008E  CALL	R8	2
      0x50180200,  //  008F  LDBOOL	R6	1	0
      0x80040C00,  //  0090  RET	1	R6
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: process_read_request_solo
********************************************************************/
extern const bclass be_class_Matter_IM;
be_local_closure(class_Matter_IM_process_read_request_solo,   /* name */
  be_nested_proto(
    19,                          /* nstack */
    3,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_IM, 
    1,                          /* has constants */
    ( &(const bvalue[52]) {     /* constants */
    /* K0   */  be_nested_str_weak(status),
    /* K1   */  be_nested_str_weak(matter),
    /* K2   */  be_nested_str_weak(INVALID_ACTION),
    /* K3   */  be_nested_str_weak(msg),
    /* K4   */  be_nested_str_weak(device),
    /* K5   */  be_nested_str_weak(resolve_attribute_read_solo),
    /* K6   */  be_nested_str_weak(UNSUPPORTED_ATTRIBUTE),
    /* K7   */  be_nested_str_weak(read_attribute),
    /* K8   */  be_nested_str_weak(session),
    /* K9   */  be_nested_str_weak(tlv_solo),
    /* K10  */  be_nested_str_weak(is_list),
    /* K11  */  be_nested_str_weak(is_array),
    /* K12  */  be_nested_str_weak(encode_len),
    /* K13  */  be_nested_str_weak(IM_ReportData_Pull),
    /* K14  */  be_nested_str_weak(MAX_MESSAGE),
    /* K15  */  be_nested_str_weak(log),
    /* K16  */  be_nested_str_weak(MTR_X3A_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20Response_X20to_X20big_X2C_X20revert_X20to_X20non_X2Dsolo),
    /* K17  */  be_const_int(3),
    /* K18  */  be_nested_str_weak(TLV),
    /* K19  */  be_nested_str_weak(parse),
    /* K20  */  be_nested_str_weak(raw),
    /* K21  */  be_nested_str_weak(app_payload_idx),
    /* K22  */  be_nested_str_weak(process_read_request_pull),
    /* K23  */  be_nested_str_weak(add),
    /* K24  */  be_const_int(1),
    /* K25  */  be_nested_str_weak(attributedata2raw),
    /* K26  */  be_const_int(405077761),
    /* K27  */  be_nested_str_weak(attributestatus2raw),
    /* K28  */  be_nested_str_weak(MTR_X3A_X20_X3ERead_Attr_X20_X28_X256i_X29_X20_X25s_X20_X2D_X20IGNORED),
    /* K29  */  be_nested_str_weak(local_session_id),
    /* K30  */  be_nested_str_weak(build_response),
    /* K31  */  be_nested_str_weak(message_handler),
    /* K32  */  be_nested_str_weak(clear),
    /* K33  */  be_nested_str_weak(encode_frame),
    /* K34  */  be_nested_str_weak(encrypt),
    /* K35  */  be_nested_str_weak(tasmota),
    /* K36  */  be_nested_str_weak(loglevel),
    /* K37  */  be_nested_str_weak(MTR_X3A_X20_X3Csnd_X20_X20_X20_X20_X20_X20_X20_X28_X256i_X29_X20id_X3D_X25i_X20exch_X3D_X25i_X20rack_X3D_X25s),
    /* K38  */  be_nested_str_weak(message_counter),
    /* K39  */  be_nested_str_weak(exchange_id),
    /* K40  */  be_nested_str_weak(ack_message_counter),
    /* K41  */  be_nested_str_weak(send_response_frame),
    /* K42  */  be_nested_str_weak(get_attribute_name),
    /* K43  */  be_nested_str_weak(cluster),
    /* K44  */  be_nested_str_weak(attribute),
    /* K45  */  be_nested_str_weak(_X20_X28),
    /* K46  */  be_nested_str_weak(_X29),
    /* K47  */  be_nested_str_weak(),
    /* K48  */  be_nested_str_weak(to_str_val),
    /* K49  */  be_nested_str_weak(MTR_X3A_X20_X3ERead_Attr1_X28_X256i_X29_X20_X25s_X25s_X20_X2D_X20_X25s),
    /* K50  */  be_nested_str_weak(MTR_X3A_X20_X3ERead_Attr1_X28_X256i_X29_X20_X25s_X25s_X20_X2D_X20STATUS_X3A_X200x_X2502X_X20_X25s),
    /* K51  */  be_nested_str_weak(MTR_X3A_X20_X3ERead_Attr1_X28_X256i_X29_X20_X25s_X25s_X20_X2D_X20IGNORED),
    }),
    be_str_weak(process_read_request_solo),
    &be_const_str_solidified,
    ( &(const binstruction[242]) {  /* code */
      0xB80E0200,  //  0000  GETNGBL	R3	K1
      0x880C0702,  //  0001  GETMBR	R3	R3	K2
      0x900A0003,  //  0002  SETMBR	R2	K0	R3
      0x900A0601,  //  0003  SETMBR	R2	K3	R1
      0x880C0104,  //  0004  GETMBR	R3	R0	K4
      0x8C0C0705,  //  0005  GETMET	R3	R3	K5
      0x5C140400,  //  0006  MOVE	R5	R2
      0x7C0C0400,  //  0007  CALL	R3	2
      0x4C100000,  //  0008  LDNIL	R4
      0x4C140000,  //  0009  LDNIL	R5
      0x4C180000,  //  000A  LDNIL	R6
      0x20180606,  //  000B  NE	R6	R3	R6
      0x781A0008,  //  000C  JMPF	R6	#0016
      0xB81A0200,  //  000D  GETNGBL	R6	K1
      0x88180D06,  //  000E  GETMBR	R6	R6	K6
      0x900A0006,  //  000F  SETMBR	R2	K0	R6
      0x8C180707,  //  0010  GETMET	R6	R3	K7
      0x88200308,  //  0011  GETMBR	R8	R1	K8
      0x5C240400,  //  0012  MOVE	R9	R2
      0x88280109,  //  0013  GETMBR	R10	R0	K9
      0x7C180800,  //  0014  CALL	R6	4
      0x5C100C00,  //  0015  MOVE	R4	R6
      0x4C180000,  //  0016  LDNIL	R6
      0x20180806,  //  0017  NE	R6	R4	R6
      0x781A0036,  //  0018  JMPF	R6	#0050
      0x8818090A,  //  0019  GETMBR	R6	R4	K10
      0x741A0001,  //  001A  JMPT	R6	#001D
      0x8818090B,  //  001B  GETMBR	R6	R4	K11
      0x781A0018,  //  001C  JMPF	R6	#0036
      0x8C18090C,  //  001D  GETMET	R6	R4	K12
      0x7C180200,  //  001E  CALL	R6	1
      0xB81E0200,  //  001F  GETNGBL	R7	K1
      0x881C0F0D,  //  0020  GETMBR	R7	R7	K13
      0x881C0F0E,  //  0021  GETMBR	R7	R7	K14
      0x24180C07,  //  0022  GT	R6	R6	R7
      0x781A0011,  //  0023  JMPF	R6	#0036
      0x4C100000,  //  0024  LDNIL	R4
      0xB81A1E00,  //  0025  GETNGBL	R6	K15
      0x601C0018,  //  0026  GETGBL	R7	G24
      0x58200010,  //  0027  LDCONST	R8	K16
      0x7C1C0200,  //  0028  CALL	R7	1
      0x58200011,  //  0029  LDCONST	R8	K17
      0x7C180400,  //  002A  CALL	R6	2
      0xB81A0200,  //  002B  GETNGBL	R6	K1
      0x88180D12,  //  002C  GETMBR	R6	R6	K18
      0x8C180D13,  //  002D  GETMET	R6	R6	K19
      0x88200314,  //  002E  GETMBR	R8	R1	K20
      0x88240315,  //  002F  GETMBR	R9	R1	K21
      0x7C180600,  //  0030  CALL	R6	3
      0x8C1C0116,  //  0031  GETMET	R7	R0	K22
      0x5C240200,  //  0032  MOVE	R9	R1
      0x5C280C00,  //  0033  MOVE	R10	R6
      0x7C1C0600,  //  0034  CALL	R7	3
      0x80040E00,  //  0035  RET	1	R7
      0x60180015,  //  0036  GETGBL	R6	G21
      0x541E002F,  //  0037  LDINT	R7	48
      0x7C180200,  //  0038  CALL	R6	1
      0x5C140C00,  //  0039  MOVE	R5	R6
      0x8C180B17,  //  003A  GETMET	R6	R5	K23
      0x54220014,  //  003B  LDINT	R8	21
      0x58240018,  //  003C  LDCONST	R9	K24
      0x7C180600,  //  003D  CALL	R6	3
      0x8C180B17,  //  003E  GETMET	R6	R5	K23
      0x54223600,  //  003F  LDINT	R8	13825
      0x5425FFFD,  //  0040  LDINT	R9	-2
      0x7C180600,  //  0041  CALL	R6	3
      0x8C180119,  //  0042  GETMET	R6	R0	K25
      0x5C200A00,  //  0043  MOVE	R8	R5
      0x5C240400,  //  0044  MOVE	R9	R2
      0x5C280800,  //  0045  MOVE	R10	R4
      0x7C180800,  //  0046  CALL	R6	4
      0x8C180B17,  //  0047  GETMET	R6	R5	K23
      0x5820001A,  //  0048  LDCONST	R8	K26
      0x5425FFFB,  //  0049  LDINT	R9	-4
      0x7C180600,  //  004A  CALL	R6	3
      0x8C180B17,  //  004B  GETMET	R6	R5	K23
      0x54220017,  //  004C  LDINT	R8	24
      0x58240018,  //  004D  LDCONST	R9	K24
      0x7C180600,  //  004E  CALL	R6	3
      0x70020028,  //  004F  JMP		#0079
      0x88180500,  //  0050  GETMBR	R6	R2	K0
      0x4C1C0000,  //  0051  LDNIL	R7
      0x20180C07,  //  0052  NE	R6	R6	R7
      0x781A0019,  //  0053  JMPF	R6	#006E
      0x60180015,  //  0054  GETGBL	R6	G21
      0x541E002F,  //  0055  LDINT	R7	48
      0x7C180200,  //  0056  CALL	R6	1
      0x5C140C00,  //  0057  MOVE	R5	R6
      0x8C180B17,  //  0058  GETMET	R6	R5	K23
      0x54220014,  //  0059  LDINT	R8	21
      0x58240018,  //  005A  LDCONST	R9	K24
      0x7C180600,  //  005B  CALL	R6	3
      0x8C180B17,  //  005C  GETMET	R6	R5	K23
      0x54223600,  //  005D  LDINT	R8	13825
      0x5425FFFD,  //  005E  LDINT	R9	-2
      0x7C180600,  //  005F  CALL	R6	3
      0x8C18011B,  //  0060  GETMET	R6	R0	K27
      0x5C200A00,  //  0061  MOVE	R8	R5
      0x5C240400,  //  0062  MOVE	R9	R2
      0x88280500,  //  0063  GETMBR	R10	R2	K0
      0x7C180800,  //  0064  CALL	R6	4
      0x8C180B17,  //  0065  GETMET	R6	R5	K23
      0x5820001A,  //  0066  LDCONST	R8	K26
      0x5425FFFB,  //  0067  LDINT	R9	-4
      0x7C180600,  //  0068  CALL	R6	3
      0x8C180B17,  //  0069  GETMET	R6	R5	K23
      0x54220017,  //  006A  LDINT	R8	24
      0x58240018,  //  006B  LDCONST	R9	K24
      0x7C180600,  //  006C  CALL	R6	3
      0x7002000A,  //  006D  JMP		#0079
      0xB81A1E00,  //  006E  GETNGBL	R6	K15
      0x601C0018,  //  006F  GETGBL	R7	G24
      0x5820001C,  //  0070  LDCONST	R8	K28
      0x88240308,  //  0071  GETMBR	R9	R1	K8
      0x8824131D,  //  0072  GETMBR	R9	R9	K29
      0x5C280400,  //  0073  MOVE	R10	R2
      0x7C1C0600,  //  0074  CALL	R7	3
      0x58200011,  //  0075  LDCONST	R8	K17
      0x7C180400,  //  0076  CALL	R6	2
      0x50180000,  //  0077  LDBOOL	R6	0	0
      0x80040C00,  //  0078  RET	1	R6
      0x8C18031E,  //  0079  GETMET	R6	R1	K30
      0x54220004,  //  007A  LDINT	R8	5
      0x50240200,  //  007B  LDBOOL	R9	1	0
      0x7C180600,  //  007C  CALL	R6	3
      0x881C0104,  //  007D  GETMBR	R7	R0	K4
      0x881C0F1F,  //  007E  GETMBR	R7	R7	K31
      0x88200314,  //  007F  GETMBR	R8	R1	K20
      0x8C241120,  //  0080  GETMET	R9	R8	K32
      0x7C240200,  //  0081  CALL	R9	1
      0x8C240D21,  //  0082  GETMET	R9	R6	K33
      0x5C2C0A00,  //  0083  MOVE	R11	R5
      0x5C301000,  //  0084  MOVE	R12	R8
      0x7C240600,  //  0085  CALL	R9	3
      0x8C240D22,  //  0086  GETMET	R9	R6	K34
      0x7C240200,  //  0087  CALL	R9	1
      0xB8264600,  //  0088  GETNGBL	R9	K35
      0x8C241324,  //  0089  GETMET	R9	R9	K36
      0x542E0003,  //  008A  LDINT	R11	4
      0x7C240400,  //  008B  CALL	R9	2
      0x7826000A,  //  008C  JMPF	R9	#0098
      0xB8261E00,  //  008D  GETNGBL	R9	K15
      0x60280018,  //  008E  GETGBL	R10	G24
      0x582C0025,  //  008F  LDCONST	R11	K37
      0x88300D08,  //  0090  GETMBR	R12	R6	K8
      0x8830191D,  //  0091  GETMBR	R12	R12	K29
      0x88340D26,  //  0092  GETMBR	R13	R6	K38
      0x88380D27,  //  0093  GETMBR	R14	R6	K39
      0x883C0D28,  //  0094  GETMBR	R15	R6	K40
      0x7C280A00,  //  0095  CALL	R10	5
      0x542E0003,  //  0096  LDINT	R11	4
      0x7C240400,  //  0097  CALL	R9	2
      0x8C240F29,  //  0098  GETMET	R9	R7	K41
      0x5C2C0C00,  //  0099  MOVE	R11	R6
      0x7C240400,  //  009A  CALL	R9	2
      0x4C240000,  //  009B  LDNIL	R9
      0xB82A4600,  //  009C  GETNGBL	R10	K35
      0x8C281524,  //  009D  GETMET	R10	R10	K36
      0x58300011,  //  009E  LDCONST	R12	K17
      0x7C280400,  //  009F  CALL	R10	2
      0x782A000B,  //  00A0  JMPF	R10	#00AD
      0xB82A0200,  //  00A1  GETNGBL	R10	K1
      0x8C28152A,  //  00A2  GETMET	R10	R10	K42
      0x8830052B,  //  00A3  GETMBR	R12	R2	K43
      0x8834052C,  //  00A4  GETMBR	R13	R2	K44
      0x7C280600,  //  00A5  CALL	R10	3
      0x5C241400,  //  00A6  MOVE	R9	R10
      0x78260002,  //  00A7  JMPF	R9	#00AB
      0x002A5A09,  //  00A8  ADD	R10	K45	R9
      0x0028152E,  //  00A9  ADD	R10	R10	K46
      0x70020000,  //  00AA  JMP		#00AC
      0x5828002F,  //  00AB  LDCONST	R10	K47
      0x5C241400,  //  00AC  MOVE	R9	R10
      0x4C280000,  //  00AD  LDNIL	R10
      0x2028080A,  //  00AE  NE	R10	R4	R10
      0x782A0012,  //  00AF  JMPF	R10	#00C3
      0xB82A4600,  //  00B0  GETNGBL	R10	K35
      0x8C281524,  //  00B1  GETMET	R10	R10	K36
      0x58300011,  //  00B2  LDCONST	R12	K17
      0x7C280400,  //  00B3  CALL	R10	2
      0x782A000C,  //  00B4  JMPF	R10	#00C2
      0x8C280930,  //  00B5  GETMET	R10	R4	K48
      0x7C280200,  //  00B6  CALL	R10	1
      0xB82E1E00,  //  00B7  GETNGBL	R11	K15
      0x60300018,  //  00B8  GETGBL	R12	G24
      0x58340031,  //  00B9  LDCONST	R13	K49
      0x88380308,  //  00BA  GETMBR	R14	R1	K8
      0x88381D1D,  //  00BB  GETMBR	R14	R14	K29
      0x5C3C0400,  //  00BC  MOVE	R15	R2
      0x5C401200,  //  00BD  MOVE	R16	R9
      0x5C441400,  //  00BE  MOVE	R17	R10
      0x7C300A00,  //  00BF  CALL	R12	5
      0x58340011,  //  00C0  LDCONST	R13	K17
      0x7C2C0400,  //  00C1  CALL	R11	2
      0x7002002C,  //  00C2  JMP		#00F0
      0x88280500,  //  00C3  GETMBR	R10	R2	K0
      0x4C2C0000,  //  00C4  LDNIL	R11
      0x2028140B,  //  00C5  NE	R10	R10	R11
      0x782A0019,  //  00C6  JMPF	R10	#00E1
      0x88280500,  //  00C7  GETMBR	R10	R2	K0
      0xB82E0200,  //  00C8  GETNGBL	R11	K1
      0x882C1706,  //  00C9  GETMBR	R11	R11	K6
      0x1C28140B,  //  00CA  EQ	R10	R10	R11
      0x782A0001,  //  00CB  JMPF	R10	#00CE
      0x58280006,  //  00CC  LDCONST	R10	K6
      0x70020000,  //  00CD  JMP		#00CF
      0x5828002F,  //  00CE  LDCONST	R10	K47
      0xB82E4600,  //  00CF  GETNGBL	R11	K35
      0x8C2C1724,  //  00D0  GETMET	R11	R11	K36
      0x58340011,  //  00D1  LDCONST	R13	K17
      0x7C2C0400,  //  00D2  CALL	R11	2
      0x782E000B,  //  00D3  JMPF	R11	#00E0
      0xB82E1E00,  //  00D4  GETNGBL	R11	K15
      0x60300018,  //  00D5  GETGBL	R12	G24
      0x58340032,  //  00D6  LDCONST	R13	K50
      0x88380308,  //  00D7  GETMBR	R14	R1	K8
      0x88381D1D,  //  00D8  GETMBR	R14	R14	K29
      0x5C3C0400,  //  00D9  MOVE	R15	R2
      0x5C401200,  //  00DA  MOVE	R16	R9
      0x88440500,  //  00DB  GETMBR	R17	R2	K0
      0x5C481400,  //  00DC  MOVE	R18	R10
      0x7C300C00,  //  00DD  CALL	R12	6
      0x58340011,  //  00DE  LDCONST	R13	K17
      0x7C2C0400,  //  00DF  CALL	R11	2
      0x7002000E,  //  00E0  JMP		#00F0
      0xB82A4600,  //  00E1  GETNGBL	R10	K35
      0x8C281524,  //  00E2  GETMET	R10	R10	K36
      0x58300011,  //  00E3  LDCONST	R12	K17
      0x7C280400,  //  00E4  CALL	R10	2
      0x782A0009,  //  00E5  JMPF	R10	#00F0
      0xB82A1E00,  //  00E6  GETNGBL	R10	K15
      0x602C0018,  //  00E7  GETGBL	R11	G24
      0x58300033,  //  00E8  LDCONST	R12	K51
      0x88340308,  //  00E9  GETMBR	R13	R1	K8
      0x88341B1D,  //  00EA  GETMBR	R13	R13	K29
      0x5C380400,  //  00EB  MOVE	R14	R2
      0x5C3C1200,  //  00EC  MOVE	R15	R9
      0x7C2C0800,  //  00ED  CALL	R11	4
      0x58300011,  //  00EE  LDCONST	R12	K17
      0x7C280400,  //  00EF  CALL	R10	2
      0x50280200,  //  00F0  LDBOOL	R10	1	0
      0x80041400,  //  00F1  RET	1	R10
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: send_subscribe_update
********************************************************************/
extern const bclass be_class_Matter_IM;
be_local_closure(class_Matter_IM_send_subscribe_update,   /* name */
  be_nested_proto(
    13,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_IM, 
    1,                          /* has constants */
    ( &(const bvalue[24]) {     /* constants */
    /* K0   */  be_nested_str_weak(session),
    /* K1   */  be_nested_str_weak(matter),
    /* K2   */  be_nested_str_weak(ReadRequestMessage),
    /* K3   */  be_nested_str_weak(fabric_filtered),
    /* K4   */  be_nested_str_weak(attributes_requests),
    /* K5   */  be_nested_str_weak(updates),
    /* K6   */  be_nested_str_weak(AttributePathIB),
    /* K7   */  be_nested_str_weak(endpoint),
    /* K8   */  be_nested_str_weak(cluster),
    /* K9   */  be_nested_str_weak(attribute),
    /* K10  */  be_nested_str_weak(push),
    /* K11  */  be_nested_str_weak(stop_iteration),
    /* K12  */  be_nested_str_weak(log),
    /* K13  */  be_nested_str_weak(MTR_X3A_X20_X3CSub_Data_X20_X20_X28_X256i_X29_X20sub_X3D_X25i),
    /* K14  */  be_nested_str_weak(local_session_id),
    /* K15  */  be_nested_str_weak(subscription_id),
    /* K16  */  be_const_int(3),
    /* K17  */  be_nested_str_weak(is_keep_alive),
    /* K18  */  be_nested_str_weak(process_read_or_subscribe_request_pull),
    /* K19  */  be_nested_str_weak(update_event_generator_array),
    /* K20  */  be_nested_str_weak(IM_ReportDataSubscribed_Pull),
    /* K21  */  be_nested_str_weak(_message_handler),
    /* K22  */  be_nested_str_weak(send_queue),
    /* K23  */  be_nested_str_weak(send_enqueued),
    }),
    be_str_weak(send_subscribe_update),
    &be_const_str_solidified,
    ( &(const binstruction[64]) {  /* code */
      0x88080300,  //  0000  GETMBR	R2	R1	K0
      0xB80E0200,  //  0001  GETNGBL	R3	K1
      0x8C0C0702,  //  0002  GETMET	R3	R3	K2
      0x7C0C0200,  //  0003  CALL	R3	1
      0x50100000,  //  0004  LDBOOL	R4	0	0
      0x900E0604,  //  0005  SETMBR	R3	K3	R4
      0x60100012,  //  0006  GETGBL	R4	G18
      0x7C100000,  //  0007  CALL	R4	0
      0x900E0804,  //  0008  SETMBR	R3	K4	R4
      0x60100010,  //  0009  GETGBL	R4	G16
      0x88140305,  //  000A  GETMBR	R5	R1	K5
      0x7C100200,  //  000B  CALL	R4	1
      0xA802000F,  //  000C  EXBLK	0	#001D
      0x5C140800,  //  000D  MOVE	R5	R4
      0x7C140000,  //  000E  CALL	R5	0
      0xB81A0200,  //  000F  GETNGBL	R6	K1
      0x8C180D06,  //  0010  GETMET	R6	R6	K6
      0x7C180200,  //  0011  CALL	R6	1
      0x881C0B07,  //  0012  GETMBR	R7	R5	K7
      0x901A0E07,  //  0013  SETMBR	R6	K7	R7
      0x881C0B08,  //  0014  GETMBR	R7	R5	K8
      0x901A1007,  //  0015  SETMBR	R6	K8	R7
      0x881C0B09,  //  0016  GETMBR	R7	R5	K9
      0x901A1207,  //  0017  SETMBR	R6	K9	R7
      0x881C0704,  //  0018  GETMBR	R7	R3	K4
      0x8C1C0F0A,  //  0019  GETMET	R7	R7	K10
      0x5C240C00,  //  001A  MOVE	R9	R6
      0x7C1C0400,  //  001B  CALL	R7	2
      0x7001FFEF,  //  001C  JMP		#000D
      0x5810000B,  //  001D  LDCONST	R4	K11
      0xAC100200,  //  001E  CATCH	R4	1	0
      0xB0080000,  //  001F  RAISE	2	R0	R0
      0xB8121800,  //  0020  GETNGBL	R4	K12
      0x60140018,  //  0021  GETGBL	R5	G24
      0x5818000D,  //  0022  LDCONST	R6	K13
      0x881C050E,  //  0023  GETMBR	R7	R2	K14
      0x8820030F,  //  0024  GETMBR	R8	R1	K15
      0x7C140600,  //  0025  CALL	R5	3
      0x58180010,  //  0026  LDCONST	R6	K16
      0x7C100400,  //  0027  CALL	R4	2
      0x50100000,  //  0028  LDBOOL	R4	0	0
      0x90062204,  //  0029  SETMBR	R1	K17	R4
      0x8C100112,  //  002A  GETMET	R4	R0	K18
      0x5C180600,  //  002B  MOVE	R6	R3
      0x4C1C0000,  //  002C  LDNIL	R7
      0x7C100600,  //  002D  CALL	R4	3
      0x8C140313,  //  002E  GETMET	R5	R1	K19
      0x7C140200,  //  002F  CALL	R5	1
      0xB81A0200,  //  0030  GETNGBL	R6	K1
      0x8C180D14,  //  0031  GETMET	R6	R6	K20
      0x88200515,  //  0032  GETMBR	R8	R2	K21
      0x5C240400,  //  0033  MOVE	R9	R2
      0x5C280800,  //  0034  MOVE	R10	R4
      0x5C2C0A00,  //  0035  MOVE	R11	R5
      0x5C300200,  //  0036  MOVE	R12	R1
      0x7C180C00,  //  0037  CALL	R6	6
      0x881C0116,  //  0038  GETMBR	R7	R0	K22
      0x8C1C0F0A,  //  0039  GETMET	R7	R7	K10
      0x5C240C00,  //  003A  MOVE	R9	R6
      0x7C1C0400,  //  003B  CALL	R7	2
      0x8C1C0117,  //  003C  GETMET	R7	R0	K23
      0x88240515,  //  003D  GETMBR	R9	R2	K21
      0x7C1C0400,  //  003E  CALL	R7	2
      0x80000000,  //  003F  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: send_subscribe_heartbeat
********************************************************************/
extern const bclass be_class_Matter_IM;
be_local_closure(class_Matter_IM_send_subscribe_heartbeat,   /* name */
  be_nested_proto(
    10,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_IM, 
    1,                          /* has constants */
    ( &(const bvalue[15]) {     /* constants */
    /* K0   */  be_nested_str_weak(session),
    /* K1   */  be_nested_str_weak(tasmota),
    /* K2   */  be_nested_str_weak(loglevel),
    /* K3   */  be_const_int(3),
    /* K4   */  be_nested_str_weak(log),
    /* K5   */  be_nested_str_weak(MTR_X3A_X20_X3CSub_Alive_X20_X28_X256i_X29_X20sub_X3D_X25s),
    /* K6   */  be_nested_str_weak(local_session_id),
    /* K7   */  be_nested_str_weak(subscription_id),
    /* K8   */  be_nested_str_weak(is_keep_alive),
    /* K9   */  be_nested_str_weak(send_queue),
    /* K10  */  be_nested_str_weak(push),
    /* K11  */  be_nested_str_weak(matter),
    /* K12  */  be_nested_str_weak(IM_SubscribedHeartbeat),
    /* K13  */  be_nested_str_weak(_message_handler),
    /* K14  */  be_nested_str_weak(send_enqueued),
    }),
    be_str_weak(send_subscribe_heartbeat),
    &be_const_str_solidified,
    ( &(const binstruction[29]) {  /* code */
      0x88080300,  //  0000  GETMBR	R2	R1	K0
      0xB80E0200,  //  0001  GETNGBL	R3	K1
      0x8C0C0702,  //  0002  GETMET	R3	R3	K2
      0x58140003,  //  0003  LDCONST	R5	K3
      0x7C0C0400,  //  0004  CALL	R3	2
      0x780E0007,  //  0005  JMPF	R3	#000E
      0xB80E0800,  //  0006  GETNGBL	R3	K4
      0x60100018,  //  0007  GETGBL	R4	G24
      0x58140005,  //  0008  LDCONST	R5	K5
      0x88180506,  //  0009  GETMBR	R6	R2	K6
      0x881C0307,  //  000A  GETMBR	R7	R1	K7
      0x7C100600,  //  000B  CALL	R4	3
      0x58140003,  //  000C  LDCONST	R5	K3
      0x7C0C0400,  //  000D  CALL	R3	2
      0x500C0200,  //  000E  LDBOOL	R3	1	0
      0x90061003,  //  000F  SETMBR	R1	K8	R3
      0x880C0109,  //  0010  GETMBR	R3	R0	K9
      0x8C0C070A,  //  0011  GETMET	R3	R3	K10
      0xB8161600,  //  0012  GETNGBL	R5	K11
      0x8C140B0C,  //  0013  GETMET	R5	R5	K12
      0x881C050D,  //  0014  GETMBR	R7	R2	K13
      0x5C200400,  //  0015  MOVE	R8	R2
      0x5C240200,  //  0016  MOVE	R9	R1
      0x7C140800,  //  0017  CALL	R5	4
      0x7C0C0400,  //  0018  CALL	R3	2
      0x8C0C010E,  //  0019  GETMET	R3	R0	K14
      0x8814050D,  //  001A  GETMBR	R5	R2	K13
      0x7C0C0400,  //  001B  CALL	R3	2
      0x80000000,  //  001C  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: every_50ms
********************************************************************/
extern const bclass be_class_Matter_IM;
be_local_closure(class_Matter_IM_every_50ms,   /* name */
  be_nested_proto(
    3,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_IM, 
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str_weak(subs_shop),
    /* K1   */  be_nested_str_weak(every_50ms),
    }),
    be_str_weak(every_50ms),
    &be_const_str_solidified,
    ( &(const binstruction[ 4]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x8C040301,  //  0001  GETMET	R1	R1	K1
      0x7C040200,  //  0002  CALL	R1	1
      0x80000000,  //  0003  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: process_write_response
********************************************************************/
extern const bclass be_class_Matter_IM;
be_local_closure(class_Matter_IM_process_write_response,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    3,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_IM, 
    1,                          /* has constants */
    ( &(const bvalue[ 3]) {     /* constants */
    /* K0   */  be_nested_str_weak(matter),
    /* K1   */  be_nested_str_weak(WriteResponseMessage),
    /* K2   */  be_nested_str_weak(from_TLV),
    }),
    be_str_weak(process_write_response),
    &be_const_str_solidified,
    ( &(const binstruction[ 8]) {  /* code */
      0xB80E0000,  //  0000  GETNGBL	R3	K0
      0x8C0C0701,  //  0001  GETMET	R3	R3	K1
      0x7C0C0200,  //  0002  CALL	R3	1
      0x8C0C0702,  //  0003  GETMET	R3	R3	K2
      0x5C140400,  //  0004  MOVE	R5	R2
      0x7C0C0400,  //  0005  CALL	R3	2
      0x50100000,  //  0006  LDBOOL	R4	0	0
      0x80040800,  //  0007  RET	1	R4
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: init
********************************************************************/
extern const bclass be_class_Matter_IM;
be_local_closure(class_Matter_IM_init,   /* name */
  be_nested_proto(
    5,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_IM, 
    1,                          /* has constants */
    ( &(const bvalue[12]) {     /* constants */
    /* K0   */  be_nested_str_weak(device),
    /* K1   */  be_nested_str_weak(send_queue),
    /* K2   */  be_nested_str_weak(subs_shop),
    /* K3   */  be_nested_str_weak(matter),
    /* K4   */  be_nested_str_weak(IM_Subscription_Shop),
    /* K5   */  be_nested_str_weak(read_request_solo),
    /* K6   */  be_nested_str_weak(ReadRequestMessage_solo),
    /* K7   */  be_nested_str_weak(invoke_request_solo),
    /* K8   */  be_nested_str_weak(InvokeRequestMessage_solo),
    /* K9   */  be_nested_str_weak(tlv_solo),
    /* K10  */  be_nested_str_weak(TLV),
    /* K11  */  be_nested_str_weak(Matter_TLV_item),
    }),
    be_str_weak(init),
    &be_const_str_solidified,
    ( &(const binstruction[23]) {  /* code */
      0x90020001,  //  0000  SETMBR	R0	K0	R1
      0x60080012,  //  0001  GETGBL	R2	G18
      0x7C080000,  //  0002  CALL	R2	0
      0x90020202,  //  0003  SETMBR	R0	K1	R2
      0xB80A0600,  //  0004  GETNGBL	R2	K3
      0x8C080504,  //  0005  GETMET	R2	R2	K4
      0x5C100000,  //  0006  MOVE	R4	R0
      0x7C080400,  //  0007  CALL	R2	2
      0x90020402,  //  0008  SETMBR	R0	K2	R2
      0xB80A0600,  //  0009  GETNGBL	R2	K3
      0x8C080506,  //  000A  GETMET	R2	R2	K6
      0x7C080200,  //  000B  CALL	R2	1
      0x90020A02,  //  000C  SETMBR	R0	K5	R2
      0xB80A0600,  //  000D  GETNGBL	R2	K3
      0x8C080508,  //  000E  GETMET	R2	R2	K8
      0x7C080200,  //  000F  CALL	R2	1
      0x90020E02,  //  0010  SETMBR	R0	K7	R2
      0xB80A0600,  //  0011  GETNGBL	R2	K3
      0x8808050A,  //  0012  GETMBR	R2	R2	K10
      0x8C08050B,  //  0013  GETMET	R2	R2	K11
      0x7C080200,  //  0014  CALL	R2	1
      0x90021202,  //  0015  SETMBR	R0	K9	R2
      0x80000000,  //  0016  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: send_ack_now
********************************************************************/
extern const bclass be_class_Matter_IM;
be_local_closure(class_Matter_IM_send_ack_now,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_IM, 
    1,                          /* has constants */
    ( &(const bvalue[ 3]) {     /* constants */
    /* K0   */  be_nested_str_weak(session),
    /* K1   */  be_nested_str_weak(_message_handler),
    /* K2   */  be_nested_str_weak(send_encrypted_ack),
    }),
    be_str_weak(send_ack_now),
    &be_const_str_solidified,
    ( &(const binstruction[11]) {  /* code */
      0x4C080000,  //  0000  LDNIL	R2
      0x1C080202,  //  0001  EQ	R2	R1	R2
      0x780A0000,  //  0002  JMPF	R2	#0004
      0x80000400,  //  0003  RET	0
      0x88080300,  //  0004  GETMBR	R2	R1	K0
      0x88080501,  //  0005  GETMBR	R2	R2	K1
      0x8C080502,  //  0006  GETMET	R2	R2	K2
      0x5C100200,  //  0007  MOVE	R4	R1
      0x50140000,  //  0008  LDBOOL	R5	0	0
      0x7C080600,  //  0009  CALL	R2	3
      0x80000000,  //  000A  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: read_single_attribute_to_bytes
********************************************************************/
extern const bclass be_class_Matter_IM;
be_local_closure(class_Matter_IM_read_single_attribute_to_bytes,   /* name */
  be_nested_proto(
    21,                          /* nstack */
    5,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_IM, 
    1,                          /* has constants */
    ( &(const bvalue[31]) {     /* constants */
    /* K0   */  be_nested_str_weak(matter),
    /* K1   */  be_nested_str_weak(TLV),
    /* K2   */  be_nested_str_weak(tasmota),
    /* K3   */  be_nested_str_weak(loglevel),
    /* K4   */  be_const_int(3),
    /* K5   */  be_nested_str_weak(get_attribute_name),
    /* K6   */  be_nested_str_weak(cluster),
    /* K7   */  be_nested_str_weak(attribute),
    /* K8   */  be_nested_str_weak(_X20_X28),
    /* K9   */  be_nested_str_weak(_X29),
    /* K10  */  be_nested_str_weak(),
    /* K11  */  be_nested_str_weak(status),
    /* K12  */  be_nested_str_weak(read_attribute),
    /* K13  */  be_nested_str_weak(tlv_solo),
    /* K14  */  be_nested_str_weak(to_str_val),
    /* K15  */  be_nested_str_weak(is_list),
    /* K16  */  be_nested_str_weak(is_array),
    /* K17  */  be_nested_str_weak(encode_len),
    /* K18  */  be_nested_str_weak(IM_ReportData_Pull),
    /* K19  */  be_nested_str_weak(MAX_MESSAGE),
    /* K20  */  be_nested_str_weak(Matter_TLV_array),
    /* K21  */  be_nested_str_weak(attributedata2raw),
    /* K22  */  be_nested_str_weak(push),
    /* K23  */  be_nested_str_weak(val),
    /* K24  */  be_nested_str_weak(stop_iteration),
    /* K25  */  be_nested_str_weak(log),
    /* K26  */  be_nested_str_weak(MTR_X3A_X20_X3ERead_Attr_X20_X28_X256i_X29_X20_X25s_X25s_X20_X2D_X20_X25s),
    /* K27  */  be_nested_str_weak(local_session_id),
    /* K28  */  be_nested_str_weak(attributestatus2raw),
    /* K29  */  be_nested_str_weak(MTR_X3A_X20_X3ERead_Attr_X20_X28_X256i_X29_X20_X25s_X25s_X20_X2D_X20STATUS_X3A_X200x_X2502X_X20_X25s),
    /* K30  */  be_nested_str_weak(UNSUPPORTED_ATTRIBUTE),
    }),
    be_str_weak(read_single_attribute_to_bytes),
    &be_const_str_solidified,
    ( &(const binstruction[165]) {  /* code */
      0xB8160000,  //  0000  GETNGBL	R5	K0
      0x88140B01,  //  0001  GETMBR	R5	R5	K1
      0x4C180000,  //  0002  LDNIL	R6
      0xB81E0400,  //  0003  GETNGBL	R7	K2
      0x8C1C0F03,  //  0004  GETMET	R7	R7	K3
      0x58240004,  //  0005  LDCONST	R9	K4
      0x7C1C0400,  //  0006  CALL	R7	2
      0x781E000B,  //  0007  JMPF	R7	#0014
      0xB81E0000,  //  0008  GETNGBL	R7	K0
      0x8C1C0F05,  //  0009  GETMET	R7	R7	K5
      0x88240506,  //  000A  GETMBR	R9	R2	K6
      0x88280507,  //  000B  GETMBR	R10	R2	K7
      0x7C1C0600,  //  000C  CALL	R7	3
      0x5C180E00,  //  000D  MOVE	R6	R7
      0x781A0002,  //  000E  JMPF	R6	#0012
      0x001E1006,  //  000F  ADD	R7	K8	R6
      0x001C0F09,  //  0010  ADD	R7	R7	K9
      0x70020000,  //  0011  JMP		#0013
      0x581C000A,  //  0012  LDCONST	R7	K10
      0x5C180E00,  //  0013  MOVE	R6	R7
      0x881C050B,  //  0014  GETMBR	R7	R2	K11
      0x4C200000,  //  0015  LDNIL	R8
      0x201C0E08,  //  0016  NE	R7	R7	R8
      0x4C200000,  //  0017  LDNIL	R8
      0x4C240000,  //  0018  LDNIL	R9
      0x4C280000,  //  0019  LDNIL	R10
      0x2028020A,  //  001A  NE	R10	R1	R10
      0x782A0005,  //  001B  JMPF	R10	#0022
      0x8C28030C,  //  001C  GETMET	R10	R1	K12
      0x5C300600,  //  001D  MOVE	R12	R3
      0x5C340400,  //  001E  MOVE	R13	R2
      0x8838010D,  //  001F  GETMBR	R14	R0	K13
      0x7C280800,  //  0020  CALL	R10	4
      0x5C201400,  //  0021  MOVE	R8	R10
      0x4C280000,  //  0022  LDNIL	R10
      0x2028100A,  //  0023  NE	R10	R8	R10
      0x782A0057,  //  0024  JMPF	R10	#007D
      0x5828000A,  //  0025  LDCONST	R10	K10
      0xB82E0400,  //  0026  GETNGBL	R11	K2
      0x8C2C1703,  //  0027  GETMET	R11	R11	K3
      0x58340004,  //  0028  LDCONST	R13	K4
      0x7C2C0400,  //  0029  CALL	R11	2
      0x782E0003,  //  002A  JMPF	R11	#002F
      0x78120002,  //  002B  JMPF	R4	#002F
      0x8C2C110E,  //  002C  GETMET	R11	R8	K14
      0x7C2C0200,  //  002D  CALL	R11	1
      0x5C281600,  //  002E  MOVE	R10	R11
      0x882C110F,  //  002F  GETMBR	R11	R8	K15
      0x742E0001,  //  0030  JMPT	R11	#0033
      0x882C1110,  //  0031  GETMBR	R11	R8	K16
      0x782E002F,  //  0032  JMPF	R11	#0063
      0x8C2C1111,  //  0033  GETMET	R11	R8	K17
      0x7C2C0200,  //  0034  CALL	R11	1
      0xB8320000,  //  0035  GETNGBL	R12	K0
      0x88301912,  //  0036  GETMBR	R12	R12	K18
      0x88301913,  //  0037  GETMBR	R12	R12	K19
      0x242C160C,  //  0038  GT	R11	R11	R12
      0x782E0028,  //  0039  JMPF	R11	#0063
      0x602C0012,  //  003A  GETGBL	R11	G18
      0x7C2C0000,  //  003B  CALL	R11	0
      0x5C241600,  //  003C  MOVE	R9	R11
      0x602C0015,  //  003D  GETGBL	R11	G21
      0x5432002F,  //  003E  LDINT	R12	48
      0x7C2C0200,  //  003F  CALL	R11	1
      0x8C300B14,  //  0040  GETMET	R12	R5	K20
      0x7C300200,  //  0041  CALL	R12	1
      0x8C340115,  //  0042  GETMET	R13	R0	K21
      0x5C3C1600,  //  0043  MOVE	R15	R11
      0x5C400400,  //  0044  MOVE	R16	R2
      0x5C441800,  //  0045  MOVE	R17	R12
      0x50480000,  //  0046  LDBOOL	R18	0	0
      0x7C340A00,  //  0047  CALL	R13	5
      0x8C341316,  //  0048  GETMET	R13	R9	K22
      0x5C3C1600,  //  0049  MOVE	R15	R11
      0x7C340400,  //  004A  CALL	R13	2
      0x60340010,  //  004B  GETGBL	R13	G16
      0x88381117,  //  004C  GETMBR	R14	R8	K23
      0x7C340200,  //  004D  CALL	R13	1
      0xA802000F,  //  004E  EXBLK	0	#005F
      0x5C381A00,  //  004F  MOVE	R14	R13
      0x7C380000,  //  0050  CALL	R14	0
      0x603C0015,  //  0051  GETGBL	R15	G21
      0x5442002F,  //  0052  LDINT	R16	48
      0x7C3C0200,  //  0053  CALL	R15	1
      0x5C2C1E00,  //  0054  MOVE	R11	R15
      0x8C3C0115,  //  0055  GETMET	R15	R0	K21
      0x5C441600,  //  0056  MOVE	R17	R11
      0x5C480400,  //  0057  MOVE	R18	R2
      0x5C4C1C00,  //  0058  MOVE	R19	R14
      0x50500200,  //  0059  LDBOOL	R20	1	0
      0x7C3C0A00,  //  005A  CALL	R15	5
      0x8C3C1316,  //  005B  GETMET	R15	R9	K22
      0x5C441600,  //  005C  MOVE	R17	R11
      0x7C3C0400,  //  005D  CALL	R15	2
      0x7001FFEF,  //  005E  JMP		#004F
      0x58340018,  //  005F  LDCONST	R13	K24
      0xAC340200,  //  0060  CATCH	R13	1	0
      0xB0080000,  //  0061  RAISE	2	R0	R0
      0x70020008,  //  0062  JMP		#006C
      0x602C0015,  //  0063  GETGBL	R11	G21
      0x5432002F,  //  0064  LDINT	R12	48
      0x7C2C0200,  //  0065  CALL	R11	1
      0x5C241600,  //  0066  MOVE	R9	R11
      0x8C2C0115,  //  0067  GETMET	R11	R0	K21
      0x5C341200,  //  0068  MOVE	R13	R9
      0x5C380400,  //  0069  MOVE	R14	R2
      0x5C3C1000,  //  006A  MOVE	R15	R8
      0x7C2C0800,  //  006B  CALL	R11	4
      0xB82E0400,  //  006C  GETNGBL	R11	K2
      0x8C2C1703,  //  006D  GETMET	R11	R11	K3
      0x58340004,  //  006E  LDCONST	R13	K4
      0x7C2C0400,  //  006F  CALL	R11	2
      0x782E000A,  //  0070  JMPF	R11	#007C
      0x78120009,  //  0071  JMPF	R4	#007C
      0xB82E3200,  //  0072  GETNGBL	R11	K25
      0x60300018,  //  0073  GETGBL	R12	G24
      0x5834001A,  //  0074  LDCONST	R13	K26
      0x8838071B,  //  0075  GETMBR	R14	R3	K27
      0x5C3C0400,  //  0076  MOVE	R15	R2
      0x5C400C00,  //  0077  MOVE	R16	R6
      0x5C441400,  //  0078  MOVE	R17	R10
      0x7C300A00,  //  0079  CALL	R12	5
      0x58340004,  //  007A  LDCONST	R13	K4
      0x7C2C0400,  //  007B  CALL	R11	2
      0x70020026,  //  007C  JMP		#00A4
      0x8828050B,  //  007D  GETMBR	R10	R2	K11
      0x4C2C0000,  //  007E  LDNIL	R11
      0x2028140B,  //  007F  NE	R10	R10	R11
      0x782A0022,  //  0080  JMPF	R10	#00A4
      0x781E0021,  //  0081  JMPF	R7	#00A4
      0x60280015,  //  0082  GETGBL	R10	G21
      0x542E002F,  //  0083  LDINT	R11	48
      0x7C280200,  //  0084  CALL	R10	1
      0x5C241400,  //  0085  MOVE	R9	R10
      0x8C28011C,  //  0086  GETMET	R10	R0	K28
      0x5C301200,  //  0087  MOVE	R12	R9
      0x5C340400,  //  0088  MOVE	R13	R2
      0x8838050B,  //  0089  GETMBR	R14	R2	K11
      0x7C280800,  //  008A  CALL	R10	4
      0xB82A0400,  //  008B  GETNGBL	R10	K2
      0x8C281503,  //  008C  GETMET	R10	R10	K3
      0x58300004,  //  008D  LDCONST	R12	K4
      0x7C280400,  //  008E  CALL	R10	2
      0x782A0013,  //  008F  JMPF	R10	#00A4
      0xB82A3200,  //  0090  GETNGBL	R10	K25
      0x602C0018,  //  0091  GETGBL	R11	G24
      0x5830001D,  //  0092  LDCONST	R12	K29
      0x8834071B,  //  0093  GETMBR	R13	R3	K27
      0x60380008,  //  0094  GETGBL	R14	G8
      0x5C3C0400,  //  0095  MOVE	R15	R2
      0x7C380200,  //  0096  CALL	R14	1
      0x5C3C0C00,  //  0097  MOVE	R15	R6
      0x8840050B,  //  0098  GETMBR	R16	R2	K11
      0x8844050B,  //  0099  GETMBR	R17	R2	K11
      0xB84A0000,  //  009A  GETNGBL	R18	K0
      0x8848251E,  //  009B  GETMBR	R18	R18	K30
      0x1C442212,  //  009C  EQ	R17	R17	R18
      0x78460001,  //  009D  JMPF	R17	#00A0
      0x5844001E,  //  009E  LDCONST	R17	K30
      0x70020000,  //  009F  JMP		#00A1
      0x5844000A,  //  00A0  LDCONST	R17	K10
      0x7C2C0C00,  //  00A1  CALL	R11	6
      0x58300004,  //  00A2  LDCONST	R12	K4
      0x7C280400,  //  00A3  CALL	R10	2
      0x80041200,  //  00A4  RET	1	R9
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: attributedata2raw
********************************************************************/
extern const bclass be_class_Matter_IM;
be_local_closure(class_Matter_IM_attributedata2raw,   /* name */
  be_nested_proto(
    11,                          /* nstack */
    5,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_IM, 
    1,                          /* has constants */
    ( &(const bvalue[ 7]) {     /* constants */
    /* K0   */  be_nested_str_weak(add),
    /* K1   */  be_const_int(355795236),
    /* K2   */  be_const_int(1),
    /* K3   */  be_nested_str_weak(path2raw),
    /* K4   */  be_nested_str_weak(tag_sub),
    /* K5   */  be_const_int(2),
    /* K6   */  be_nested_str_weak(tlv2raw),
    }),
    be_str_weak(attributedata2raw),
    &be_const_str_solidified,
    ( &(const binstruction[23]) {  /* code */
      0x8C140300,  //  0000  GETMET	R5	R1	K0
      0x581C0001,  //  0001  LDCONST	R7	K1
      0x5421FFFB,  //  0002  LDINT	R8	-4
      0x7C140600,  //  0003  CALL	R5	3
      0x8C140300,  //  0004  GETMET	R5	R1	K0
      0x581C0002,  //  0005  LDCONST	R7	K2
      0x5421FFFD,  //  0006  LDINT	R8	-2
      0x7C140600,  //  0007  CALL	R5	3
      0x8C140103,  //  0008  GETMET	R5	R0	K3
      0x5C1C0200,  //  0009  MOVE	R7	R1
      0x5C200400,  //  000A  MOVE	R8	R2
      0x58240002,  //  000B  LDCONST	R9	K2
      0x5C280800,  //  000C  MOVE	R10	R4
      0x7C140A00,  //  000D  CALL	R5	5
      0x900E0905,  //  000E  SETMBR	R3	K4	K5
      0x8C140706,  //  000F  GETMET	R5	R3	K6
      0x5C1C0200,  //  0010  MOVE	R7	R1
      0x7C140400,  //  0011  CALL	R5	2
      0x8C140300,  //  0012  GETMET	R5	R1	K0
      0x541E1817,  //  0013  LDINT	R7	6168
      0x5421FFFD,  //  0014  LDINT	R8	-2
      0x7C140600,  //  0015  CALL	R5	3
      0x80000000,  //  0016  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: attributestatus2raw
********************************************************************/
extern const bclass be_class_Matter_IM;
be_local_closure(class_Matter_IM_attributestatus2raw,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    4,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_IM, 
    1,                          /* has constants */
    ( &(const bvalue[ 6]) {     /* constants */
    /* K0   */  be_nested_str_weak(add),
    /* K1   */  be_const_int(1),
    /* K2   */  be_nested_str_weak(path2raw),
    /* K3   */  be_const_int(0),
    /* K4   */  be_nested_str_weak(status),
    /* K5   */  be_const_int(2),
    }),
    be_str_weak(attributestatus2raw),
    &be_const_str_solidified,
    ( &(const binstruction[47]) {  /* code */
      0x8C100300,  //  0000  GETMET	R4	R1	K0
      0x541A0014,  //  0001  LDINT	R6	21
      0x581C0001,  //  0002  LDCONST	R7	K1
      0x7C100600,  //  0003  CALL	R4	3
      0x8C100300,  //  0004  GETMET	R4	R1	K0
      0x541A34FF,  //  0005  LDINT	R6	13568
      0x541DFFFD,  //  0006  LDINT	R7	-2
      0x7C100600,  //  0007  CALL	R4	3
      0x8C100102,  //  0008  GETMET	R4	R0	K2
      0x5C180200,  //  0009  MOVE	R6	R1
      0x5C1C0400,  //  000A  MOVE	R7	R2
      0x58200003,  //  000B  LDCONST	R8	K3
      0x7C100800,  //  000C  CALL	R4	4
      0x8C100300,  //  000D  GETMET	R4	R1	K0
      0x541A3500,  //  000E  LDINT	R6	13569
      0x541DFFFD,  //  000F  LDINT	R7	-2
      0x7C100600,  //  0010  CALL	R4	3
      0x88100504,  //  0011  GETMBR	R4	R2	K4
      0x541600FE,  //  0012  LDINT	R5	255
      0x18100805,  //  0013  LE	R4	R4	R5
      0x78120008,  //  0014  JMPF	R4	#001E
      0x8C100300,  //  0015  GETMET	R4	R1	K0
      0x541A23FF,  //  0016  LDINT	R6	9216
      0x541DFFFD,  //  0017  LDINT	R7	-2
      0x7C100600,  //  0018  CALL	R4	3
      0x8C100300,  //  0019  GETMET	R4	R1	K0
      0x88180504,  //  001A  GETMBR	R6	R2	K4
      0x581C0001,  //  001B  LDCONST	R7	K1
      0x7C100600,  //  001C  CALL	R4	3
      0x70020007,  //  001D  JMP		#0026
      0x8C100300,  //  001E  GETMET	R4	R1	K0
      0x541A24FF,  //  001F  LDINT	R6	9472
      0x541DFFFD,  //  0020  LDINT	R7	-2
      0x7C100600,  //  0021  CALL	R4	3
      0x8C100300,  //  0022  GETMET	R4	R1	K0
      0x88180504,  //  0023  GETMBR	R6	R2	K4
      0x581C0005,  //  0024  LDCONST	R7	K5
      0x7C100600,  //  0025  CALL	R4	3
      0x8C100300,  //  0026  GETMET	R4	R1	K0
      0x541A1817,  //  0027  LDINT	R6	6168
      0x541DFFFD,  //  0028  LDINT	R7	-2
      0x7C100600,  //  0029  CALL	R4	3
      0x8C100300,  //  002A  GETMET	R4	R1	K0
      0x541A0017,  //  002B  LDINT	R6	24
      0x581C0001,  //  002C  LDCONST	R7	K1
      0x7C100600,  //  002D  CALL	R4	3
      0x80000000,  //  002E  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: process_status_response
********************************************************************/
extern const bclass be_class_Matter_IM;
be_local_closure(class_Matter_IM_process_status_response,   /* name */
  be_nested_proto(
    10,                          /* nstack */
    3,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_IM, 
    1,                          /* has constants */
    ( &(const bvalue[15]) {     /* constants */
    /* K0   */  be_nested_str_weak(findsubval),
    /* K1   */  be_const_int(0),
    /* K2   */  be_nested_str_weak(find_sendqueue_by_exchangeid),
    /* K3   */  be_nested_str_weak(exchange_id),
    /* K4   */  be_nested_str_weak(matter),
    /* K5   */  be_nested_str_weak(SUCCESS),
    /* K6   */  be_nested_str_weak(status_ok_received),
    /* K7   */  be_nested_str_weak(log),
    /* K8   */  be_nested_str_weak(MTR_X3A_X20_X3EOK_X20_X20_X20_X20_X20_X20_X20_X20_X28_X256i_X29_X20exch_X3D_X25i_X20not_X20found),
    /* K9   */  be_nested_str_weak(session),
    /* K10  */  be_nested_str_weak(local_session_id),
    /* K11  */  be_nested_str_weak(MTR_X3A_X20_X3EStatus_X20_X20_X20_X20ERROR_X20_X3D_X200x_X2502X),
    /* K12  */  be_const_int(3),
    /* K13  */  be_nested_str_weak(status_error_received),
    /* K14  */  be_nested_str_weak(remove_sendqueue_by_exchangeid),
    }),
    be_str_weak(process_status_response),
    &be_const_str_solidified,
    ( &(const binstruction[43]) {  /* code */
      0x8C0C0500,  //  0000  GETMET	R3	R2	K0
      0x58140001,  //  0001  LDCONST	R5	K1
      0x541A00FE,  //  0002  LDINT	R6	255
      0x7C0C0600,  //  0003  CALL	R3	3
      0x8C100102,  //  0004  GETMET	R4	R0	K2
      0x88180303,  //  0005  GETMBR	R6	R1	K3
      0x7C100400,  //  0006  CALL	R4	2
      0xB8160800,  //  0007  GETNGBL	R5	K4
      0x88140B05,  //  0008  GETMBR	R5	R5	K5
      0x1C140605,  //  0009  EQ	R5	R3	R5
      0x7816000F,  //  000A  JMPF	R5	#001B
      0x78120004,  //  000B  JMPF	R4	#0011
      0x8C140906,  //  000C  GETMET	R5	R4	K6
      0x5C1C0200,  //  000D  MOVE	R7	R1
      0x7C140400,  //  000E  CALL	R5	2
      0x80040A00,  //  000F  RET	1	R5
      0x70020008,  //  0010  JMP		#001A
      0xB8160E00,  //  0011  GETNGBL	R5	K7
      0x60180018,  //  0012  GETGBL	R6	G24
      0x581C0008,  //  0013  LDCONST	R7	K8
      0x88200309,  //  0014  GETMBR	R8	R1	K9
      0x8820110A,  //  0015  GETMBR	R8	R8	K10
      0x88240303,  //  0016  GETMBR	R9	R1	K3
      0x7C180600,  //  0017  CALL	R6	3
      0x541E0003,  //  0018  LDINT	R7	4
      0x7C140400,  //  0019  CALL	R5	2
      0x7002000D,  //  001A  JMP		#0029
      0xB8160E00,  //  001B  GETNGBL	R5	K7
      0x60180018,  //  001C  GETGBL	R6	G24
      0x581C000B,  //  001D  LDCONST	R7	K11
      0x5C200600,  //  001E  MOVE	R8	R3
      0x7C180400,  //  001F  CALL	R6	2
      0x581C000C,  //  0020  LDCONST	R7	K12
      0x7C140400,  //  0021  CALL	R5	2
      0x78120005,  //  0022  JMPF	R4	#0029
      0x8C14090D,  //  0023  GETMET	R5	R4	K13
      0x5C1C0200,  //  0024  MOVE	R7	R1
      0x7C140400,  //  0025  CALL	R5	2
      0x8C14010E,  //  0026  GETMET	R5	R0	K14
      0x881C0303,  //  0027  GETMBR	R7	R1	K3
      0x7C140400,  //  0028  CALL	R5	2
      0x50140000,  //  0029  LDBOOL	R5	0	0
      0x80040A00,  //  002A  RET	1	R5
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: find_sendqueue_by_exchangeid
********************************************************************/
extern const bclass be_class_Matter_IM;
be_local_closure(class_Matter_IM_find_sendqueue_by_exchangeid,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_IM, 
    1,                          /* has constants */
    ( &(const bvalue[ 4]) {     /* constants */
    /* K0   */  be_const_int(0),
    /* K1   */  be_nested_str_weak(send_queue),
    /* K2   */  be_nested_str_weak(get_exchangeid),
    /* K3   */  be_const_int(1),
    }),
    be_str_weak(find_sendqueue_by_exchangeid),
    &be_const_str_solidified,
    ( &(const binstruction[22]) {  /* code */
      0x4C080000,  //  0000  LDNIL	R2
      0x1C080202,  //  0001  EQ	R2	R1	R2
      0x780A0001,  //  0002  JMPF	R2	#0005
      0x4C080000,  //  0003  LDNIL	R2
      0x80040400,  //  0004  RET	1	R2
      0x58080000,  //  0005  LDCONST	R2	K0
      0x600C000C,  //  0006  GETGBL	R3	G12
      0x88100101,  //  0007  GETMBR	R4	R0	K1
      0x7C0C0200,  //  0008  CALL	R3	1
      0x140C0403,  //  0009  LT	R3	R2	R3
      0x780E0008,  //  000A  JMPF	R3	#0014
      0x880C0101,  //  000B  GETMBR	R3	R0	K1
      0x940C0602,  //  000C  GETIDX	R3	R3	R2
      0x8C100702,  //  000D  GETMET	R4	R3	K2
      0x7C100200,  //  000E  CALL	R4	1
      0x1C100801,  //  000F  EQ	R4	R4	R1
      0x78120000,  //  0010  JMPF	R4	#0012
      0x80040600,  //  0011  RET	1	R3
      0x00080503,  //  0012  ADD	R2	R2	K3
      0x7001FFF1,  //  0013  JMP		#0006
      0x4C0C0000,  //  0014  LDNIL	R3
      0x80040600,  //  0015  RET	1	R3
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: send_status
********************************************************************/
extern const bclass be_class_Matter_IM;
be_local_closure(class_Matter_IM_send_status,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    3,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_IM, 
    1,                          /* has constants */
    ( &(const bvalue[ 4]) {     /* constants */
    /* K0   */  be_nested_str_weak(send_queue),
    /* K1   */  be_nested_str_weak(push),
    /* K2   */  be_nested_str_weak(matter),
    /* K3   */  be_nested_str_weak(IM_Status),
    }),
    be_str_weak(send_status),
    &be_const_str_solidified,
    ( &(const binstruction[ 9]) {  /* code */
      0x880C0100,  //  0000  GETMBR	R3	R0	K0
      0x8C0C0701,  //  0001  GETMET	R3	R3	K1
      0xB8160400,  //  0002  GETNGBL	R5	K2
      0x8C140B03,  //  0003  GETMET	R5	R5	K3
      0x5C1C0200,  //  0004  MOVE	R7	R1
      0x5C200400,  //  0005  MOVE	R8	R2
      0x7C140600,  //  0006  CALL	R5	3
      0x7C0C0400,  //  0007  CALL	R3	2
      0x80000000,  //  0008  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: process_timed_request
********************************************************************/
extern const bclass be_class_Matter_IM;
be_local_closure(class_Matter_IM_process_timed_request,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    3,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_IM, 
    1,                          /* has constants */
    ( &(const bvalue[11]) {     /* constants */
    /* K0   */  be_nested_str_weak(matter),
    /* K1   */  be_nested_str_weak(TimedRequestMessage),
    /* K2   */  be_nested_str_weak(from_TLV),
    /* K3   */  be_nested_str_weak(log),
    /* K4   */  be_nested_str_weak(MTR_X3A_X20_X3ECommand_X20_X20_X20_X28_X256i_X29_X20TimedRequest_X3D_X25i),
    /* K5   */  be_nested_str_weak(session),
    /* K6   */  be_nested_str_weak(local_session_id),
    /* K7   */  be_nested_str_weak(timeout),
    /* K8   */  be_const_int(3),
    /* K9   */  be_nested_str_weak(send_status),
    /* K10  */  be_nested_str_weak(SUCCESS),
    }),
    be_str_weak(process_timed_request),
    &be_const_str_solidified,
    ( &(const binstruction[22]) {  /* code */
      0xB80E0000,  //  0000  GETNGBL	R3	K0
      0x8C0C0701,  //  0001  GETMET	R3	R3	K1
      0x7C0C0200,  //  0002  CALL	R3	1
      0x8C0C0702,  //  0003  GETMET	R3	R3	K2
      0x5C140400,  //  0004  MOVE	R5	R2
      0x7C0C0400,  //  0005  CALL	R3	2
      0xB8120600,  //  0006  GETNGBL	R4	K3
      0x60140018,  //  0007  GETGBL	R5	G24
      0x58180004,  //  0008  LDCONST	R6	K4
      0x881C0305,  //  0009  GETMBR	R7	R1	K5
      0x881C0F06,  //  000A  GETMBR	R7	R7	K6
      0x88200707,  //  000B  GETMBR	R8	R3	K7
      0x7C140600,  //  000C  CALL	R5	3
      0x58180008,  //  000D  LDCONST	R6	K8
      0x7C100400,  //  000E  CALL	R4	2
      0x8C100109,  //  000F  GETMET	R4	R0	K9
      0x5C180200,  //  0010  MOVE	R6	R1
      0xB81E0000,  //  0011  GETNGBL	R7	K0
      0x881C0F0A,  //  0012  GETMBR	R7	R7	K10
      0x7C100600,  //  0013  CALL	R4	3
      0x50100200,  //  0014  LDBOOL	R4	1	0
      0x80040800,  //  0015  RET	1	R4
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: process_read_or_subscribe_request_event_pull
********************************************************************/
extern const bclass be_class_Matter_IM;
be_local_closure(class_Matter_IM_process_read_or_subscribe_request_event_pull,   /* name */
  be_nested_proto(
    24,                          /* nstack */
    3,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_IM, 
    1,                          /* has constants */
    ( &(const bvalue[31]) {     /* constants */
    /* K0   */  be_nested_str_weak(event_requests),
    /* K1   */  be_nested_str_weak(get_node_id),
    /* K2   */  be_const_int(0),
    /* K3   */  be_const_int(1),
    /* K4   */  be_nested_str_weak(parse_event_filters_min_no),
    /* K5   */  be_nested_str_weak(event_filters),
    /* K6   */  be_nested_str_weak(matter),
    /* K7   */  be_nested_str_weak(EventGenerator),
    /* K8   */  be_nested_str_weak(device),
    /* K9   */  be_nested_str_weak(start),
    /* K10  */  be_nested_str_weak(endpoint),
    /* K11  */  be_nested_str_weak(cluster),
    /* K12  */  be_nested_str_weak(event),
    /* K13  */  be_nested_str_weak(push),
    /* K14  */  be_nested_str_weak(tasmota),
    /* K15  */  be_nested_str_weak(loglevel),
    /* K16  */  be_const_int(3),
    /* K17  */  be_nested_str_weak(),
    /* K18  */  be_nested_str_weak(get_event_name),
    /* K19  */  be_nested_str_weak(_X28),
    /* K20  */  be_nested_str_weak(_X29_X20),
    /* K21  */  be_nested_str_weak(_X2502X),
    /* K22  */  be_nested_str_weak(_X2A_X2A),
    /* K23  */  be_nested_str_weak(_X2504X),
    /* K24  */  be_nested_str_weak(_X2A_X2A_X2A_X2A),
    /* K25  */  be_nested_str_weak(_X20_X28_X3E_X25s_X29),
    /* K26  */  be_nested_str_weak(log),
    /* K27  */  be_nested_str_weak(MTR_X3A_X20_X3ERead_Event_X28_X256i_X29_X20_X5B_X25s_X5D_X25s_X2F_X25s_X20_X25s_X25s),
    /* K28  */  be_nested_str_weak(session),
    /* K29  */  be_nested_str_weak(local_session_id),
    /* K30  */  be_nested_str_weak(stop_iteration),
    }),
    be_str_weak(process_read_or_subscribe_request_event_pull),
    &be_const_str_solidified,
    ( &(const binstruction[140]) {  /* code */
      0x880C0300,  //  0000  GETMBR	R3	R1	K0
      0x4C100000,  //  0001  LDNIL	R4
      0x200C0604,  //  0002  NE	R3	R3	R4
      0x780E0085,  //  0003  JMPF	R3	#008A
      0x4C0C0000,  //  0004  LDNIL	R3
      0x4C100000,  //  0005  LDNIL	R4
      0x20100404,  //  0006  NE	R4	R2	R4
      0x78120002,  //  0007  JMPF	R4	#000B
      0x8C100501,  //  0008  GETMET	R4	R2	K1
      0x7C100200,  //  0009  CALL	R4	1
      0x70020000,  //  000A  JMP		#000C
      0x4C100000,  //  000B  LDNIL	R4
      0x88140300,  //  000C  GETMBR	R5	R1	K0
      0x78160003,  //  000D  JMPF	R5	#0012
      0x6014000C,  //  000E  GETGBL	R5	G12
      0x88180300,  //  000F  GETMBR	R6	R1	K0
      0x7C140200,  //  0010  CALL	R5	1
      0x70020000,  //  0011  JMP		#0013
      0x58140002,  //  0012  LDCONST	R5	K2
      0x24180B03,  //  0013  GT	R6	R5	K3
      0x781A0002,  //  0014  JMPF	R6	#0018
      0x60180012,  //  0015  GETGBL	R6	G18
      0x7C180000,  //  0016  CALL	R6	0
      0x5C0C0C00,  //  0017  MOVE	R3	R6
      0x8C180104,  //  0018  GETMET	R6	R0	K4
      0x88200305,  //  0019  GETMBR	R8	R1	K5
      0x5C240800,  //  001A  MOVE	R9	R4
      0x7C180600,  //  001B  CALL	R6	3
      0x881C0300,  //  001C  GETMBR	R7	R1	K0
      0x781E006A,  //  001D  JMPF	R7	#0089
      0x601C0010,  //  001E  GETGBL	R7	G16
      0x88200300,  //  001F  GETMBR	R8	R1	K0
      0x7C1C0200,  //  0020  CALL	R7	1
      0xA8020063,  //  0021  EXBLK	0	#0086
      0x5C200E00,  //  0022  MOVE	R8	R7
      0x7C200000,  //  0023  CALL	R8	0
      0xB8260C00,  //  0024  GETNGBL	R9	K6
      0x8C241307,  //  0025  GETMET	R9	R9	K7
      0x882C0108,  //  0026  GETMBR	R11	R0	K8
      0x7C240400,  //  0027  CALL	R9	2
      0x8C281309,  //  0028  GETMET	R10	R9	K9
      0x8830110A,  //  0029  GETMBR	R12	R8	K10
      0x8834110B,  //  002A  GETMBR	R13	R8	K11
      0x8838110C,  //  002B  GETMBR	R14	R8	K12
      0x5C3C0C00,  //  002C  MOVE	R15	R6
      0x7C280A00,  //  002D  CALL	R10	5
      0x24280B03,  //  002E  GT	R10	R5	K3
      0x782A0003,  //  002F  JMPF	R10	#0034
      0x8C28070D,  //  0030  GETMET	R10	R3	K13
      0x5C301200,  //  0031  MOVE	R12	R9
      0x7C280400,  //  0032  CALL	R10	2
      0x70020000,  //  0033  JMP		#0035
      0x5C0C1200,  //  0034  MOVE	R3	R9
      0xB82A1C00,  //  0035  GETNGBL	R10	K14
      0x8C28150F,  //  0036  GETMET	R10	R10	K15
      0x58300010,  //  0037  LDCONST	R12	K16
      0x7C280400,  //  0038  CALL	R10	2
      0x782A004A,  //  0039  JMPF	R10	#0085
      0x58280011,  //  003A  LDCONST	R10	K17
      0x882C110B,  //  003B  GETMBR	R11	R8	K11
      0x4C300000,  //  003C  LDNIL	R12
      0x202C160C,  //  003D  NE	R11	R11	R12
      0x782E0011,  //  003E  JMPF	R11	#0051
      0x882C110C,  //  003F  GETMBR	R11	R8	K12
      0x4C300000,  //  0040  LDNIL	R12
      0x202C160C,  //  0041  NE	R11	R11	R12
      0x782E000D,  //  0042  JMPF	R11	#0051
      0xB82E0C00,  //  0043  GETNGBL	R11	K6
      0x8C2C1712,  //  0044  GETMET	R11	R11	K18
      0x8834110B,  //  0045  GETMBR	R13	R8	K11
      0x8838110C,  //  0046  GETMBR	R14	R8	K12
      0x7C2C0600,  //  0047  CALL	R11	3
      0x5C281600,  //  0048  MOVE	R10	R11
      0x4C2C0000,  //  0049  LDNIL	R11
      0x202C140B,  //  004A  NE	R11	R10	R11
      0x782E0002,  //  004B  JMPF	R11	#004F
      0x002E260A,  //  004C  ADD	R11	K19	R10
      0x002C1714,  //  004D  ADD	R11	R11	K20
      0x70020000,  //  004E  JMP		#0050
      0x582C0011,  //  004F  LDCONST	R11	K17
      0x5C281600,  //  0050  MOVE	R10	R11
      0x882C110A,  //  0051  GETMBR	R11	R8	K10
      0x4C300000,  //  0052  LDNIL	R12
      0x202C160C,  //  0053  NE	R11	R11	R12
      0x782E0004,  //  0054  JMPF	R11	#005A
      0x602C0018,  //  0055  GETGBL	R11	G24
      0x58300015,  //  0056  LDCONST	R12	K21
      0x8834110A,  //  0057  GETMBR	R13	R8	K10
      0x7C2C0400,  //  0058  CALL	R11	2
      0x70020000,  //  0059  JMP		#005B
      0x582C0016,  //  005A  LDCONST	R11	K22
      0x8830110B,  //  005B  GETMBR	R12	R8	K11
      0x4C340000,  //  005C  LDNIL	R13
      0x2030180D,  //  005D  NE	R12	R12	R13
      0x78320004,  //  005E  JMPF	R12	#0064
      0x60300018,  //  005F  GETGBL	R12	G24
      0x58340017,  //  0060  LDCONST	R13	K23
      0x8838110B,  //  0061  GETMBR	R14	R8	K11
      0x7C300400,  //  0062  CALL	R12	2
      0x70020000,  //  0063  JMP		#0065
      0x58300018,  //  0064  LDCONST	R12	K24
      0x8834110C,  //  0065  GETMBR	R13	R8	K12
      0x4C380000,  //  0066  LDNIL	R14
      0x20341A0E,  //  0067  NE	R13	R13	R14
      0x78360004,  //  0068  JMPF	R13	#006E
      0x60340018,  //  0069  GETGBL	R13	G24
      0x58380015,  //  006A  LDCONST	R14	K21
      0x883C110C,  //  006B  GETMBR	R15	R8	K12
      0x7C340400,  //  006C  CALL	R13	2
      0x70020000,  //  006D  JMP		#006F
      0x58340016,  //  006E  LDCONST	R13	K22
      0x4C380000,  //  006F  LDNIL	R14
      0x20380C0E,  //  0070  NE	R14	R6	R14
      0x783A0004,  //  0071  JMPF	R14	#0077
      0x60380018,  //  0072  GETGBL	R14	G24
      0x583C0019,  //  0073  LDCONST	R15	K25
      0x5C400C00,  //  0074  MOVE	R16	R6
      0x7C380400,  //  0075  CALL	R14	2
      0x70020000,  //  0076  JMP		#0078
      0x58380011,  //  0077  LDCONST	R14	K17
      0xB83E3400,  //  0078  GETNGBL	R15	K26
      0x60400018,  //  0079  GETGBL	R16	G24
      0x5844001B,  //  007A  LDCONST	R17	K27
      0x8848051C,  //  007B  GETMBR	R18	R2	K28
      0x8848251D,  //  007C  GETMBR	R18	R18	K29
      0x5C4C1600,  //  007D  MOVE	R19	R11
      0x5C501800,  //  007E  MOVE	R20	R12
      0x5C541A00,  //  007F  MOVE	R21	R13
      0x5C581400,  //  0080  MOVE	R22	R10
      0x5C5C1C00,  //  0081  MOVE	R23	R14
      0x7C400E00,  //  0082  CALL	R16	7
      0x58440010,  //  0083  LDCONST	R17	K16
      0x7C3C0400,  //  0084  CALL	R15	2
      0x7001FF9B,  //  0085  JMP		#0022
      0x581C001E,  //  0086  LDCONST	R7	K30
      0xAC1C0200,  //  0087  CATCH	R7	1	0
      0xB0080000,  //  0088  RAISE	2	R0	R0
      0x80040600,  //  0089  RET	1	R3
      0x4C0C0000,  //  008A  LDNIL	R3
      0x80040600,  //  008B  RET	1	R3
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: every_second
********************************************************************/
extern const bclass be_class_Matter_IM;
be_local_closure(class_Matter_IM_every_second,   /* name */
  be_nested_proto(
    3,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_IM, 
    1,                          /* has constants */
    ( &(const bvalue[ 1]) {     /* constants */
    /* K0   */  be_nested_str_weak(expire_sendqueue),
    }),
    be_str_weak(every_second),
    &be_const_str_solidified,
    ( &(const binstruction[ 3]) {  /* code */
      0x8C040100,  //  0000  GETMET	R1	R0	K0
      0x7C040200,  //  0001  CALL	R1	1
      0x80000000,  //  0002  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: remove_sendqueue_by_exchangeid
********************************************************************/
extern const bclass be_class_Matter_IM;
be_local_closure(class_Matter_IM_remove_sendqueue_by_exchangeid,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_IM, 
    1,                          /* has constants */
    ( &(const bvalue[ 5]) {     /* constants */
    /* K0   */  be_const_int(0),
    /* K1   */  be_nested_str_weak(send_queue),
    /* K2   */  be_nested_str_weak(get_exchangeid),
    /* K3   */  be_nested_str_weak(remove),
    /* K4   */  be_const_int(1),
    }),
    be_str_weak(remove_sendqueue_by_exchangeid),
    &be_const_str_solidified,
    ( &(const binstruction[24]) {  /* code */
      0x4C080000,  //  0000  LDNIL	R2
      0x1C080202,  //  0001  EQ	R2	R1	R2
      0x780A0000,  //  0002  JMPF	R2	#0004
      0x80000400,  //  0003  RET	0
      0x58080000,  //  0004  LDCONST	R2	K0
      0x600C000C,  //  0005  GETGBL	R3	G12
      0x88100101,  //  0006  GETMBR	R4	R0	K1
      0x7C0C0200,  //  0007  CALL	R3	1
      0x140C0403,  //  0008  LT	R3	R2	R3
      0x780E000C,  //  0009  JMPF	R3	#0017
      0x880C0101,  //  000A  GETMBR	R3	R0	K1
      0x940C0602,  //  000B  GETIDX	R3	R3	R2
      0x8C0C0702,  //  000C  GETMET	R3	R3	K2
      0x7C0C0200,  //  000D  CALL	R3	1
      0x1C0C0601,  //  000E  EQ	R3	R3	R1
      0x780E0004,  //  000F  JMPF	R3	#0015
      0x880C0101,  //  0010  GETMBR	R3	R0	K1
      0x8C0C0703,  //  0011  GETMET	R3	R3	K3
      0x5C140400,  //  0012  MOVE	R5	R2
      0x7C0C0400,  //  0013  CALL	R3	2
      0x70020000,  //  0014  JMP		#0016
      0x00080504,  //  0015  ADD	R2	R2	K4
      0x7001FFED,  //  0016  JMP		#0005
      0x80000000,  //  0017  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: path2raw
********************************************************************/
extern const bclass be_class_Matter_IM;
be_local_closure(class_Matter_IM_path2raw,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    5,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_IM, 
    1,                          /* has constants */
    ( &(const bvalue[ 6]) {     /* constants */
    /* K0   */  be_nested_str_weak(add),
    /* K1   */  be_const_int(1),
    /* K2   */  be_nested_str_weak(endpoint),
    /* K3   */  be_const_int(2),
    /* K4   */  be_nested_str_weak(cluster),
    /* K5   */  be_nested_str_weak(attribute),
    }),
    be_str_weak(path2raw),
    &be_const_str_solidified,
    ( &(const binstruction[107]) {  /* code */
      0x8C140300,  //  0000  GETMET	R5	R1	K0
      0x541E0036,  //  0001  LDINT	R7	55
      0x58200001,  //  0002  LDCONST	R8	K1
      0x7C140600,  //  0003  CALL	R5	3
      0x8C140300,  //  0004  GETMET	R5	R1	K0
      0x5C1C0600,  //  0005  MOVE	R7	R3
      0x58200001,  //  0006  LDCONST	R8	K1
      0x7C140600,  //  0007  CALL	R5	3
      0x88140502,  //  0008  GETMBR	R5	R2	K2
      0x541A00FE,  //  0009  LDINT	R6	255
      0x18140A06,  //  000A  LE	R5	R5	R6
      0x78160008,  //  000B  JMPF	R5	#0015
      0x8C140300,  //  000C  GETMET	R5	R1	K0
      0x541E2401,  //  000D  LDINT	R7	9218
      0x5421FFFD,  //  000E  LDINT	R8	-2
      0x7C140600,  //  000F  CALL	R5	3
      0x8C140300,  //  0010  GETMET	R5	R1	K0
      0x881C0502,  //  0011  GETMBR	R7	R2	K2
      0x58200001,  //  0012  LDCONST	R8	K1
      0x7C140600,  //  0013  CALL	R5	3
      0x70020007,  //  0014  JMP		#001D
      0x8C140300,  //  0015  GETMET	R5	R1	K0
      0x541E2501,  //  0016  LDINT	R7	9474
      0x5421FFFD,  //  0017  LDINT	R8	-2
      0x7C140600,  //  0018  CALL	R5	3
      0x8C140300,  //  0019  GETMET	R5	R1	K0
      0x881C0502,  //  001A  GETMBR	R7	R2	K2
      0x58200003,  //  001B  LDCONST	R8	K3
      0x7C140600,  //  001C  CALL	R5	3
      0x88140504,  //  001D  GETMBR	R5	R2	K4
      0x541A00FE,  //  001E  LDINT	R6	255
      0x18140A06,  //  001F  LE	R5	R5	R6
      0x78160008,  //  0020  JMPF	R5	#002A
      0x8C140300,  //  0021  GETMET	R5	R1	K0
      0x541E2402,  //  0022  LDINT	R7	9219
      0x5421FFFD,  //  0023  LDINT	R8	-2
      0x7C140600,  //  0024  CALL	R5	3
      0x8C140300,  //  0025  GETMET	R5	R1	K0
      0x881C0504,  //  0026  GETMBR	R7	R2	K4
      0x58200001,  //  0027  LDCONST	R8	K1
      0x7C140600,  //  0028  CALL	R5	3
      0x70020014,  //  0029  JMP		#003F
      0x88140504,  //  002A  GETMBR	R5	R2	K4
      0x541AFFFE,  //  002B  LDINT	R6	65535
      0x18140A06,  //  002C  LE	R5	R5	R6
      0x78160008,  //  002D  JMPF	R5	#0037
      0x8C140300,  //  002E  GETMET	R5	R1	K0
      0x541E2502,  //  002F  LDINT	R7	9475
      0x5421FFFD,  //  0030  LDINT	R8	-2
      0x7C140600,  //  0031  CALL	R5	3
      0x8C140300,  //  0032  GETMET	R5	R1	K0
      0x881C0504,  //  0033  GETMBR	R7	R2	K4
      0x58200003,  //  0034  LDCONST	R8	K3
      0x7C140600,  //  0035  CALL	R5	3
      0x70020007,  //  0036  JMP		#003F
      0x8C140300,  //  0037  GETMET	R5	R1	K0
      0x541E2602,  //  0038  LDINT	R7	9731
      0x5421FFFD,  //  0039  LDINT	R8	-2
      0x7C140600,  //  003A  CALL	R5	3
      0x8C140300,  //  003B  GETMET	R5	R1	K0
      0x881C0504,  //  003C  GETMBR	R7	R2	K4
      0x54220003,  //  003D  LDINT	R8	4
      0x7C140600,  //  003E  CALL	R5	3
      0x88140505,  //  003F  GETMBR	R5	R2	K5
      0x541A00FE,  //  0040  LDINT	R6	255
      0x18140A06,  //  0041  LE	R5	R5	R6
      0x78160008,  //  0042  JMPF	R5	#004C
      0x8C140300,  //  0043  GETMET	R5	R1	K0
      0x541E2403,  //  0044  LDINT	R7	9220
      0x5421FFFD,  //  0045  LDINT	R8	-2
      0x7C140600,  //  0046  CALL	R5	3
      0x8C140300,  //  0047  GETMET	R5	R1	K0
      0x881C0505,  //  0048  GETMBR	R7	R2	K5
      0x58200001,  //  0049  LDCONST	R8	K1
      0x7C140600,  //  004A  CALL	R5	3
      0x70020014,  //  004B  JMP		#0061
      0x88140505,  //  004C  GETMBR	R5	R2	K5
      0x541AFFFE,  //  004D  LDINT	R6	65535
      0x18140A06,  //  004E  LE	R5	R5	R6
      0x78160008,  //  004F  JMPF	R5	#0059
      0x8C140300,  //  0050  GETMET	R5	R1	K0
      0x541E2503,  //  0051  LDINT	R7	9476
      0x5421FFFD,  //  0052  LDINT	R8	-2
      0x7C140600,  //  0053  CALL	R5	3
      0x8C140300,  //  0054  GETMET	R5	R1	K0
      0x881C0505,  //  0055  GETMBR	R7	R2	K5
      0x58200003,  //  0056  LDCONST	R8	K3
      0x7C140600,  //  0057  CALL	R5	3
      0x70020007,  //  0058  JMP		#0061
      0x8C140300,  //  0059  GETMET	R5	R1	K0
      0x541E2603,  //  005A  LDINT	R7	9732
      0x5421FFFD,  //  005B  LDINT	R8	-2
      0x7C140600,  //  005C  CALL	R5	3
      0x8C140300,  //  005D  GETMET	R5	R1	K0
      0x881C0505,  //  005E  GETMBR	R7	R2	K5
      0x54220003,  //  005F  LDINT	R8	4
      0x7C140600,  //  0060  CALL	R5	3
      0x78120003,  //  0061  JMPF	R4	#0066
      0x8C140300,  //  0062  GETMET	R5	R1	K0
      0x541E3404,  //  0063  LDINT	R7	13317
      0x5421FFFD,  //  0064  LDINT	R8	-2
      0x7C140600,  //  0065  CALL	R5	3
      0x8C140300,  //  0066  GETMET	R5	R1	K0
      0x541E0017,  //  0067  LDINT	R7	24
      0x58200001,  //  0068  LDCONST	R8	K1
      0x7C140600,  //  0069  CALL	R5	3
      0x80000000,  //  006A  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: parse_event_filters_min_no
********************************************************************/
extern const bclass be_class_Matter_IM;
be_local_closure(class_Matter_IM_parse_event_filters_min_no,   /* name */
  be_nested_proto(
    14,                          /* nstack */
    2,                          /* argc */
    4,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    &be_class_Matter_IM, 
    1,                          /* has constants */
    ( &(const bvalue[11]) {     /* constants */
    /* K0   */  be_const_class(be_class_Matter_IM),
    /* K1   */  be_nested_str_weak(int64),
    /* K2   */  be_nested_str_weak(toint64),
    /* K3   */  be_nested_str_weak(node),
    /* K4   */  be_nested_str_weak(tobytes),
    /* K5   */  be_nested_str_weak(tasmota),
    /* K6   */  be_nested_str_weak(log),
    /* K7   */  be_nested_str_weak(MTR_X3A_X20node_id_X20filter_X20_X25s_X20doesn_X27t_X20match_X20_X25s),
    /* K8   */  be_nested_str_weak(tohex),
    /* K9   */  be_nested_str_weak(event_min),
    /* K10  */  be_nested_str_weak(stop_iteration),
    }),
    be_str_weak(parse_event_filters_min_no),
    &be_const_str_solidified,
    ( &(const binstruction[50]) {  /* code */
      0x58080000,  //  0000  LDCONST	R2	K0
      0x4C0C0000,  //  0001  LDNIL	R3
      0x4C100000,  //  0002  LDNIL	R4
      0x20100004,  //  0003  NE	R4	R0	R4
      0x7812002B,  //  0004  JMPF	R4	#0031
      0x60100010,  //  0005  GETGBL	R4	G16
      0x5C140000,  //  0006  MOVE	R5	R0
      0x7C100200,  //  0007  CALL	R4	1
      0xA8020024,  //  0008  EXBLK	0	#002E
      0x5C140800,  //  0009  MOVE	R5	R4
      0x7C140000,  //  000A  CALL	R5	0
      0xB81A0200,  //  000B  GETNGBL	R6	K1
      0x8C180D02,  //  000C  GETMET	R6	R6	K2
      0x88200B03,  //  000D  GETMBR	R8	R5	K3
      0x7C180400,  //  000E  CALL	R6	2
      0x781A0012,  //  000F  JMPF	R6	#0023
      0x78060011,  //  0010  JMPF	R1	#0023
      0x881C0B03,  //  0011  GETMBR	R7	R5	K3
      0x8C1C0F04,  //  0012  GETMET	R7	R7	K4
      0x7C1C0200,  //  0013  CALL	R7	1
      0x201C0E01,  //  0014  NE	R7	R7	R1
      0x781E000C,  //  0015  JMPF	R7	#0023
      0xB81E0A00,  //  0016  GETNGBL	R7	K5
      0x8C1C0F06,  //  0017  GETMET	R7	R7	K6
      0x60240018,  //  0018  GETGBL	R9	G24
      0x58280007,  //  0019  LDCONST	R10	K7
      0x8C2C0D04,  //  001A  GETMET	R11	R6	K4
      0x7C2C0200,  //  001B  CALL	R11	1
      0x8C2C1708,  //  001C  GETMET	R11	R11	K8
      0x7C2C0200,  //  001D  CALL	R11	1
      0x8C300308,  //  001E  GETMET	R12	R1	K8
      0x7C300200,  //  001F  CALL	R12	1
      0x7C240600,  //  0020  CALL	R9	3
      0x7C1C0400,  //  0021  CALL	R7	2
      0x7001FFE5,  //  0022  JMP		#0009
      0xB81E0200,  //  0023  GETNGBL	R7	K1
      0x8C1C0F02,  //  0024  GETMET	R7	R7	K2
      0x88240B09,  //  0025  GETMBR	R9	R5	K9
      0x7C1C0400,  //  0026  CALL	R7	2
      0x4C200000,  //  0027  LDNIL	R8
      0x1C200608,  //  0028  EQ	R8	R3	R8
      0x74220001,  //  0029  JMPT	R8	#002C
      0x14200607,  //  002A  LT	R8	R3	R7
      0x78220000,  //  002B  JMPF	R8	#002D
      0x5C0C0E00,  //  002C  MOVE	R3	R7
      0x7001FFDA,  //  002D  JMP		#0009
      0x5810000A,  //  002E  LDCONST	R4	K10
      0xAC100200,  //  002F  CATCH	R4	1	0
      0xB0080000,  //  0030  RAISE	2	R0	R0
      0x80040600,  //  0031  RET	1	R3
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: Matter_IM
********************************************************************/
be_local_class(Matter_IM,
    6,
    NULL,
    be_nested_map(37,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_weak(process_read_request_pull, 32), be_const_closure(class_Matter_IM_process_read_request_pull_closure) },
        { be_const_key_weak(process_incoming_ack, 7), be_const_closure(class_Matter_IM_process_incoming_ack_closure) },
        { be_const_key_weak(process_invoke_request, -1), be_const_closure(class_Matter_IM_process_invoke_request_closure) },
        { be_const_key_weak(subscribe_request, -1), be_const_closure(class_Matter_IM_subscribe_request_closure) },
        { be_const_key_weak(path2raw, 21), be_const_closure(class_Matter_IM_path2raw_closure) },
        { be_const_key_weak(subs_shop, 33), be_const_var(1) },
        { be_const_key_weak(process_read_or_subscribe_request_pull, -1), be_const_closure(class_Matter_IM_process_read_or_subscribe_request_pull_closure) },
        { be_const_key_weak(invoke_request_solo, 11), be_const_var(4) },
        { be_const_key_weak(process_incoming, -1), be_const_closure(class_Matter_IM_process_incoming_closure) },
        { be_const_key_weak(process_invoke_request_solo, -1), be_const_closure(class_Matter_IM_process_invoke_request_solo_closure) },
        { be_const_key_weak(invokeresponse2raw, 34), be_const_closure(class_Matter_IM_invokeresponse2raw_closure) },
        { be_const_key_weak(tlv_solo, -1), be_const_var(5) },
        { be_const_key_weak(send_queue, -1), be_const_var(2) },
        { be_const_key_weak(remove_sendqueue_by_exchangeid, 15), be_const_closure(class_Matter_IM_remove_sendqueue_by_exchangeid_closure) },
        { be_const_key_weak(process_write_request, 26), be_const_closure(class_Matter_IM_process_write_request_closure) },
        { be_const_key_weak(read_single_attribute_to_bytes, -1), be_const_closure(class_Matter_IM_read_single_attribute_to_bytes_closure) },
        { be_const_key_weak(send_subscribe_update, -1), be_const_closure(class_Matter_IM_send_subscribe_update_closure) },
        { be_const_key_weak(device, -1), be_const_var(0) },
        { be_const_key_weak(send_subscribe_heartbeat, -1), be_const_closure(class_Matter_IM_send_subscribe_heartbeat_closure) },
        { be_const_key_weak(every_50ms, 28), be_const_closure(class_Matter_IM_every_50ms_closure) },
        { be_const_key_weak(process_write_response, 27), be_const_closure(class_Matter_IM_process_write_response_closure) },
        { be_const_key_weak(process_read_or_subscribe_request_event_pull, -1), be_const_closure(class_Matter_IM_process_read_or_subscribe_request_event_pull_closure) },
        { be_const_key_weak(send_ack_now, -1), be_const_closure(class_Matter_IM_send_ack_now_closure) },
        { be_const_key_weak(process_read_request_solo, 13), be_const_closure(class_Matter_IM_process_read_request_solo_closure) },
        { be_const_key_weak(attributedata2raw, 4), be_const_closure(class_Matter_IM_attributedata2raw_closure) },
        { be_const_key_weak(write_single_attribute_status_to_bytes, 30), be_const_closure(class_Matter_IM_write_single_attribute_status_to_bytes_closure) },
        { be_const_key_weak(process_status_response, -1), be_const_closure(class_Matter_IM_process_status_response_closure) },
        { be_const_key_weak(send_status, -1), be_const_closure(class_Matter_IM_send_status_closure) },
        { be_const_key_weak(find_sendqueue_by_exchangeid, -1), be_const_closure(class_Matter_IM_find_sendqueue_by_exchangeid_closure) },
        { be_const_key_weak(process_timed_request, -1), be_const_closure(class_Matter_IM_process_timed_request_closure) },
        { be_const_key_weak(attributestatus2raw, 35), be_const_closure(class_Matter_IM_attributestatus2raw_closure) },
        { be_const_key_weak(every_second, -1), be_const_closure(class_Matter_IM_every_second_closure) },
        { be_const_key_weak(init, 3), be_const_closure(class_Matter_IM_init_closure) },
        { be_const_key_weak(send_enqueued, -1), be_const_closure(class_Matter_IM_send_enqueued_closure) },
        { be_const_key_weak(expire_sendqueue, -1), be_const_closure(class_Matter_IM_expire_sendqueue_closure) },
        { be_const_key_weak(read_request_solo, -1), be_const_var(3) },
        { be_const_key_weak(parse_event_filters_min_no, -1), be_const_static_closure(class_Matter_IM_parse_event_filters_min_no_closure) },
    })),
    be_str_weak(Matter_IM)
);
/********************************************************************/
/* End of solidification */
