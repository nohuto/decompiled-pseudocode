/*
 * XREFs of DpiFdoStartAdapterThreadImpl @ 0x1C0209A10
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C02099A0 (DpiFdoStartAdapterThread.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0004778 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B270 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     wcsncmp_0 @ 0x1C00243C5 (wcsncmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x1C005E784 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C0180A2C (DpiEnableD3Requests.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C01E7D80 (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiPnpEnableVga @ 0x1C0209774 (DpiPnpEnableVga.c)
 *     DpiPnpNotifyGdi @ 0x1C0209894 (DpiPnpNotifyGdi.c)
 *     DpiFdoStartNonLdaAdapter @ 0x1C0209FAC (DpiFdoStartNonLdaAdapter.c)
 *     DxgkStartPnPTransition @ 0x1C020ACBC (DxgkStartPnPTransition.c)
 *     DxgkCompletePnPTransition @ 0x1C0214FC4 (DxgkCompletePnPTransition.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C0395D30 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C0395EF8 (DpiEnableMsBddFallbackDriver.c)
 *     DpiLdaStartAdapterInChain @ 0x1C03A4064 (DpiLdaStartAdapterInChain.c)
 */

__int64 __fastcall DpiFdoStartAdapterThreadImpl(int *a1, char a2, _BYTE *a3)
{
  unsigned int v6; // r13d
  char v7; // si
  bool v8; // r15
  unsigned int v9; // r14d
  int v10; // r15d
  __int64 v11; // r12
  char v12; // al
  __int64 v13; // rsi
  bool v14; // bl
  int v15; // edx
  void *v16; // rcx
  struct _DEVICE_OBJECT *v17; // rcx
  int v18; // eax
  bool v19; // al
  char v20; // cl
  bool v21; // r15
  __int64 v22; // rsi
  __int64 *v24; // rbx
  int v25; // ecx
  int v26; // eax
  ULONG v27; // r14d
  void *Pool2; // rbx
  NTSTATUS DevicePropertyData; // eax
  struct _DEVICE_OBJECT *v30; // rcx
  int Timeout; // [rsp+20h] [rbp-E0h]
  PVOID Data; // [rsp+28h] [rbp-D8h]
  char v33; // [rsp+40h] [rbp-C0h]
  char v34; // [rsp+41h] [rbp-BFh]
  char v35; // [rsp+42h] [rbp-BEh]
  char v36; // [rsp+43h] [rbp-BDh]
  char v38; // [rsp+45h] [rbp-BBh]
  unsigned int v39; // [rsp+48h] [rbp-B8h]
  bool v40; // [rsp+4Ch] [rbp-B4h]
  void *v41; // [rsp+50h] [rbp-B0h] BYREF
  void *started; // [rsp+58h] [rbp-A8h]
  ULONG Type; // [rsp+60h] [rbp-A0h] BYREF
  ULONG RequiredSize; // [rsp+64h] [rbp-9Ch] BYREF
  int *v45; // [rsp+68h] [rbp-98h]
  UNICODE_STRING String1; // [rsp+70h] [rbp-90h] BYREF
  void *v47; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v48; // [rsp+88h] [rbp-78h]
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-60h] BYREF
  int v51; // [rsp+A8h] [rbp-58h]
  _QWORD v52[10]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t Str1[48]; // [rsp+100h] [rbp+0h] BYREF

  v48 = a3;
  memset(v52, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v52[1]);
  v45 = 0LL;
  v33 = 0;
  v6 = 0;
  v35 = 0;
  v7 = 0;
  v52[8] = MEMORY[0xFFFFF78000000014];
  v38 = *a3;
  LODWORD(v52[3]) = 7;
  LOBYTE(v52[6]) = -1;
  v34 = 0;
  v36 = 0;
  DestinationString = 0LL;
  if ( !a1 )
  {
    v8 = 1;
LABEL_3:
    v40 = v8;
    goto LABEL_4;
  }
  v26 = *a1;
  v8 = (*a1 & 2) != 0;
  v45 = a1;
  v40 = v8;
  if ( (v26 & 4) == 0 )
  {
    v33 = 0;
    goto LABEL_3;
  }
  *((_WORD *)a1 + 261) = 0;
  v33 = 1;
  v7 = 1;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)a1 + 2);
