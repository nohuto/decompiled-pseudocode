/*
 * XREFs of ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C0233454
 * Callers:
 *     ?SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x1C0226E60 (-SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C02272BC (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C0227610 (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z @ 0x1C0227C1C (-SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z.c)
 *     ?SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAVCIVMouseSerializer@@AEBU_UNICODE_STRING@@_NAEBUContainerMouseInput@@@Z @ 0x1C0228090 (-SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAVCIVMouseSerializer@@AEBU_UNICOD.c)
 *     ?SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSerializer@@@Z @ 0x1C022828C (-SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSeriali.c)
 *     ?SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSerializer@@AEBU_UNICODE_STRING@@AEBU_KEYBOARD_INPUT_DATA@@@Z @ 0x1C02283CC (-SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSerializer@@.c)
 * Callees:
 *     UserReAllocPool @ 0x1C0077B10 (UserReAllocPool.c)
 */

__int64 __fastcall CIVSerializer::ExtendByMeasuredExtra(CIVSerializer *this)
{
  int v1; // eax
  unsigned int v3; // ecx
  _DWORD *v4; // rax
  int v5; // edx

  v1 = *((_DWORD *)this + 2);
  if ( !v1 )
    return 0LL;
  v3 = *((_DWORD *)this + 8);
  if ( v1 + v3 >= v3 )
  {
    v4 = (_DWORD *)UserReAllocPool(*((void **)this + 3), v3, v1 + v3, 0x65735649u);
    *((_QWORD *)this + 3) = v4;
    if ( v4 )
    {
      v5 = *((_DWORD *)this + 2);
      *((_DWORD *)this + 8) += v5;
      *((_DWORD *)this + 9) += v5;
      *((_QWORD *)this + 2) = v4 + 4;
      *v4 = *((_DWORD *)this + 8) - 16;
      return 0LL;
    }
  }
  return 3221225495LL;
}
