/*
 * XREFs of ?GetAsBoolean@PropVariant@wil@@QEBAJPEA_N@Z @ 0x180155660
 * Callers:
 *     ?IsPlaceholderPin@TaskbarPinHelper@@YA_NPEFBU_ITEMIDLIST@@@Z @ 0x1801594BC (-IsPlaceholderPin@TaskbarPinHelper@@YA_NPEFBU_ITEMIDLIST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 */

HRESULT __fastcall wil::PropVariant::GetAsBoolean(const PROPVARIANT *this, bool *a2)
{
  HRESULT result; // eax
  BOOL pfRet; // [rsp+20h] [rbp-18h] BYREF

  *a2 = 0;
  pfRet = 0;
  if ( !*(_WORD *)this )
    return -2147023728;
  result = PropVariantToBoolean(this, &pfRet);
  if ( result >= 0 )
    *a2 = pfRet;
  return result;
}
