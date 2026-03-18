/*
 * XREFs of PpmRegisterSpmSettings @ 0x14099DB50
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x140224C00 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140224E90 (PpmAcquireLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     RtlpQueryRegistryValues @ 0x140781F40 (RtlpQueryRegistryValues.c)
 *     PpmEnableProfile @ 0x14083113C (PpmEnableProfile.c)
 *     PpmAllocateQueryTable @ 0x14099D480 (PpmAllocateQueryTable.c)
 *     PpmOpenRegistryKey @ 0x14099D7E4 (PpmOpenRegistryKey.c)
 *     PpmProcessSettingsFromQueryTable @ 0x14099D934 (PpmProcessSettingsFromQueryTable.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmRegisterSpmSettings(void *a1)
{
  void *QueryTable; // rdi
  __int64 v3; // rcx
  const wchar_t *v4; // rax
  __int16 v5; // cx
  const WCHAR *v6; // rax
  __int64 v7; // rcx
  __int16 v8; // cx
  int RegistryValues; // ebx
  __int64 v10; // r8
  unsigned __int8 i; // si
  const char *v12; // rdx
  _QWORD *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rcx
  const char *v16; // rax
  const char *v17; // rax
  __int16 v18; // cx
  __int64 v19; // rdx
  NTSTATUS v20; // ebx
  char v21; // bl
  char v22; // r15
  __int64 v23; // rdx
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
  v3 = 0x7FFFLL;
  *(_OWORD *)v30 = 0LL;
  v4 = L"v1";
  while ( *v4 )
  {
    ++v4;
    if ( !--v3 )
      goto LABEL_6;
  }
  v5 = 2 * v3;
  *(_QWORD *)&v30[2] = L"v1";
  LOWORD(v30[0]) = -2 - v5;
  HIWORD(v30[0]) = -v5;
LABEL_6:
  *(_OWORD *)v31 = 0LL;
  v6 = L"Default";
  v7 = 0x7FFFLL;
  while ( *v6 )
  {
    ++v6;
    if ( !--v7 )
      goto LABEL_11;
  }
  v8 = 2 * v7;
  *(_QWORD *)&v31[2] = L"Default";
  LOWORD(v31[0]) = -2 - v8;
  HIWORD(v31[0]) = -v8;
LABEL_11:
  RegistryValues = PpmOpenRegistryKey((UNICODE_STRING *)v30, (__int64)L"Default", 65534LL, a1, &KeyHandle);
  if ( RegistryValues >= 0 )
  {
    QueryTable = (void *)PpmAllocateQueryTable((__int64)&v26);
    if ( !QueryTable )
    {
      RegistryValues = -1073741670;
      goto LABEL_36;
    }
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    for ( i = 0; i < (unsigned __int8)PpmProfileCount; ++i )
    {
      v12 = L"VideoBatching";
      v13 = (_QWORD *)(PpmProfiles + 8624LL * i);
      v14 = *(_QWORD *)((char *)v13 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_POWER.Data1;
      v32 = *(_OWORD *)((char *)v13 + 12);
      if ( !v14 )
        v14 = *((_QWORD *)&v32 + 1) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_POWER.Data4;
      if ( v14 )
      {
        v12 = (const char *)*v13;
        *(_OWORD *)v25 = 0LL;
        if ( !v12 )
          goto LABEL_28;
        v15 = 0x7FFFLL;
        v17 = v12;
        while ( *(_WORD *)v17 )
        {
          v17 += 2;
          if ( !--v15 )
            goto LABEL_28;
        }
      }
      else
      {
        *(_OWORD *)v25 = 0LL;
        v15 = 0x7FFFLL;
        v16 = L"VideoBatching";
        while ( *(_WORD *)v16 )
        {
          v16 += 2;
          if ( !--v15 )
            goto LABEL_28;
        }
      }
      v18 = 2 * v15;
      *(_QWORD *)&v25[2] = v12;
      LOWORD(v25[0]) = -2 - v18;
      HIWORD(v25[0]) = -v18;
LABEL_28:
      if ( PpmOpenRegistryKey((UNICODE_STRING *)v25, (__int64)v12, v10, KeyHandle, &Handle) >= 0 )
      {
        v20 = PpmOpenRegistryKey((UNICODE_STRING *)v31, v19, v10, Handle, &v28);
        ZwClose(Handle);
        if ( v20 >= 0 )
        {
          RegistryValues = RtlpQueryRegistryValues(0x40000000, (const WCHAR *)v28, (__int64)QueryTable, 0LL);
          ZwClose(v28);
          PpmReleaseLock(&PpmPerfPolicyLock);
          if ( RegistryValues < 0 )
            goto LABEL_36;
          v21 = PpmProcessSettingsFromQueryTable(&v32, 0, (__int64)QueryTable);
          v22 = PpmProcessSettingsFromQueryTable(&v32, 1, (__int64)QueryTable);
          PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
          if ( v21 || v22 )
            PpmEnableProfile((__int64)v13, v23);
        }
      }
    }
    PpmReleaseLock(&PpmPerfPolicyLock);
    PpmProfileStatus |= 2u;
    RegistryValues = 0;
  }
LABEL_36:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( QueryTable )
    ExFreePoolWithTag(QueryTable, 0x704D5053u);
  return (unsigned int)RegistryValues;
}
