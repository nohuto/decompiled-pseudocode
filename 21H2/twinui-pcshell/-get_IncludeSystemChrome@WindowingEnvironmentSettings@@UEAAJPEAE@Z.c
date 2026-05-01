/*
 * XREFs of ?get_IncludeSystemChrome@WindowingEnvironmentSettings@@UEAAJPEAE@Z @ 0x18032A5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowingEnvironmentSettings::get_IncludeSystemChrome(
        WindowingEnvironmentSettings *this,
        unsigned __int8 *a2)
{
  *a2 = 0;
  if ( !*((_BYTE *)this + 94) )
    return 2147943568LL;
  *a2 = *((_BYTE *)this + 121);
  return 0LL;
}
