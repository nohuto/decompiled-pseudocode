/*
 * XREFs of _CcdRetrieveValueFromRegistry @ 0x1C01BF1C4
 * Callers:
 *     _CcdRetrieveSetIdFromRegistry @ 0x1C01BF090 (_CcdRetrieveSetIdFromRegistry.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall CcdRetrieveValueFromRegistry(HANDLE KeyHandle, PUNICODE_STRING ValueName, _QWORD *a3, __int64 a4)
{
  void *v4; // rdi
  void *v8; // rax
  NTSTATUS v9; // eax
  unsigned int v10; // ebx
  ULONG Length; // [rsp+68h] [rbp+20h] BYREF
  int v13; // [rsp+6Ch] [rbp+24h]

  v13 = HIDWORD(a4);
  v4 = 0LL;
  Length = 1024;
  *a3 = 0LL;
  do
  {
    operator delete(v4);
    v8 = (void *)operator new[](Length, 0x63644356u, 256LL);
    v4 = v8;
    if ( !v8 )
    {
      WdLogSingleEntry1(6LL, Length);
      v10 = -1073741801;
      goto LABEL_9;
    }
    v9 = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, v8, Length, &Length);
    v10 = v9;
  }
  while ( v9 == -2147483643 || v9 == -1073741789 );
  if ( v9 >= 0 )
  {
    *a3 = v4;
    return v10;
  }
LABEL_9:
  operator delete(v4);
  return v10;
}
