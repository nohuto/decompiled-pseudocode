/*
 * XREFs of ?SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSerializer@@AEBU_UNICODE_STRING@@AEBU_KEYBOARD_INPUT_DATA@@@Z @ 0x1C01F3868
 * Callers:
 *     ?SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01F2DEC (-SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@.c)
 * Callees:
 *     ?IVSerializeKeyboardInput@@YAJAEBU_KEYBOARD_INPUT_DATA@@AEBU_UNICODE_STRING@@AEAVCIVGenericSerializer@@@Z @ 0x1C01ED390 (-IVSerializeKeyboardInput@@YAJAEBU_KEYBOARD_INPUT_DATA@@AEBU_UNICODE_STRING@@AEAVCIVGenericSeria.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C01FD240 (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 *     ?Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x1C01FDEBC (-Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 */

int __fastcall IVRootDeliver::Keyboard::Detail::SerializeKeyboardInputForContainer(
        struct _UNICODE_STRING **this,
        struct _UNICODE_STRING *a2,
        const struct _KEYBOARD_INPUT_DATA *a3,
        const struct _KEYBOARD_INPUT_DATA *a4)
{
  int result; // eax

  result = CIVSerializer::Serialize((CIVSerializer *)this, this[2], a2, 1);
  if ( result >= 0 )
  {
    result = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)this);
    if ( result >= 0 )
      return IVSerializeKeyboardInput(a3, a2, (struct CIVGenericSerializer *)this);
  }
  return result;
}
