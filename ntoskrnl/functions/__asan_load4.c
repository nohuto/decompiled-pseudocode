char __fastcall _asan_load4(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v2; // rax
  ULONG_PTR v3; // r8
  ULONG_PTR v4; // rcx
  char v5; // cl
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  if ( KasaniEnabled )
  {
    LOBYTE(v2) = 0;
    if ( BugCheckParameter1 >= 0xFFFF800000000000uLL )
    {
      v3 = BugCheckParameter1 >> 3;
      v4 = (BugCheckParameter1 + 0x800000000000LL) >> 3;
      if ( v3 == (BugCheckParameter1 + 3) >> 3 )
      {
        LOBYTE(v2) = KasaniShadow;
        v5 = *(_BYTE *)(v4 + KasaniShadow);
        if ( v5 )
        {
          LOBYTE(v2) = ((BugCheckParameter1 + 3) & 7) + 1;
          if ( (char)v2 > v5 )
            goto LABEL_23;
        }
      }
      else
      {
        v5 = *(_BYTE *)(v4 + KasaniShadow);
        if ( v3 == (BugCheckParameter1 + 1) >> 3 )
        {
          if ( v5 && (char)(((BugCheckParameter1 + 1) & 7) + 1) > v5 )
            goto LABEL_23;
        }
        else if ( v5 && (char)((BugCheckParameter1 & 7) + 1) > v5
               || (v5 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000001LL) >> 3) + KasaniShadow)) != 0
               && (char)(((BugCheckParameter1 + 1) & 7) + 1) > v5 )
        {
LABEL_23:
          KeBugCheckEx(0x1F2u, BugCheckParameter1, 4uLL, retaddr, (unsigned __int8)v5);
        }
        v2 = (BugCheckParameter1 + 2) ^ (BugCheckParameter1 + 3);
        v5 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000002LL) >> 3) + KasaniShadow);
        if ( (v2 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
        {
          if ( v5 && (char)(((BugCheckParameter1 + 2) & 7) + 1) > v5 )
            goto LABEL_23;
          v2 = (BugCheckParameter1 + 0x800000000003LL) >> 3;
          v5 = *(_BYTE *)(v2 + KasaniShadow);
          if ( v5 )
          {
            if ( (char)(((BugCheckParameter1 + 3) & 7) + 1) > v5 )
              goto LABEL_23;
          }
        }
        else if ( v5 && (char)(((BugCheckParameter1 + 3) & 7) + 1) > v5 )
        {
          goto LABEL_23;
        }
      }
    }
  }
  return v2;
}
