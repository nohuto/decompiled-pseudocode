/*
 * XREFs of SepBlockAccessForLogonSession @ 0x14077972C
 * Callers:
 *     SepRmInteractiveLogoffLogonSessionCompletedWrkr @ 0x140779700 (SepRmInteractiveLogoffLogonSessionCompletedWrkr.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x14027DF30 (PsGetCurrentServerSilo.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 */

__int64 __fastcall SepBlockAccessForLogonSession(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v5; // rbp
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  v2 = (unsigned int)(1529154084 * *a1) >> 28;
  v3 = SepLogonSessions + 8 * v2;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = &SepRmDbLock + (v2 & 3);
  ExAcquireResourceExclusiveLite(v5, 1u);
  v6 = 0;
  while ( 1 )
  {
    v3 = *(_QWORD *)v3;
    if ( !v3 )
      break;
    if ( *(_QWORD *)(v3 + 160) == PsGetCurrentServerSilo()
      && *a1 == *(_DWORD *)(v3 + 8)
      && a1[1] == *(_DWORD *)(v3 + 12) )
    {
      *(_DWORD *)(v3 + 32) |= 0x20u;
      goto LABEL_7;
    }
  }
  v6 = -1073741729;
LABEL_7:
  ExReleaseResourceLite(v5);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8, v9);
  return v6;
}
