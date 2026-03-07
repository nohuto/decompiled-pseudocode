__int64 __fastcall PnpRegQueryValueIndirect(
        size_t a1,
        void *a2,
        const WCHAR *a3,
        unsigned int *a4,
        unsigned __int64 a5,
        __int64 a6,
        bool *a7)
{
  void *v7; // rsi
  unsigned int *v9; // rbx
  void *Pool2; // rdi
  bool *v13; // r14
  unsigned int Value; // ebp
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // ebx
  int v19; // eax
  size_t pcbLength; // [rsp+60h] [rbp+8h] BYREF

  pcbLength = a1;
  v7 = (void *)a5;
  v9 = (unsigned int *)a6;
  Pool2 = 0LL;
  if ( a5 )
    v7 = (void *)(-(__int64)(*(_DWORD *)a6 != 0) & a5);
  else
    *(_DWORD *)a6 = 0;
  v13 = a7;
  if ( a7 )
    *a7 = 0;
  *a4 = 0;
  Value = RegRtlQueryValue(a2, a3, a4, v7, v9);
  if ( Value && Value != -1073741789 || !v13 )
    return Value;
  v16 = *a4;
  if ( *a4 <= 6 )
  {
    if ( v16 == 6 )
      goto LABEL_25;
    if ( v16 > 2 )
    {
      v17 = v16 - 3;
      if ( v16 != 3 )
      {
LABEL_14:
        if ( v17 - 1 >= 2 )
        {
          *v13 = (_WORD)v16 == 25;
          return Value;
        }
LABEL_25:
        *v13 = 0;
        return Value;
      }
    }
  }
  else if ( v16 != 7 )
  {
    if ( v16 == 8 )
      goto LABEL_25;
    v17 = v16 - 9;
    if ( v16 == 9 )
      goto LABEL_25;
    goto LABEL_14;
  }
  v18 = *v9;
  if ( Value )
  {
    if ( v18 <= 0xFFFE )
    {
      while ( 1 )
      {
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, 0);
        Pool2 = (void *)ExAllocatePool2(256LL, v18, 1380994640LL);
        if ( !Pool2 )
          break;
        LODWORD(pcbLength) = v18;
        v19 = RegRtlQueryValue(a2, a3, 0LL, Pool2, (unsigned int *)&pcbLength);
        if ( v19 != -1073741789 )
        {
          if ( v19 )
            goto LABEL_36;
          v7 = Pool2;
          goto LABEL_20;
        }
        if ( (unsigned int)pcbLength > v18 )
        {
          v18 = pcbLength;
          if ( (unsigned int)pcbLength <= 0xFFFE )
            continue;
        }
        goto LABEL_36;
      }
    }
  }
  else
  {
LABEL_20:
    if ( RtlUnalignedStringCbLengthW((STRSAFE_PCUNZWCH)v7, v18, &pcbLength) >= 0
      && ((unsigned __int8)PnpParseIndirectInfString(v7) || PnpParseIndirectResourceString((const wchar_t *)v7)) )
    {
      *v13 = 1;
    }
    if ( Pool2 )
LABEL_36:
      ExFreePoolWithTag(Pool2, 0);
  }
  return Value;
}
