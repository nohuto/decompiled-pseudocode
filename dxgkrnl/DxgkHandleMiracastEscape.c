/*
 * XREFs of DxgkHandleMiracastEscape @ 0x1C039B7B8
 * Callers:
 *     DxgkEscape @ 0x1C01A3EE0 (DxgkEscape.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0004778 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B270 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     DpiMiracastGetDeviceContextFromLuid @ 0x1C005F39C (DpiMiracastGetDeviceContextFromLuid.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C005FF40 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0060170 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0180684 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiEnableD3Requests @ 0x1C0180A2C (DpiEnableD3Requests.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0180B30 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01BA77C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiMiracastDdiMiracastIoControl @ 0x1C039A41C (DpiMiracastDdiMiracastIoControl.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C039AACC (DpiMiracastHandleStartSessionDone.c)
 *     DpiMiracastHandleStopSessionDone @ 0x1C039AF44 (DpiMiracastHandleStopSessionDone.c)
 */

__int64 __fastcall DxgkHandleMiracastEscape(unsigned int a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // r13
  _DWORD *Pool2; // r15
  char v6; // r12
  __int64 v8; // rcx
  __int64 *DeviceContextFromLuid; // r14
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rdx
  int v24; // eax
  struct _KEVENT *v25; // r9
  void *v26; // rcx
  NTSTATUS v27; // eax
  char v28; // [rsp+40h] [rbp-B8h]
  char v29; // [rsp+42h] [rbp-B6h]
  char v30; // [rsp+43h] [rbp-B5h]
  int v31; // [rsp+44h] [rbp-B4h]
  void *Src; // [rsp+48h] [rbp-B0h]
  PVOID Object; // [rsp+60h] [rbp-98h] BYREF
  _DWORD *v34; // [rsp+68h] [rbp-90h]
  __int64 *v35; // [rsp+70h] [rbp-88h]
  __int64 v36; // [rsp+78h] [rbp-80h]
  _DWORD v37[2]; // [rsp+80h] [rbp-78h] BYREF
  _BYTE v38[24]; // [rsp+88h] [rbp-70h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-58h]
  int v40; // [rsp+A8h] [rbp-50h]
  int v41; // [rsp+ACh] [rbp-4Ch]
  int v42; // [rsp+B0h] [rbp-48h]
  int v43; // [rsp+B4h] [rbp-44h]
  int v44; // [rsp+B8h] [rbp-40h]
  int v45; // [rsp+BCh] [rbp-3Ch]

  v36 = a2;
  LODWORD(v3) = 0;
  v4 = 0LL;
  Pool2 = 0LL;
  Src = 0LL;
  v6 = 0;
  v28 = 0;
  v30 = 0;
  v29 = 0;
  if ( a1 < 0x38 )
  {
    WdLogSingleEntry1(2LL, -1073741789LL);
    return 3221225507LL;
  }
  v34 = (_DWORD *)(a2 + 48);
  *(_DWORD *)(a2 + 48) = 0;
  DeviceContextFromLuid = DpiMiracastGetDeviceContextFromLuid(*(_QWORD *)a2, 0);
  v35 = DeviceContextFromLuid;
  if ( !DeviceContextFromLuid )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    return 3221225485LL;
  }
  if ( PsGetCurrentProcess(v8) == DeviceContextFromLuid[13] )
  {
    v14 = *(_DWORD *)(a2 + 16);
    if ( v14 && (Pool2 = (_DWORD *)ExAllocatePool2(257LL, v14, 1953656900LL)) == 0LL
      || (v15 = *(_DWORD *)(a2 + 32)) != 0 && (Src = (void *)ExAllocatePool2(257LL, v15, 1953656900LL)) == 0LL )
    {
      v12 = -1073741801LL;
      LODWORD(v3) = -1073741801;
      v13 = 6LL;
      goto LABEL_9;
    }
    v16 = *(unsigned int *)(a2 + 16);
    if ( (_DWORD)v16 )
    {
      v17 = *(_QWORD *)(a2 + 24);
      if ( v17 + v16 > MmUserProbeAddress || v17 + v16 < v17 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(Pool2, *(const void **)(a2 + 24), *(unsigned int *)(a2 + 16));
    }
    v18 = *(_DWORD *)(a2 + 32);
    if ( v18 )
      ProbeForWrite(*(volatile void **)(a2 + 40), v18, 1u);
    if ( (*(_DWORD *)(a2 + 8) & 6) != 0 )
    {
      AcquireMiniportListMutex();
      v6 = 1;
      v19 = DeviceContextFromLuid[54];
      if ( !v19 )
      {
        v12 = -1073741275LL;
LABEL_25:
        LODWORD(v3) = v12;
        goto LABEL_8;
      }
      v4 = *(_QWORD *)(v19 + 64);
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v4 + 484) )
        DpiCheckForOutstandingD3Requests(v4);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
      v28 = 1;
      v10 = *(unsigned int *)(v4 + 236);
      if ( (_DWORD)v10 != 2 && (*(_DWORD *)(v4 + 240) != 2 || (((_DWORD)v10 - 3) & 0xFFFFFFFC) != 0 || (_DWORD)v10 == 4) )
      {
        v12 = -1073741130LL;
        goto LABEL_25;
      }
      if ( (*(_DWORD *)(a2 + 8) & 4) != 0 )
      {
        v20 = DpiAcquireCoreSyncAccessSafe(DeviceContextFromLuid[54], *(_BYTE *)(a2 + 12));
        v3 = v20;
        if ( v20 < 0 )
          goto LABEL_7;
        v30 = 1;
      }
    }
    if ( (*(_DWORD *)(a2 + 8) & 1) != 0 )
    {
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(DeviceContextFromLuid + 4);
      DeviceContextFromLuid[11] = (__int64)KeGetCurrentThread();
      v29 = 1;
    }
    v21 = *(_DWORD *)(a2 + 8);
    if ( v21 == 4 )
    {
      LODWORD(v3) = DpiMiracastDdiMiracastIoControl(
                      v4,
                      DeviceContextFromLuid[56],
                      *(unsigned int *)(a2 + 16),
                      (__int64)Pool2,
                      *(_DWORD *)(a2 + 32),
                      (__int64)Src,
                      v34);
      goto LABEL_61;
    }
    v22 = 8LL;
    if ( v21 == 8 )
    {
      if ( *(_DWORD *)(a2 + 16) >= 0x350u )
      {
        DpiMiracastHandleStartSessionDone((char *)DeviceContextFromLuid, (__int64)Pool2, v11);
        goto LABEL_61;
      }
    }
    else
    {
      v22 = 16LL;
      if ( v21 != 16 )
      {
        if ( v21 == 24 )
        {
          v25 = 0LL;
          if ( *(_DWORD *)(a2 + 16) >= 0x18u )
          {
            v26 = (void *)*((_QWORD *)Pool2 + 1);
            if ( v26 )
            {
              Object = 0LL;
              v27 = ObReferenceObjectByHandle(v26, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
              v25 = (struct _KEVENT *)Object;
              LODWORD(v3) = v27;
              if ( v27 < 0 )
              {
                WdLogSingleEntry1(2LL, v27);
                v25 = 0LL;
              }
            }
            DpiMiracastStopMiracastSessionSync((char *)DeviceContextFromLuid, 0, 0LL, v25, Pool2[4], *Pool2);
            goto LABEL_61;
          }
        }
        else
        {
          if ( v21 != 32 )
          {
            v23 = -1073741637LL;
            LODWORD(v3) = -1073741637;
LABEL_50:
            WdLogSingleEntry1(2LL, v23);
LABEL_61:
            v28 = v6;
            goto LABEL_62;
          }
          memset(v38, 0, sizeof(v38));
          v41 = 0;
          *((_BYTE *)DeviceContextFromLuid + 591) = 1;
          if ( *(_DWORD *)(a2 + 16) >= 0x404u )
          {
            *((_BYTE *)Pool2 + 1023) = 0;
            v31 = 0;
            LOBYTE(v10) = 1;
            if ( (unsigned __int8)WdIsDebuggerPresent(v10) )
            {
              DbgPrintEx(0x65u, 0, (PCSTR)Pool2);
              __debugbreak();
              v31 = 1;
            }
            v24 = Pool2[256];
            v37[0] = 6;
            v37[1] = 64;
            v40 = 0;
            v39 = 0LL;
            memset(v38, 0, sizeof(v38));
            v42 = 74;
            v43 = v24;
            v44 = v31;
            v45 = 0;
            DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v37, 0x200000000LL);
            goto LABEL_61;
          }
        }
        LODWORD(v3) = -1073741811;
        v23 = -1073741811LL;
        goto LABEL_50;
      }
      if ( *(_DWORD *)(a2 + 16) >= 0x350u )
      {
        DpiMiracastHandleStopSessionDone((char *)DeviceContextFromLuid, (__int64)Pool2, v11);
        goto LABEL_61;
      }
    }
    LODWORD(v3) = -1073741811;
    WdLogSingleEntry2(2LL, v22, -1073741811LL);
    goto LABEL_61;
  }
  v3 = -1073741790LL;
LABEL_7:
  v12 = v3;
LABEL_8:
  v13 = 2LL;
LABEL_9:
  WdLogSingleEntry1(v13, v12);
LABEL_62:
  if ( (int)v3 >= 0 )
  {
    if ( *(_DWORD *)(a2 + 32) >= *v34 )
    {
      if ( *v34 )
        memmove(*(void **)(a2 + 40), Src, (unsigned int)*v34);
    }
    else
    {
      LODWORD(v3) = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
    }
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  if ( v29 )
  {
    DeviceContextFromLuid[11] = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(DeviceContextFromLuid + 4);
  }
  if ( v30 )
    DpiReleaseCoreSyncAccessSafe(DeviceContextFromLuid[54], *(_BYTE *)(a2 + 12));
  if ( v28 )
  {
    if ( *(_BYTE *)(v4 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
    KeLeaveCriticalRegion();
  }
  if ( v6 )
  {
    _InterlockedExchange64(&qword_1C013B4D8, 0LL);
    KeReleaseMutex(Mutex, 0);
  }
  DpiMiracastReleaseMiracastDeviceContext((int *)DeviceContextFromLuid, (unsigned int)DeviceContextFromLuid);
  return (unsigned int)v3;
}
