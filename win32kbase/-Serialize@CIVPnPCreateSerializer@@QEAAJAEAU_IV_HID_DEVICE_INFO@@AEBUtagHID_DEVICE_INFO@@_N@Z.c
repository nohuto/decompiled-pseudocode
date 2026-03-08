/*
 * XREFs of ?Serialize@CIVPnPCreateSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEBUtagHID_DEVICE_INFO@@_N@Z @ 0x1C0233F84
 * Callers:
 *     ?IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAVCIVPnPCreateSerializer@@@Z @ 0x1C021D670 (-IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAVCIVPnPCreateSerial.c)
 *     ?IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAVCIVPnPCreateSerializer@@@Z @ 0x1C021DB1C (-IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAVCIVPnPCreateSeri.c)
 * Callees:
 *     ?Serialize@CIVPnPCreateSerializer@@AEAAJAEAU_IV_HIDP_CAPS@@AEBU_HIDP_CAPS@@_N@Z @ 0x1C02335C0 (-Serialize@CIVPnPCreateSerializer@@AEAAJAEAU_IV_HIDP_CAPS@@AEBU_HIDP_CAPS@@_N@Z.c)
 *     ?Serialize@CIVPnPCreateSerializer@@AEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEBUtagHID_POINTER_DEVICE_INFO@@_N@Z @ 0x1C0233674 (-Serialize@CIVPnPCreateSerializer@@AEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEBUtagHID_POINTER_DEVI.c)
 *     ?Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z @ 0x1C0234168 (-Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z.c)
 */

__int64 __fastcall CIVPnPCreateSerializer::Serialize(
        CIVPnPCreateSerializer *this,
        struct _IV_HID_DEVICE_INFO *a2,
        const struct tagHID_POINTER_DEVICE_INFO **a3,
        bool a4)
{
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // r11
  const struct tagHID_POINTER_DEVICE_INFO *v11; // r8

  result = CIVPnPCreateSerializer::Serialize(this, a2, (const struct _HIDP_CAPS *)((char *)*a3 + 40));
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(v9 + 96) = *(_DWORD *)(v10 + 104);
    *(_DWORD *)(v9 + 100) = *(_BYTE *)(v10 + 108) != 0;
    *(_BYTE *)(v9 + 104) = *(_BYTE *)(v10 + 109);
    *(_WORD *)(v9 + 108) = *(_WORD *)(v10 + 110);
    *(_WORD *)(v9 + 112) = *(_WORD *)(v10 + 112);
    *(_WORD *)(v9 + 116) = *(_WORD *)(v10 + 114);
    result = CIVSerializer::Serialize(
               this,
               (void **)(v9 + 120),
               *(void *const *)(v10 + 16),
               *(unsigned int *)(v10 + 104),
               a4);
    if ( (int)result >= 0 )
    {
      v11 = a3[2];
      if ( v11 )
        return CIVPnPCreateSerializer::Serialize(this, (struct _IV_HID_DEVICE_INFO *)((char *)a2 + 128), v11, a4);
    }
  }
  return result;
}
