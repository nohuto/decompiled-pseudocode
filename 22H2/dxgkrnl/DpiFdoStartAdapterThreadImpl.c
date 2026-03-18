/*
 * XREFs of DpiFdoStartAdapterThreadImpl @ 0x1C02185F0
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C0218580 (DpiFdoStartAdapterThread.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0005C0C (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0015C20 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     wcsncmp_0 @ 0x1C0023ED5 (wcsncmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x1C005F3A4 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C01987EC (DpiEnableD3Requests.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C01F66A0 (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiFdoStartNonLdaAdapter @ 0x1C0218B8C (DpiFdoStartNonLdaAdapter.c)
 *     DxgkStartPnPTransition @ 0x1C021989C (DxgkStartPnPTransition.c)
 *     DpiPnpNotifyGdi @ 0x1C021B58C (DpiPnpNotifyGdi.c)
 *     DpiPnpEnableVga @ 0x1C021B690 (DpiPnpEnableVga.c)
 *     DxgkCompletePnPTransition @ 0x1C02235A4 (DxgkCompletePnPTransition.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C039A610 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C039A7D8 (DpiEnableMsBddFallbackDriver.c)
 *     DpiLdaStartAdapterInChain @ 0x1C03A8934 (DpiLdaStartAdapterInChain.c)
 */

__int64 __fastcall DpiFdoStartAdapterThreadImpl(int *a1, char a2, _BYTE *a3)
{
  unsigned int v6; // r13d
  char v7; // si
  bool v8; // r15
  __int64 v9; // rdx
  unsigned int v10; // r14d
  int v11; // r15d
  __int64 v12; // r12
  char v13; // al
  __int64 v14; // rsi
  bool v15; // bl
  int v16; // edx
  void *v17; // rcx
  struct _DEVICE_OBJECT *v18; // rcx
  int v19; // eax
  bool v20; // al
  char v21; // cl
  bool v22; // r15
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 *v27; // rbx
  int v28; // ecx
  int v29; // eax
  ULONG v30; // r14d
  void *Pool2; // rbx
  NTSTATUS DevicePropertyData; // eax
  struct _DEVICE_OBJECT *v33; // rcx
  int Timeout; // [rsp+20h] [rbp-E0h]
  int Timeouta; // [rsp+20h] [rbp-E0h]
  PVOID Data; // [rsp+28h] [rbp-D8h]
  char v37; // [rsp+40h] [rbp-C0h]
  char v38; // [rsp+41h] [rbp-BFh]
  char v39; // [rsp+42h] [rbp-BEh]
  char v40; // [rsp+43h] [rbp-BDh]
  char v42; // [rsp+45h] [rbp-BBh]
  unsigned int v43; // [rsp+48h] [rbp-B8h]
  bool v44; // [rsp+4Ch] [rbp-B4h]
  void *v45; // [rsp+50h] [rbp-B0h] BYREF
  void *started; // [rsp+58h] [rbp-A8h]
  ULONG Type; // [rsp+60h] [rbp-A0h] BYREF
  ULONG RequiredSize; // [rsp+64h] [rbp-9Ch] BYREF
  int *v49; // [rsp+68h] [rbp-98h]
  UNICODE_STRING String1; // [rsp+70h] [rbp-90h] BYREF
  void *v51; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v52; // [rsp+88h] [rbp-78h]
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  __int64 v54; // [rsp+A0h] [rbp-60h] BYREF
  int v55; // [rsp+A8h] [rbp-58h]
  _QWORD v56[10]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t Str1[48]; // [rsp+100h] [rbp+0h] BYREF

  v52 = a3;
  memset(v56, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v56[1]);
  v49 = 0LL;
  v37 = 0;
  v6 = 0;
  v39 = 0;
  v7 = 0;
  v56[8] = MEMORY[0xFFFFF78000000014];
  v42 = *a3;
  LODWORD(v56[3]) = 7;
  LOBYTE(v56[6]) = -1;
  v38 = 0;
  v40 = 0;
  DestinationString = 0LL;
  if ( !a1 )
  {
    v8 = 1;
LABEL_3:
    v44 = v8;
    goto LABEL_4;
  }
  v29 = *a1;
  v8 = (*a1 & 2) != 0;
  v49 = a1;
  v44 = v8;
  if ( (v29 & 4) == 0 )
  {
    v37 = 0;
    goto LABEL_3;
  }
  *((_WORD *)a1 + 261) = 0;
  v37 = 1;
  v7 = 1;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)a1 + 2);
