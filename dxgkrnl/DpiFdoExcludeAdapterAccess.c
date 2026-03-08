/*
 * XREFs of DpiFdoExcludeAdapterAccess @ 0x1C03969C0
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0004778 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     DpiEnableD3Requests @ 0x1C0180A2C (DpiEnableD3Requests.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01BA77C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiRequestIoPowerState @ 0x1C01E2390 (DpiRequestIoPowerState.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1C0311340 (DxgkRequestAsyncDisplaySwitchCallout.c)
 *     DxgkRequestSyncDisplaySwitchCallout @ 0x1C0311408 (DxgkRequestSyncDisplaySwitchCallout.c)
 *     DpiDxgkDdiProtectedCallback @ 0x1C03A482C (DpiDxgkDdiProtectedCallback.c)
 */

void __fastcall DpiFdoExcludeAdapterAccess(_QWORD *IoObject, _QWORD *Context, PIO_WORKITEM IoWorkItem)
{
  char v5; // r12
  char *v6; // rcx
  int *v7; // rsi
  __int64 v8; // rbx
  __int64 SDCFlags; // rdi
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v16; // r13
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r8
  int v21; // eax
  char v22; // [rsp+30h] [rbp-D0h]
  struct _DXGK_WIN32K_PARAM_DATA v23; // [rsp+38h] [rbp-C8h] BYREF
  PIO_WORKITEM IoWorkItema; // [rsp+58h] [rbp-A8h]
  _OWORD v25[5]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v26[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v27; // [rsp+D0h] [rbp-30h]
  __int64 v28; // [rsp+D8h] [rbp-28h]
  int v29; // [rsp+E0h] [rbp-20h]
  ULONG v30; // [rsp+E4h] [rbp-1Ch]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  __int64 v32; // [rsp+F0h] [rbp-10h]

  IoWorkItema = IoWorkItem;
  v22 = 0;
  v5 = 0;
  v6 = (char *)(Context + 4);
  v7 = (int *)(Context + 2);
  v8 = IoObject[8];
  if ( *(_BYTE *)(v8 + 480) )
  {
    SDCFlags = -1073741637LL;
LABEL_3:
    v10 = SDCFlags;
LABEL_4:
    WdLogSingleEntry1(2LL, v10);
LABEL_17:
    DpiDxgkDdiProtectedCallback(*(_QWORD *)(v8 + 48), *Context, Context[1], (unsigned int)SDCFlags);
    goto LABEL_18;
  }
  if ( (*v7 & 1) != 0 )
  {
    LOBYTE(IoWorkItem) = 1;
    v11 = *(_QWORD *)(v8 + 5744);
    v32 = *(_QWORD *)(v8 + 2672);
    v23.PathsArray = (PVOID)4;
    memset(&v23.ModesArray, 0, 24);
    v28 = 0LL;
    v26[0] = 30;
    v26[1] = 72;
    v27 = 0LL;
    memset(&v26[2], 0, 24);
    v29 = 43;
    v31 = 0LL;
    SMgrGdiCallout(&v23, v11, IoWorkItem, 0LL, 0LL, v6);
    v12 = *(_QWORD *)(v8 + 5744);
    SDCFlags = (int)v23.SDCFlags;
    v30 = v23.SDCFlags;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v26, v12);
    if ( (int)SDCFlags < 0 )
      goto LABEL_3;
  }
  if ( (*v7 & 2) == 0 )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v8 + 484) )
      DpiCheckForOutstandingD3Requests(v8);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v8 + 168), 1u);
    KeWaitForSingleObject((PVOID)(v8 + 176), Executive, 0, 0, 0LL);
    v22 = 1;
    if ( *(_DWORD *)(v8 + 236) != 2 || *(_DWORD *)(v8 + 4000) == 1 || *(_DWORD *)(v8 + 284) != 1 )
    {
      v10 = -1073741661LL;
      LODWORD(SDCFlags) = -1073741661;
      goto LABEL_4;
    }
  }
  v13 = DpiRequestIoPowerState((__int64)IoObject, 5, (__int64)IoWorkItem, *v7);
  LODWORD(SDCFlags) = v13;
  if ( v13 < 0 )
  {
    if ( v13 == -1071775482 )
      v5 = 1;
    goto LABEL_17;
  }
  DpiDxgkDdiProtectedCallback(*(_QWORD *)(v8 + 48), *Context, Context[1], (unsigned int)v13);
  LODWORD(SDCFlags) = DpiRequestIoPowerState((__int64)IoObject, 6, v20, *v7);
  if ( (int)SDCFlags < 0 )
  {
    LODWORD(SDCFlags) = 0;
    v5 = 1;
  }
