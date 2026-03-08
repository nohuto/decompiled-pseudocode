/*
 * XREFs of ?IVSerializeKeyboardInput@@YAJAEBU_KEYBOARD_INPUT_DATA@@AEBU_UNICODE_STRING@@AEAVCIVGenericSerializer@@@Z @ 0x1C021D888
 * Callers:
 *     ?SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSerializer@@AEBU_UNICODE_STRING@@AEBU_KEYBOARD_INPUT_DATA@@@Z @ 0x1C02283CC (-SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSerializer@@.c)
 * Callees:
 *     ?Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x1C02340D0 (-Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 */

int __fastcall IVSerializeKeyboardInput(
        const struct _KEYBOARD_INPUT_DATA *a1,
        const struct _UNICODE_STRING *a2,
        struct CIVGenericSerializer *a3)
{
  __int64 v3; // rbx
  int result; // eax

  v3 = *((_QWORD *)a3 + 2);
  result = CIVSerializer::Serialize(a3, (struct _UNICODE_STRING *)v3, a2, 0);
  if ( result >= 0 )
  {
    *(_WORD *)(v3 + 16) = a1->UnitId;
    *(_WORD *)(v3 + 20) = a1->MakeCode;
    *(_WORD *)(v3 + 24) = a1->Flags;
    *(_WORD *)(v3 + 28) = a1->Reserved;
    *(_DWORD *)(v3 + 32) = a1->ExtraInformation;
  }
  return result;
}
