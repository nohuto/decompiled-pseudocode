/*
 * XREFs of DxgkHandleMiracastEscape @ 0x1C02CF778
 * Callers:
 *     DxgkEscape @ 0x1C0102F00 (DxgkEscape.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000C8D0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001FC54 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     DpiMiracastGetDeviceContextFromLuid @ 0x1C00534CC (DpiMiracastGetDeviceContextFromLuid.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C00540A0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C00542F0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiEnableD3Requests @ 0x1C00ECD4C (DpiEnableD3Requests.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C012E130 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C012E3AC (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C0145F7C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiMiracastDdiMiracastIoControl @ 0x1C02CE328 (DpiMiracastDdiMiracastIoControl.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C02CE9DC (DpiMiracastHandleStartSessionDone.c)
 *     DpiMiracastHandleStopSessionDone @ 0x1C02CEE64 (DpiMiracastHandleStopSessionDone.c)
 */

__int64 __fastcall DxgkHandleMiracastEscape(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // r13
  _DWORD *PoolWithQuotaTag; // r15
  char v6; // r12
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 DeviceContextFromLuid; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rax
  unsigned int v25; // eax
  char *v26; // rdx
  unsigned int v27; // eax
  int v28; // eax
  __int64 v29; // r13
  __int64 v30; // r13
  int v31; // eax
  __int64 v32; // rax
  int v33; // r13d
  int v34; // eax
  struct _KEVENT *v35; // r9
  void *v36; // rcx
  NTSTATUS v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r13
  __int64 v41; // rax
  unsigned int v42; // eax
  __int64 v43; // rax
  void *v44; // r13
  __int64 v45; // rdi
  char v46; // [rsp+40h] [rbp-B8h]
  char v47; // [rsp+42h] [rbp-B6h]
  char v48; // [rsp+43h] [rbp-B5h]
  PVOID Src; // [rsp+48h] [rbp-B0h]
  PVOID Object; // [rsp+58h] [rbp-A0h] BYREF
  PVOID v51; // [rsp+60h] [rbp-98h]
  __int64 v52; // [rsp+68h] [rbp-90h]
  __int64 v53; // [rsp+70h] [rbp-88h]
  __int64 v54; // [rsp+78h] [rbp-80h]
  _DWORD v55[2]; // [rsp+80h] [rbp-78h] BYREF
  _BYTE v56[24]; // [rsp+88h] [rbp-70h] BYREF
  __int64 v57; // [rsp+A0h] [rbp-58h]
  int v58; // [rsp+A8h] [rbp-50h]
  int v59; // [rsp+ACh] [rbp-4Ch]
  int v60; // [rsp+B0h] [rbp-48h]
  int v61; // [rsp+B4h] [rbp-44h]
  int v62; // [rsp+B8h] [rbp-40h]
  int v63; // [rsp+BCh] [rbp-3Ch]

  v53 = a2;
  LODWORD(v3) = 0;
  v4 = 0LL;
  v54 = 0LL;
  PoolWithQuotaTag = 0LL;
  Src = 0LL;
  v6 = 0;
  v46 = 0;
  v48 = 0;
  v47 = 0;
  if ( (unsigned int)a1 < 0x38 )
  {
    v7 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v7 + 24) = -1073741789LL;
    WdLogEvent5_WdError(v7);
    return 3221225507LL;
  }
  *(_DWORD *)(a2 + 48) = 0;
  DeviceContextFromLuid = DpiMiracastGetDeviceContextFromLuid(*(_QWORD *)a2, 0);
  v52 = DeviceContextFromLuid;
  if ( !DeviceContextFromLuid )
  {
    v14 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  if ( PsGetCurrentProcess(v10, v9, v11, v12) != *(_QWORD *)(DeviceContextFromLuid + 104) )
  {
    v3 = -1073741790LL;
LABEL_7:
    v18 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v18 + 24) = v3;
LABEL_8:
    WdLogEvent5_WdError(v18);
    goto LABEL_63;
  }
  v21 = *(_DWORD *)(a2 + 16);
  if ( v21 && (PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v21, 0x74727044u)) == 0LL
    || (v25 = *(_DWORD *)(a2 + 32)) != 0 && (Src = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v25, 0x74727044u)) == 0LL )
  {
    LODWORD(v3) = -1073741801;
    v24 = WdLogNewEntry5_WdLowResource(v22, v15, v17, v23);
    *(_QWORD *)(v24 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v24);
    goto LABEL_63;
  }
  v16 = *(unsigned int *)(a2 + 16);
  if ( (_DWORD)v16 )
  {
    v26 = *(char **)(a2 + 24);
    if ( (unsigned __int64)&v26[v16] > MmUserProbeAddress || &v26[v16] < v26 )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
      LODWORD(v16) = *(_DWORD *)(a2 + 16);
      v26 = *(char **)(a2 + 24);
    }
    memmove(PoolWithQuotaTag, v26, (unsigned int)v16);
  }
  v27 = *(_DWORD *)(a2 + 32);
  if ( v27 )
    ProbeForWrite(*(volatile void **)(a2 + 40), v27, 1u);
  v28 = *(_DWORD *)(a2 + 8);
  if ( (v28 & 6) != 0 )
  {
    AcquireMiniportListMutex();
    v6 = 1;
    v29 = *(_QWORD *)(DeviceContextFromLuid + 432);
    if ( !v29 )
    {
      v30 = -1073741275LL;
LABEL_24:
      LODWORD(v3) = v30;
      v18 = WdLogNewEntry5_WdError(v16, v15);
      *(_QWORD *)(v18 + 24) = v30;
      goto LABEL_8;
    }
    v4 = *(_QWORD *)(v29 + 64);
    v54 = v4;
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v4 + 484) )
      DpiCheckForOutstandingD3Requests(v4);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
    v46 = 1;
    v16 = *(unsigned int *)(v4 + 236);
    if ( (_DWORD)v16 != 2 && (*(_DWORD *)(v4 + 240) != 2 || (((_DWORD)v16 - 3) & 0xFFFFFFFC) != 0 || (_DWORD)v16 == 4) )
    {
      v30 = -1073741130LL;
      goto LABEL_24;
    }
    v28 = *(_DWORD *)(a2 + 8);
    if ( (v28 & 4) != 0 )
    {
      v31 = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(DeviceContextFromLuid + 432), *(_BYTE *)(a2 + 12));
      v3 = v31;
      if ( v31 < 0 )
        goto LABEL_7;
      v48 = 1;
      v28 = *(_DWORD *)(a2 + 8);
    }
  }
  if ( (v28 & 1) != 0 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(DeviceContextFromLuid + 32);
    *(_QWORD *)(DeviceContextFromLuid + 88) = KeGetCurrentThread();
    v47 = 1;
    v28 = *(_DWORD *)(a2 + 8);
  }
  if ( v28 == 4 )
  {
    LODWORD(v3) = DpiMiracastDdiMiracastIoControl(
                    v4,
                    *(_QWORD *)(DeviceContextFromLuid + 448),
                    *(unsigned int *)(a2 + 16),
                    (__int64)PoolWithQuotaTag,
                    *(_DWORD *)(a2 + 32),
                    (__int64)Src,
                    (_DWORD *)(a2 + 48));
    goto LABEL_62;
  }
  if ( v28 == 8 )
  {
    if ( *(_DWORD *)(a2 + 16) >= 0x350u )
    {
      DpiMiracastHandleStartSessionDone((char *)DeviceContextFromLuid, (__int64)PoolWithQuotaTag, v17);
      goto LABEL_62;
    }
    LODWORD(v3) = -1073741811;
    v32 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v32 + 24) = 8LL;
    goto LABEL_58;
  }
  if ( v28 != 16 )
  {
    if ( v28 == 24 )
    {
      v35 = 0LL;
      v51 = 0LL;
      if ( *(_DWORD *)(a2 + 16) >= 0x18u )
      {
        v36 = (void *)*((_QWORD *)PoolWithQuotaTag + 1);
        if ( v36 )
        {
          Object = 0LL;
          v37 = ObReferenceObjectByHandle(v36, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
          v40 = v37;
          v35 = (struct _KEVENT *)Object;
          v51 = Object;
          LODWORD(v3) = v37;
          if ( v37 < 0 )
          {
            v41 = WdLogNewEntry5_WdError(v39, v38);
            *(_QWORD *)(v41 + 24) = v40;
            WdLogEvent5_WdError(v41);
            v35 = 0LL;
            v51 = 0LL;
          }
        }
        DpiMiracastStopMiracastSessionSync(
          (char *)DeviceContextFromLuid,
          0,
          0LL,
          v35,
          PoolWithQuotaTag[4],
          *PoolWithQuotaTag);
        goto LABEL_62;
      }
    }
    else
    {
      if ( v28 != 32 )
      {
        LODWORD(v3) = -1073741637;
        v32 = WdLogNewEntry5_WdError(v16, v15);
        *(_QWORD *)(v32 + 24) = -1073741637LL;
LABEL_59:
        WdLogEvent5_WdError(v32);
        goto LABEL_62;
      }
      memset(v56, 0, sizeof(v56));
      v59 = 0;
      *(_BYTE *)(DeviceContextFromLuid + 591) = 1;
      if ( *(_DWORD *)(a2 + 16) >= 0x404u )
      {
        *((_BYTE *)PoolWithQuotaTag + 1023) = 0;
        v33 = 0;
        LOBYTE(v16) = 1;
        if ( (unsigned __int8)WdIsDebuggerPresent(v16) )
        {
          DbgPrintEx(0x65u, 0, (PCSTR)PoolWithQuotaTag);
          __debugbreak();
          v33 = 1;
        }
        v34 = PoolWithQuotaTag[256];
        v55[0] = 6;
        v55[1] = 64;
        v58 = 0;
        v57 = 0LL;
        memset(v56, 0, sizeof(v56));
        v60 = 74;
        v61 = v34;
        v62 = v33;
        v63 = 0;
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v55, 0x200000000LL);
        goto LABEL_62;
      }
    }
    LODWORD(v3) = -1073741811;
    v32 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v32 + 24) = -1073741811LL;
    goto LABEL_59;
  }
  if ( *(_DWORD *)(a2 + 16) < 0x350u )
  {
    LODWORD(v3) = -1073741811;
    v32 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v32 + 24) = 16LL;
