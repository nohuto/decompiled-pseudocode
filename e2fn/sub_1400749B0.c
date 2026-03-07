unsigned __int64 __fastcall sub_1400749B0(__int64 a1, _WORD *a2, unsigned __int64 a3)
{
  _WORD *v3; // rsi
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbp
  _QWORD *v8; // rcx
  _WORD v9[20]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2;
  if ( !a2 )
    return 0LL;
  v6 = a3 >> 1;
  v7 = 0LL;
  if ( a3 >> 1 )
  {
    v7 = a3 >> 1;
    do
    {
      if ( *v3 == 10 )
      {
        if ( *(_BYTE *)(a1 + 56) )
        {
          if ( qword_1400B6F30 != *(__int64 **)(a1 + 32) )
            sub_1400011A8((_QWORD *)(a1 + 16), (__int64)qword_1400B6F30, 1uLL);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
        *(_BYTE *)(a1 + 56) = 1;
        goto LABEL_14;
      }
      if ( *v3 )
      {
        v8 = (_QWORD *)(a1 + 16);
        v9[0] = *v3;
        v9[1] = 0;
        if ( !*(_BYTE *)(a1 + 56) )
        {
          if ( *(_QWORD *)(a1 + 32) )
          {
            sub_140001480(v8, (__int64)v9, 1LL);
            goto LABEL_14;
          }
LABEL_13:
          sub_1400011A8(v8, (__int64)v9, 1uLL);
          goto LABEL_14;
        }
        *(_BYTE *)(a1 + 56) = 0;
        if ( v9 != *(_WORD **)(a1 + 32) )
          goto LABEL_13;
      }
LABEL_14:
      ++*(_QWORD *)(a1 + 8);
      ++v3;
      --v6;
    }
    while ( v6 );
  }
  return v7;
}
