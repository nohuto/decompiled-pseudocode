/*
 * XREFs of xxxRestoreCsrssThreadDesktop @ 0x1C0093CF0
 * Callers:
 *     xxxQueryInformationThread @ 0x1C0093274 (xxxQueryInformationThread.c)
 *     xxxSetInformationThread @ 0x1C0093B70 (xxxSetInformationThread.c)
 *     xxxHardErrorControl @ 0x1C0226A64 (xxxHardErrorControl.c)
 * Callees:
 *     xxxSetThreadDesktop @ 0x1C00361B8 (xxxSetThreadDesktop.c)
 *     xxxDispatchMessage @ 0x1C0038064 (xxxDispatchMessage.c)
 *     xxxInternalGetMessage @ 0x1C00946B0 (xxxInternalGetMessage.c)
 *     CloseProtectedHandle @ 0x1C0094854 (CloseProtectedHandle.c)
 *     SendMsgCleanup @ 0x1C0094980 (SendMsgCleanup.c)
 */

__int64 __fastcall xxxRestoreCsrssThreadDesktop(__int64 *a1, char a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned int v6; // edi
  void *v7; // rcx
  _OWORD v9[3]; // [rsp+30h] [rbp-38h] BYREF

  memset(v9, 0, sizeof(v9));
  v5 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( *a1 == v5 )
  {
    v6 = 0;
  }
  else
  {
    if ( v5 )
    {
      while ( (unsigned int)xxxInternalGetMessage((unsigned int)v9, 0, 0, 0, 3, 0) )
        xxxDispatchMessage((__int64 *)v9);
      if ( (a2 & 1) != 0 )
        SendMsgCleanup(gptiCurrent);
    }
    v6 = xxxSetThreadDesktop(0LL, *a1, a3);
  }
  if ( *a1 )
  {
    ObfDereferenceObject((PVOID)*a1);
    *a1 = 0LL;
  }
  v7 = (void *)a1[1];
  if ( v7 )
  {
    CloseProtectedHandle(v7);
    a1[1] = 0LL;
  }
  return v6;
}
