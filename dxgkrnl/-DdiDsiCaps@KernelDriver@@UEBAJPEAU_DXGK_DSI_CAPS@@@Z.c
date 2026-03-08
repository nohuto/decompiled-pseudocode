/*
 * XREFs of ?DdiDsiCaps@KernelDriver@@UEBAJPEAU_DXGK_DSI_CAPS@@@Z @ 0x1C03CA320
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiDsiCaps@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGK_DSI_CAPS@@@Z @ 0x1C02C27A4 (-DdiDsiCaps@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGK_DSI_CAPS@@@Z.c)
 */

__int64 __fastcall KernelDriver::DdiDsiCaps(KernelDriver *this, struct _DXGK_DSI_CAPS *a2)
{
  if ( *((_QWORD *)this + 3) )
    return ADAPTER_DISPLAY::DdiDsiCaps(*((ADAPTER_DISPLAY **)this + 3), *((_DWORD *)this + 8), a2);
  WdLogSingleEntry1(2LL, -1073741632LL);
  return 3221225664LL;
}
