__int64 __fastcall DXGDEVICESYNCOBJECT::Initialize(
        DXGDEVICESYNCOBJECT *this,
        struct DXGSYNCOBJECT *a2,
        struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS a3,
        int a4)
{
  __int64 v8; // rdi
  struct VIDMM_MONITORED_FENCE_STORAGE *MonitoredFenceStorage; // rax
  int v10; // edi
  __int64 v11; // rbx
  struct VIDMM_MONITORED_FENCE_STORAGE *v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rbx
  __int64 v16; // rax
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v18; // rbx
  unsigned int v19; // eax
  unsigned int v20; // edx
  __int64 v21; // rax
  __int64 v22; // r9
  int v23; // r8d
  DXGPUSHLOCK *v24; // rcx
  DXGPUSHLOCK *v26; // rcx
  _BYTE v27[8]; // [rsp+50h] [rbp-30h] BYREF
  char v28; // [rsp+58h] [rbp-28h]
  _BYTE v29[8]; // [rsp+60h] [rbp-20h] BYREF
  DXGPUSHLOCK *v30; // [rsp+68h] [rbp-18h]
  int v31; // [rsp+70h] [rbp-10h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 161LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDevice()->GetRenderCore()->IsCoreResourceSharedOwner()",
      161LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS *)this + 18) = a3;
  *((_QWORD *)this + 4) = a2;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 6);
  *((_BYTE *)this + 92) |= 1u;
  if ( (*((_DWORD *)a2 + 71) & 2) == 0 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL);
    MonitoredFenceStorage = DXGSYNCOBJECT::GetMonitoredFenceStorage(*((DXGSYNCOBJECT **)this + 4));
    v10 = (*(__int64 (__fastcall **)(_QWORD, struct VIDMM_MONITORED_FENCE_STORAGE *, char *, _QWORD))(*(_QWORD *)(v8 + 8) + 928LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
            MonitoredFenceStorage,
            (char *)this + 56,
            0LL);
    if ( v10 < 0 )
      return (unsigned int)v10;
    if ( *(_BYTE *)&a3.0 >= 0 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL);
      v12 = DXGSYNCOBJECT::GetMonitoredFenceStorage(*((DXGSYNCOBJECT **)this + 4));
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct VIDMM_MONITORED_FENCE_STORAGE *, char *, int))(*(_QWORD *)(v11 + 8) + 936LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
              *(_QWORD *)(*((_QWORD *)this + 2) + 792LL),
              v12,
              (char *)this + 48,
              a4);
      if ( v10 < 0 )
        return (unsigned int)v10;
    }
    v13 = *((_QWORD *)DXGSYNCOBJECT::GetMonitoredFenceStorage(*((DXGSYNCOBJECT **)this + 4)) + 1);
    v14 = *((_DWORD *)this + 18);
    *((_QWORD *)this + 8) = v13;
    if ( (v14 & 0x10) == 0 && (v14 & 0x40) == 0 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 4) + 32LL), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                           *((DXGSYNCOBJECT **)this + 4),
                           *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL));
      if ( VidSchSyncObject )
      {
        v16 = operator new[](0x18uLL, 0x4B677844u, 64LL);
        *((_QWORD *)this + 3) = v16;
        if ( !v16 )
        {
          v10 = -1073741801;
          if ( v28 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27);
          return (unsigned int)v10;
        }
        *(_QWORD *)(v16 + 16) = VidSchSyncObject;
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 736LL)
                                                           + 8LL)
                                               + 680LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 800LL),
          *((_QWORD *)this + 3));
      }
      if ( v28 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27);
    }
  }
  if ( (*((_BYTE *)this + 92) & 4) == 0 )
    return 0LL;
  Current = DXGPROCESS::GetCurrent();
  v18 = Current;
  v30 = (struct DXGPROCESS *)((char *)Current + 248);
  if ( Current != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)Current + 32) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1453LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1453LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGPUSHLOCK::AcquireExclusive(v30);
  v31 = 2;
  v19 = HMGRTABLE::AllocHandle((char *)v18 + 280, this, 11LL, 0LL, 0);
  *((_DWORD *)this + 10) = v19;
  v20 = v19;
  if ( v19 )
  {
    v21 = (v19 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v21 < *((_DWORD *)v18 + 74) )
    {
      v22 = *((_QWORD *)v18 + 35);
      v23 = *(_DWORD *)(v22 + 16 * v21 + 8);
      if ( ((v20 >> 25) & 0x60) == (*(_BYTE *)(v22 + 16 * v21 + 8) & 0x60) && (v23 & 0x2000) == 0 && (v23 & 0x1F) != 0 )
        *(_DWORD *)(v22 + 16 * (((unsigned __int64)v20 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    if ( v31 == 1 )
    {
      v26 = v30;
      v31 = 0;
      _InterlockedDecrement((volatile signed __int32 *)v30 + 4);
      ExReleasePushLockSharedEx(v26, 0LL);
      goto LABEL_27;
    }
    if ( v31 == 2 )
    {
      v24 = v30;
      v31 = 0;
      *((_QWORD *)v30 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v24, 0LL);
LABEL_27:
      KeLeaveCriticalRegion();
    }
    return 0LL;
  }
  v10 = -1073741801;
  WdLogSingleEntry2(6LL, this, -1073741801LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"pSyncObject 0x%I64x: Fail to allocate per process handle, returning 0x%I64x",
    (__int64)this,
    -1073741801LL,
    0LL,
    0LL,
    0LL);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
  return (unsigned int)v10;
}
