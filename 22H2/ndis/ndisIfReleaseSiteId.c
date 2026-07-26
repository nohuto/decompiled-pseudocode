/*
 * XREFs of ndisIfReleaseSiteId @ 0x1C00B50E4
 * Callers:
 *     ndisNsiChangeNetworkInfo @ 0x1C00B5118 (ndisNsiChangeNetworkInfo.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00B5770 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C00B5C30 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIfReleaseSiteId(unsigned int a1)
{
  int v1; // ecx
  __int64 result; // rax

  if ( byte_1C00E7211 )
  {
    if ( a1 > 0x7FFFFFF )
    {
      v1 = (dword_1C00E4798 ^ (a1 - 1)) & 0xFFFFFFF;
      result = v1 ^ (unsigned int)dword_1C00E4798;
      dword_1C00E4798 ^= v1;
    }
  }
  return result;
}
