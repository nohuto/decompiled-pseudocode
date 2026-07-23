/*
 * XREFs of PpmRegisterSpmSettings @ 0x1408F6250
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x14026FCB4 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x1402CF3B0 (PpmReleaseLock.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     RtlpQueryRegistryValues @ 0x140635878 (RtlpQueryRegistryValues.c)
 *     PpmEnableProfile @ 0x1407C6134 (PpmEnableProfile.c)
 *     PpmAllocateQueryTable @ 0x1408F5BC0 (PpmAllocateQueryTable.c)
 *     PpmOpenRegistryKey @ 0x1408F5F14 (PpmOpenRegistryKey.c)
 *     PpmProcessSettingsFromQueryTable @ 0x1408F6038 (PpmProcessSettingsFromQueryTable.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmRegisterSpmSettings(void *a1)
{
  char *QueryTable; // rdi
  __int64 v2; // r8
  const wchar_t *v3; // rax
  __int64 v4; // rdx
  const WCHAR *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  int RegistryValues; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int8 v11; // si
  const wchar_t *v12; // r9
  _QWORD *v13; // r14
  __int64 v14; // rax
  const wchar_t *v15; // rax
  const wchar_t *v16; // rax
  NTSTATUS v17; // ebx
  char v18; // bl
  char v19; // r15
  int v21[4]; // [rsp+38h] [rbp-39h] BYREF
  int v22; // [rsp+48h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-21h] BYREF
  HANDLE v24; // [rsp+58h] [rbp-19h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-11h] BYREF
  int v26[4]; // [rsp+68h] [rbp-9h] BYREF
  int v27[4]; // [rsp+78h] [rbp+7h] BYREF
  __int128 v28; // [rsp+88h] [rbp+17h] BYREF

  v22 = -1;
  Handle = 0LL;
  v24 = 0LL;
  KeyHandle = 0LL;
  *(_OWORD *)v21 = 0LL;
  QueryTable = 0LL;
  v2 = 0x7FFFLL;
  *(_OWORD *)v26 = 0LL;
  v3 = L"v1";
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v2;
  }
  while ( v2 );
  v4 = (0x7FFF - v2) & ((unsigned __int128)-(__int128)(unsigned __int64)v2 >> 64);
  if ( v2 )
  {
    *(_QWORD *)&v26[2] = L"v1";
    LOWORD(v26[0]) = 2 * v4;
    HIWORD(v26[0]) = 2 * v4 + 2;
  }
  *(_OWORD *)v27 = 0LL;
  v5 = L"Default";
  v6 = 0x7FFFLL;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v6;
  }
  while ( v6 );
  v7 = (0x7FFF - v6) & ((unsigned __int128)-(__int128)(unsigned __int64)v6 >> 64);
  if ( v6 )
  {
    *(_QWORD *)&v27[2] = L"Default";
    LOWORD(v27[0]) = 2 * v7;
    LOWORD(v7) = 2 * v7 + 2;
    HIWORD(v27[0]) = v7;
  }
  RegistryValues = PpmOpenRegistryKey((UNICODE_STRING *)v26, v7, v6, a1, &KeyHandle);
  if ( RegistryValues >= 0 )
  {
    QueryTable = PpmAllocateQueryTable((__int64)&v22);
    if ( !QueryTable )
    {
      RegistryValues = -1073741670;
      goto LABEL_36;
    }
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    v11 = 0;
    if ( PpmProfileCount )
    {
      while ( 1 )
      {
        v12 = L"VideoBatching";
        v13 = (_QWORD *)(PpmProfiles + 5552LL * v11);
        v14 = *(_QWORD *)((char *)v13 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_POWER.Data1;
        v28 = *(_OWORD *)((char *)v13 + 12);
        if ( !v14 )
          v14 = *((_QWORD *)&v28 + 1) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_POWER.Data4;
        if ( !v14 )
          break;
        v12 = (const wchar_t *)*v13;
        *(_OWORD *)v21 = 0LL;
        if ( v12 )
        {
          v10 = 0x7FFFLL;
          v15 = v12;
          do
          {
            if ( !*v15 )
              break;
            ++v15;
            --v10;
          }
          while ( v10 );
          goto LABEL_26;
        }
LABEL_28:
        if ( PpmOpenRegistryKey((UNICODE_STRING *)v21, v9, v10, KeyHandle, &Handle) >= 0 )
        {
          v17 = PpmOpenRegistryKey((UNICODE_STRING *)v27, v9, v10, Handle, &v24);
          ZwClose(Handle);
          if ( v17 >= 0 )
          {
            RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)v24, (__int64)QueryTable, 0LL);
            ZwClose(v24);
            PpmReleaseLock(&PpmPerfPolicyLock);
            if ( RegistryValues < 0 )
              goto LABEL_36;
            v18 = PpmProcessSettingsFromQueryTable(&v28, 0, (__int64)QueryTable);
            v19 = PpmProcessSettingsFromQueryTable(&v28, 1, (__int64)QueryTable);
            PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
            if ( v18 || v19 )
              PpmEnableProfile((__int64)v13, v9);
          }
        }
        if ( ++v11 >= (unsigned __int8)PpmProfileCount )
          goto LABEL_35;
      }
      *(_OWORD *)v21 = 0LL;
      v10 = 0x7FFFLL;
      v16 = L"VideoBatching";
      do
      {
        if ( !*v16 )
          break;
        ++v16;
        --v10;
      }
      while ( v10 );
LABEL_26:
      v9 = (0x7FFF - v10) & ((unsigned __int128)-(__int128)(unsigned __int64)v10 >> 64);
      if ( v10 )
      {
        *(_QWORD *)&v21[2] = v12;
        LOWORD(v21[0]) = 2 * v9;
        LOWORD(v9) = 2 * v9 + 2;
        HIWORD(v21[0]) = v9;
      }
      goto LABEL_28;
    }
LABEL_35:
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
