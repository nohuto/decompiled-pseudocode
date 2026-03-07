__int64 __fastcall bQueryFntCacheReg(HANDLE KeyHandle, const WCHAR *a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  unsigned int *v8; // rax
  unsigned int *v9; // rdi
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG Length; // [rsp+68h] [rbp+20h] BYREF

  ValueName = 0LL;
  v6 = 0;
  RtlInitUnicodeString(&ValueName, a2);
  v7 = -1LL;
  do
    ++v7;
  while ( a2[v7] );
  Length = 2 * v7 + 30;
  if ( 2 * (_DWORD)v7 != -30 )
  {
    v8 = (unsigned int *)Win32AllocPoolZInit((unsigned int)(2 * v7 + 30), 1128682580LL);
    v9 = v8;
    if ( v8 )
    {
      if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, v8, Length, &Length) >= 0 )
      {
        v6 = 1;
        *a3 = *(unsigned int *)((char *)v9 + v9[2]);
      }
      Win32FreePool(v9);
    }
  }
  return v6;
}
