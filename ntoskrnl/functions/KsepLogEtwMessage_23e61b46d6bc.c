void __fastcall KsepLogEtwMessage(int a1, int a2, const char *a3, va_list a4)
{
  __int64 v5; // rax
  const EVENT_DESCRIPTOR *v6; // rdx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-D0h] BYREF
  char *v8; // [rsp+40h] [rbp-C0h]
  int v9; // [rsp+48h] [rbp-B8h]
  int v10; // [rsp+4Ch] [rbp-B4h]
  char pszDest[256]; // [rsp+50h] [rbp-B0h] BYREF
  int v12; // [rsp+170h] [rbp+70h] BYREF

  v12 = a1;
  if ( KseEtwHandle && RtlStringCbVPrintfA(pszDest, 0x100uLL, a3, a4) >= 0 )
  {
    UserData.Reserved = 0;
    UserData.Ptr = (ULONGLONG)&v12;
    UserData.Size = 4;
    v8 = pszDest;
    v5 = -1LL;
    do
      ++v5;
    while ( pszDest[v5] );
    v10 = 0;
    v6 = (const EVENT_DESCRIPTOR *)KShimErrorMessage;
    v9 = v5 + 1;
    if ( a2 )
      v6 = &KShimInfoMessage;
    EtwWrite(KseEtwHandle, v6, 0LL, 2u, &UserData);
  }
}
