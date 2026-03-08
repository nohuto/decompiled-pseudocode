/*
 * XREFs of ?Release@Tag@SecureVersionTag@XWinRT@@QEAAJXZ @ 0x180294900
 * Callers:
 *     ??1?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@MEAA@XZ @ 0x18028EE30 (--1-$HashMap@U_GUID@@PEAUIInspectable@@U-$DefaultHash@U_GUID@@@Internal@Collections@Foundation@W.c)
 *     ??1Iterator@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@MEAA@XZ @ 0x18028F010 (--1Iterator@-$HashMap@U_GUID@@PEAUIInspectable@@U-$DefaultHash@U_GUID@@@Internal@Collections@Fou.c)
 *     ??1View@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@MEAA@XZ @ 0x18028F0E4 (--1View@-$HashMap@U_GUID@@PEAUIInspectable@@U-$DefaultHash@U_GUID@@@Internal@Collections@Foundat.c)
 *     ?ChangeVersion@TagManager@SecureVersionTag@XWinRT@@QEAAJXZ @ 0x18028FD28 (-ChangeVersion@TagManager@SecureVersionTag@XWinRT@@QEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall XWinRT::SecureVersionTag::Tag::Release(XWinRT::SecureVersionTag::Tag *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( !v1 )
    operator delete(this);
  return v1;
}
