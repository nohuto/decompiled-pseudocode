/*
 * XREFs of DpiFdoStartAdapterThreadImpl @ 0x1C0187BE8
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C019EAB0 (DpiFdoStartAdapterThread.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000C8D0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001FC54 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     wcsncmp_0 @ 0x1C0024935 (wcsncmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x1C0052B58 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C00ECD4C (DpiEnableD3Requests.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C017A1CC (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiFdoStartAdapter @ 0x1C0189268 (DpiFdoStartAdapter.c)
 *     DxgkStartPnPTransition @ 0x1C019489C (DxgkStartPnPTransition.c)
 *     DxgkCompletePnPTransition @ 0x1C019BB04 (DxgkCompletePnPTransition.c)
 *     DpiPnpEnableVga @ 0x1C019E3B8 (DpiPnpEnableVga.c)
 *     DpiPnpNotifyGdi @ 0x1C019E4F8 (DpiPnpNotifyGdi.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C02C82C0 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C02C846C (DpiEnableMsBddFallbackDriver.c)
 *     DpiLdaStartAdapterInChain @ 0x1C02D8788 (DpiLdaStartAdapterInChain.c)
 */

__int64 __fastcall DpiFdoStartAdapterThreadImpl(int *a1, char a2, _BYTE *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r13
  char v9; // si
  bool v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // r15d
  int v18; // r14d
  __int64 v19; // r12
  char v20; // al
  __int64 v21; // rsi
  bool v22; // bl
  int v23; // edx
  void *v24; // rcx
  struct _DEVICE_OBJECT *v25; // rcx
  int v26; // eax
  bool v27; // al
  char v28; // cl
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  void *v32; // rax
  __int64 *v34; // rbx
  int v35; // ecx
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  ULONG v40; // r15d
  PVOID PoolWithTag; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  NTSTATUS DevicePropertyData; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  struct _DEVICE_OBJECT *v51; // rcx
  int Timeout; // [rsp+20h] [rbp-188h]
  int Timeouta; // [rsp+20h] [rbp-188h]
  PVOID Data; // [rsp+28h] [rbp-180h]
  char v55; // [rsp+40h] [rbp-168h]
  char v56; // [rsp+41h] [rbp-167h]
  char v57; // [rsp+42h] [rbp-166h]
  char v58; // [rsp+43h] [rbp-165h]
  char v60; // [rsp+45h] [rbp-163h]
  unsigned int v61; // [rsp+48h] [rbp-160h]
  bool v62; // [rsp+4Ch] [rbp-15Ch]
  void *v63; // [rsp+50h] [rbp-158h] BYREF
  __int64 started; // [rsp+58h] [rbp-150h]
  ULONG Type; // [rsp+60h] [rbp-148h] BYREF
  ULONG RequiredSize; // [rsp+64h] [rbp-144h] BYREF
  int *v67; // [rsp+68h] [rbp-140h]
  UNICODE_STRING String1; // [rsp+70h] [rbp-138h] BYREF
  void *v69; // [rsp+80h] [rbp-128h] BYREF
  _BYTE *v70; // [rsp+88h] [rbp-120h]
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-118h] BYREF
  __int64 v72; // [rsp+A0h] [rbp-108h] BYREF
  int v73; // [rsp+A8h] [rbp-100h]
  _QWORD v74[10]; // [rsp+B0h] [rbp-F8h] BYREF
  wchar_t Str1[48]; // [rsp+100h] [rbp-A8h] BYREF

  v70 = a3;
  memset(v74, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v74[1]);
  v7 = 0LL;
  v67 = 0LL;
  v55 = 0;
  LODWORD(v8) = 0;
  v57 = 0;
  v9 = 0;
  v74[8] = MEMORY[0xFFFFF78000000014];
  v60 = *a3;
  LODWORD(v74[3]) = 7;
  LOBYTE(v74[6]) = -1;
  v56 = 0;
  v58 = 0;
  DestinationString = 0LL;
  if ( !a1 )
  {
    v10 = 1;
LABEL_3:
    v62 = v10;
    goto LABEL_4;
  }
  v36 = *a1;
  v10 = (*a1 & 2) != 0;
  v67 = a1;
  v62 = v10;
  if ( (v36 & 4) == 0 )
  {
    v55 = 0;
    goto LABEL_3;
  }
  *((_WORD *)a1 + 261) = 0;
  v55 = 1;
  v9 = 1;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)a1 + 2);
