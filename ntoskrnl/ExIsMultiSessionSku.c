__int64 __fastcall ExIsMultiSessionSku(char *a1)
{
  int NumberOfInitialSessionsFromRegistry; // eax
  __int64 v3; // rdx
  int v4; // ecx
  struct _LIST_ENTRY *CurrentApiSetSchema; // rax
  char v7; // al
  _QWORD v8[2]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v9; // [rsp+40h] [rbp-10h] BYREF
  char v10; // [rsp+68h] [rbp+18h] BYREF
  unsigned int v11; // [rsp+70h] [rbp+20h] BYREF

  v8[0] = 4587588LL;
  v8[1] = L"ext-ms-win-session-wtsapi32-l1-1-0";
  v10 = 0;
  v9 = 0LL;
  v11 = 0;
  NumberOfInitialSessionsFromRegistry = ExpGetNumberOfInitialSessionsFromRegistry(&v11);
  v4 = NumberOfInitialSessionsFromRegistry;
  if ( NumberOfInitialSessionsFromRegistry >= 0 )
  {
    if ( v11 <= 1 )
    {
      CurrentApiSetSchema = PsQueryCurrentApiSetSchema((unsigned int)NumberOfInitialSessionsFromRegistry, v3);
      v4 = ApiSetResolveToHost((__int64)CurrentApiSetSchema, (unsigned __int16 *)v8, 0LL, &v10, (__int64)&v9);
      if ( v4 >= 0 )
      {
        v7 = v10;
        if ( v10 && !(_WORD)v9 )
          v7 = 0;
        *a1 = v7;
      }
    }
    else
    {
      *a1 = 1;
    }
  }
  return (unsigned int)v4;
}
