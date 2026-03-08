/*
 * XREFs of AcpiEvaluateBiosMethodsOnPciRootBus @ 0x1C00345C4
 * Callers:
 *     ACPIBuildPdo @ 0x1C000DC84 (ACPIBuildPdo.c)
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C0017830 (ACPIDispatchIrpDepPdoQueryID.c)
 * Callees:
 *     AcpiEvaluateOscMethodOnPciRootBus @ 0x1C0034694 (AcpiEvaluateOscMethodOnPciRootBus.c)
 */

__int64 __fastcall AcpiEvaluateBiosMethodsOnPciRootBus(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  __int64 result; // rax
  int v6; // r8d
  int v7; // eax
  int v8; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 760) || (*(_DWORD *)(a1 + 8) & 0x2000000) == 0 )
    return 3221225473LL;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 184), 0, 0) & 0x10) != 0 )
    return 0LL;
  v4 = a1 + 304;
  *(_DWORD *)(a1 + 304) = 0;
  _InterlockedOr((volatile signed __int32 *)(a1 + 184), 0x10u);
  if ( (AcpiOverrideAttributes & 0x2000) != 0 )
    return 0LL;
  v8 = 0;
  result = AcpiEvaluateOscMethodOnPciRootBus(a1, 1, a3, (unsigned int)&PciRootBusFeaturesControlRequest, (__int64)&v8);
  if ( (int)result >= 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 184), 8u);
    v7 = v8;
    if ( PciRootBusFeaturesControlRequest != v8 )
    {
      if ( v8 != 21 )
        v7 = 0;
      v8 = v7;
    }
    return AcpiEvaluateOscMethodOnPciRootBus(a1, 0, v6, (unsigned int)&v8, v4);
  }
  return result;
}