LABEL_18:
  if ( v22 == 1 )
  {
    KeReleaseMutex((PRKMUTEX)(v8 + 176), 0);
    if ( *(_BYTE *)(v8 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v8 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v8 + 168));
    KeLeaveCriticalRegion();
  }
  memset(v25, 0, 0x48uLL);
  if ( (*v7 & 1) != 0 )
  {
    memset(&v25[1], 0, 32);
    LOBYTE(v14) = 1;
    v15 = *(_QWORD *)(v8 + 2672);
    *((_QWORD *)&v25[1] + 1) = 0LL;
    *((_QWORD *)&v25[3] + 1) = 0LL;
    *(_QWORD *)&v23.SDCFlags = 0LL;
    v23.ModesArray = 0LL;
    v16 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(Context + 4);
    *(_QWORD *)&v23.NumPathArrayElements = 1LL;
    v25[0] = 0x480000001EuLL;
    *(_OWORD *)((char *)v25 + 8) = 0LL;
    LODWORD(v25[3]) = 44;
    *(_QWORD *)&v25[4] = v15;
    v17 = *(_QWORD *)(v8 + 5744);
    v23.PathsArray = (PVOID)4;
    SMgrGdiCallout(&v23, v17, v14, 0LL, 0LL, Context + 4);
    DWORD1(v25[3]) = v23.SDCFlags;
    SDCFlags = (int)v23.SDCFlags;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v25, *(_QWORD *)(v8 + 5744));
    if ( (v23.SDCFlags & 0x80000000) != 0 )
      WdLogSingleEntry1(2LL, SDCFlags);
  }
  else
  {
    v16 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(Context + 4);
  }
  if ( v5 == 1 )
  {
    *(_OWORD *)&v23.NumPathArrayElements = 0LL;
    v23.SDCFlags = 143;
    *(_OWORD *)&v23.PathsArray = 0LL;
    memset(v25, 0, 0x48uLL);
    *(_QWORD *)&v25[4] = *(_QWORD *)(v8 + 2672);
    v18 = *v7;
    *((_QWORD *)&v25[1] + 1) = 0LL;
    DWORD2(v25[2]) = 0;
    *(_QWORD *)&v25[2] = 0LL;
    v25[0] = 0x480000001EuLL;
    v25[3] = 0x2DuLL;
    v19 = *(_QWORD *)(v8 + 5744);
    if ( (v18 & 2) != 0 )
    {
      DxgkRequestAsyncDisplaySwitchCallout(&v23, v16, v19);
    }
    else
    {
      v21 = DxgkRequestSyncDisplaySwitchCallout(&v23, v16, v19);
      LODWORD(SDCFlags) = v21;
      if ( v21 < 0 )
        WdLogSingleEntry1(2LL, v21);
    }
    DWORD1(v25[3]) = SDCFlags;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v25, *(_QWORD *)(v8 + 5744));
  }
  if ( (*v7 & 2) != 0 )
    KeSetEvent((PRKEVENT)Context[3], 0, 0);
  ExFreePoolWithTag(Context, 0);
  IoFreeWorkItem(IoWorkItema);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 64), IoWorkItema, 0x20u);
}
