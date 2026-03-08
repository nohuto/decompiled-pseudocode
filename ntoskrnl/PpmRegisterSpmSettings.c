/*
 * XREFs of PpmRegisterSpmSettings @ 0x14099A640
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x1402D1F40 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402D1F90 (PpmAcquireLock.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     RtlpQueryRegistryValues @ 0x14069B3C0 (RtlpQueryRegistryValues.c)
 *     PpmEnableProfile @ 0x140825808 (PpmEnableProfile.c)
 *     PpmAllocateQueryTable @ 0x140999FC0 (PpmAllocateQueryTable.c)
 *     PpmOpenRegistryKey @ 0x14099A2C4 (PpmOpenRegistryKey.c)
 *     PpmProcessSettingsFromQueryTable @ 0x14099A414 (PpmProcessSettingsFromQueryTable.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmRegisterSpmSettings(void *a1, __int64 a2, __int64 a3)
{
  _QWORD *QueryTable; // rdi
  __int64 v5; // rcx
  const wchar_t *v6; // rax
  const WCHAR *v7; // rax
  __int64 v8; // rcx
  int RegistryValues; // ebx
  __int64 v10; // r8
  unsigned __int8 i; // si
  __int64 v12; // rdx
  _QWORD *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rcx
  const wchar_t *v16; // rax
  __int16 v17; // ax
  _WORD *v18; // rcx
  _WORD *v19; // rax
  __int64 v20; // rdx
  NTSTATUS v21; // ebx
  char v22; // bl
  char v23; // r15
  int v25[4]; // [rsp+38h] [rbp-39h] BYREF
  int v26; // [rsp+48h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-21h] BYREF
  HANDLE v28; // [rsp+58h] [rbp-19h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-11h] BYREF
  int v30[4]; // [rsp+68h] [rbp-9h] BYREF
  int v31[4]; // [rsp+78h] [rbp+7h] BYREF
  __int128 v32; // [rsp+88h] [rbp+17h] BYREF

  v26 = -1;
  Handle = 0LL;
  v28 = 0LL;
  KeyHandle = 0LL;
  *(_OWORD *)v25 = 0LL;
  QueryTable = 0LL;
  v5 = 0x7FFFLL;
  *(_OWORD *)v30 = 0LL;
  v6 = L"v1";
  while ( *v6 )
  {
    ++v6;
    if ( !--v5 )
      goto LABEL_6;
  }
  *(_QWORD *)&v30[2] = L"v1";
  LOWORD(v30[0]) = 2 * (0x7FFF - v5);
  HIWORD(v30[0]) = LOWORD(v30[0]) + 2;
LABEL_6:
  *(_OWORD *)v31 = 0LL;
  v7 = L"Default";
  v8 = 0x7FFFLL;
  while ( *v7 )
  {
    ++v7;
    if ( !--v8 )
      goto LABEL_11;
  }
  *(_QWORD *)&v31[2] = L"Default";
  LOWORD(v31[0]) = 2 * (0x7FFF - v8);
  HIWORD(v31[0]) = LOWORD(v31[0]) + 2;
LABEL_11:
  RegistryValues = PpmOpenRegistryKey((UNICODE_STRING *)v30, (__int64)L"Default", a3, a1, &KeyHandle);
  if ( RegistryValues >= 0 )
  {
    QueryTable = (_QWORD *)PpmAllocateQueryTable((__int64)&v26);
    if ( !QueryTable )
    {
      RegistryValues = -1073741670;
      goto LABEL_38;
    }
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    for ( i = 0; i < (unsigned __int8)PpmProfileCount; ++i )
    {
      v12 = (__int64)L"VideoBatching";
      v13 = (_QWORD *)(PpmProfiles + 960LL * i);
      v14 = *(_QWORD *)((char *)v13 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_POWER.Data1;
      v32 = *(_OWORD *)((char *)v13 + 12);
      if ( !v14 )
        v14 = *((_QWORD *)&v32 + 1) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_POWER.Data4;
      if ( v14 )
      {
        v18 = (_WORD *)*v13;
        *(_OWORD *)v25 = 0LL;
        if ( !v18 )
          goto LABEL_30;
        v12 = 0x7FFFLL;
        v19 = v18;
        while ( *v19 )
        {
          ++v19;
          if ( !--v12 )
            goto LABEL_30;
        }
        *(_QWORD *)&v25[2] = v18;
        v17 = 0x7FFF - v12;
      }
      else
      {
        *(_OWORD *)v25 = 0LL;
        v15 = 0x7FFFLL;
        v16 = L"VideoBatching";
        while ( *v16 )
        {
          ++v16;
          if ( !--v15 )
            goto LABEL_30;
        }
        *(_QWORD *)&v25[2] = L"VideoBatching";
        v17 = 0x7FFF - v15;
      }
      LOWORD(v25[0]) = 2 * v17;
      HIWORD(v25[0]) = 2 * v17 + 2;
LABEL_30:
      if ( PpmOpenRegistryKey((UNICODE_STRING *)v25, v12, v10, KeyHandle, &Handle) >= 0 )
      {
        v21 = PpmOpenRegistryKey((UNICODE_STRING *)v31, v20, v10, Handle, &v28);
        ZwClose(Handle);
        if ( v21 >= 0 )
        {
          RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)v28, QueryTable, 0LL);
          ZwClose(v28);
          PpmReleaseLock(&PpmPerfPolicyLock);
          if ( RegistryValues < 0 )
            goto LABEL_38;
          v22 = PpmProcessSettingsFromQueryTable(&v32, 0, (__int64)QueryTable);
          v23 = PpmProcessSettingsFromQueryTable(&v32, 1, (__int64)QueryTable);
          PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
          if ( v22 || v23 )
            PpmEnableProfile((__int64)v13);
        }
      }
    }
    PpmReleaseLock(&PpmPerfPolicyLock);
    PpmProfileStatus |= 2u;
    RegistryValues = 0;
  }
LABEL_38:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( QueryTable )
    ExFreePoolWithTag(QueryTable, 0x704D5053u);
  return (unsigned int)RegistryValues;
}
