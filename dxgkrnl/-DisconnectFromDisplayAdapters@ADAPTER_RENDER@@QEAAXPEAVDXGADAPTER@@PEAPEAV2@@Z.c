void __fastcall ADAPTER_RENDER::DisconnectFromDisplayAdapters(
        ADAPTER_RENDER *this,
        struct DXGADAPTER *a2,
        struct DXGADAPTER **a3)
{
  DXGADAPTER *v6; // rcx
  struct _LUID *v7; // rdx
  unsigned __int64 v8; // [rsp+20h] [rbp-59h] BYREF
  _DXGK_WIN32K_PARAM_DATA v9; // [rsp+28h] [rbp-51h] BYREF
  _QWORD v10[10]; // [rsp+50h] [rbp-29h] BYREF

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 24, 0LL);
  *((_QWORD *)this + 4) = KeGetCurrentThread();
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 48, 0LL);
  *((_QWORD *)this + 7) = KeGetCurrentThread();
  ADAPTER_RENDER::StopDisplayDevices(this, 2LL, 0LL);
  ADAPTER_RENDER::StopDisplayDevices(this, 1LL, 0LL);
  *a3 = a2;
  *((_QWORD *)this + 4) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 24, 0LL);
  KeLeaveCriticalRegion();
  *((_QWORD *)this + 7) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 48, 0LL);
  KeLeaveCriticalRegion();
  memset(v10, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v10[1]);
  v6 = (DXGADAPTER *)*((_QWORD *)this + 2);
  *(_OWORD *)&v9.NumPathArrayElements = 0LL;
  v10[8] = MEMORY[0xFFFFF78000000014];
  v9.SDCFlags = 2447;
  LODWORD(v10[3]) = 62;
  LOBYTE(v10[6]) = -1;
  *(_OWORD *)&v9.PathsArray = 0LL;
  v8 = 0LL;
  DXGADAPTER::IsAdapterSessionized(v6, v7, 0LL, &v8);
  DxgkRequestAsyncDisplaySwitchCallout(&v9, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v10, v8);
}
