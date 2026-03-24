/*
 * XREFs of GetUserHandedness @ 0x1C01EE890
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00DD338 (xxxSystemParametersInfoWorker.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C02437B0 (-GetMenuRightAlignHint@MenuHelpers@@YA_NXZ.c)
 *     ?CreateDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1C0256B5C (-CreateDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C02578C0 (-PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetUserHandedness(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  unsigned int v5; // r8d

  v4 = RIMIsDefaultUILanguageRTL(a1, a2, a3, a4);
  v5 = 0;
  if ( v4 )
    LOBYTE(v5) = *(_DWORD *)(gpsi + 2056LL) == 0;
  else
    LOBYTE(v5) = *(_DWORD *)(gpsi + 2056LL) != 0;
  return v5;
}