LABEL_4:
  if ( byte_1C00B2B1B )
  {
    v37 = WdLogNewEntry5_WdEvent(v7, v6);
    *(_QWORD *)(v37 + 24) = 0LL;
    WdLogEvent5_WdEvent(v37);
    return (unsigned int)v8;
  }
  started = DxgkStartPnPTransition(0LL, (!v10 + 2LL) << 32);
  if ( !started )
  {
    LODWORD(v8) = -1073741670;
    v38 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
    *(_QWORD *)(v38 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v38);
    return (unsigned int)v8;
  }
  if ( v10 )
  {
    _InterlockedCompareExchange(&dword_1C00B2E68, 5, 4);
    LOBYTE(v11) = 1;
    DpiPnpEnableVga(0LL, v11, 0LL, v74);
  }
  AcquireMiniportListMutex();
  if ( !qword_1C00B2DC0 )
  {
    v39 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v39 + 24) = -1073741823LL;
    WdLogEvent5_WdError(v39);
  }
  if ( a2 )
  {
    byte_1C00B2B5A = 1;
    DpiAcquirePostDisplayInfoFromBgfx((__int64)&xmmword_1C00B2DC8, 1, 1);
    dword_1C00B2EB4 = 1;
    if ( qword_1C00B2DC0 )
      (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)(qword_1C00B2DC0 + 64) + 976LL))(
        *(_QWORD *)(*(_QWORD *)(qword_1C00B2DC0 + 64) + 48LL),
        &xmmword_1C00B2DC8);
    dword_1C00B2E68 = 1;
    goto LABEL_14;
  }
  if ( v10 )
  {
    if ( (unsigned int)(dword_1C00B2E68 - 4) <= 1 )
      DpiDisableMsBddFallbackDriver(v74);
LABEL_14:
    v17 = 0;
    if ( v10 )
      goto LABEL_15;
  }
  v17 = 1;
LABEL_15:
  v18 = started;
  v61 = v17;
  do
  {
    v19 = qword_1C00B2B40;
    if ( *(_QWORD *)v19 != v19 )
    {
      do
      {
        v20 = *(_BYTE *)(v19 + 134);
        if ( v9 )
        {
          if ( v20 )
          {
LABEL_19:
            KeWaitForSingleObject((PVOID)(v19 + 72), Executive, 0, 0, 0LL);
            v21 = *(_QWORD *)(v19 + 56);
            if ( *(_QWORD *)v21 != v21 )
            {
              while ( 1 )
              {
                if ( *(_DWORD *)(v21 + 16) == 1953656900 && *(_DWORD *)(v21 + 20) == 4 )
                  goto LABEL_44;
                if ( !v55 )
                {
                  v22 = 1;
LABEL_24:
                  KeEnterCriticalRegion();
                  if ( *(_BYTE *)(v21 + 484) )
                    DpiCheckForOutstandingD3Requests(v21);
                  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v21 + 168), 1u);
                  v23 = 0;
                  v17 = v61;
                  if ( (v61 == 0) == (*(_BYTE *)(*(_QWORD *)(v21 + 168) + 108LL) != 0)
                    && *(_DWORD *)(v21 + 236) == 1
                    && !*(_BYTE *)(v21 + 232)
                    && (!v55 || v22) )
                  {
                    if ( !*(_BYTE *)(v21 + 481) || v60 )
                    {
                      v72 = 0LL;
                      v24 = 0LL;
                      v73 = 0;
                      if ( v67 && v67[131] )
                      {
                        v24 = v67 + 132;
                        v23 = v67[131];
                      }
                      Data = v24;
                      v25 = *(struct _DEVICE_OBJECT **)(v21 + 24);
                      Timeouta = v23;
                      LOBYTE(v23) = a2;
                      if ( *(_DWORD *)(v21 + 504) )
                        v26 = DpiLdaStartAdapterInChain(
                                (_DWORD)v25,
                                v23,
                                v18,
                                (unsigned int)v74,
                                Timeouta,
                                (__int64)Data,
                                (__int64)&v72);
                      else
                        v26 = DpiFdoStartAdapter(v25, Timeouta, (__int64)Data, (__int64)&v72);
                      LODWORD(v8) = v26;
                      if ( v26 != 1075708986 )
                      {
                        if ( v26 < 0 )
                        {
                          v51 = *(struct _DEVICE_OBJECT **)(v21 + 152);
                          *(_BYTE *)(v21 + 232) = 1;
                          IoInvalidateDeviceState(v51);
                        }
                        else
                        {
                          v27 = (v72 & 1) != 0 || (_BYTE)word_1C00B2B1D && (v72 & 0x40) != 0;
                          v57 |= v27;
                          if ( (v72 & 2) == 0 || (v28 = 1, (v72 & 0x2000) != 0) )
                            v28 = 0;
                          v56 |= v28;
                          v58 |= (v72 & 0x4000) != 0;
                        }
                      }
                    }
                    else
                    {
                      *v70 = 1;
                    }
                  }
                  if ( *(_BYTE *)(v21 + 484) )
                    DpiEnableD3Requests(*(_QWORD *)(v21 + 24));
                  ExReleaseResourceLite(*(PERESOURCE *)(v21 + 168));
                  KeLeaveCriticalRegion();
                  goto LABEL_44;
                }
                v40 = DestinationString.Length + 2;
                RequiredSize = 0;
                Type = 0;
                v63 = 0LL;
                PoolWithTag = ExAllocatePoolWithTag(PagedPool, v40, 0x74727044u);
                AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v63);
                v63 = PoolWithTag;
                v69 = 0LL;
                AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v69);
                if ( !PoolWithTag )
                  break;
                DevicePropertyData = IoGetDevicePropertyData(
                                       *(PDEVICE_OBJECT *)(v21 + 152),
                                       &DEVPKEY_Device_InstanceId,
                                       0,
                                       0,
                                       v40,
                                       PoolWithTag,
                                       &RequiredSize,
                                       &Type);
                v8 = DevicePropertyData;
                if ( DevicePropertyData < 0 )
                {
                  v44 = WdLogNewEntry5_WdError(v47, v46);
                  *(_QWORD *)(v44 + 24) = v8;
                  goto LABEL_89;
                }
                String1 = 0LL;
                RtlInitUnicodeString(&String1, (PCWSTR)PoolWithTag);
                if ( !*(_BYTE *)(v21 + 1159)
                  || (wcscpy(Str1, L"SWD\\VirtualDisplayAdapter\\VirtualDisplayDevice_"), String1.Length >= 0x60u)
                  && !wcsncmp_0(Str1, String1.Buffer, 0x2FuLL) )
                {
                  v22 = RtlCompareUnicodeString(&String1, &DestinationString, 1u) == 0;
                  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v63);
                  goto LABEL_24;
                }
                v50 = WdLogNewEntry5_WdError(v49, v48);
                WdLogEvent5_WdError(v50);
                AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v63);
                v17 = v61;
LABEL_44:
                v21 = *(_QWORD *)v21;
                if ( *(_QWORD *)v21 == *(_QWORD *)(v19 + 56) )
                  goto LABEL_45;
              }
              LODWORD(v8) = -1073741801;
              v44 = WdLogNewEntry5_WdError(v43, v42);
