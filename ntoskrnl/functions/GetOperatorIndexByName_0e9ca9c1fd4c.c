__int64 __fastcall GetOperatorIndexByName(wchar_t *Src)
{
  wchar_t *v1; // rdi
  unsigned int v2; // ebx
  __int64 v3; // rax
  unsigned int v5; // r14d
  int v6; // r12d
  rsize_t v7; // rsi
  size_t v8; // rcx
  wchar_t *v9; // rax
  const wchar_t *v10; // r15
  __int64 v11; // rsi
  int *v12; // rbp
  const wchar_t *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  wchar_t *Context; // [rsp+20h] [rbp-D8h] BYREF
  wchar_t Delim[12]; // [rsp+28h] [rbp-D0h] BYREF
  wchar_t Dst[64]; // [rsp+40h] [rbp-B8h] BYREF

  v1 = Dst;
  v2 = -1;
  v3 = -1LL;
  wcscpy(Delim, L" (){}");
  Context = 0LL;
  v5 = 0;
  v6 = 0;
  do
    ++v3;
  while ( Src[v3] );
  v7 = (unsigned int)v3;
  v8 = 2LL * (unsigned int)v3;
  if ( v8 <= 0x80 || (v1 = (wchar_t *)SddlpAlloc(v8)) != 0LL )
  {
    wcsncpy_s(v1, v7, Src, 0xFFFFFFFFFFFFFFFFuLL);
    v9 = wcstok_s(v1, Delim, &Context);
    v10 = v9;
    if ( v9 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( v9[v11] );
      v12 = &dword_14000AD74;
      while ( 1 )
      {
        v13 = *(const wchar_t **)(v12 - 5);
        v14 = -1LL;
        do
          ++v14;
        while ( v13[v14] );
        if ( (unsigned int)v11 <= (unsigned int)v14 )
        {
          v15 = -1LL;
          do
            ++v15;
          while ( v13[v15] );
        }
        else
        {
          LODWORD(v15) = v11;
        }
        if ( !*(_BYTE *)v12 )
        {
          v15 = -1LL;
          do
            ++v15;
          while ( v13[v15] );
        }
        if ( !wcsnicmp(v10, v13, (unsigned int)v15) )
          break;
        ++v5;
        v12 += 6;
        if ( v5 >= 0x18 )
          goto LABEL_22;
      }
      v6 = 1;
    }
  }
LABEL_22:
  if ( v1 != Dst && v1 )
    ExFreePoolWithTag(v1, 0);
  if ( v6 )
    return v5;
  return v2;
}
