/*
 * XREFs of ?DdiDsiTransmission@KernelDriver@@UEAAJPEAU_DXGK_DSI_TRANSMISSION@@@Z @ 0x1C03CEC10
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiDsiTransmission@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGK_DSI_TRANSMISSION@@@Z @ 0x1C02C7C3C (-DdiDsiTransmission@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGK_DSI_TRANSMISSION@@@Z.c)
 */

__int64 __fastcall KernelDriver::DdiDsiTransmission(KernelDriver *this, struct _DXGK_DSI_TRANSMISSION *a2)
{
  if ( *((_QWORD *)this + 3) )
    return ADAPTER_DISPLAY::DdiDsiTransmission(*((ADAPTER_DISPLAY **)this + 3), *((_DWORD *)this + 8), a2);
  WdLogSingleEntry1(2LL, -1073741632LL);
  return 3221225664LL;
}