LABEL_4:
  if ( byte_1C014049A )
  {
    WdLogSingleEntry1(4LL, 0LL);
    return v6;
  }
  started = (void *)DxgkStartPnPTransition(0LL, (!v8 + 2LL) << 32);
  if ( !started )
  {
    v6 = -1073741670;
    WdLogSingleEntry1(6LL, -1073741670LL);
    return v6;
  }
  if ( v8 )
  {
    _InterlockedCompareExchange(&dword_1C01407F0, 5, 4);
    LOBYTE(v9) = 1;
    DpiPnpEnableVga(0LL, v9, 0LL, v56);
  }
  AcquireMiniportListMutex();
  if ( !qword_1C0140748 )
    WdLogSingleEntry1(2LL, -1073741823LL);
  if ( a2 )
  {
    byte_1C01404E2 = 1;
    DpiAcquirePostDisplayInfoFromBgfx((__int64)&xmmword_1C0140750, 1, 1);
    dword_1C014083C = 1;
    if ( qword_1C0140748 )
      (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)(qword_1C0140748 + 64) + 976LL))(
        *(_QWORD *)(*(_QWORD *)(qword_1C0140748 + 64) + 48LL),
        &xmmword_1C0140750);
    dword_1C01407F0 = 1;
    if ( v8 )
    {
LABEL_14:
      v10 = 0;
      goto LABEL_15;
    }
  }
  else if ( v8 )
  {
    if ( (unsigned int)(dword_1C01407F0 - 4) <= 1 )
      DpiDisableMsBddFallbackDriver(v56);
    goto LABEL_14;
  }
  v10 = 1;
LABEL_15:
  v11 = (int)started;
  v43 = v10;
  do
  {
    v12 = qword_1C01404C8;
    if ( *(_QWORD *)v12 != v12 )
    {
      do
      {
        v13 = *(_BYTE *)(v12 + 134);
        if ( v7 )
        {
          if ( v13 )
          {
LABEL_19:
            KeWaitForSingleObject((PVOID)(v12 + 72), Executive, 0, 0, 0LL);
            v14 = *(_QWORD *)(v12 + 56);
            if ( *(_QWORD *)v14 != v14 )
            {
              while ( 1 )
              {
                if ( *(_DWORD *)(v14 + 16) == 1953656900 && *(_DWORD *)(v14 + 20) == 4 )
                  goto LABEL_44;
                if ( !v37 )
                {
                  v15 = 1;
LABEL_24:
                  KeEnterCriticalRegion();
                  if ( *(_BYTE *)(v14 + 484) )
                    DpiCheckForOutstandingD3Requests(v14);
                  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v14 + 168), 1u);
                  v16 = 0;
                  v10 = v43;
                  if ( (v43 == 0) == (*(_BYTE *)(*(_QWORD *)(v14 + 168) + 108LL) != 0)
                    && *(_DWORD *)(v14 + 236) == 1
                    && !*(_BYTE *)(v14 + 232)
                    && (!v37 || v15) )
                  {
                    if ( !*(_BYTE *)(v14 + 481) || v42 )
                    {
                      v54 = 0LL;
                      v17 = 0LL;
                      v55 = 0;
                      if ( v49 && v49[131] )
                      {
                        v17 = v49 + 132;
                        v16 = v49[131];
                      }
                      Data = v17;
                      v18 = *(struct _DEVICE_OBJECT **)(v14 + 24);
                      Timeouta = v16;
                      LOBYTE(v16) = a2;
                      if ( *(_DWORD *)(v14 + 504) )
                        v19 = DpiLdaStartAdapterInChain(
                                (_DWORD)v18,
                                v16,
                                v11,
                                (unsigned int)v56,
                                Timeouta,
                                (__int64)Data,
                                (__int64)&v54);
                      else
                        v19 = DpiFdoStartNonLdaAdapter(v18, Timeouta, (__int64)Data, (__int64)&v54);
                      v6 = v19;
                      if ( v19 != 1075708986 )
                      {
                        if ( v19 < 0 )
                        {
                          v33 = *(struct _DEVICE_OBJECT **)(v14 + 152);
                          *(_BYTE *)(v14 + 232) = 1;
                          IoInvalidateDeviceState(v33);
                        }
                        else
                        {
                          v20 = (v54 & 1) != 0 || (_BYTE)word_1C014049C && (v54 & 0x40) != 0;
                          v39 |= v20;
                          if ( (v54 & 2) == 0 || (v21 = 1, (v54 & 0x2000) != 0) )
                            v21 = 0;
                          v38 |= v21;
                          v40 |= (v54 & 0x4000) != 0;
                        }
                      }
                    }
                    else
                    {
                      *v52 = 1;
                    }
                  }
                  if ( *(_BYTE *)(v14 + 484) )
                    DpiEnableD3Requests(*(_QWORD *)(v14 + 24));
                  ExReleaseResourceLite(*(PERESOURCE *)(v14 + 168));
                  KeLeaveCriticalRegion();
                  goto LABEL_44;
                }
                v30 = DestinationString.Length + 2;
                RequiredSize = 0;
                Type = 0;
                v45 = 0LL;
                Pool2 = (void *)ExAllocatePool2(256LL, v30, 1953656900LL);
                AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v45);
                v45 = Pool2;
                v51 = 0LL;
                AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v51);
                if ( !Pool2 )
                  break;
                DevicePropertyData = IoGetDevicePropertyData(
                                       *(PDEVICE_OBJECT *)(v14 + 152),
                                       &DEVPKEY_Device_InstanceId,
                                       0,
                                       0,
                                       v30,
                                       Pool2,
                                       &RequiredSize,
                                       &Type);
                v6 = DevicePropertyData;
                if ( DevicePropertyData < 0 )
                {
                  WdLogSingleEntry1(2LL, DevicePropertyData);
                  goto LABEL_88;
                }
                String1 = 0LL;
                RtlInitUnicodeString(&String1, (PCWSTR)Pool2);
                if ( !*(_BYTE *)(v14 + 1160)
                  || (wcscpy(Str1, L"SWD\\VirtualDisplayAdapter\\VirtualDisplayDevice_"), String1.Length >= 0x60u)
                  && !wcsncmp_0(Str1, String1.Buffer, 0x2FuLL) )
                {
                  v15 = RtlCompareUnicodeString(&String1, &DestinationString, 1u) == 0;
                  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v45);
                  goto LABEL_24;
                }
                WdLogSingleEntry0(2LL);
                AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v45);
                v10 = v43;
LABEL_44:
                v14 = *(_QWORD *)v14;
                if ( *(_QWORD *)v14 == *(_QWORD *)(v12 + 56) )
                  goto LABEL_45;
              }
              v6 = -1073741801;
              WdLogSingleEntry0(2LL);
