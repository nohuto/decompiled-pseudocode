/*
 * XREFs of GetUserHandedness @ 0x1C01C4370
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C022A9CC (-GetMenuRightAlignHint@MenuHelpers@@YA_NXZ.c)
 *     ?CreateDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1C0247C34 (-CreateDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C024897C (-PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
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
