char __fastcall _asan_load2_noabort(ULONG_PTR BugCheckParameter1)
{
  unsigned __int64 v2; // rax
  ULONG_PTR v3; // rdx
  ULONG_PTR v4; // rcx
  char v5; // cl
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  if ( !KasaniEnabled )
    return v2;
  LOBYTE(v2) = 0;
  if ( BugCheckParameter1 < 0xFFFF800000000000uLL )
    return v2;
  v3 = BugCheckParameter1 + 1;
  v4 = (BugCheckParameter1 + 0x800000000000LL) >> 3;
  if ( ((BugCheckParameter1 ^ v3) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
  {
    LOBYTE(v2) = KasaniShadow;
    v5 = *(_BYTE *)(v4 + KasaniShadow);
    if ( !v5 )
      return v2;
    LOBYTE(v2) = ((BugCheckParameter1 + 1) & 7) + 1;
    if ( (char)v2 <= v5 )
      return v2;
LABEL_11:
    KeBugCheckEx(0x1F2u, BugCheckParameter1, 2uLL, retaddr, (unsigned __int8)v5);
  }
  v5 = *(_BYTE *)(v4 + KasaniShadow);
  if ( v5 && (char)((BugCheckParameter1 & 7) + 1) > v5 )
    goto LABEL_11;
  v2 = (v3 + 0x800000000000LL) >> 3;
  v5 = *(_BYTE *)(v2 + KasaniShadow);
  if ( v5 )
  {
    if ( (char)((v3 & 7) + 1) > v5 )
      goto LABEL_11;
  }
  return v2;
}
