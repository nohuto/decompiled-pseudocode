/*
 * XREFs of ?GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1C01F63B4
 * Callers:
 *     NtUserGetPointerCursorId @ 0x1C01703E0 (NtUserGetPointerCursorId.c)
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C00F2A40 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     ?GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z @ 0x1C01F6440 (-GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z.c)
 *     ApiSetDoesPointerHaveSingleCursor @ 0x1C023C190 (ApiSetDoesPointerHaveSingleCursor.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerCursorId(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int *a4)
{
  unsigned __int64 ThreadPointerData; // rsi

  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        this,
                        (struct tagTHREADINFO *)((char *)a2 + 1128),
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
    if ( (unsigned int)CTouchProcessor::GetPointerCursorIdFromMsgData(this, ThreadPointerData, a4) )
      return 1LL;
  }
  UserSetLastError(87);
  return 0LL;
}
