/*
 * XREFs of PopStateTransitionTimeoutDispatch @ 0x14058D1B0
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PopQueryLastStateTransitionInfo @ 0x140AA30B4 (PopQueryLastStateTransitionInfo.c)
 */

void __noreturn PopStateTransitionTimeoutDispatch()
{
  ULONG_PTR v0; // rbx
  struct _KTHREAD *BugCheckParameter4; // rdi
  ULONG_PTR BugCheckParameter1[2]; // [rsp+30h] [rbp-9h] BYREF
  __int128 v3; // [rsp+40h] [rbp+7h]
  void (__fastcall *v4)(_QWORD, _QWORD); // [rsp+50h] [rbp+17h]
  _OWORD v5[3]; // [rsp+58h] [rbp+1Fh] BYREF

  memset(v5, 0, sizeof(v5));
  if ( dword_140C3CF04 == 1 )
  {
    v0 = 240LL;
  }
  else
  {
    v0 = 15LL;
    if ( dword_140C3CF04 == 2 )
      v0 = 241LL;
  }
  BugCheckParameter4 = KeGetCurrentThread();
  if ( (unsigned int)(dword_140C3CF04 - 1) <= 1 )
  {
    v4 = 0LL;
    *(_OWORD *)BugCheckParameter1 = 0LL;
    v3 = 0LL;
    if ( (int)PopQueryLastStateTransitionInfo(BugCheckParameter1) >= 0 )
    {
      if ( v4 )
        v4((unsigned int)dword_140C3CF10, *((_QWORD *)&v3 + 1));
      if ( BugCheckParameter1[1] && (*(_DWORD *)(BugCheckParameter1[1] + 2172) & 0x1000) == 0 )
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1[1], 0, (__int64)v5);
      if ( BugCheckParameter1[0] )
        BugCheckParameter4 = (struct _KTHREAD *)BugCheckParameter1[0];
    }
  }
  KeBugCheckEx(0xA0u, v0, dword_140C3CD80, PopSleepCheckpoint, (ULONG_PTR)BugCheckParameter4);
}
