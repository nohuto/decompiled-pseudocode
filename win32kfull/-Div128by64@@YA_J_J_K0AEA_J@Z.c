unsigned __int64 __fastcall Div128by64(signed __int64 a1, unsigned __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // rdi
  __int64 v6; // rbx
  unsigned __int64 v7; // r8
  __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  v4 = a1 >> 63;
  if ( a1 < 0 )
  {
    a2 = ~a2;
    a1 = (unsigned __int128)-(__int128)__PAIR128__(a1, a2) >> 64;
  }
  v6 = a3 >> 63;
  v7 = abs64(a3);
  if ( a1 >= v7 )
    goto LABEL_8;
  v8 = v4 ^ v6;
  v9 = (v8 ^ uDiv128by64(a1, a2, v7, &v11)) - v8;
  if ( v4 )
    *a4 = -(__int64)v11;
  if ( ((v9 ^ v8) & 0x8000000000000000uLL) != 0LL && v9 )
  {
LABEL_8:
    v9 = 0x8000000000000000uLL;
    *a4 = 0x8000000000000000uLL;
  }
  return v9;
}
