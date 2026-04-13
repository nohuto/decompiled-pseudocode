/*
 * XREFs of find_pe_section @ 0x10004360
 * Callers:
 *     ___scrt_is_nonwritable_in_current_image @ 0x1000457E (___scrt_is_nonwritable_in_current_image.c)
 * Callees:
 *     <none>
 */

int __cdecl find_pe_section(int a1, unsigned int a2)
{
  int v2; // ecx
  int v3; // edx
  int v4; // esi

  v2 = a1 + *(_DWORD *)(a1 + 60);
  v3 = *(unsigned __int16 *)(v2 + 20) + v2 + 24;
  v4 = v3 + 40 * *(unsigned __int16 *)(v2 + 6);
  if ( v3 == v4 )
    return 0;
  while ( a2 < *(_DWORD *)(v3 + 12) || a2 >= *(_DWORD *)(v3 + 12) + *(_DWORD *)(v3 + 8) )
  {
    v3 += 40;
    if ( v3 == v4 )
      return 0;
  }
  return v3;
}
