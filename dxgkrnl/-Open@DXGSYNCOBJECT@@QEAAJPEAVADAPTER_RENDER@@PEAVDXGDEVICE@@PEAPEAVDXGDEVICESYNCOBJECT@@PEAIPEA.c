__int64 __fastcall DXGSYNCOBJECT::Open(
        DXGSYNCOBJECT *this,
        struct ADAPTER_RENDER *a2,
        struct DXGDEVICE *a3,
        struct DXGDEVICESYNCOBJECT **a4,
        unsigned int *a5,
        void **a6,
        unsigned __int64 *a7,
        unsigned int a8,
        struct DXGADAPTERSYNCOBJECT **a9,
        char a10,
        struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS a11)
{
  struct DXGDEVICESYNCOBJECT *v12; // r12
  int DxgAdapterSyncObject; // ebx
  struct DXGADAPTERSYNCOBJECT *v16; // rsi
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E v17; // ebx
  int v18; // ecx
  DXGDEVICESYNCOBJECT *Pool2; // rax
  unsigned int *v20; // r12
  DXGDEVICESYNCOBJECT *v21; // rax
  DXGDEVICESYNCOBJECT *v22; // r14
  unsigned int v23; // r13d
  int v24; // esi
  struct DXGSYNCOBJECT *v25; // rsi
  struct DXGPROCESS *v26; // rax
  unsigned int v27; // esi
  unsigned int *v29; // rsi
  PERESOURCE *v30; // rax
  _QWORD *v31; // r14
  unsigned int v32; // eax
  unsigned int v33; // edx
  __int64 v34; // rax
  int v35; // r8d
  struct DXGPROCESS *v36; // rax
  unsigned int v37; // ecx
  struct DXGGLOBAL *v38; // rax
  struct DXGGLOBAL *Global; // rax
  struct DXGPROCESS *Current; // [rsp+50h] [rbp-30h]
  DXGFASTMUTEX *v41; // [rsp+58h] [rbp-28h] BYREF
  char v42; // [rsp+60h] [rbp-20h]
  _BYTE v43[24]; // [rsp+68h] [rbp-18h] BYREF
  struct DXGADAPTERSYNCOBJECT *v44; // [rsp+C0h] [rbp+40h] BYREF
  struct DXGDEVICE *v45; // [rsp+D0h] [rbp+50h]

  v45 = a3;
  v12 = a3;
  Current = DXGPROCESS::GetCurrent();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v41, (DXGSYNCOBJECT *)((char *)this + 32), 0);
  if ( v42 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v41, 0LL, 0LL);
  DXGFASTMUTEX::Acquire(v41);
  v42 = 1;
  v44 = 0LL;
  DxgAdapterSyncObject = DXGSYNCOBJECT::GetDxgAdapterSyncObject(this, a2, &v44);
  if ( DxgAdapterSyncObject < 0 && a2 )
    goto LABEL_49;
  v16 = v44;
  if ( a9 )
    *a9 = v44;
  v17 = a11.0;
  if ( ((*((_BYTE *)this + 204) ^ *(_BYTE *)&a11.0) & 0x80u) != 0 )
  {
    WdLogSingleEntry1(2LL, 2259LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"When opening a synchronization object, the NoGPUAccess flag specified at open time must match the flag sp"
                "ecified at creation time.",
      2259LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DxgAdapterSyncObject = -1073741811;
LABEL_49:
    LOBYTE(v12) = 0;
LABEL_24:
    v27 = DxgAdapterSyncObject;
    goto LABEL_25;
  }
  if ( !v42 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v41, 0LL, 0LL);
  v42 = 0;
  DXGFASTMUTEX::Release((struct _KTHREAD **)v41);
  if ( v16 && *((_BYTE *)v16 + 25) )
  {
    DxgAdapterSyncObject = -1073741823;
    WdLogSingleEntry2(4LL, this, -1073741823LL);
    goto LABEL_49;
  }
  v18 = *((_DWORD *)this + 71);
  if ( (v18 & 0x10) != 0 && (*((_DWORD *)Current + 106) & 0x180) == 0 && (v18 & 0x20) == 0 )
  {
    WdLogSingleEntry2(3LL, this, -1073741790LL);
    DxgAdapterSyncObject = -1073741823;
    goto LABEL_49;
  }
  if ( (unsigned int)(*((_DWORD *)this + 50) - 5) <= 1 )
  {
    if ( !v12 || (v12 = 0LL, !a2) )
    {
      WdLogSingleEntry1(1LL, 2299LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDevice != NULL && pRenderCore != NULL",
        2299LL,
        (__int64)v12,
        (__int64)v12,
        (__int64)v12,
        (__int64)v12);
    }
    Pool2 = (DXGDEVICESYNCOBJECT *)ExAllocatePool2(257LL, 96LL, 1265072196LL);
    if ( Pool2 )
    {
      v20 = a5;
      v21 = DXGDEVICESYNCOBJECT::DXGDEVICESYNCOBJECT(Pool2, v45, a10, a5 != 0LL);
      v22 = v21;
      if ( v21 )
      {
        v23 = a8;
        v24 = DXGDEVICESYNCOBJECT::Initialize(v21, this, (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v17, a8);
        if ( v24 >= 0 )
        {
          v25 = (struct DXGSYNCOBJECT *)*((_QWORD *)v22 + 4);
          if ( (*((_DWORD *)v25 + 71) & 2) == 0
            || *((_DWORD *)this + 6) <= 1u
            || (Global = DXGGLOBAL::GetGlobal(),
                v24 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
                        *((DXG_GUEST_GLOBAL_VMBUS **)Global + 214),
                        Current,
                        v45,
                        0,
                        v25,
                        v22,
                        v23,
                        (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v17),
                v24 >= 0) )
          {
            if ( v20 )
              *v20 = *((_DWORD *)v22 + 10);
            *a6 = (void *)*((_QWORD *)v22 + 7);
            *a7 = *((_QWORD *)v22 + 6);
            v26 = DXGPROCESS::GetCurrent();
            WdLogSingleEntry3(4LL, this, *((unsigned int *)v22 + 10), v26);
            LOBYTE(v12) = 0;
            if ( a4 )
              *a4 = v22;
            DxgAdapterSyncObject = 0;
            goto LABEL_24;
          }
        }
        DXGDEVICESYNCOBJECT::DetachGlobalSyncObjectOnError(v22);
        DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v22);
        v12 = 0LL;
        goto LABEL_60;
      }
      v12 = 0LL;
    }
    v24 = -1073741801;
    WdLogSingleEntry2(6LL, this, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"pSyncObject 0x%I64x: Failed to allocate device sync object, returning 0x%I64x",
      (__int64)this,
      -1073741801LL,
      (__int64)v12,
      (__int64)v12,
      (__int64)v12);
LABEL_60:
    if ( a4 )
      *a4 = v12;
    DxgAdapterSyncObject = v24;
    goto LABEL_24;
  }
  v29 = a5;
  LOBYTE(v12) = 0;
  if ( !a5 )
  {
LABEL_38:
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
    v36 = DXGPROCESS::GetCurrent();
    if ( v29 )
      v37 = *v29;
    else
      v37 = 0;
    WdLogSingleEntry3(4LL, this, v37, v36);
    v27 = 0;
    goto LABEL_25;
  }
  v30 = (PERESOURCE *)DXGGLOBAL::GetGlobal();
  if ( !DXGGLOBAL::IsSyncObjectLockSharedOwner(v30) )
  {
    WdLogSingleEntry1(1LL, 2404LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DXGGLOBAL::GetGlobal()->IsSyncObjectLockSharedOwner()",
      2404LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v43, Current);
  v31 = (_QWORD *)((char *)Current + 280);
  v32 = HMGRTABLE::AllocHandle((char *)Current + 280, this, 8LL, 0LL, 0);
  *v29 = v32;
  v33 = v32;
  if ( v32 )
  {
    v34 = (v32 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v34 < *((_DWORD *)Current + 74) )
    {
      v35 = *(_DWORD *)(*v31 + 16 * v34 + 8);
      if ( ((v33 >> 25) & 0x60) == (*(_BYTE *)(*v31 + 16 * v34 + 8) & 0x60) && (v35 & 0x2000) == 0 && (v35 & 0x1F) != 0 )
        *(_DWORD *)(*v31 + 16 * (((unsigned __int64)v33 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
    if ( (*((_DWORD *)this + 71) & 2) != 0 )
    {
      if ( *((_DWORD *)this + 6) )
      {
        v38 = DXGGLOBAL::GetGlobal();
        DxgAdapterSyncObject = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
                                 *((DXG_GUEST_GLOBAL_VMBUS **)v38 + 214),
                                 Current,
                                 0LL,
                                 *v29,
                                 this,
                                 0LL,
                                 0,
                                 (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v17);
        if ( DxgAdapterSyncObject < 0 )
        {
          DXGPROCESS::FreeHandleSafe(Current, *v29);
          *v29 = 0;
          goto LABEL_24;
        }
      }
    }
    goto LABEL_38;
  }
  v27 = -1073741801;
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
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
LABEL_25:
  if ( v42 != (_BYTE)v12 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v41);
  return v27;
}
