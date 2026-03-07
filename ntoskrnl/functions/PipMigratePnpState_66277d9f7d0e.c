__int64 PipMigratePnpState()
{
  PERESOURCE *v0; // rdi
  int v1; // eax
  __int64 v2; // rcx
  int CachedContextBaseKey; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // [rsp+20h] [rbp-49h]
  __int64 v13; // [rsp+28h] [rbp-41h]
  void *v14; // [rsp+40h] [rbp-29h] BYREF
  void *v15; // [rsp+48h] [rbp-21h] BYREF
  void *v16; // [rsp+50h] [rbp-19h] BYREF
  int v17; // [rsp+58h] [rbp-11h] BYREF
  __int64 Source2; // [rsp+60h] [rbp-9h] BYREF
  __int64 v19; // [rsp+68h] [rbp-1h] BYREF
  PERESOURCE *v20; // [rsp+70h] [rbp+7h] BYREF
  void *v21; // [rsp+78h] [rbp+Fh] BYREF
  _QWORD Source1[8]; // [rsp+80h] [rbp+17h] BYREF
  unsigned int v23; // [rsp+D0h] [rbp+67h] BYREF
  int v24; // [rsp+D8h] [rbp+6Fh] BYREF
  int v25; // [rsp+E0h] [rbp+77h] BYREF
  int v26; // [rsp+E8h] [rbp+7Fh] BYREF

  v15 = 0LL;
  v16 = 0LL;
  v19 = 0LL;
  v24 = 0;
  v0 = 0LL;
  v25 = 0;
  v26 = 0;
  v14 = 0LL;
  Source1[0] = 0LL;
  Source2 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v17 = 0;
  v1 = PnpCtxRegOpenKey(
         *(__int64 *)&PiPnpRtlCtx,
         2147483650LL,
         (__int64)L"System\\Setup\\Upgrade\\PnP",
         0,
         0x2001Fu,
         (__int64)&v15);
  CachedContextBaseKey = v1;
  if ( v1 == -1073741772 )
    goto LABEL_2;
  if ( v1 >= 0 )
  {
    v23 = 4;
    v5 = PnpCtxRegQueryValue(v2, v15, L"MigrationStatus", &v24, &v25, &v23);
    CachedContextBaseKey = v5;
    if ( v5 != -1073741772 )
    {
      if ( v5 < 0 )
        goto LABEL_3;
      if ( v24 != 4 || v23 != 4 )
      {
        CachedContextBaseKey = -1073741823;
LABEL_48:
        if ( v0 )
          PnpCtxCloseMachine(v0);
        goto LABEL_3;
      }
    }
    v6 = PnpCtxRegOpenKey(
           *(__int64 *)&PiPnpRtlCtx,
           (__int64)v15,
           (__int64)L"CurrentControlSet",
           0,
           0x2001Fu,
           (__int64)&v16);
    CachedContextBaseKey = v6;
    if ( v6 == -1073741772 )
    {
LABEL_2:
      CachedContextBaseKey = 0;
      goto LABEL_3;
    }
    if ( v6 >= 0 )
    {
      CachedContextBaseKey = PnpCtxRegOpenKey(
                               *(__int64 *)&PiPnpRtlCtx,
                               (__int64)v16,
                               (__int64)L"Control\\DeviceMigration",
                               0,
                               0x20019u,
                               (__int64)&v14);
      if ( CachedContextBaseKey >= 0 )
      {
        v23 = 8;
        CachedContextBaseKey = PnpCtxRegQueryValue(v2, v14, L"MigrationTime", &v24, &Source2, &v23);
        if ( CachedContextBaseKey >= 0 )
        {
          if ( v24 == 3 && v23 == 8 )
          {
            PnpCtxRegCloseKey(v2, v14);
            v14 = 0LL;
            CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v19);
            if ( CachedContextBaseKey < 0 )
              goto LABEL_3;
            CachedContextBaseKey = PnpCtxRegCreateKey(*(__int64 *)&PiPnpRtlCtx, v19);
            if ( CachedContextBaseKey < 0 )
              goto LABEL_3;
            v23 = 8;
            v7 = PnpCtxRegQueryValue(v2, v14, L"MigrationTime", &v24, Source1, &v23);
            CachedContextBaseKey = v7;
            if ( v7 == -1073741772 )
              goto LABEL_32;
            if ( v7 < 0 )
              goto LABEL_3;
            if ( v24 == 3 && v23 == 8 )
            {
              if ( RtlCompareMemory(Source1, &Source2, 8uLL) == 8 )
              {
                CachedContextBaseKey = -1073741791;
                goto LABEL_3;
              }
LABEL_32:
              v25 = 259;
              CachedContextBaseKey = PnpCtxRegSetValue(v2, v15, L"MigrationStatus", 4u, &v25, 4u);
              if ( CachedContextBaseKey < 0 )
                goto LABEL_3;
              CachedContextBaseKey = PnpCtxRegSetValue(v2, v14, L"MigrationTime", 3u, &Source2, 8u);
              if ( CachedContextBaseKey < 0 )
                goto LABEL_3;
              v23 = 4;
              CachedContextBaseKey = PnpCtxRegQueryValue(v2, v15, L"TargetVersion", &v24, &v26, &v23);
              if ( CachedContextBaseKey >= 0 )
              {
                if ( v24 == 4 && v23 == 4 )
                {
                  if ( (v26 & 0xFFFF0000) == 0xA000000 )
                  {
                    CachedContextBaseKey = PnpCtxRegCopyTree(v8, (int)v16, 0, v19, 0LL);
                    if ( CachedContextBaseKey >= 0 )
                    {
                      v9 = PnpCtxRegOpenKey(
                             *(__int64 *)&PiPnpRtlCtx,
                             (__int64)v16,
                             (__int64)L"Services",
                             0,
                             0x20019u,
                             (__int64)&v21);
                      CachedContextBaseKey = v9;
                      if ( v9 == -1073741772
                        || v9 >= 0
                        && (CachedContextBaseKey = PnpCtxRegEnumKeyWithCallback(
                                                     *(__int64 *)&PiPnpRtlCtx,
                                                     v21,
                                                     (__int64)PipMigrateCleanServiceCallback,
                                                     0LL),
                            CachedContextBaseKey >= 0) )
                      {
                        v11 = PnpCtxOpenMachine(v8, 0LL, v10, -1LL, v12, v13, &v20);
                        v0 = v20;
                        CachedContextBaseKey = v11;
                        if ( v11 >= 0 )
                        {
                          CachedContextBaseKey = CmGetMatchingDeviceList(
                                                   (__int64)v20,
                                                   (__int64)&PipMigrateResetDeviceCallback,
                                                   0LL,
                                                   0LL,
                                                   0,
                                                   (__int64)&v17,
                                                   0);
                          if ( CachedContextBaseKey == -1073741789 )
                            CachedContextBaseKey = 0;
                        }
                      }
                    }
                  }
                  else
                  {
                    CachedContextBaseKey = -1073741735;
                  }
                }
                else
                {
                  CachedContextBaseKey = -1073741823;
                }
              }
              v25 = CachedContextBaseKey;
              PnpCtxRegSetValue(v8, v15, L"MigrationStatus", 4u, &v25, 4u);
              goto LABEL_48;
            }
          }
          CachedContextBaseKey = -1073741823;
        }
      }
    }
  }
LABEL_3:
  if ( v21 )
    PnpCtxRegCloseKey(v2, v21);
  if ( v14 )
    PnpCtxRegCloseKey(v2, v14);
  if ( v16 )
    PnpCtxRegCloseKey(v2, v16);
  if ( v15 )
    PnpCtxRegCloseKey(v2, v15);
  return (unsigned int)CachedContextBaseKey;
}
