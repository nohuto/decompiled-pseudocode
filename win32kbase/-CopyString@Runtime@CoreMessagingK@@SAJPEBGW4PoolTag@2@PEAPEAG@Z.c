__int64 __fastcall CoreMessagingK::Runtime::CopyString(__int64 a1, __int64 a2, void **a3)
{
  int v4; // ebx
  __int64 v5; // r9
  char *v6; // rax
  size_t v7; // rsi
  void *v8; // rcx
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v10 = 0LL;
  v4 = RtlStringCbLengthW(L"Kernel\\MIT\\InputPort", 0xFFFFFFFEuLL, (unsigned __int64 *)&v10);
  if ( v4 >= 0 )
  {
    v6 = (char *)v10;
    if ( (unsigned __int64)v10 >= 0xFFFFFFFC )
    {
      return (unsigned int)-1073741585;
    }
    else
    {
      v10 = 0LL;
      v7 = (size_t)(v6 + 2);
      v4 = CoreMessagingK::Runtime::AllocUninitialized(v6 + 2, 1314082115LL, &v10, v5);
      if ( v4 >= 0 )
      {
        v8 = v10;
        *a3 = v10;
        memmove(v8, L"Kernel\\MIT\\InputPort", v7);
      }
    }
  }
  return (unsigned int)v4;
}
