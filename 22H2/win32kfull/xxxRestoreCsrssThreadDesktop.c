/*
 * XREFs of xxxRestoreCsrssThreadDesktop @ 0x1C0069B30
 * Callers:
 *     xxxSetInformationThread @ 0x1C00699B0 (xxxSetInformationThread.c)
 *     xxxQueryInformationThread @ 0x1C00E21E4 (xxxQueryInformationThread.c)
 *     xxxHardErrorControl @ 0x1C0223D54 (xxxHardErrorControl.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C006A4F0 (xxxInternalGetMessage.c)
 *     CloseProtectedHandle @ 0x1C006A694 (CloseProtectedHandle.c)
 *     xxxSetThreadDesktop @ 0x1C006A6E4 (xxxSetThreadDesktop.c)
 *     SendMsgCleanup @ 0x1C006C8D0 (SendMsgCleanup.c)
 *     xxxDispatchMessage @ 0x1C0117884 (xxxDispatchMessage.c)
 */

__int64 __fastcall xxxRestoreCsrssThreadDesktop(_QWORD *a1, char a2)
{
  __int64 v4; // rax
  unsigned int v5; // edi
  void *v6; // rcx
  _OWORD v8[3]; // [rsp+30h] [rbp-38h] BYREF

  memset(v8, 0, sizeof(v8));
  v4 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( *a1 == v4 )
  {
    v5 = 0;
  }
  else
  {
    if ( v4 )
    {
      while ( (unsigned int)xxxInternalGetMessage((unsigned int)v8, 0, 0, 0, 3, 0) )
        xxxDispatchMessage(v8);
      if ( (a2 & 1) != 0 )
        SendMsgCleanup(gptiCurrent);
    }
    v5 = xxxSetThreadDesktop(0LL, *a1);
  }
  if ( *a1 )
  {
    ObfDereferenceObject((PVOID)*a1);
    *a1 = 0LL;
  }
  v6 = (void *)a1[1];
  if ( v6 )
  {
    CloseProtectedHandle(v6);
    a1[1] = 0LL;
  }
  return v5;
}
