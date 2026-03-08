/*
 * XREFs of __scrt_is_nonwritable_in_current_image @ 0x18010E81C
 * Callers:
 *     dllmain_crt_process_attach @ 0x18010E9E8 (dllmain_crt_process_attach.c)
 * Callees:
 *     <none>
 */

bool __fastcall _scrt_is_nonwritable_in_current_image(__int64 a1)
{
  unsigned __int64 v1; // r8
  _DWORD *v2; // rdx
  _DWORD *v3; // r9
  unsigned __int64 v4; // rcx

  if ( _ImageBase[0] != 23117
    || *(_DWORD *)((char *)_ImageBase + (int)off_18000003C) != 17744
    || *(__int16 *)((char *)&word_180000018 + (int)off_18000003C) != 523 )
  {
    return 0;
  }
  v1 = a1 - (_QWORD)_ImageBase;
  v2 = (_DWORD *)((char *)&word_180000018
                + (int)off_18000003C
                + *(unsigned __int16 *)((char *)&word_180000014 + (int)off_18000003C));
  v3 = &v2[10 * *(unsigned __int16 *)((char *)&word_180000006 + (int)off_18000003C)];
  while ( v2 != v3 )
  {
    v4 = (unsigned int)v2[3];
    if ( v1 >= v4 && v1 < (unsigned int)(v4 + v2[2]) )
      return v2 && v2[9] >= 0;
    v2 += 10;
  }
  v2 = 0LL;
  return v2 && v2[9] >= 0;
}
