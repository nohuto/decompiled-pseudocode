/*
 * XREFs of ?IVSerializeFullKeyboardStates@@YAJAEAVCIVGenericSerializer@@@Z @ 0x1C021D80C
 * Callers:
 *     ?SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSerializer@@@Z @ 0x1C022828C (-SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSeriali.c)
 * Callees:
 *     ?Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z @ 0x1C0234168 (-Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z.c)
 */

__int64 __fastcall IVSerializeFullKeyboardStates(struct CIVGenericSerializer *this, __int64 a2, __int64 a3, __int64 a4)
{
  void **v4; // rdi
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax

  v4 = (void **)*((_QWORD *)this + 2);
  v6 = SGDGetUserSessionState(this, a2, a3, a4);
  result = CIVSerializer::Serialize(this, v4, (void *const)(v6 + 14056), 0x40uLL, 0);
  if ( (int)result >= 0 )
  {
    v12 = SGDGetUserSessionState(v9, v8, v10, v11);
    return CIVSerializer::Serialize(this, v4 + 1, (void *const)(v12 + 13992), 0x40uLL, 0);
  }
  return result;
}
