__int64 __fastcall ExpWnfDeletePermanentStateData(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // r14
  int v6; // r12d
  __int64 result; // rax
  unsigned int v8; // edi
  HANDLE KeyHandle; // [rsp+20h] [rbp-60h] BYREF
  __int64 v10; // [rsp+28h] [rbp-58h] BYREF
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-50h] BYREF
  char v12; // [rsp+48h] [rbp-38h] BYREF

  v10 = 0LL;
  *(_QWORD *)&ValueName.Length = 2228224LL;
  v3 = 0LL;
  ValueName.Buffer = (wchar_t *)&v12;
  v4 = (a2 >> 4) & 3;
  v5 = (a2 >> 6) & 0xF;
  ExpWnfComposeValueName(a2, &ValueName);
  KeyHandle = 0LL;
  v6 = 0;
  if ( a1 )
  {
    result = ExpWnfGetPermanentDataStore(a1, v4, 0LL, &v10);
    if ( (int)result < 0 )
      return result;
    v3 = v10;
    result = ExpWnfAcquirePermanentDataStoreHandle(v10, &KeyHandle);
  }
  else
  {
    result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, HANDLE *))ExpWnfEnumeratePermanentDataStoreHandles)(
               (unsigned int)v5,
               (unsigned int)v4,
               0LL,
               &KeyHandle);
  }
  if ( (int)result >= 0 )
  {
    while ( 1 )
    {
      v8 = ZwDeleteValueKey(KeyHandle, &ValueName);
      if ( v3 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v3 + 8));
        KeAbPostRelease(v3 + 8);
        v3 = 0LL;
      }
      if ( a1 )
        break;
      ZwClose(KeyHandle);
      if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, HANDLE *))ExpWnfEnumeratePermanentDataStoreHandles)(
                  (unsigned int)v5,
                  (unsigned int)v4,
                  (unsigned int)++v6,
                  &KeyHandle) < 0 )
        return 0;
    }
    return v8;
  }
  return result;
}
