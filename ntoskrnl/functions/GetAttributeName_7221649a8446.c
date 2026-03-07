__int64 __fastcall GetAttributeName(wchar_t *Str1, __int64 *a2, unsigned int *a3)
{
  const wchar_t *v5; // rsi
  unsigned int v6; // ebx
  unsigned int v7; // edi
  __int16 v8; // cx
  wint_t v9; // bp
  unsigned int v10; // ecx
  const wchar_t *v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // eax
  bool v14; // zf
  PVOID v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v21; // [rsp+68h] [rbp+20h] BYREF

  v21 = 0LL;
  v5 = Str1;
  v6 = 0;
  v7 = 0;
  if ( wcsnicmp(Str1, L"@", 1uLL) )
  {
    while ( 1 )
    {
      v9 = v5[v7];
      if ( v9 > 0xFFu )
        break;
      if ( !iswalnum(v9) )
      {
        v10 = 0;
        v11 = L":./_@";
        while ( *v11 != v9 )
        {
          ++v10;
          ++v11;
          if ( v10 >= 5 )
            goto LABEL_10;
        }
      }
      if ( !v5[v7] )
        break;
      ++v7;
    }
  }
  else
  {
    while ( (unsigned __int8)IsLegalAttributeChar2(v5[v7]) && v8 )
      ++v7;
  }
LABEL_10:
  if ( v7 >= 8 && !wcsnicmp(v5, L"@DEVICE.", 8uLL) )
  {
    if ( v7 != 8 )
    {
      v12 = *a2;
      v13 = 2 * v7 - 16;
      v5 += 8;
      *(_BYTE *)(*a2 + 1) = -5;
      goto LABEL_31;
    }
    return 1336;
  }
  if ( v7 < 0xA )
  {
    if ( v7 < 6 )
      goto LABEL_24;
    goto LABEL_21;
  }
  if ( wcsnicmp(v5, L"@RESOURCE.", 0xAuLL) )
  {
LABEL_21:
    if ( !wcsnicmp(v5, L"@USER.", 6uLL) )
    {
      if ( v7 == 6 )
        return 1336;
      v12 = *a2;
      v13 = 2 * v7 - 12;
      v5 += 6;
      *(_BYTE *)(*a2 + 1) = -7;
      goto LABEL_31;
    }
LABEL_24:
    if ( v7 < 7 )
    {
      if ( !v7 )
        return 1336;
    }
    else if ( !wcsnicmp(v5, L"@TOKEN.", 7uLL) )
    {
      if ( v7 == 7 )
        return 1336;
      v12 = *a2;
      v13 = 2 * v7 - 14;
      v5 += 7;
      *(_BYTE *)(*a2 + 1) = -4;
      goto LABEL_31;
    }
    if ( !wcsnicmp(v5, L"@", 1uLL) )
      return 1336;
    v12 = *a2;
    v13 = 2 * v7;
    *(_BYTE *)(*a2 + 1) = -8;
    goto LABEL_31;
  }
  if ( v7 == 10 )
    return 1336;
  v12 = *a2;
  v13 = 2 * v7 - 20;
  v5 += 10;
  *(_BYTE *)(*a2 + 1) = -6;
LABEL_31:
  *(_DWORD *)(v12 + 4) = v13;
  v14 = *(_BYTE *)(v12 + 1) == 0xF8;
  *a3 = v7;
  if ( v14 )
  {
    v15 = SddlpAlloc(v13);
    v16 = *a2;
    *(_QWORD *)(*a2 + 8) = v15;
    if ( v15 )
      memmove(v15, v5, *(unsigned int *)(v16 + 4));
    else
      return 8;
  }
  else
  {
    v6 = DecodeAttributeName((__int64)v5, v13, &v21);
    if ( !v6 )
    {
      v17 = *a2;
      v18 = -1LL;
      v19 = v21;
      *(_QWORD *)(*a2 + 8) = v21;
      do
        ++v18;
      while ( *(_WORD *)(v19 + 2 * v18) );
      *(_DWORD *)(v17 + 4) = 2 * v18;
    }
  }
  return v6;
}
