__int64 __fastcall DxgkSignalSynchronizationObjectFromGpuByReference(
        unsigned int *a1,
        unsigned __int64 a2,
        unsigned int a3)
{
  struct DXGPROCESS *Current; // r14
  struct DXGCONTEXT *v6; // rdi
  unsigned int v7; // ebx
  __int64 v8; // r9
  int v9; // eax
  struct DXGGLOBAL *Global; // rax
  unsigned int *v11; // rsi
  int DxgAdapterSyncObject; // eax
  __int64 v13; // rsi
  const wchar_t *v14; // r9
  __int64 v15; // rax
  int v16; // eax
  int v18; // [rsp+40h] [rbp-C0h]
  struct DXGCONTEXT *v19; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v22[16]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v23[16]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v24[2]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v25[24]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v26[8]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v27[64]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v28[88]; // [rsp+F8h] [rbp-8h] BYREF

  v20 = a2;
  v19 = 0LL;
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v25, a3, Current, &v19, 0, 1);
  v6 = v19;
  if ( !v19 )
  {
    v7 = -1073741811;
    WdLogSingleEntry3(2LL, Current, 0LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x failed with invalid hContext 0x%I64x returning 0x%I64x",
      (__int64)Current,
      0LL,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_27;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v24,
    *((struct DXGDEVICE **)v19 + 2));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v26, *((_QWORD *)v6 + 2), 0, v8, 0);
  v9 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v26, 0LL);
  if ( v9 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v23, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v23);
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 16LL)) )
    {
      WdLogSingleEntry1(1LL, 1388LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDxgContext->GetRenderCore()->IsCoreResourceSharedOwner()",
        1388LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*((_DWORD *)Current + 106) & 0x180) != 0 )
    {
      v11 = a1;
    }
    else
    {
      v11 = *(unsigned int **)a1;
      if ( (*(_DWORD *)(*(_QWORD *)a1 + 284LL) & 2) != 0 )
      {
        v7 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalFenceNtSharedByRef(
               (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 16LL) + 4472LL),
               Current,
               v6,
               a1[2],
               v20);
LABEL_23:
        if ( v23[8] )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v23);
        goto LABEL_25;
      }
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (struct DXGFASTMUTEX *const)(v11 + 8), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
    DxgAdapterSyncObject = DXGSYNCOBJECT::GetDxgAdapterSyncObject(
                             (DXGSYNCOBJECT *)v11,
                             *(struct ADAPTER_RENDER **)(*((_QWORD *)v6 + 2) + 16LL),
                             &v19);
    v7 = DxgAdapterSyncObject;
    if ( DxgAdapterSyncObject >= 0 )
    {
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                           (DXGSYNCOBJECT *)v11,
                           *(struct ADAPTER_RENDER **)(*((_QWORD *)v6 + 2) + 16LL));
      if ( VidSchSyncObject )
      {
        if ( (*((_DWORD *)v6 + 101) & 0x10) != 0 )
        {
          v19 = (struct DXGCONTEXT *)*((_QWORD *)v6 + 36);
          v16 = (*(__int64 (__fastcall **)(__int64, struct DXGCONTEXT **, __int64, struct _VIDSCH_SYNC_OBJECT **, _DWORD, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 736LL) + 8LL) + 648LL))(
                  1LL,
                  &v19,
                  1LL,
                  &VidSchSyncObject,
                  0,
                  &v20);
        }
        else
        {
          v19 = (struct DXGCONTEXT *)*((_QWORD *)v6 + 32);
          LOBYTE(v18) = 0;
          v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct DXGCONTEXT **, int, struct _VIDSCH_SYNC_OBJECT **, _DWORD, unsigned __int64 *, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 736LL) + 8LL) + 640LL))(
                  0LL,
                  0LL,
                  1LL,
                  &v19,
                  1,
                  &VidSchSyncObject,
                  0,
                  &v20,
                  v18);
        }
        v7 = v16;
        if ( v16 < 0 )
        {
          WdLogSingleEntry1(1LL, 1482LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(ntStatus)", 1482LL, 0LL, 0LL, 0LL, 0LL);
        }
        goto LABEL_21;
      }
      WdLogSingleEntry1(2LL, v11);
      Current = (struct DXGPROCESS *)v11;
      v14 = L"0x%p sync object adapter state is destroyed, thus it cannot be signaled.";
      v15 = 0LL;
      v13 = 0LL;
      v7 = -1073741811;
    }
    else
    {
      v13 = DxgAdapterSyncObject;
      WdLogSingleEntry3(2LL, Current, *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 16LL), DxgAdapterSyncObject);
      v14 = L"0x%I64x failed, failed to create a sync object on logical adapter 0x%I64x returning 0x%I64x";
      v15 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 16LL);
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v14, (__int64)Current, v15, v13, 0LL, 0LL);
LABEL_21:
    if ( v22[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
    goto LABEL_23;
  }
  v7 = v9;
LABEL_25:
  COREACCESS::~COREACCESS((COREACCESS *)v28);
  COREACCESS::~COREACCESS((COREACCESS *)v27);
  if ( v24[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v24);
LABEL_27:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v25);
  return v7;
}
