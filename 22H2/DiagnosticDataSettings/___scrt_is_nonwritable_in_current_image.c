/*
 * XREFs of ___scrt_is_nonwritable_in_current_image @ 0x1000457E
 * Callers:
 *     dllmain_crt_process_attach @ 0x10003F85 (dllmain_crt_process_attach.c)
 * Callees:
 *     find_pe_section @ 0x10004360 (find_pe_section.c)
 *     __SEH_prolog4 @ 0x100047F0 (__SEH_prolog4.c)
 */

bool __cdecl __scrt_is_nonwritable_in_current_image(int a1)
{
  int pe_section; // eax
  bool result; // al

  result = 0;
  if ( _ImageBase == 23117
    && *(_DWORD *)((char *)&_ImageBase + (_DWORD)off_1000003C) == 17744
    && *(__int16 *)((char *)&word_10000018 + (_DWORD)off_1000003C) == 267 )
  {
    pe_section = find_pe_section((int)&_ImageBase, a1 - (_DWORD)&_ImageBase);
    if ( pe_section )
    {
      if ( *(int *)(pe_section + 36) >= 0 )
        return 1;
    }
  }
  return result;
}
