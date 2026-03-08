/*
 * XREFs of Simulator_GetSiblingNode @ 0x1C004932C
 * Callers:
 *     Simulator_CallbackWorker @ 0x1C0048FB0 (Simulator_CallbackWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Simulator_GetSiblingNode(__int64 a1)
{
  KIRQL v2; // r8
  _QWORD *v3; // rcx
  __int64 v4; // rax

  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  if ( a1 )
  {
    v3 = *(_QWORD **)(a1 + 16);
    if ( v3 )
    {
      v4 = v3[2];
      if ( !v4 || *v3 == v4 + 24 )
        *(_QWORD *)(a1 + 24) = 0LL;
      else
        *(_QWORD *)(a1 + 24) = *v3;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return 0LL;
}
