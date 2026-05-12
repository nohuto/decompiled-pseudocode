/*
 * XREFs of StorPortUnitFlushActivePendingRequestQueue @ 0x1C0006208
 * Callers:
 *     StorPortUnitActiveConditionStep2 @ 0x1C0006164 (StorPortUnitActiveConditionStep2.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C001AAB8 (RaUnitDeregisterFromIdleDetection.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0006370 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaUnitStartResetIo @ 0x1C0048E98 (RaUnitStartResetIo.c)
 */

void __fastcall StorPortUnitFlushActivePendingRequestQueue(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdi
  _QWORD *v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // rcx
  unsigned int v7; // eax
  KIRQL v8; // bl

  if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
  {
    while ( 1 )
    {
      v2 = (_QWORD *)(*(_QWORD *)(a1 + 1744) + 72LL);
      if ( (_QWORD *)*v2 == v2 )
        break;
      v3 = *(_QWORD **)(*(_QWORD *)(a1 + 1744) + 80LL);
      if ( (_QWORD *)*v3 != v2 || (v4 = (_QWORD *)v3[1], (_QWORD *)*v4 != v3) )
        __fastfail(3u);
      *(_QWORD *)(*(_QWORD *)(a1 + 1744) + 80LL) = v4;
      *v4 = v2;
      v5 = v3[2];
      v6 = *(_QWORD *)(*(_QWORD *)(v5 + 184) + 8LL);
      v7 = *(unsigned __int8 *)(v6 + 2);
      if ( (_BYTE)v7 == 40 )
        v7 = *(_DWORD *)(v6 + 20);
      if ( v7 == 16 || v7 > 0x11 && (v7 <= 0x13 || v7 == 32) )
      {
        v8 = KfRaiseIrql(2u);
        RaUnitStartResetIo(*(_QWORD *)(a1 + 8), v5, a1 + 1696);
        KeLowerIrql(v8);
      }
      ExFreePoolWithTag(v3, 0x4F506152u);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
  }
}
