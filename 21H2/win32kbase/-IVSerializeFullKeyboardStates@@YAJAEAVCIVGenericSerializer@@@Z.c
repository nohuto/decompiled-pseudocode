/*
 * XREFs of ?IVSerializeFullKeyboardStates@@YAJAEAVCIVGenericSerializer@@@Z @ 0x1C01ECBAC
 * Callers:
 *     ?SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSerializer@@@Z @ 0x1C01F6194 (-SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSeriali.c)
 * Callees:
 *     ?Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z @ 0x1C01FDE34 (-Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z.c)
 */

__int64 __fastcall IVSerializeFullKeyboardStates(struct CIVGenericSerializer *this)
{
  void **v1; // rdi
  __int64 result; // rax

  v1 = (void **)*((_QWORD *)this + 2);
  result = CIVSerializer::Serialize(this, v1, gafRawKeyState, 0x40uLL, 0);
  if ( (int)result >= 0 )
    return CIVSerializer::Serialize(this, v1 + 1, &gafAsyncKeyState, 0x40uLL, 0);
  return result;
}
