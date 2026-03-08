/*
 * XREFs of ObpGetShadowDirectory @ 0x14075F49C
 * Callers:
 *     ObpLookupObjectName @ 0x1406E86B0 (ObpLookupObjectName.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     RtlIsSandboxedToken @ 0x140741410 (RtlIsSandboxedToken.c)
 */

__int64 __fastcall ObpGetShadowDirectory(
        __int64 a1,
        __int64 a2,
        int *a3,
        struct _SECURITY_SUBJECT_CONTEXT *a4,
        char a5)
{
  int v5; // eax
  __int64 v8; // rsi
  __int64 result; // rax
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rbx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *p_Blink; // rbx
  __int64 v13; // rax
  struct _KTHREAD *v14; // rax
  bool IsSandboxedToken; // al
  int v17; // ecx
  int v18; // ecx

  v5 = *(_DWORD *)(a1 + 336);
  v8 = 0LL;
  if ( (v5 & 4) != 0 )
  {
    if ( (v5 & 0x10) != 0 && (*a3 & 6) == 0 )
    {
      IsSandboxedToken = RtlIsSandboxedToken(a4 + 1, a5);
      v17 = *a3;
      if ( IsSandboxedToken )
        v18 = v17 | 2;
      else
        v18 = v17 | 4;
      *a3 = v18;
    }
    if ( (*(_DWORD *)(a1 + 336) & 0x10) == 0 || (*a3 & 2) != 0 )
      return *(_QWORD *)(a1 + 312);
    return v8;
  }
  result = *(_QWORD *)(a1 + 304);
  if ( result )
  {
    if ( result == a2 )
      return *(_QWORD *)(a2 + 8);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    CurrentThread = KeGetCurrentThread();
    p_Blink = (signed __int64 *)&CurrentServerSiloGlobals[7].Blink;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)p_Blink, 0LL);
    v13 = *(_QWORD *)(a1 + 304);
    if ( v13 )
      v8 = *(_QWORD *)(v13 + 8);
    if ( _InterlockedCompareExchange64(p_Blink, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Blink);
    KeAbPostRelease((ULONG_PTR)p_Blink);
    v14 = KeGetCurrentThread();
    if ( v14->SpecialApcDisable++ == -1
      && ($C71981A45BEB2B45F82C232A7085991E *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    return v8;
  }
  return result;
}
