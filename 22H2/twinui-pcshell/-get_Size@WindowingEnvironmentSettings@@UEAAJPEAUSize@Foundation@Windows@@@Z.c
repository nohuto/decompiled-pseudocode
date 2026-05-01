/*
 * XREFs of ?get_Size@WindowingEnvironmentSettings@@UEAAJPEAUSize@Foundation@Windows@@@Z @ 0x18032A550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowingEnvironmentSettings::get_Size(
        WindowingEnvironmentSettings *this,
        struct Windows::Foundation::Size *a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = 0LL;
  if ( !*((_BYTE *)this + 80) )
    return 2147943568LL;
  result = 0LL;
  *(_QWORD *)a2 = *(_QWORD *)((char *)this + 84);
  return result;
}
