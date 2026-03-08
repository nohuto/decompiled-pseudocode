/*
 * XREFs of ?Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z @ 0x1C0234168
 * Callers:
 *     ?IVSerializeFullKeyboardStates@@YAJAEAVCIVGenericSerializer@@@Z @ 0x1C021D80C (-IVSerializeFullKeyboardStates@@YAJAEAVCIVGenericSerializer@@@Z.c)
 *     ?IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAVCIVPnPCreateSerializer@@@Z @ 0x1C021DB1C (-IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAVCIVPnPCreateSeri.c)
 *     ?Serialize@CIVPnPCreateSerializer@@AEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEBUtagHID_POINTER_DEVICE_INFO@@_N@Z @ 0x1C0233674 (-Serialize@CIVPnPCreateSerializer@@AEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEBUtagHID_POINTER_DEVI.c)
 *     ?Serialize@CIVPnPCreateSerializer@@AEAAJAEAU_IV_HPD_CALIBRATION_INFO@@AEBUtagHPD_CALIBRATION_INFO@@_N@Z @ 0x1C0233CC4 (-Serialize@CIVPnPCreateSerializer@@AEAAJAEAU_IV_HPD_CALIBRATION_INFO@@AEBUtagHPD_CALIBRATION_INF.c)
 *     ?Serialize@CIVPnPCreateSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEBUtagHID_DEVICE_INFO@@_N@Z @ 0x1C0233F84 (-Serialize@CIVPnPCreateSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEBUtagHID_DEVICE_INFO@@_N@Z.c)
 *     ?Serialize@CIVTouchSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@PEBUCPointerRawData@@K_N@Z @ 0x1C02343BC (-Serialize@CIVTouchSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@PEBUCPointerRawData@@K_N@Z.c)
 * Callees:
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ?Ensure@CIVSerializer@@IEAA_NK@Z @ 0x1C0233430 (-Ensure@CIVSerializer@@IEAA_NK@Z.c)
 */

__int64 __fastcall CIVSerializer::Serialize(CIVSerializer *this, void **a2, void *const a3, int a4, bool a5)
{
  unsigned int v7; // edx
  __int64 v8; // rcx
  size_t v9; // r9
  __int64 v10; // r10
  const void *v11; // r11
  void *v12; // rcx

  v7 = (a4 + 7) & 0xFFFFFFF8;
  if ( a5 )
  {
    *((_DWORD *)this + 2) += v7;
    return 0LL;
  }
  if ( CIVSerializer::Ensure(this, v7) )
  {
    v12 = (void *)(v10 + *(_QWORD *)(v8 + 16));
    *a2 = v12;
    memmove(v12, v11, v9);
    *a2 = (void *)(((__int64)*a2 - *((_QWORD *)this + 2)) | 1);
    return 0LL;
  }
  return 3221225495LL;
}
