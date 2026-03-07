char __fastcall _asan_alloca_poison(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  char v2; // r15
  unsigned __int64 v3; // rax
  int v6; // edx
  __int64 v7; // r14
  unsigned __int64 v8; // rcx
  _BYTE *v9; // rsi
  unsigned __int64 v10; // rbp
  size_t v11; // rbp
  ULONG_PTR v12; // rbx
  unsigned __int64 v13; // rcx

  v2 = KasaniEnabled;
  v3 = BugCheckParameter3 - 32;
  v6 = 0;
  if ( KasaniEnabled )
  {
    if ( v3 < 0xFFFF800000000000uLL )
      KeBugCheckEx(0x1F1u, 2uLL, 1uLL, BugCheckParameter3 - 32, 0LL);
    if ( (v3 & 7) != 0 )
      KeBugCheckEx(0x1F1u, 2uLL, 2uLL, BugCheckParameter3 - 32, 8uLL);
    if ( BugCheckParameter3 < v3 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, BugCheckParameter3 - 32, 0x20uLL);
    v3 = KasaniShadow + ((v3 + 0x800000000000LL) >> 3);
    *(_DWORD *)v3 = -2122219135;
  }
  v7 = ((_BYTE)a2 - 1) & 0x1F;
  v8 = a2 - v7 + 31;
  if ( v2 )
  {
    if ( BugCheckParameter3 < 0xFFFF800000000000uLL )
      KeBugCheckEx(0x1F1u, 2uLL, 1uLL, BugCheckParameter3, 0LL);
    if ( (BugCheckParameter3 & 7) != 0 )
      KeBugCheckEx(0x1F1u, 2uLL, 2uLL, BugCheckParameter3, 8uLL);
    if ( a2 > v8 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, a2, a2 - v7 + 31);
    if ( v8 + BugCheckParameter3 < BugCheckParameter3 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, BugCheckParameter3, a2 - v7 + 31);
    v3 = ((_BYTE)a2 - (_BYTE)v7 + 30) & 7;
    v9 = (_BYTE *)(KasaniShadow + ((BugCheckParameter3 + 0x800000000000LL) >> 3));
    v10 = 31 - v7 + (((_BYTE)a2 - 1) & 7) - v3;
    if ( a2 >> 3 )
    {
      LOBYTE(v3) = (unsigned __int8)memset(v9, 0, a2 >> 3);
      v9 += a2 >> 3;
      v6 = 0;
    }
    if ( (a2 & 7) != 0 )
    {
      LOBYTE(v3) = a2 & 7;
      *v9++ = a2 & 7;
    }
    v11 = v10 >> 3;
    if ( v11 )
    {
      LOBYTE(v6) = -126;
      LOBYTE(v3) = (unsigned __int8)memset(v9, v6, v11);
    }
  }
  v12 = BugCheckParameter3 - v7;
  v13 = v12 + a2 + 31;
  if ( v2 )
  {
    if ( v13 < 0xFFFF800000000000uLL )
      KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v12 + a2 + 31, 0LL);
    if ( (v13 & 7) != 0 )
      KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v12 + a2 + 31, 8uLL);
    if ( v13 + 32 < v13 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v12 + a2 + 31, 0x20uLL);
    v3 = KasaniShadow + ((v13 + 0x800000000000LL) >> 3);
    *(_DWORD *)v3 = -2088533117;
  }
  return v3;
}
