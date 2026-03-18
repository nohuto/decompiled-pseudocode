/*
 * XREFs of ?Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x1C01FDD9C
 * Callers:
 *     ?IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@AEAVCIVTouchSerializer@@@Z @ 0x1C01EC990 (-IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@A.c)
 *     ?IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAVCIVPnPCreateSerializer@@@Z @ 0x1C01ECA10 (-IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAVCIVPnPCreateSerial.c)
 *     ?IVSerializeKeyboardInput@@YAJAEBU_KEYBOARD_INPUT_DATA@@AEBU_UNICODE_STRING@@AEAVCIVGenericSerializer@@@Z @ 0x1C01ECC0C (-IVSerializeKeyboardInput@@YAJAEBU_KEYBOARD_INPUT_DATA@@AEBU_UNICODE_STRING@@AEAVCIVGenericSeria.c)
 *     ?IVSerializeMouseInputBuffer@@YAJ_NAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAVCIVMouseSerializer@@@Z @ 0x1C01ECC6C (-IVSerializeMouseInputBuffer@@YAJ_NAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAVCIVMouseSer.c)
 *     ?IVSerializeRimCompleteFrameForTouchInputPacket@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@HAEAVCIVTouchSerializer@@@Z @ 0x1C01ECD3C (-IVSerializeRimCompleteFrameForTouchInputPacket@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame.c)
 *     ?IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAVCIVPnPCreateSerializer@@@Z @ 0x1C01ECEA0 (-IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAVCIVPnPCreateSeri.c)
 *     ?SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x1C01F4D84 (-SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01F51D4 (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAVCIVMouseSerializer@@AEBU_UNICODE_STRING@@_NAEBUContainerMouseInput@@@Z @ 0x1C01F5F98 (-SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAVCIVMouseSerializer@@AEBU_UNICOD.c)
 *     ?SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSerializer@@AEBU_UNICODE_STRING@@AEBU_KEYBOARD_INPUT_DATA@@@Z @ 0x1C01F62B4 (-SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSerializer@@.c)
 *     ?Serialize@CIVPnPCreateSerializer@@AEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEBUtagHID_POINTER_DEVICE_INFO@@_N@Z @ 0x1C01FD33C (-Serialize@CIVPnPCreateSerializer@@AEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEBUtagHID_POINTER_DEVI.c)
 * Callees:
 *     ?Ensure@CIVSerializer@@IEAA_NK@Z @ 0x1C01FD114 (-Ensure@CIVSerializer@@IEAA_NK@Z.c)
 */

__int64 __fastcall CIVSerializer::Serialize(
        CIVSerializer *this,
        struct _UNICODE_STRING *a2,
        const struct _UNICODE_STRING *a3,
        char a4)
{
  __int64 v6; // rcx
  __int64 v7; // r9
  const UNICODE_STRING *v8; // r10

  if ( a4 )
  {
    *((_DWORD *)this + 2) += (a3->MaximumLength + 7) & 0xFFFFFFF8;
    return 0LL;
  }
  if ( CIVSerializer::Ensure(this, (a3->MaximumLength + 7) & 0xFFFFFFF8) )
  {
    a2->MaximumLength = v8->MaximumLength;
    a2->Length = v8->Length;
    a2->Buffer = (PWSTR)(v7 + *(_QWORD *)(v6 + 16));
    RtlCopyUnicodeString(a2, v8);
    a2->Buffer = (PWSTR)(((__int64)a2->Buffer - *((_QWORD *)this + 2)) | 1);
    return 0LL;
  }
  return 3221225495LL;
}
