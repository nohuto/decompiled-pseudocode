ULONG_PTR __fastcall _asan_store16_noabort(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v1; // rbx
  ULONG_PTR result; // rax
  ULONG_PTR v4; // rdx
  ULONG_PTR v5; // rcx
  bool v6; // zf
  __int64 v7; // rdx
  char v8; // cl
  ULONG_PTR v9; // r10
  char v10; // r8
  ULONG_PTR v11; // r10
  ULONG_PTR v12; // r10
  char v13; // r8

  if ( !KasaniEnabled )
    return result;
  result = 0xFFFF800000000000uLL;
  if ( BugCheckParameter1 < 0xFFFF800000000000uLL )
    return result;
  v4 = BugCheckParameter1 >> 3;
  v5 = (BugCheckParameter1 + 0x800000000000LL) >> 3;
  if ( v4 == (BugCheckParameter1 + 7) >> 3 )
  {
    v7 = KasaniShadow;
    v8 = *(_BYTE *)(v5 + KasaniShadow);
    if ( v8 )
      goto LABEL_89;
    goto LABEL_46;
  }
  if ( v4 == (BugCheckParameter1 + 3) >> 3 )
  {
    v7 = KasaniShadow;
    v8 = *(_BYTE *)(v5 + KasaniShadow);
    if ( v8 && (char)(((BugCheckParameter1 + 3) & 7) + 1) > v8 )
      goto LABEL_89;
  }
  else
  {
    v6 = v4 == (BugCheckParameter1 + 1) >> 3;
    v7 = KasaniShadow;
    v8 = *(_BYTE *)(v5 + KasaniShadow);
    if ( v6 )
    {
      if ( v8 && (char)(((BugCheckParameter1 + 1) & 7) + 1) > v8 )
        goto LABEL_89;
    }
    else if ( v8 && (char)((BugCheckParameter1 & 7) + 1) > v8
           || (v8 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000001LL) >> 3) + KasaniShadow)) != 0
           && (char)(((BugCheckParameter1 + 1) & 7) + 1) > v8 )
    {
LABEL_89:
      KeBugCheckEx(0x1F2u, BugCheckParameter1, 0x10uLL, v1, (unsigned __int8)v8 | 0x100LL);
    }
    v8 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000002LL) >> 3) + KasaniShadow);
    if ( (((BugCheckParameter1 + 2) ^ (BugCheckParameter1 + 3)) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
    {
      if ( v8 && (char)(((BugCheckParameter1 + 2) & 7) + 1) > v8 )
        goto LABEL_89;
      v8 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000003LL) >> 3) + KasaniShadow);
      if ( v8 )
      {
        if ( (char)(((BugCheckParameter1 + 3) & 7) + 1) > v8 )
          goto LABEL_89;
      }
    }
    else if ( v8 && (char)(((BugCheckParameter1 + 3) & 7) + 1) > v8 )
    {
      goto LABEL_89;
    }
  }
  v9 = (BugCheckParameter1 + 4) >> 3;
  v8 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000004LL) >> 3) + v7);
  if ( v9 == (BugCheckParameter1 + 7) >> 3 )
  {
    if ( !v8 )
      goto LABEL_46;
    v10 = BugCheckParameter1 + 7;
    goto LABEL_41;
  }
  if ( v9 == (BugCheckParameter1 + 5) >> 3 )
  {
    if ( v8 && (char)(((BugCheckParameter1 + 5) & 7) + 1) > v8 )
      goto LABEL_89;
  }
  else
  {
    if ( v8 && (char)(((BugCheckParameter1 + 4) & 7) + 1) > v8 )
      goto LABEL_89;
    v8 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000005LL) >> 3) + v7);
    if ( v8 )
    {
      if ( (char)(((BugCheckParameter1 + 5) & 7) + 1) > v8 )
        goto LABEL_89;
    }
  }
  v8 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000006LL) >> 3) + v7);
  if ( (((BugCheckParameter1 + 6) ^ (BugCheckParameter1 + 7)) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
  {
    if ( !v8 )
      goto LABEL_46;
    v10 = BugCheckParameter1 + 7;
LABEL_41:
    if ( (char)((v10 & 7) + 1) > v8 )
      goto LABEL_89;
    goto LABEL_46;
  }
  if ( v8 && (char)(((BugCheckParameter1 + 6) & 7) + 1) > v8 )
    goto LABEL_89;
  v8 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000007LL) >> 3) + v7);
  if ( v8 )
  {
    if ( (char)(((BugCheckParameter1 + 7) & 7) + 1) > v8 )
      goto LABEL_89;
  }
