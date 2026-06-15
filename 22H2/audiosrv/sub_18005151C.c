/*
 * XREFs of sub_18005151C @ 0x18005151C
 * Callers:
 *     sub_18000319C @ 0x18000319C (sub_18000319C.c)
 *     sub_180050904 @ 0x180050904 (sub_180050904.c)
 *     sub_180050C80 @ 0x180050C80 (sub_180050C80.c)
 *     sub_180051468 @ 0x180051468 (sub_180051468.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_18005151C(SAFEARRAY **a1)
{
  HRESULT result; // eax
  SAFEARRAY *v3; // rcx

  result = 0;
  v3 = *a1;
  if ( v3 )
  {
    result = SafeArrayUnlock(v3);
    if ( result >= 0 )
    {
      result = SafeArrayDestroy(*a1);
      if ( result >= 0 )
        *a1 = 0LL;
    }
  }
  return result;
}
