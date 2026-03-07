void __fastcall DxgkCheckAndUpdatePairingForNewAdapter(struct DXGADAPTER *a1, unsigned __int8 *a2)
{
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v5; // rax
  unsigned int i; // edi
  __int64 v7; // r13
  __int64 v8; // r15
  DXGADAPTER *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rbx
  int v14; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v15[16]; // [rsp+28h] [rbp-58h] BYREF
  DXGADAPTER *v16[2]; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v17; // [rsp+48h] [rbp-38h] BYREF
  __int64 v18; // [rsp+50h] [rbp-30h]
  struct _GUID v19; // [rsp+58h] [rbp-28h] BYREF
  char v20; // [rsp+68h] [rbp-18h]

  *a2 = 0;
  v14 = 0;
  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::IterateAdaptersWithCallback(
    (__int64)Global,
    (__int64 (__fastcall *)(_QWORD *, __int64))lambda_98a973f9db80c22b1740ef6057097b25_::_lambda_invoker_cdecl_,
    (__int64)&v14,
    1);
  if ( v14 )
  {
    DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AdapterArray(&v17, (unsigned int)(v14 + 16));
    v5 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)v5,
      (__int64 (__fastcall *)(_QWORD *, __int64))lambda_85aa73a68ff66b421643f8c78198376d_::_lambda_invoker_cdecl_,
      (__int64)&v17,
      1);
    for ( i = 0; i < v17; ++i )
    {
      v7 = *(_QWORD *)(v18 + 16LL * i);
      v8 = *(_QWORD *)(v7 + 2920);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (struct DXGFASTMUTEX *const)(v8 + 152), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
      v16[0] = 0LL;
      v19 = 0LL;
      ADAPTER_DISPLAY::GetPairedRenderAdapter((ADAPTER_DISPLAY *)v8, v16, &v19);
      v9 = v16[0];
      if ( v16[0] )
      {
        v10 = *(_QWORD *)&v19.Data1 - *(_QWORD *)((char *)v16[0] + 308);
        if ( *(_QWORD *)&v19.Data1 == *(_QWORD *)((char *)v16[0] + 308) )
          v10 = *(_QWORD *)v19.Data4 - *(_QWORD *)((char *)v16[0] + 316);
        if ( v10 )
        {
          v11 = *(_QWORD *)&v19.Data1 - *(_QWORD *)((char *)a1 + 308);
          if ( !v11 )
            v11 = *(_QWORD *)v19.Data4 - *(_QWORD *)((char *)a1 + 316);
          if ( !v11 || (*((_DWORD *)a1 + 109) & 1) != 0 || v9 == *((DXGADAPTER **)DXGGLOBAL::GetGlobal() + 119) )
          {
            v12 = *((_QWORD *)v9 + 366) + 24LL;
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v12, 0LL);
            *(_QWORD *)(v12 + 8) = KeGetCurrentThread();
            v13 = *((_QWORD *)v9 + 366) + 48LL;
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v13, 0LL);
            *(_QWORD *)(v13 + 8) = KeGetCurrentThread();
            *(_QWORD *)v19.Data4 = v7;
            v20 = 0;
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v19);
            if ( *(_DWORD *)(v7 + 200) != 1 )
            {
              if ( v20 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v19);
              *(_QWORD *)(v13 + 8) = 0LL;
              ExReleasePushLockExclusiveEx(v13, 0LL);
              KeLeaveCriticalRegion();
              *(_QWORD *)(v12 + 8) = 0LL;
              ExReleasePushLockExclusiveEx(v12, 0LL);
              KeLeaveCriticalRegion();
              DXGADAPTER_REFERENCE::Assign(v16, 0LL);
              goto LABEL_20;
            }
            ADAPTER_RENDER::DisconnectFromDisplayAdapters(
              *((ADAPTER_RENDER **)v16[0] + 366),
              (struct DXGADAPTER *)v7,
              0);
            ADAPTER_DISPLAY::SetPairedRenderAdapter((ADAPTER_DISPLAY *)v8, a1, 0LL);
            *a2 = 1;
            if ( v20 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v19);
            *(_QWORD *)(v13 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v13, 0LL);
            KeLeaveCriticalRegion();
            *(_QWORD *)(v12 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v12, 0LL);
            KeLeaveCriticalRegion();
          }
        }
      }
      DXGADAPTER_REFERENCE::Assign(v16, 0LL);
LABEL_20:
      if ( v15[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
    }
    DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::_AdapterArray(&v17);
  }
}
