/*
 * XREFs of SmcCacheManagerStart @ 0x1409D7E68
 * Callers:
 *     SmcCacheCreatePrepare @ 0x1409D4FE0 (SmcCacheCreatePrepare.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwCreateKey @ 0x1404126B0 (ZwCreateKey.c)
 *     SmKmKeyGenStart @ 0x1409D656C (SmKmKeyGenStart.c)
 *     SmpUtilsGetControlDevice @ 0x1409D8F9C (SmpUtilsGetControlDevice.c)
 */

int __fastcall SmcCacheManagerStart(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rbx
  unsigned int v5; // edi
  int result; // eax
  __int64 v7; // rcx
  const wchar_t *v8; // rax
  const wchar_t *v9; // rax
  __int64 v10; // rcx
  struct _UNICODE_STRING v11; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp+30h] BYREF

  v2 = (_DWORD *)(a1 - 240);
  KeyHandle = 0LL;
  v5 = 0;
  v11 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  do
  {
    if ( (*v2 & 1) == 0 )
    {
      if ( !v5 )
      {
        result = SmpUtilsGetControlDevice(a1, v2 + 2, v2 + 4);
        if ( result < 0 )
          return result;
      }
      *v2 |= 1u;
    }
    ++v5;
    v2 += 6;
  }
  while ( v5 < 2 );
  v7 = 0x7FFFLL;
  v8 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters";
  while ( *v8 )
  {
    ++v8;
    if ( !--v7 )
      goto LABEL_12;
  }
  v11.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters";
  v11.Length = 2 * (0x7FFF - v7);
  v11.MaximumLength = v11.Length + 2;
LABEL_12:
  ObjectAttributes.ObjectName = &v11;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  result = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( result >= 0 )
  {
    ZwClose(KeyHandle);
    v11 = 0LL;
    v9 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters\\CacheInfo";
    v10 = 0x7FFFLL;
    while ( *v9 )
    {
      ++v9;
      if ( !--v10 )
        goto LABEL_18;
    }
    v11.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParam"
                  "eters\\CacheInfo";
    v11.Length = 2 * (0x7FFF - v10);
    v11.MaximumLength = v11.Length + 2;
LABEL_18:
    result = SmKmKeyGenStart(a1 + 512, &v11);
    if ( result >= 0 )
    {
      *(_QWORD *)(a1 + 552) = a2;
      return 0;
    }
  }
  return result;
}
