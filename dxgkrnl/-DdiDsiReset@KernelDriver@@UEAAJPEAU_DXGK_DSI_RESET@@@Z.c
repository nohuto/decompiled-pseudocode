/*
 * XREFs of ?DdiDsiReset@KernelDriver@@UEAAJPEAU_DXGK_DSI_RESET@@@Z @ 0x1C03CA370
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiDsiReset@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGK_DSI_RESET@@@Z @ 0x1C02C2A60 (-DdiDsiReset@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGK_DSI_RESET@@@Z.c)
 */

__int64 __fastcall KernelDriver::DdiDsiReset(KernelDriver *this, struct _DXGK_DSI_RESET *a2)
{
  if ( *((_QWORD *)this + 3) )
    return ADAPTER_DISPLAY::DdiDsiReset(*((ADAPTER_DISPLAY **)this + 3), *((_DWORD *)this + 8), a2);
  WdLogSingleEntry1(2LL, -1073741632LL);
  return 3221225664LL;
}
