bool __fastcall _scrt_is_nonwritable_in_current_image(__int64 a1)
{
  unsigned __int64 v1; // r8
  _DWORD *v2; // rdx
  _DWORD *v3; // r9
  unsigned __int64 v4; // rcx

  if ( LOWORD(_ImageBase.unused) != 23117
    || *(int *)((char *)&_ImageBase.unused + (int)off_14000003C) != 17744
    || *(__int16 *)((char *)&word_140000018 + (int)off_14000003C) != 523 )
  {
    return 0;
  }
  v1 = a1 - (_QWORD)&_ImageBase;
  v2 = (_DWORD *)((char *)&word_140000018
                + (int)off_14000003C
                + *(unsigned __int16 *)((char *)&word_140000014 + (int)off_14000003C));
  v3 = &v2[10 * *(unsigned __int16 *)((char *)&word_140000006 + (int)off_14000003C)];
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
