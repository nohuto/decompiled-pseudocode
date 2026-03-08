/*
 * XREFs of ?IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAVCIVPnPCreateSerializer@@@Z @ 0x1C021DB1C
 * Callers:
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C0227610 (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     ?IVPopulateDeviceUIPIInfo@@YAXAEBURawInputManagerDeviceObject@@PEAU_IV_UIPI_INFO_INT@@@Z @ 0x1C021D70C (-IVPopulateDeviceUIPIInfo@@YAXAEBURawInputManagerDeviceObject@@PEAU_IV_UIPI_INFO_INT@@@Z.c)
 *     ?Serialize@CIVPnPCreateSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEBUtagHID_DEVICE_INFO@@_N@Z @ 0x1C0233F84 (-Serialize@CIVPnPCreateSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEBUtagHID_DEVICE_INFO@@_N@Z.c)
 *     ?Serialize@CIVPnPCreateSerializer@@QEAAXAEAU_IV_KEYBOARD_DEVICE_INFO@@AEBUtagKEYBOARD_DEVICE_INFO@@@Z @ 0x1C0234040 (-Serialize@CIVPnPCreateSerializer@@QEAAXAEAU_IV_KEYBOARD_DEVICE_INFO@@AEBUtagKEYBOARD_DEVICE_INF.c)
 *     ?Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x1C02340D0 (-Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 *     ?Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z @ 0x1C0234168 (-Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z.c)
 */

int __fastcall IVSerializeRimDevForIVPnpCreatePacket(
        struct RIMDEV *a1,
        const struct _UNICODE_STRING *a2,
        struct CIVPnPCreateSerializer *a3)
{
  __int64 v3; // rdi
  int result; // eax

  v3 = *((_QWORD *)a3 + 2);
  *(_DWORD *)v3 = 1;
  result = CIVSerializer::Serialize(a3, (struct _UNICODE_STRING *)(v3 + 8), (const struct _UNICODE_STRING *)a1 + 13, 0);
  if ( result < 0 )
    return result;
  *(_DWORD *)(v3 + 24) = *((unsigned __int8 *)a1 + 48);
  *(_DWORD *)(v3 + 28) = -__CFSHR__(*((_DWORD *)a1 + 46), 14);
  *(_DWORD *)(v3 + 32) = -__CFSHR__(*((_DWORD *)a1 + 46), 15);
  *(_DWORD *)(v3 + 36) = -__CFSHR__(*((_DWORD *)a1 + 46), 16);
  *(_DWORD *)(v3 + 40) = -__CFSHR__(*((_DWORD *)a1 + 46), 12);
  *(_DWORD *)(v3 + 44) = -__CFSHR__(*((_DWORD *)a1 + 46), 13);
  *(_DWORD *)(v3 + 48) = -__CFSHR__(*((_DWORD *)a1 + 46), 17);
  *(_DWORD *)(v3 + 56) = -__CFSHR__(*((_DWORD *)a1 + 46), 28);
  *(_DWORD *)(v3 + 60) = (*((_DWORD *)a1 + 50) & 0x40u) >> 6;
  *(_DWORD *)(v3 + 64) = (*((_DWORD *)a1 + 50) & 0x80u) >> 7;
  *(_DWORD *)(v3 + 68) = (*((_DWORD *)a1 + 50) & 0x200u) >> 9;
  result = CIVSerializer::Serialize(a3, (void **)(v3 + 72), *((void *const *)a1 + 40), *((unsigned int *)a1 + 82), 0);
  if ( result < 0 )
    return result;
  *(_DWORD *)(v3 + 80) = *((_DWORD *)a1 + 112);
  *(_DWORD *)(v3 + 1348) = *((_DWORD *)a1 + 331);
  IVPopulateDeviceUIPIInfo(
    *((const struct RawInputManagerDeviceObject **)a1 + 4),
    (struct _IV_UIPI_INFO_INT *)(v3 + 1336));
  if ( (*((_DWORD *)a1 + 50) & 0x80u) != 0 )
  {
    *(_QWORD *)(v3 + 1368) = *(_QWORD *)((char *)a1 + 1868);
    *(_DWORD *)(v3 + 1376) = *((_DWORD *)a1 + 470);
  }
  if ( !*((_BYTE *)a1 + 48) )
  {
    *(_WORD *)(v3 + 88) = *((_WORD *)a1 + 228);
    *(_WORD *)(v3 + 92) = *((_WORD *)a1 + 229);
    *(_WORD *)(v3 + 96) = *((_WORD *)a1 + 230);
    *(_DWORD *)(v3 + 100) = *((_DWORD *)a1 + 116);
    *(_WORD *)(v3 + 104) = *((_WORD *)a1 + 440);
    *(_WORD *)(v3 + 108) = *((_WORD *)a1 + 441);
    *(_WORD *)(v3 + 112) = *((_WORD *)a1 + 442);
    *(_DWORD *)(v3 + 116) = -(*((_DWORD *)a1 + 226) & 1);
    return CIVSerializer::Serialize(a3, (struct _UNICODE_STRING *)(v3 + 1352), a2, 0);
  }
  if ( *((_BYTE *)a1 + 48) == 1 )
  {
    CIVPnPCreateSerializer::Serialize(
      (CIVPnPCreateSerializer *)((unsigned int)*((unsigned __int8 *)a1 + 48) - 1),
      (struct _IV_KEYBOARD_DEVICE_INFO *)(v3 + 88),
      (struct RIMDEV *)((char *)a1 + 456));
    return CIVSerializer::Serialize(a3, (struct _UNICODE_STRING *)(v3 + 1352), a2, 0);
  }
  if ( *((_BYTE *)a1 + 48) != 2 )
    return CIVSerializer::Serialize(a3, (struct _UNICODE_STRING *)(v3 + 1352), a2, 0);
  result = CIVPnPCreateSerializer::Serialize(
             a3,
             (struct _IV_HID_DEVICE_INFO *)(v3 + 88),
             (struct RIMDEV *)((char *)a1 + 456),
             0);
  if ( result >= 0 )
    return CIVSerializer::Serialize(a3, (struct _UNICODE_STRING *)(v3 + 1352), a2, 0);
  return result;
}
