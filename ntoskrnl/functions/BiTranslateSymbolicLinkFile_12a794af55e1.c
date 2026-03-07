__int64 __fastcall BiTranslateSymbolicLinkFile(wchar_t *SourceString, wchar_t **a2)
{
  _WORD *v4; // rdi
  wchar_t *v5; // rbp
  wchar_t *v6; // rsi
  char v7; // r15
  wchar_t *v8; // rbx
  NTSTATUS v9; // eax
  __int64 v10; // rax
  __int64 v11; // rsi
  size_t v12; // rsi
  wchar_t *Pool2; // rax
  wchar_t *v14; // r13
  unsigned int v15; // ebx
  unsigned int Size; // [rsp+60h] [rbp+8h]
  void *Src; // [rsp+70h] [rbp+18h] BYREF

  Src = 0LL;
  v4 = 0LL;
  if ( SourceString && a2 )
  {
    *a2 = 0LL;
    v5 = SourceString;
    v6 = 0LL;
    v7 = 0;
    while ( 1 )
    {
      v8 = wcsrchr(v5, 0x5Cu);
      if ( v6 )
        *v6 = 92;
      if ( !v8 )
        break;
      *v8 = 0;
      v9 = BiTranslateSymbolicLink(v5, (wchar_t **)&Src);
      v4 = Src;
      if ( v9 >= 0 )
      {
        v7 = 1;
        *v8 = 92;
        v10 = -1LL;
        v11 = -1LL;
        do
          ++v11;
        while ( v4[v11] );
        v12 = (unsigned int)(2 * v11);
        do
          ++v10;
        while ( v8[v10] );
        Size = 2 * v10 + 2;
        Pool2 = (wchar_t *)ExAllocatePool2(258LL, (unsigned int)v12 + Size, 1262764866LL);
        *a2 = Pool2;
        v14 = Pool2;
        if ( !Pool2 )
        {
          v15 = -1073741801;
          goto LABEL_20;
        }
        memmove(Pool2, v4, v12);
        memmove((char *)v14 + v12, v8, Size);
        if ( v5 != SourceString )
          ExFreePoolWithTag(v5, 0x4B444342u);
        v5 = *a2;
        v8 = (wchar_t *)((char *)*a2 + v12);
        *v8 = 0;
      }
      v6 = v8;
    }
    v15 = v7 == 0 ? 0xC0000001 : 0;
  }
  else
  {
    v15 = -1073741811;
  }
LABEL_20:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  return v15;
}
