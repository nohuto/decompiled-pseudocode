/*
 * XREFs of ?GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z @ 0x1C0193E60
 * Callers:
 *     NtUserGetPointerInfoList @ 0x1C012F460 (NtUserGetPointerInfoList.c)
 * Callees:
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     ?GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z @ 0x1C0192B20 (-GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C0195D00 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerInfoHistoryInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6,
        struct tagPOINTER_INFO *a7)
{
  CTouchProcessor *v7; // rdi
  __int64 ThreadPointerData; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+44h] [rbp+Ch]

  v14 = HIDWORD(this);
  v7 = gpTouchProcessor;
  v13 = 0;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        gpTouchProcessor,
                        (struct tagTHREADINFO *)((char *)a2 + 1088),
                        a3,
                        &v13,
                        0LL,
                        0LL);
  if ( !ThreadPointerData )
  {
LABEL_7:
    v11 = 87LL;
    goto LABEL_8;
  }
  if ( a4 == 1 || a4 == v13 )
  {
    if ( (unsigned int)CTouchProcessor::GetPointerDataWithHistory(v7, ThreadPointerData, a4, a5, a6, a7) )
      return 1LL;
    goto LABEL_7;
  }
  v11 = 1629LL;
LABEL_8:
  UserSetLastError(v11, v10);
  return 0LL;
}
