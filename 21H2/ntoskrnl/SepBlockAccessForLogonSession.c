/*
 * XREFs of SepBlockAccessForLogonSession @ 0x14077956C
 * Callers:
 *     SepRmInteractiveLogoffLogonSessionCompletedWrkr @ 0x140779540 (SepRmInteractiveLogoffLogonSessionCompletedWrkr.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentServerSilo @ 0x14025C9C0 (PsGetCurrentServerSilo.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
 */

__int64 __fastcall SepBlockAccessForLogonSession(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // edi

  v2 = (unsigned int)(1529154084 * *a1) >> 28;
  v3 = SepLogonSessions + 8 * v2;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = &SepRmDbLock + (v2 & 3);
  ExAcquireResourceExclusiveLite(v5, 1u);
  v8 = 0;
  while ( 1 )
  {
    v3 = *(_QWORD *)v3;
    if ( !v3 )
      break;
    if ( *(_QWORD *)(v3 + 160) == PsGetCurrentServerSilo(v7, v6)
      && *a1 == *(_DWORD *)(v3 + 8)
      && a1[1] == *(_DWORD *)(v3 + 12) )
    {
      *(_DWORD *)(v3 + 32) |= 0x20u;
      goto LABEL_7;
    }
  }
  v8 = -1073741729;
LABEL_7:
  ExReleaseResourceLite(v5);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v8;
}
