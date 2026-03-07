void __fastcall KasanMarkAddressRedZone(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        ULONG_PTR BugCheckParameter4,
        unsigned __int8 a4)
{
  char v5; // bl
  _BYTE *v6; // rsi
  ULONG_PTR v7; // rbp
  ULONG_PTR v8; // r14
  size_t v9; // rbp

  v5 = a2;
  if ( KasaniEnabled )
  {
    if ( BugCheckParameter3 < 0xFFFF800000000000uLL )
      KeBugCheckEx(0x1F1u, 2uLL, 1uLL, BugCheckParameter3, 0LL);
    if ( (BugCheckParameter3 & 7) != 0 )
      KeBugCheckEx(0x1F1u, 2uLL, 2uLL, BugCheckParameter3, 8uLL);
    if ( a2 > BugCheckParameter4 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, a2, BugCheckParameter4);
    if ( BugCheckParameter3 + BugCheckParameter4 < BugCheckParameter3 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, BugCheckParameter3, BugCheckParameter4);
    v6 = (_BYTE *)(KasaniShadow + ((BugCheckParameter3 + 0x800000000000LL) >> 3));
    v7 = BugCheckParameter4 + (((_BYTE)a2 - 1) & 7) - (unsigned __int64)(((_BYTE)BugCheckParameter4 - 1) & 7) - a2;
    v8 = a2 >> 3;
    if ( a2 >> 3 )
    {
      memset((void *)(KasaniShadow + ((BugCheckParameter3 + 0x800000000000LL) >> 3)), 0, a2 >> 3);
      v6 += v8;
    }
    if ( (v5 & 7) != 0 )
      *v6++ = v5 & 7;
    v9 = v7 >> 3;
    if ( v9 )
      memset(v6, a4, v9);
  }
}
