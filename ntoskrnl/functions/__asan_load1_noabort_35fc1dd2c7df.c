char __fastcall _asan_load1_noabort(ULONG_PTR BugCheckParameter1)
{
  char result; // al
  ULONG_PTR v2; // rdx
  char v3; // r8
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  if ( KasaniEnabled )
  {
    result = 0;
    if ( BugCheckParameter1 >= 0xFFFF800000000000uLL )
    {
      result = KasaniShadow;
      v2 = (BugCheckParameter1 + 0x800000000000LL) >> 3;
      v3 = *(_BYTE *)(v2 + KasaniShadow);
      if ( v3 )
      {
        result = (BugCheckParameter1 & 7) + 1;
        if ( result > v3 )
          KeBugCheckEx(0x1F2u, BugCheckParameter1, 1uLL, retaddr, *(unsigned __int8 *)(v2 + KasaniShadow));
      }
    }
  }
  return result;
}
