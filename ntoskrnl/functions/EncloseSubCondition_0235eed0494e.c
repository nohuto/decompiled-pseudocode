__int64 __fastcall EncloseSubCondition(PVOID *a1)
{
  unsigned int v2; // ebx
  _WORD *v3; // rcx
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  size_t v6; // rcx
  unsigned __int64 v7; // rbp
  wchar_t *v8; // rax
  wchar_t *v9; // rsi

  v2 = 0;
  v3 = *a1;
  if ( *v3 != 40 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v3[v4] );
    v5 = 2LL * (unsigned int)v4;
    if ( v5 > 0xFFFFFFFF )
      return 534;
    v6 = (unsigned int)(v5 + 6);
    if ( (unsigned int)v6 < (unsigned int)v5 )
    {
      return 534;
    }
    else
    {
      v7 = (unsigned int)v6;
      v8 = (wchar_t *)SddlpAlloc(v6);
      v9 = v8;
      if ( v8 )
      {
        if ( RtlStringCchPrintfW(v8, v7 >> 1, L"(%ls)", *a1) >= 0 )
        {
          if ( *a1 )
            ExFreePoolWithTag(*a1, 0);
          *a1 = v9;
        }
        else
        {
          ExFreePoolWithTag(v9, 0);
          return 50;
        }
      }
      else
      {
        return 8;
      }
    }
  }
  return v2;
}
