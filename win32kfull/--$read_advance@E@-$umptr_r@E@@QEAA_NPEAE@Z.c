char __fastcall umptr_r<unsigned char>::read_advance<unsigned char>(__int64 a1, void *a2)
{
  char v3; // r11
  __int64 v4; // rcx
  unsigned __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = umptr_r<unsigned char>::read<unsigned char>(a1, a2, 1uLL, 0LL);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 16);
    v6 = 0LL;
    if ( (unsigned __int8)umptr<unsigned char>::ssizet_add_to_sizet(v4, 1LL, &v6) && v6 <= *(_QWORD *)(a1 + 8) )
      *(_QWORD *)(a1 + 16) = v6;
    else
      *(_BYTE *)(a1 + 24) = 1;
  }
  return v3;
}
