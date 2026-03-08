/*
 * XREFs of ObUnRegisterCallbacks @ 0x140979290
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     ExWaitForRundownProtectionRelease @ 0x140352F40 (ExWaitForRundownProtectionRelease.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __stdcall ObUnRegisterCallbacks(PVOID RegistrationHandle)
{
  unsigned int i; // ebx
  struct _EX_RUNDOWN_REF *v3; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 Count; // rcx
  struct _EX_RUNDOWN_REF **v6; // rax
  struct _KTHREAD *v7; // rax
  bool v8; // zf

  for ( i = 0; i < *((unsigned __int16 *)RegistrationHandle + 1); ++i )
  {
    v3 = (struct _EX_RUNDOWN_REF *)((char *)RegistrationHandle + 64 * (unsigned __int64)i + 32);
    ExWaitForRundownProtectionRelease(v3 + 7);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v3[4].Count + 184, 0LL);
    Count = v3->Count;
    if ( *(struct _EX_RUNDOWN_REF **)(v3->Count + 8) != v3 || (v6 = (struct _EX_RUNDOWN_REF **)v3[1].Count, *v6 != v3) )
      __fastfail(3u);
    *v6 = (struct _EX_RUNDOWN_REF *)Count;
    *(_QWORD *)(Count + 8) = v6;
    ExReleasePushLockEx((__int64 *)(v3[4].Count + 184), 0LL);
    v7 = KeGetCurrentThread();
    v8 = v7->SpecialApcDisable++ == -1;
    if ( v8 && ($C71981A45BEB2B45F82C232A7085991E *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
      KiCheckForKernelApcDelivery();
  }
  ExFreePoolWithTag(RegistrationHandle, 0x6C46624Fu);
}
