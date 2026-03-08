/*
 * XREFs of PpmPerfProcCapFloorSettingCallback @ 0x140990170
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     PpmAcquireLock @ 0x1402D1F90 (PpmAcquireLock.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PpmReapplyPerfPolicy @ 0x1408261A0 (PpmReapplyPerfPolicy.c)
 */

__int64 __fastcall PpmPerfProcCapFloorSettingCallback(
        LPCGUID SettingGuid,
        unsigned int *Value,
        ULONG ValueLength,
        PVOID Context)
{
  unsigned int v4; // r14d
  __int64 v7; // r9
  BOOL v8; // esi
  unsigned int v9; // edi
  __int64 Prcb; // rax
  __int64 v11; // rax
  unsigned int v12; // edi
  int v14; // [rsp+20h] [rbp-38h] BYREF
  GUID v15; // [rsp+28h] [rbp-30h]

  v4 = SettingGuid->Data4[7];
  v15 = GUID_PROC_CAP_BASE;
  v15.Data4[7] = v4;
  v7 = *(_QWORD *)&GUID_PROC_CAP_BASE.Data1 - *(_QWORD *)&SettingGuid->Data1;
  if ( !v7 )
    v7 = *(_QWORD *)v15.Data4 - *(_QWORD *)SettingGuid->Data4;
  v8 = v7 == 0;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  if ( ValueLength != 4 || !Value )
    goto LABEL_13;
  v9 = *Value;
  if ( v9 > 0x64 )
    v9 = 100;
  Prcb = KeGetPrcb(v4);
  if ( Prcb )
  {
    v11 = *(_QWORD *)(Prcb + 33976);
    if ( v11 )
    {
      if ( v8 )
        *(_DWORD *)(v11 + 48) = v9;
      else
        *(_DWORD *)(v11 + 52) = v9;
    }
    v12 = 0;
  }
  else
  {
LABEL_13:
    v12 = -1073741811;
  }
  v14 = 14;
  PpmReapplyPerfPolicy(&v14);
  return v12;
}
