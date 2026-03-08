/*
 * XREFs of PiDevCfgInitMigrationContext @ 0x140875994
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x1408758B8 (PiDevCfgMigrateDevice.c)
 * Callees:
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1406D3680 (_PnpCtxGetCachedContextBaseKey.c)
 *     PiDevCfgFreeMigrationContext @ 0x140877348 (PiDevCfgFreeMigrationContext.c)
 */

__int64 __fastcall PiDevCfgInitMigrationContext(UNICODE_STRING *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  int CachedContextBaseKey; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  NTSTATUS v9; // eax
  NTSTATUS v11; // eax
  void **v12; // rsi
  NTSTATUS v13; // eax
  void *v14; // rax
  __int128 v15; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *v17; // [rsp+90h] [rbp+30h] BYREF

  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  v17 = 0LL;
  *(_OWORD *)(a3 + 32) = 0LL;
  *(_QWORD *)(a3 + 48) = a2;
  *(_QWORD *)(a3 + 40) = a1;
  v15 = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v17);
  if ( CachedContextBaseKey < 0 )
    goto LABEL_17;
  LODWORD(v15) = 3145774;
  *((_QWORD *)&v15 + 1) = L"Control\\DeviceMigration";
  ObjectAttributes.RootDirectory = v17;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v15;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_QWORD *)a3 = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenKey((PHANDLE)a3, 0x20019u, &ObjectAttributes);
  CachedContextBaseKey = v9;
  if ( v9 != -1073741772 )
  {
    if ( v9 >= 0 )
    {
      LODWORD(v15) = 1048590;
      *((_QWORD *)&v15 + 1) = L"Devices";
      ObjectAttributes.RootDirectory = *(HANDLE *)a3;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v15;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      *(_QWORD *)(a3 + 8) = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v11 = ZwOpenKey((PHANDLE)(a3 + 8), 0x20019u, &ObjectAttributes);
      CachedContextBaseKey = v11;
      if ( v11 == -1073741772 )
      {
        *(_QWORD *)(a3 + 8) = 0LL;
      }
      else if ( v11 < 0 )
      {
        goto LABEL_17;
      }
      LODWORD(v15) = 1048590;
      *((_QWORD *)&v15 + 1) = L"Classes";
      v12 = (void **)(a3 + 16);
      ObjectAttributes.RootDirectory = *(HANDLE *)a3;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v15;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      *(_QWORD *)(a3 + 16) = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v13 = ZwOpenKey((PHANDLE)(a3 + 16), 0x20019u, &ObjectAttributes);
      CachedContextBaseKey = v13;
      if ( v13 == -1073741772 )
      {
        CachedContextBaseKey = 0;
        *v12 = 0LL;
      }
      else if ( v13 < 0 )
      {
        goto LABEL_17;
      }
      v14 = *v12;
      if ( !*v12 )
        return (unsigned int)CachedContextBaseKey;
      if ( a1 )
      {
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        *(_QWORD *)(a3 + 24) = 0LL;
        ObjectAttributes.RootDirectory = v14;
        ObjectAttributes.ObjectName = a1;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        CachedContextBaseKey = ZwOpenKey((PHANDLE)(a3 + 24), 0x20019u, &ObjectAttributes);
        if ( CachedContextBaseKey == -1073741772 )
        {
          CachedContextBaseKey = 0;
          *(_QWORD *)(a3 + 24) = 0LL;
          return (unsigned int)CachedContextBaseKey;
        }
      }
      if ( CachedContextBaseKey >= 0 )
        return (unsigned int)CachedContextBaseKey;
    }
LABEL_17:
    PiDevCfgFreeMigrationContext(a3, v5, v7, v8);
    return (unsigned int)CachedContextBaseKey;
  }
  return 0;
}