LABEL_89:
              WdLogEvent5_WdError(v44);
              AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v63);
              v17 = v61;
              goto LABEL_44;
            }
LABEL_45:
            KeReleaseMutex((PRKMUTEX)(v19 + 72), 0);
            v9 = v55;
          }
        }
        else if ( !v20 )
        {
          goto LABEL_19;
        }
        v19 = *(_QWORD *)v19;
      }
      while ( *(_QWORD *)v19 != qword_1C00B2B40 );
    }
    v61 = ++v17;
  }
  while ( v17 < 2 );
  if ( v62 && (unsigned int)(dword_1C00B2E68 - 1) <= 1 )
    DpiEnableMsBddFallbackDriver(v74);
  if ( v56 )
  {
    v29 = qword_1C00B2B40;
    if ( *(_QWORD *)v29 != v29 )
    {
      do
      {
        if ( *(_BYTE *)(v29 + 133) )
        {
          KeWaitForSingleObject((PVOID)(v29 + 72), Executive, 0, 0, 0LL);
          v34 = *(__int64 **)(v29 + 56);
          if ( (__int64 *)*v34 != v34 )
          {
            do
            {
              KeEnterCriticalRegion();
              if ( *((_BYTE *)v34 + 484) )
                _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v34[3] + 64) + 4080LL), 1u);
              ExAcquireResourceSharedLite((PERESOURCE)v34[21], 1u);
              if ( *((_DWORD *)v34 + 4) == 1953656900 && *((_DWORD *)v34 + 5) == 2 )
              {
                v35 = *((_DWORD *)v34 + 59);
                if ( v35 == 2 || *((_DWORD *)v34 + 60) == 2 && ((v35 - 3) & 0xFFFFFFFC) == 0 && v35 != 4 )
                  IoInvalidateDeviceRelations((PDEVICE_OBJECT)v34[19], PowerRelations);
              }
              if ( *((_BYTE *)v34 + 484) )
                DpiEnableD3Requests(v34[3]);
              ExReleaseResourceLite((PERESOURCE)v34[21]);
              KeLeaveCriticalRegion();
              v34 = (__int64 *)*v34;
            }
            while ( *v34 != *(_QWORD *)(v29 + 56) );
          }
          KeReleaseMutex((PRKMUTEX)(v29 + 72), 0);
        }
        v29 = *(_QWORD *)v29;
      }
      while ( *(_QWORD *)v29 != qword_1C00B2B40 );
    }
  }
  _InterlockedExchange64(&qword_1C00B2B50, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( v57 || v58 )
  {
    LOBYTE(v30) = 1;
    LOBYTE(Timeout) = v55;
    DpiPnpNotifyGdi(0LL, v30, started, 0x100000000LL, Timeout, v74);
    v32 = 0LL;
  }
  else
  {
    if ( v62 )
    {
      LOBYTE(v30) = 1;
      LOBYTE(v31) = 1;
      DpiPnpEnableVga(v31, v30, started, v74);
      return (unsigned int)v8;
    }
    v32 = (void *)started;
  }
  if ( v32 )
    DxgkCompletePnPTransition(v32);
  return (unsigned int)v8;
}
