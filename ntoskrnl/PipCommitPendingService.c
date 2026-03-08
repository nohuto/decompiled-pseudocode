/*
 * XREFs of PipCommitPendingService @ 0x140B91B70
 * Callers:
 *     <none>
 * Callees:
 *     _PnpCtxRegCreateKey @ 0x140687FD0 (_PnpCtxRegCreateKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1406D3680 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegDeleteTree @ 0x14081B6AC (_PnpCtxRegDeleteTree.c)
 *     _PnpCtxRegOpenKey @ 0x14081D410 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegEnumKey @ 0x14081D44C (_PnpCtxRegEnumKey.c)
 *     _PnpCtxRegCloseKey @ 0x1408653B4 (_PnpCtxRegCloseKey.c)
 *     PiDevCfgCopyDeviceKeys @ 0x140877924 (PiDevCfgCopyDeviceKeys.c)
 *     _PnpCtxRegDeleteKey @ 0x140A5DE7C (_PnpCtxRegDeleteKey.c)
 */

__int64 __fastcall PipCommitPendingService(__int64 a1, void *a2, void *a3)
{
  void *v4; // rdi
  __int64 v6; // rcx
  int CachedContextBaseKey; // ebx
  int v8; // eax
  int v9; // eax
  __int64 v10; // r8
  void *v12; // [rsp+40h] [rbp-40h] BYREF
  void *v13; // [rsp+48h] [rbp-38h] BYREF
  void *v14; // [rsp+50h] [rbp-30h]
  void *v15; // [rsp+58h] [rbp-28h]
  void *v16; // [rsp+60h] [rbp-20h] BYREF
  void *v17; // [rsp+68h] [rbp-18h] BYREF
  __int64 v18; // [rsp+70h] [rbp-10h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+28h] BYREF

  v18 = 0LL;
  v4 = a2;
  v15 = 0LL;
  v14 = 0LL;
  v19 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( !a2 )
  {
    CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v18);
    if ( CachedContextBaseKey < 0 )
      goto LABEL_28;
    CachedContextBaseKey = PnpCtxRegOpenKey(
                             *(__int64 *)&PiPnpRtlCtx,
                             v18,
                             (__int64)L"Control\\PendingDriverOperations\\Services",
                             0,
                             0x2001Fu,
                             (__int64)&v16);
    if ( CachedContextBaseKey < 0 )
      goto LABEL_28;
    v4 = v16;
  }
  if ( !a3 )
  {
    CachedContextBaseKey = PnpCtxRegOpenKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v4, a1, 0, 0x20019u, (__int64)&v17);
    if ( CachedContextBaseKey < 0 )
      goto LABEL_28;
    a3 = v17;
  }
  v8 = PnpCtxRegOpenKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v4, (__int64)L"EventLog", 0, 0x2001Fu, (__int64)&v12);
  CachedContextBaseKey = v8;
  if ( v8 == -1073741772 || v8 == -1073741444 || v8 >= 0 )
  {
    v9 = PnpCtxRegOpenKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v12, a1, 0, 0x20019u, (__int64)&v13);
    CachedContextBaseKey = v9;
    if ( v9 == -1073741772 || v9 == -1073741444 || v9 >= 0 )
    {
      CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 6, (__int64)&v19);
      if ( CachedContextBaseKey >= 0 )
      {
        CachedContextBaseKey = PnpCtxRegCreateKey(*(__int64 *)&PiPnpRtlCtx, v19);
        if ( CachedContextBaseKey >= 0 )
        {
          if ( !v13
            || (CachedContextBaseKey = PnpCtxRegCreateKey(*(__int64 *)&PiPnpRtlCtx, v19), CachedContextBaseKey >= 0)
            && (!v13 || (CachedContextBaseKey = PiDevCfgCopyDeviceKeys(v13, v15, v10, 0LL), CachedContextBaseKey >= 0)) )
          {
            CachedContextBaseKey = PiDevCfgCopyDeviceKeys(a3, v14, v10, 0LL);
            if ( CachedContextBaseKey >= 0 )
            {
              if ( v13 )
              {
                CachedContextBaseKey = PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (__int64)v12, a1);
                if ( CachedContextBaseKey < 0 )
                  goto LABEL_28;
                LODWORD(v19) = 0;
                if ( (unsigned int)PnpCtxRegEnumKey(v6, v12) == -2147483622 )
                  PnpCtxRegDeleteKey(*(__int64 *)&PiPnpRtlCtx, v12, 0LL);
              }
              CachedContextBaseKey = PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (__int64)v4, a1);
              if ( CachedContextBaseKey >= 0 )
              {
                LODWORD(v19) = 0;
                if ( (unsigned int)PnpCtxRegEnumKey(v6, v4) == -2147483622 )
                  PnpCtxRegDeleteKey(*(__int64 *)&PiPnpRtlCtx, v4, 0LL);
              }
            }
          }
        }
      }
    }
  }
LABEL_28:
  if ( v14 )
    PnpCtxRegCloseKey(v6, v14);
  if ( v15 )
    PnpCtxRegCloseKey(v6, v15);
  if ( v12 )
    PnpCtxRegCloseKey(v6, v12);
  if ( v13 )
    PnpCtxRegCloseKey(v6, v13);
  if ( v16 )
    PnpCtxRegCloseKey(v6, v16);
  if ( v17 )
    PnpCtxRegCloseKey(v6, v17);
  return (unsigned int)CachedContextBaseKey;
}