LABEL_4:
  if ( byte_1C013B49A )
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
    _InterlockedCompareExchange(&dword_1C013B7F0, 5, 4);
    DpiPnpEnableVga(0, 1u, 0LL, (__int64)v52);
  }
  AcquireMiniportListMutex();
  if ( !qword_1C013B748 )
    WdLogSingleEntry1(2LL, -1073741823LL);
  if ( a2 )
  {
    byte_1C013B4E2 = 1;
    DpiAcquirePostDisplayInfoFromBgfx((__int64)&xmmword_1C013B750, 1, 1);
    dword_1C013B83C = 1;
    if ( qword_1C013B748 )
      (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)(qword_1C013B748 + 64) + 976LL))(
        *(_QWORD *)(*(_QWORD *)(qword_1C013B748 + 64) + 48LL),
        &xmmword_1C013B750);
    dword_1C013B7F0 = 1;
    if ( v8 )
    {
LABEL_14:
      v9 = 0;
      goto LABEL_15;
    }
  }
  else if ( v8 )
  {
    if ( (unsigned int)(dword_1C013B7F0 - 4) <= 1 )
      DpiDisableMsBddFallbackDriver(v52);
    goto LABEL_14;
  }
  v9 = 1;
LABEL_15:
  v10 = (int)started;
  v39 = v9;
  do
  {
    v11 = qword_1C013B4C8;
    if ( *(_QWORD *)v11 != v11 )
    {
      do
      {
        v12 = *(_BYTE *)(v11 + 134);
        if ( v7 )
        {
          if ( v12 )
          {
LABEL_19:
            KeWaitForSingleObject((PVOID)(v11 + 72), Executive, 0, 0, 0LL);
            v13 = *(_QWORD *)(v11 + 56);
            if ( *(_QWORD *)v13 != v13 )
            {
              while ( 1 )
              {
                if ( *(_DWORD *)(v13 + 16) == 1953656900 && *(_DWORD *)(v13 + 20) == 4 )
                  goto LABEL_44;
                if ( !v33 )
                {
                  v14 = 1;
LABEL_24:
                  KeEnterCriticalRegion();
                  if ( *(_BYTE *)(v13 + 484) )
                    DpiCheckForOutstandingD3Requests(v13);
                  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v13 + 168), 1u);
                  v15 = 0;
                  v9 = v39;
                  if ( (v39 == 0) == (*(_BYTE *)(*(_QWORD *)(v13 + 168) + 108LL) != 0)
                    && *(_DWORD *)(v13 + 236) == 1
                    && !*(_BYTE *)(v13 + 232)
                    && (!v33 || v14) )
                  {
                    if ( !*(_BYTE *)(v13 + 481) || v38 )
                    {
                      v50 = 0LL;
                      v16 = 0LL;
                      v51 = 0;
                      if ( v45 && v45[131] )
                      {
                        v16 = v45 + 132;
                        v15 = v45[131];
                      }
                      Data = v16;
                      v17 = *(struct _DEVICE_OBJECT **)(v13 + 24);
                      Timeout = v15;
                      LOBYTE(v15) = a2;
                      if ( *(_DWORD *)(v13 + 504) )
                        v18 = DpiLdaStartAdapterInChain(
                                (_DWORD)v17,
                                v15,
                                v10,
                                (unsigned int)v52,
                                Timeout,
                                (__int64)Data,
                                (__int64)&v50);
                      else
                        v18 = DpiFdoStartNonLdaAdapter(v17, Timeout, (__int64)Data, (__int64)&v50);
                      v6 = v18;
                      if ( v18 != 1075708986 )
                      {
                        if ( v18 < 0 )
                        {
                          v30 = *(struct _DEVICE_OBJECT **)(v13 + 152);
                          *(_BYTE *)(v13 + 232) = 1;
                          IoInvalidateDeviceState(v30);
                        }
                        else
                        {
                          v19 = (v50 & 1) != 0 || (_BYTE)word_1C013B49C && (v50 & 0x40) != 0;
                          v35 |= v19;
                          if ( (v50 & 2) == 0 || (v20 = 1, (v50 & 0x2000) != 0) )
                            v20 = 0;
                          v34 |= v20;
                          v36 |= (v50 & 0x4000) != 0;
                        }
                      }
                    }
                    else
                    {
                      *v48 = 1;
                    }
                  }
                  if ( *(_BYTE *)(v13 + 484) )
                    DpiEnableD3Requests(*(_QWORD *)(v13 + 24));
                  ExReleaseResourceLite(*(PERESOURCE *)(v13 + 168));
                  KeLeaveCriticalRegion();
                  goto LABEL_44;
                }
                v27 = DestinationString.Length + 2;
                RequiredSize = 0;
                Type = 0;
                v41 = 0LL;
                Pool2 = (void *)ExAllocatePool2(256LL, v27, 1953656900LL);
                AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v41);
                v41 = Pool2;
                v47 = 0LL;
                AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v47);
                if ( !Pool2 )
                  break;
                DevicePropertyData = IoGetDevicePropertyData(
                                       *(PDEVICE_OBJECT *)(v13 + 152),
                                       &DEVPKEY_Device_InstanceId,
                                       0,
                                       0,
                                       v27,
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
                if ( !*(_BYTE *)(v13 + 1160)
                  || (wcscpy(Str1, L"SWD\\VirtualDisplayAdapter\\VirtualDisplayDevice_"), String1.Length >= 0x60u)
                  && !wcsncmp_0(Str1, String1.Buffer, 0x2FuLL) )
                {
                  v14 = RtlCompareUnicodeString(&String1, &DestinationString, 1u) == 0;
                  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v41);
                  goto LABEL_24;
                }
                WdLogSingleEntry0(2LL);
                AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v41);
                v9 = v39;
LABEL_44:
                v13 = *(_QWORD *)v13;
                if ( *(_QWORD *)v13 == *(_QWORD *)(v11 + 56) )
                  goto LABEL_45;
              }
              v6 = -1073741801;
              WdLogSingleEntry0(2LL);
LABEL_88:
              AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v41);
              v9 = v39;
              goto LABEL_44;
            }
