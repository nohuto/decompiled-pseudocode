/*
 * XREFs of sub_1800513F8 @ 0x1800513F8
 * Callers:
 *     sub_180050904 @ 0x180050904 (sub_180050904.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_1800513F8(SAFEARRAY **a1, LONG a2)
{
  HRESULT LBound; // eax
  HRESULT UBound; // eax
  LONG plLbound; // [rsp+30h] [rbp+8h] BYREF
  LONG plUbound; // [rsp+38h] [rbp+10h] BYREF

  plUbound = a2;
  LBound = SafeArrayGetLBound(*a1, 1u, &plLbound);
  if ( LBound < 0 )
    sub_1800B8610((unsigned int)LBound);
  UBound = SafeArrayGetUBound(*a1, 1u, &plUbound);
  if ( UBound < 0 )
    sub_1800B8610((unsigned int)UBound);
  return (unsigned int)(plUbound - plLbound + 1);
}
