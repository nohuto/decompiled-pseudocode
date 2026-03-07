char __fastcall _asan_store1_noabort(ULONG_PTR BugCheckParameter1)
{
  char result; // al
  char v2; // r8
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  if ( KasaniEnabled )
  {
    result = 0;
    if ( BugCheckParameter1 >= 0xFFFF800000000000uLL )
    {
      result = KasaniShadow;
      v2 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000000LL) >> 3) + KasaniShadow);
      if ( v2 )
      {
        result = (BugCheckParameter1 & 7) + 1;
        if ( result > v2 )
          KeBugCheckEx(
            0x1F2u,
            BugCheckParameter1,
            1uLL,
            retaddr,
            *(unsigned __int8 *)(((BugCheckParameter1 + 0x800000000000LL) >> 3) + KasaniShadow) | 0x100LL);
      }
    }
  }
  return result;
}