LABEL_88:
              AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v45);
              v10 = v43;
              goto LABEL_44;
            }
LABEL_45:
            KeReleaseMutex((PRKMUTEX)(v12 + 72), 0);
            v7 = v37;
          }
        }
        else if ( !v13 )
        {
          goto LABEL_19;
        }
        v12 = *(_QWORD *)v12;
      }
      while ( *(_QWORD *)v12 != qword_1C01404C8 );
    }
    v43 = ++v10;
  }
  while ( v10 < 2 );
  v22 = v44;
  if ( v44 && (unsigned int)(dword_1C01407F0 - 1) <= 1 )
    DpiEnableMsBddFallbackDriver(v56);
  if ( v38 )
  {
    v23 = qword_1C01404C8;
    if ( *(_QWORD *)v23 != v23 )
    {
      do
      {
        if ( *(_BYTE *)(v23 + 133) )
        {
          KeWaitForSingleObject((PVOID)(v23 + 72), Executive, 0, 0, 0LL);
          v27 = *(__int64 **)(v23 + 56);
          if ( (__int64 *)*v27 != v27 )
          {
            do
            {
              KeEnterCriticalRegion();
              if ( *((_BYTE *)v27 + 484) )
                _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v27[3] + 64) + 4104LL), 1u);
              ExAcquireResourceSharedLite((PERESOURCE)v27[21], 1u);
              if ( *((_DWORD *)v27 + 4) == 1953656900 && *((_DWORD *)v27 + 5) == 2 )
              {
                v28 = *((_DWORD *)v27 + 59);
                if ( v28 == 2 || *((_DWORD *)v27 + 60) == 2 && ((v28 - 3) & 0xFFFFFFFC) == 0 && v28 != 4 )
                  IoInvalidateDeviceRelations((PDEVICE_OBJECT)v27[19], PowerRelations);
              }
              if ( *((_BYTE *)v27 + 484) )
                DpiEnableD3Requests(v27[3]);
              ExReleaseResourceLite((PERESOURCE)v27[21]);
              KeLeaveCriticalRegion();
              v27 = (__int64 *)*v27;
            }
            while ( *v27 != *(_QWORD *)(v23 + 56) );
          }
          KeReleaseMutex((PRKMUTEX)(v23 + 72), 0);
        }
        v23 = *(_QWORD *)v23;
      }
      while ( *(_QWORD *)v23 != qword_1C01404C8 );
      v22 = v44;
    }
  }
  _InterlockedExchange64(&qword_1C01404D8, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( v39 || v40 )
  {
    LOBYTE(v24) = 1;
    LOBYTE(Timeout) = v37;
    DpiPnpNotifyGdi(0LL, v24, started, 0x100000000LL, Timeout, v56);
  }
  else if ( v22 )
  {
    LOBYTE(v24) = 1;
    LOBYTE(v25) = 1;
    DpiPnpEnableVga(v25, v24, started, v56);
  }
  else
  {
    DxgkCompletePnPTransition(started);
  }
  return v6;
}
