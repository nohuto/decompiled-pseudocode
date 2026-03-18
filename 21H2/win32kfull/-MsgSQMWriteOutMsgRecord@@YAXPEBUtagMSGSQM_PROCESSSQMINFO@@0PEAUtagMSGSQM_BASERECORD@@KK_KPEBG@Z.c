/*
 * XREFs of ?MsgSQMWriteOutMsgRecord@@YAXPEBUtagMSGSQM_PROCESSSQMINFO@@0PEAUtagMSGSQM_BASERECORD@@KK_KPEBG@Z @ 0x1C02190E0
 * Callers:
 *     ?MsgSQMFlushMsgRecord@@YAXPEAUtagPROCESSINFO@@0PEAUtagMSGSQM_MSGRECORD@@@Z @ 0x1C0218C00 (-MsgSQMFlushMsgRecord@@YAXPEAUtagPROCESSINFO@@0PEAUtagMSGSQM_MSGRECORD@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?WinSqmCreateStringStreamEntryEx@@YAXPEAU_SQM_STREAM_ENTRY_EX@@PEBG@Z @ 0x1C0219280 (-WinSqmCreateStringStreamEntryEx@@YAXPEAU_SQM_STREAM_ENTRY_EX@@PEBG@Z.c)
 */

void __fastcall MsgSQMWriteOutMsgRecord(
        const struct tagMSGSQM_PROCESSSQMINFO *a1,
        const struct tagMSGSQM_PROCESSSQMINFO *a2,
        struct tagMSGSQM_BASERECORD *a3,
        int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned __int16 *a7)
{
  int v11; // eax
  unsigned int v12; // r9d
  int v13; // eax
  int v14; // r8d
  unsigned __int16 *v15; // r8
  _QWORD v16[28]; // [rsp+38h] [rbp-D0h] BYREF

  memset(v16, 0, sizeof(v16));
  WinSqmCreateStringStreamEntryEx((struct _SQM_STREAM_ENTRY_EX *)v16, (const unsigned __int16 *)a1);
  LODWORD(v16[3]) = *((_DWORD *)a1 + 8);
  LODWORD(v16[5]) = *((_DWORD *)a1 + 9);
  v11 = *((_DWORD *)a1 + 10);
  v16[2] = 0x100000010LL;
  v16[4] = 0x100000010LL;
  v16[6] = 0x100000010LL;
  LODWORD(v16[7]) = v11;
  WinSqmCreateStringStreamEntryEx((struct _SQM_STREAM_ENTRY_EX *)&v16[8], (const unsigned __int16 *)a2);
  LODWORD(v16[11]) = *((_DWORD *)a2 + 8);
  LODWORD(v16[13]) = *((_DWORD *)a2 + 9);
  LODWORD(v16[15]) = *((_DWORD *)a2 + 10);
  LODWORD(v16[17]) = *(_DWORD *)a3;
  LODWORD(v16[19]) = *((unsigned __int16 *)a3 + 2);
  v13 = *((unsigned __int16 *)a3 + 3);
  HIDWORD(v16[10]) = v14;
  HIDWORD(v16[12]) = v14;
  HIDWORD(v16[14]) = v14;
  HIDWORD(v16[16]) = v14;
  HIDWORD(v16[18]) = v14;
  HIDWORD(v16[20]) = v14;
  HIDWORD(v16[22]) = v14;
  HIDWORD(v16[24]) = v14;
  v15 = a7;
  LODWORD(v16[21]) = v13;
  LODWORD(v16[25]) = a5;
  LODWORD(v16[10]) = v12;
  LODWORD(v16[12]) = v12;
  LODWORD(v16[14]) = v12;
  LODWORD(v16[16]) = v12;
  LODWORD(v16[18]) = v12;
  LODWORD(v16[20]) = v12;
  LODWORD(v16[22]) = v12;
  LODWORD(v16[23]) = a4;
  LODWORD(v16[24]) = v12;
  if ( a7 )
  {
    WinSqmCreateStringStreamEntryEx((struct _SQM_STREAM_ENTRY_EX *)&v16[26], a7);
  }
  else
  {
    v16[27] = a6;
    v16[26] = v12 | 0x300000000LL;
  }
  WinSqmAddToStreamEx(gSqmSession, (unsigned int)(v15 != 0LL) + 6266, 14LL, v16, 0);
}