LABEL_45:
            KeReleaseMutex((PRKMUTEX)(v11 + 72), 0);
            v7 = v33;
          }
        }
        else if ( !v12 )
        {
          goto LABEL_19;
        }
        v11 = *(_QWORD *)v11;
      }
      while ( *(_QWORD *)v11 != qword_1C013B4C8 );
    }
    v39 = ++v9;
  }
  while ( v9 < 2 );
  v21 = v40;
  if ( v40 && (unsigned int)(dword_1C013B7F0 - 1) <= 1 )
    DpiEnableMsBddFallbackDriver(v52);
  if ( v34 )
  {
    v22 = qword_1C013B4C8;
    if ( *(_QWORD *)v22 != v22 )
    {
      do
      {
        if ( *(_BYTE *)(v22 + 133) )
        {
          KeWaitForSingleObject((PVOID)(v22 + 72), Executive, 0, 0, 0LL);
          v24 = *(__int64 **)(v22 + 56);
          if ( (__int64 *)*v24 != v24 )
          {
            do
            {
              KeEnterCriticalRegion();
              if ( *((_BYTE *)v24 + 484) )
                _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v24[3] + 64) + 4104LL), 1u);
              ExAcquireResourceSharedLite((PERESOURCE)v24[21], 1u);
              if ( *((_DWORD *)v24 + 4) == 1953656900 && *((_DWORD *)v24 + 5) == 2 )
              {
                v25 = *((_DWORD *)v24 + 59);
                if ( v25 == 2 || *((_DWORD *)v24 + 60) == 2 && ((v25 - 3) & 0xFFFFFFFC) == 0 && v25 != 4 )
                  IoInvalidateDeviceRelations((PDEVICE_OBJECT)v24[19], PowerRelations);
              }
              if ( *((_BYTE *)v24 + 484) )
                DpiEnableD3Requests(v24[3]);
              ExReleaseResourceLite((PERESOURCE)v24[21]);
              KeLeaveCriticalRegion();
              v24 = (__int64 *)*v24;
            }
            while ( *v24 != *(_QWORD *)(v22 + 56) );
          }
          KeReleaseMutex((PRKMUTEX)(v22 + 72), 0);
        }
        v22 = *(_QWORD *)v22;
      }
      while ( *(_QWORD *)v22 != qword_1C013B4C8 );
      v21 = v40;
    }
  }
  _InterlockedExchange64(&qword_1C013B4D8, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( v35 || v36 )
  {
    DpiPnpNotifyGdi(0LL, 1u, (__int64)started, 0x100000000LL, v33, (__int64)v52);
  }
  else if ( v21 )
  {
    DpiPnpEnableVga(1u, 1u, (__int64)started, (__int64)v52);
  }
  else
  {
    DxgkCompletePnPTransition(started);
  }
  return v6;
}
