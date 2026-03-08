/*
 * XREFs of ?RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z @ 0x1C02E7EC8
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0178EFC (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGDEVICE::RemoveVidPnOwnership(DXGDEVICE *this, unsigned int a2)
{
  unsigned int v2; // eax
  __int64 v4; // rbx
  unsigned int v5; // edi

  v2 = *((_DWORD *)this + 473);
  if ( a2 <= v2 )
  {
    v5 = v2 - a2;
  }
  else
  {
    v4 = a2;
    WdLogSingleEntry2(2LL, a2, v2);
    v5 = 0;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Trying to adjust VidPn ownership count down by %d but only %d to remove",
      v4,
      *((unsigned int *)this + 473),
      0LL,
      0LL,
      0LL);
  }
  *((_DWORD *)this + 473) = v5;
}
