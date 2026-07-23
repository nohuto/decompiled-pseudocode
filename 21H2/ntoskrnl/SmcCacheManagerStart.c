/*
 * XREFs of SmcCacheManagerStart @ 0x14092D6A4
 * Callers:
 *     SmcCacheCreatePrepare @ 0x14092A874 (SmcCacheCreatePrepare.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwCreateKey @ 0x1403FA920 (ZwCreateKey.c)
 *     SmKmKeyGenStart @ 0x14092BDD0 (SmKmKeyGenStart.c)
 *     SmpUtilsGetControlDevice @ 0x14092E82C (SmpUtilsGetControlDevice.c)
 */

int __fastcall SmcCacheManagerStart(__int64 a1, __int64 a2)
{
  int *v2; // rbx
  unsigned int v5; // edi
  int v6; // eax
  int result; // eax
  __int64 v8; // r8
  const wchar_t *v9; // rax
  __int64 v10; // rdx
  const wchar_t *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _UNICODE_STRING v14; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+C0h] [rbp+40h] BYREF

  v2 = (int *)&unk_140D24110;
  KeyHandle = 0LL;
  v5 = 0;
  v14 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  do
  {
    v6 = *v2;
    if ( (*v2 & 1) == 0 )
    {
      if ( !v5 )
      {
        result = SmpUtilsGetControlDevice(a1, v2 + 2, v2 + 4);
        if ( result < 0 )
          return result;
        v6 = *v2;
      }
      *v2 = v6 | 1;
    }
    ++v5;
    v2 += 6;
  }
  while ( v5 < 2 );
  v8 = 0x7FFFLL;
  v9 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters";
  do
  {
    if ( !*v9 )
      break;
    ++v9;
    --v8;
  }
  while ( v8 );
  v10 = (0x7FFF - v8) & ((unsigned __int128)-(__int128)(unsigned __int64)v8 >> 64);
  if ( v8 )
  {
    v14.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters";
    v14.Length = 2 * v10;
    v14.MaximumLength = 2 * v10 + 2;
  }
  ObjectAttributes.ObjectName = &v14;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  result = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( result >= 0 )
  {
    ZwClose(KeyHandle);
    v14 = 0LL;
    v11 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters\\CacheInfo";
    v12 = 0x7FFFLL;
    do
    {
      if ( !*v11 )
        break;
      ++v11;
      --v12;
    }
    while ( v12 );
    v13 = (0x7FFF - v12) & -(__int64)(v12 != 0);
    if ( v12 )
    {
      v14.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StorePar"
                    "ameters\\CacheInfo";
      v14.Length = 2 * v13;
      v14.MaximumLength = 2 * v13 + 2;
    }
    result = SmKmKeyGenStart(a1 + 512, &v14);
    if ( result >= 0 )
    {
      *(_QWORD *)(a1 + 552) = a2;
      return 0;
    }
  }
  return result;
}