LABEL_46:
  v11 = (BugCheckParameter1 + 8) >> 3;
  result = (BugCheckParameter1 + 15) >> 3;
  v8 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000008LL) >> 3) + v7);
  if ( v11 == result )
  {
    if ( v8 )
      goto LABEL_89;
    return result;
  }
  if ( v11 == (BugCheckParameter1 + 11) >> 3 )
  {
    if ( v8 && (char)(((BugCheckParameter1 + 11) & 7) + 1) > v8 )
      goto LABEL_89;
  }
  else
  {
    if ( v11 == (BugCheckParameter1 + 9) >> 3 )
    {
      if ( v8 && (char)(((BugCheckParameter1 + 9) & 7) + 1) > v8 )
        goto LABEL_89;
    }
    else
    {
      if ( v8 && (char)(((BugCheckParameter1 + 8) & 7) + 1) > v8 )
        goto LABEL_89;
      v8 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000009LL) >> 3) + v7);
      if ( v8 )
      {
        if ( (char)(((BugCheckParameter1 + 9) & 7) + 1) > v8 )
          goto LABEL_89;
      }
    }
    v8 = *(_BYTE *)(((BugCheckParameter1 + 0x80000000000ALL) >> 3) + v7);
    if ( (((BugCheckParameter1 + 10) ^ (BugCheckParameter1 + 11)) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
    {
      if ( v8 && (char)(((BugCheckParameter1 + 10) & 7) + 1) > v8 )
        goto LABEL_89;
      v8 = *(_BYTE *)(((BugCheckParameter1 + 0x80000000000BLL) >> 3) + v7);
      if ( v8 )
      {
        if ( (char)(((BugCheckParameter1 + 11) & 7) + 1) > v8 )
          goto LABEL_89;
      }
    }
    else if ( v8 && (char)(((BugCheckParameter1 + 11) & 7) + 1) > v8 )
    {
      goto LABEL_89;
    }
  }
  v12 = (BugCheckParameter1 + 12) >> 3;
  result = (BugCheckParameter1 + 15) >> 3;
  v8 = *(_BYTE *)(((BugCheckParameter1 + 0x80000000000CLL) >> 3) + v7);
  if ( v12 == result )
  {
    if ( !v8 )
      return result;
    v13 = BugCheckParameter1 + 15;
    goto LABEL_84;
  }
  if ( v12 == (BugCheckParameter1 + 13) >> 3 )
  {
    if ( v8 && (char)(((BugCheckParameter1 + 13) & 7) + 1) > v8 )
      goto LABEL_89;
  }
  else
  {
    if ( v8 && (char)(((BugCheckParameter1 + 12) & 7) + 1) > v8 )
      goto LABEL_89;
    v8 = *(_BYTE *)(((BugCheckParameter1 + 0x80000000000DLL) >> 3) + v7);
    if ( v8 )
    {
      if ( (char)(((BugCheckParameter1 + 13) & 7) + 1) > v8 )
        goto LABEL_89;
    }
  }
  result = (BugCheckParameter1 + 14) ^ (BugCheckParameter1 + 15);
  v8 = *(_BYTE *)(((BugCheckParameter1 + 0x80000000000ELL) >> 3) + v7);
  if ( (result & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
  {
    if ( !v8 )
      return result;
    v13 = BugCheckParameter1 + 15;
LABEL_84:
    if ( (char)((v13 & 7) + 1) > v8 )
      goto LABEL_89;
    return result;
  }
  if ( v8 && (char)(((BugCheckParameter1 + 14) & 7) + 1) > v8 )
    goto LABEL_89;
  result = (BugCheckParameter1 + 0x80000000000FLL) >> 3;
  v8 = *(_BYTE *)(result + v7);
  if ( v8 )
  {
    if ( (char)(((BugCheckParameter1 + 15) & 7) + 1) > v8 )
      goto LABEL_89;
  }
  return result;
}
