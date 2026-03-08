/*
 * XREFs of ExpWnfDeletePermanentStateData @ 0x140A046AC
 * Callers:
 *     NtDeleteWnfStateName @ 0x140778FE0 (NtDeleteWnfStateName.c)
 *     ExpNtDeleteWnfStateData @ 0x14085860C (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x140413EB0 (ZwDeleteValueKey.c)
 *     ExpWnfComposeValueName @ 0x14071C674 (ExpWnfComposeValueName.c)
 *     ExpWnfAcquirePermanentDataStoreHandle @ 0x140793770 (ExpWnfAcquirePermanentDataStoreHandle.c)
 *     ExpWnfGetPermanentDataStore @ 0x140794E80 (ExpWnfGetPermanentDataStore.c)
 *     ExpWnfEnumeratePermanentDataStoreHandles @ 0x140A04A04 (ExpWnfEnumeratePermanentDataStoreHandles.c)
 */

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