LABEL_58:
    *(_QWORD *)(v32 + 32) = -1073741811LL;
    goto LABEL_59;
  }
  DpiMiracastHandleStopSessionDone((char *)DeviceContextFromLuid, (__int64)PoolWithQuotaTag, v17);
LABEL_62:
  v46 = v6;
LABEL_63:
  if ( (int)v3 < 0 )
  {
LABEL_68:
    v44 = Src;
    goto LABEL_69;
  }
  v42 = *(_DWORD *)(a2 + 48);
  if ( *(_DWORD *)(a2 + 32) < v42 )
  {
    LODWORD(v3) = -1073741811;
    v43 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v43 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v43);
    goto LABEL_68;
  }
  if ( !v42 )
    goto LABEL_68;
  v44 = Src;
  memmove(*(void **)(a2 + 40), Src, *(unsigned int *)(a2 + 48));
LABEL_69:
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  if ( v44 )
    ExFreePoolWithTag(v44, 0);
  if ( v47 )
  {
    *(_QWORD *)(DeviceContextFromLuid + 88) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(DeviceContextFromLuid + 32);
  }
  if ( v48 )
    DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(DeviceContextFromLuid + 432), *(_BYTE *)(a2 + 12));
  if ( v46 )
  {
    v45 = v54;
    if ( *(_BYTE *)(v54 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v54 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v45 + 168));
    KeLeaveCriticalRegion();
  }
  if ( v6 )
  {
    _InterlockedExchange64(&qword_1C00B2B50, 0LL);
    KeReleaseMutex(Mutex, 0);
  }
  DpiMiracastReleaseMiracastDeviceContext((int *)DeviceContextFromLuid, DeviceContextFromLuid);
  return (unsigned int)v3;
}
