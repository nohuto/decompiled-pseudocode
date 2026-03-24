/*
 * XREFs of xxxRestoreCsrssThreadDesktop @ 0x1C00D91B0
 * Callers:
 *     xxxQueryInformationThread @ 0x1C00D8398 (xxxQueryInformationThread.c)
 *     xxxSetInformationThread @ 0x1C00D9030 (xxxSetInformationThread.c)
 *     xxxHardErrorControl @ 0x1C0241E6C (xxxHardErrorControl.c)
 * Callees:
 *     xxxDispatchMessage @ 0x1C006AE54 (xxxDispatchMessage.c)
 *     CloseProtectedHandle @ 0x1C00D93E8 (CloseProtectedHandle.c)
 *     xxxSetThreadDesktop @ 0x1C00D95C0 (xxxSetThreadDesktop.c)
 *     xxxInternalGetMessage @ 0x1C00D9FB0 (xxxInternalGetMessage.c)
 *     SendMsgCleanup @ 0x1C00DA490 (SendMsgCleanup.c)
 */

__int64 __fastcall xxxRestoreCsrssThreadDesktop(_QWORD *a1, char a2)
{
  void *v4; // rcx
  void *v5; // rax
  unsigned int v6; // eax
  unsigned int v7; // edi
  void *v8; // rcx
  _OWORD v10[3]; // [rsp+30h] [rbp-38h] BYREF

  v4 = (void *)*a1;
  memset(v10, 0, sizeof(v10));
  v5 = *(void **)(gptiCurrent + 456LL);
  if ( v4 == v5 )
  {
    v7 = 0;
  }
  else
  {
    if ( v5 )
    {
      while ( (unsigned int)xxxInternalGetMessage((unsigned int)v10, 0, 0, 0, 3, 0) )
        xxxDispatchMessage((__int64)v10);
      if ( (a2 & 1) != 0 )
        SendMsgCleanup(gptiCurrent);
    }
    v6 = xxxSetThreadDesktop(0LL, *a1);
    v4 = (void *)*a1;
    v7 = v6;
  }
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    *a1 = 0LL;
  }
  v8 = (void *)a1[1];
  if ( v8 )
  {
    CloseProtectedHandle(v8);
    a1[1] = 0LL;
  }
  return v7;
}
