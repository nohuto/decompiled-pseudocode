/*
 * XREFs of ??_EV2NodePropertyRequest@Holographic@Internal@Windows@@UEAAPEAXI@Z @ 0x180159160
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036A54 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1V2PropertyRequest@Holographic@Internal@Windows@@UEAA@XZ @ 0x180158334 (--1V2PropertyRequest@Holographic@Internal@Windows@@UEAA@XZ.c)
 */

Windows::Internal::Holographic::V2NodePropertyRequest *__fastcall Windows::Internal::Holographic::V2NodePropertyRequest::`vector deleting destructor'(
        Windows::Internal::Holographic::V2NodePropertyRequest *this,
        __int64 a2)
{
  char v3; // bl
  __int64 v4; // rdx
  __int64 v5; // r8
  const char *v6; // r9

  v3 = a2;
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)this + 168, a2);
  Windows::Internal::Holographic::V2PropertyRequest::~V2PropertyRequest(this, v4, v5, v6);
  if ( (v3 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE8);
  return this;
}
