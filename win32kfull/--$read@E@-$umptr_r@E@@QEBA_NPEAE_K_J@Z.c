char __fastcall umptr_r<unsigned char>::read<unsigned char>(__int64 a1, void *a2, ULONGLONG a3, __int64 a4)
{
  __int64 v6; // r11
  unsigned __int64 v7; // r10
  unsigned __int64 v10; // [rsp+40h] [rbp+18h] BYREF
  ULONGLONG pullResult; // [rsp+48h] [rbp+20h] BYREF

  v6 = a1;
  v7 = *(_QWORD *)(a1 + 16);
  if ( a4 )
  {
    v10 = 0LL;
    if ( !(unsigned __int8)umptr<unsigned char>::ssizet_add_to_sizet(v7, a4, &v10) || v10 > *(_QWORD *)(v6 + 8) )
      *(_BYTE *)(v6 + 24) = 1;
    v7 = v10;
  }
  pullResult = 0LL;
  if ( a3 > *(_QWORD *)(v6 + 8) - v7 || ULongLongMult(a3, 1uLL, &pullResult) < 0 )
    *(_BYTE *)(v6 + 24) = 1;
  if ( *(_BYTE *)(v6 + 25) || *(_BYTE *)(v6 + 24) )
    return 0;
  memmove(a2, (const void *)(v7 + *(_QWORD *)v6), pullResult);
  return 1;
}
