NTSTATUS __fastcall PnpGenerateDeviceIdsHash(__int64 a1, __int64 a2, _DWORD *a3)
{
  NTSTATUS result; // eax
  int v4; // ebp
  unsigned int v5; // esi
  const WCHAR **v6; // rdi
  const WCHAR *v8; // rbx
  __int64 v9; // rcx
  _QWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  ULONG HashValue; // [rsp+60h] [rbp+8h] BYREF

  v10[0] = a1;
  HashValue = 0;
  result = 0;
  *a3 = 0;
  DestinationString = 0LL;
  v4 = 0;
  v10[1] = a2;
  v5 = 0;
  v6 = (const WCHAR **)v10;
  do
  {
    v8 = *v6;
    if ( *v6 )
    {
      while ( *v8 )
      {
        result = RtlInitUnicodeStringEx(&DestinationString, v8);
        if ( result < 0 )
          return result;
        result = RtlHashUnicodeString(&DestinationString, 1u, 0, &HashValue);
        if ( result < 0 )
          return result;
        v4 += HashValue;
        v9 = -1LL;
        do
          ++v9;
        while ( v8[v9] );
        v8 += v9 + 1;
        if ( !v8 )
          break;
      }
    }
    ++v5;
    ++v6;
  }
  while ( v5 < 2 );
  *a3 = v4;
  return result;
}
