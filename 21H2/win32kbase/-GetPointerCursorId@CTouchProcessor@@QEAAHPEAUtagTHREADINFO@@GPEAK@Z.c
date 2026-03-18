/*
 * XREFs of ?GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1C01C93E4
 * Callers:
 *     NtUserGetPointerCursorId @ 0x1C0159D40 (NtUserGetPointerCursorId.c)
 * Callees:
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C00E8380 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     ?GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z @ 0x1C01C9470 (-GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z.c)
 *     ApiSetDoesPointerHaveSingleCursor @ 0x1C0205E30 (ApiSetDoesPointerHaveSingleCursor.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerCursorId(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int *a4)
{
  CTouchProcessor *v4; // rdi
  __int64 v6; // rdx
  unsigned __int64 ThreadPointerData; // rsi
  __int64 v8; // r8
  __int64 v9; // r9

  v4 = gpTouchProcessor;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        gpTouchProcessor,
                        (struct tagTHREADINFO *)((char *)a2 + 1112),
                        a3,
                        0LL,
                        0LL,
                        0LL);
  if ( ThreadPointerData )
  {
    if ( (unsigned int)ApiSetDoesPointerHaveSingleCursor() )
    {
      *a4 = 0;
      return 1LL;
    }
    if ( (unsigned int)CTouchProcessor::GetPointerCursorIdFromMsgData(v4, ThreadPointerData, a4) )
      return 1LL;
  }
  UserSetLastError(87LL, v6, v8, v9);
  return 0LL;
}
