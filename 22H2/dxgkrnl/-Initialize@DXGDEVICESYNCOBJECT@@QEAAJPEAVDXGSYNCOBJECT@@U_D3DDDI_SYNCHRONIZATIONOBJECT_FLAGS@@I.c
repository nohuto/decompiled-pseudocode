/*
 * XREFs of ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C01A6F98
 * Callers:
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C01B2C5C (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C00080CC (-GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x1C002623C (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     Feature_1999418683__private_IsEnabledDeviceUsage @ 0x1C0026298 (Feature_1999418683__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01A5A68 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C01B3D00 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 */

__int64 __fastcall DXGDEVICESYNCOBJECT::Initialize(
        DXGDEVICESYNCOBJECT *this,
        struct DXGSYNCOBJECT *a2,
        struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS a3,
        int a4)
{
  int IsEnabledDeviceUsage; // eax
  DXGSYNCOBJECT *v9; // rcx
  int v10; // eax
  unsigned int v11; // edi
  __int64 v13; // rdi
  struct VIDMM_MONITORED_FENCE_STORAGE *MonitoredFenceStorage; // rax
  __int64 v15; // rbx
  struct VIDMM_MONITORED_FENCE_STORAGE *v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rbx
  __int64 v20; // rax
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v22; // rbx
  unsigned int v23; // eax
  unsigned int v24; // edx
  __int64 v25; // rax
  __int64 v26; // r9
  int v27; // r8d
  DXGPUSHLOCK *v28; // rcx
  DXGPUSHLOCK *v29; // rcx
  _BYTE v30[8]; // [rsp+50h] [rbp-30h] BYREF
  char v31; // [rsp+58h] [rbp-28h]
  _BYTE v32[8]; // [rsp+60h] [rbp-20h] BYREF
  DXGPUSHLOCK *v33; // [rsp+68h] [rbp-18h]
  int v34; // [rsp+70h] [rbp-10h]

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
  IsEnabledDeviceUsage = Feature_1999418683__private_IsEnabledDeviceUsage();
  v9 = (DXGSYNCOBJECT *)*((_QWORD *)this + 4);
  if ( IsEnabledDeviceUsage )
  {
    v10 = DXGSYNCOBJECT::AddReference(v9);
    v11 = v10;
    if ( v10 < 0 )
    {
      WdLogSingleEntry2(3LL, this, v10);
      return v11;
    }
  }
  else
  {
    DXGSYNCOBJECT::AddReference(v9);
  }
  *((_BYTE *)this + 92) |= 1u;
  if ( (*((_DWORD *)a2 + 71) & 2) == 0 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL);
    MonitoredFenceStorage = DXGSYNCOBJECT::GetMonitoredFenceStorage(*((DXGSYNCOBJECT **)this + 4));
    v11 = (*(__int64 (__fastcall **)(_QWORD, struct VIDMM_MONITORED_FENCE_STORAGE *, char *, _QWORD))(*(_QWORD *)(v13 + 8) + 928LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
            MonitoredFenceStorage,
            (char *)this + 56,
            0LL);
    if ( (v11 & 0x80000000) != 0 )
      return v11;
    if ( *(_BYTE *)&a3.0 >= 0 )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL);
      v16 = DXGSYNCOBJECT::GetMonitoredFenceStorage(*((DXGSYNCOBJECT **)this + 4));
      v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct VIDMM_MONITORED_FENCE_STORAGE *, char *, int))(*(_QWORD *)(v15 + 8) + 936LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
              *(_QWORD *)(*((_QWORD *)this + 2) + 792LL),
              v16,
              (char *)this + 48,
              a4);
      if ( (v11 & 0x80000000) != 0 )
        return v11;
    }
    v17 = *((_QWORD *)DXGSYNCOBJECT::GetMonitoredFenceStorage(*((DXGSYNCOBJECT **)this + 4)) + 1);
    v18 = *((_DWORD *)this + 18);
    *((_QWORD *)this + 8) = v17;
    if ( (v18 & 0x10) == 0 && (v18 & 0x40) == 0 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 4) + 32LL), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                           *((DXGSYNCOBJECT **)this + 4),
                           *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL));
      if ( VidSchSyncObject )
      {
        v20 = operator new[](0x18uLL, 0x4B677844u, 64LL);
        *((_QWORD *)this + 3) = v20;
        if ( !v20 )
        {
          v11 = -1073741801;
          if ( v31 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
          return v11;
        }
        *(_QWORD *)(v20 + 16) = VidSchSyncObject;
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 736LL)
                                                           + 8LL)
                                               + 680LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 800LL),
          *((_QWORD *)this + 3));
      }
      if ( v31 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
    }
  }
  if ( (*((_BYTE *)this + 92) & 4) != 0 )
  {
    Current = DXGPROCESS::GetCurrent();
    v22 = Current;
    v33 = (struct DXGPROCESS *)((char *)Current + 248);
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
    DXGPUSHLOCK::AcquireExclusive(v33);
    v34 = 2;
    v23 = HMGRTABLE::AllocHandle((char *)v22 + 280, this, 11LL, 0LL, 0);
    *((_DWORD *)this + 10) = v23;
    v24 = v23;
    if ( !v23 )
    {
      v11 = -1073741801;
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
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
      return v11;
    }
    v25 = (v23 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v25 < *((_DWORD *)v22 + 74) )
    {
      v26 = *((_QWORD *)v22 + 35);
      v27 = *(_DWORD *)(v26 + 16 * v25 + 8);
      if ( ((v24 >> 25) & 0x60) == (*(_BYTE *)(v26 + 16 * v25 + 8) & 0x60) && (v27 & 0x2000) == 0 && (v27 & 0x1F) != 0 )
        *(_DWORD *)(v26 + 16 * (((unsigned __int64)v24 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    if ( v34 == 1 )
    {
      v28 = v33;
      v34 = 0;
      _InterlockedDecrement((volatile signed __int32 *)v33 + 4);
      ExReleasePushLockSharedEx(v28, 0LL);
LABEL_36:
      KeLeaveCriticalRegion();
      return 0LL;
    }
    if ( v34 == 2 )
    {
      v29 = v33;
      v34 = 0;
      *((_QWORD *)v33 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v29, 0LL);
      goto LABEL_36;
    }
  }
  return 0LL;
}
