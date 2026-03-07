__int64 __fastcall CreateSharedResourceNtObject(
        char a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *a7)
{
  __int64 v7; // r14
  __int64 v8; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v12; // rcx
  __int64 v13; // r9
  struct DXGPROCESS *v14; // r15
  unsigned int v15; // eax
  struct DXGRESOURCE *v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rsi
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  int v21; // eax
  _QWORD *v22; // r14
  __int64 v23; // rbx
  __int64 v24; // r13
  __int64 v25; // rbx
  _QWORD *v26; // rax
  PVOID v27; // rcx
  __int64 v29; // r9
  int v30; // edx
  __int64 v31; // rdx
  signed __int32 v32; // eax
  signed __int32 v33; // ett
  struct DXGGLOBAL *Global; // rax
  unsigned int NtSharedObject; // eax
  struct DXGRESOURCE *v36; // [rsp+50h] [rbp-30h] BYREF
  PVOID Object; // [rsp+58h] [rbp-28h] BYREF
  __int64 v38; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v39[8]; // [rsp+68h] [rbp-18h] BYREF
  DXGPUSHLOCK *v40; // [rsp+70h] [rbp-10h]
  int v41; // [rsp+78h] [rbp-8h]

  v7 = a3;
  LODWORD(v8) = 0;
  Object = 0LL;
  Current = DXGPROCESS::GetCurrent();
  v14 = Current;
  if ( !Current )
  {
    LODWORD(v8) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    *a7 = 0LL;
    return (unsigned int)v8;
  }
  v36 = 0LL;
  if ( !a4 )
  {
    v40 = (struct DXGPROCESS *)((char *)Current + 248);
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
    DXGPUSHLOCK::AcquireShared(v40);
    v41 = 1;
    v15 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
    if ( v15 < *((_DWORD *)v14 + 74)
      && (v29 = *((_QWORD *)v14 + 35), (((unsigned int)v7 >> 25) & 0x60) == (*(_BYTE *)(v29 + 16LL * v15 + 8) & 0x60))
      && (*(_DWORD *)(v29 + 16LL * v15 + 8) & 0x2000) == 0
      && (v30 = *(_DWORD *)(v29 + 16LL * v15 + 8) & 0x1F) != 0 )
    {
      if ( v30 == 4 )
      {
        v16 = *(struct DXGRESOURCE **)(v29 + 16LL * v15);
      }
      else
      {
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        v16 = 0LL;
      }
    }
    else
    {
      v16 = 0LL;
    }
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v38, v16);
    v17 = v38;
    v38 = 0LL;
    v36 = (struct DXGRESOURCE *)v17;
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v38);
    if ( v17 )
    {
      if ( (*(_DWORD *)(v17 + 4) & 1) != 0 && (v18 = *(_QWORD *)(v17 + 56)) != 0 )
      {
        if ( (*(_DWORD *)(v18 + 12) & 8) != 0 )
        {
          _m_prefetchw((const void *)(v18 + 68));
          v19 = *(_DWORD *)(v18 + 68);
          while ( v19 )
          {
            v20 = v19;
            v19 = _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 68), v19 + 1, v19);
            if ( v20 == v19 )
            {
              DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v39);
              goto LABEL_16;
            }
          }
          LODWORD(v8) = -1073741811;
          WdLogSingleEntry3(3LL, v7, -1073741811LL, 107LL);
          goto LABEL_41;
        }
        v31 = *(_QWORD *)(v17 + 56);
      }
      else
      {
        v31 = v7;
      }
      LODWORD(v8) = -1073741811;
      WdLogSingleEntry2(3LL, v31, -1073741811LL);
LABEL_41:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v39);
      goto LABEL_33;
    }
    LODWORD(v8) = -1073741811;
    WdLogSingleEntry2(3LL, v7, -1073741811LL);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v39);
LABEL_33:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v36);
LABEL_34:
    v27 = Object;
    if ( Object )
    {
      if ( (*((_DWORD *)v14 + 106) & 0x10) != 0 )
        operator delete(Object);
      else
        ObfDereferenceObject(Object);
      v27 = 0LL;
    }
    goto LABEL_23;
  }
  v18 = *(_QWORD *)(a4 + 16);
  _m_prefetchw((const void *)(v18 + 68));
  v32 = *(_DWORD *)(v18 + 68);
  do
  {
    if ( !v32 )
      break;
    v12 = (unsigned int)(v32 + 1);
    v33 = v32;
    v32 = _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 68), v12, v32);
  }
  while ( v33 != v32 );
LABEL_16:
  if ( (*((_DWORD *)v14 + 106) & 0x10) != 0 )
  {
    Object = (PVOID)operator new[](0x30uLL, 0x4B677844u, 256LL);
    v22 = Object;
    if ( !Object )
    {
      LODWORD(v8) = -1073741801;
      WdLogSingleEntry2(3LL, v14, -1073741801LL);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 68), 0xFFFFFFFF) == 1 )
        DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v18, 0LL, 0);
      goto LABEL_33;
    }
  }
  else
  {
    LOBYTE(v13) = a6;
    LOBYTE(v12) = a1;
    v21 = ObCreateObject(v12, g_pDxgkSharedAllocationObjectType, a5, v13, 0LL, 48, 0, 0, &Object);
    v8 = v21;
    if ( v21 < 0 )
    {
      if ( Object )
      {
        WdLogSingleEntry1(1LL, 141LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pObject == NULL", 141LL, 0LL, 0LL, 0LL, 0LL);
      }
      WdLogSingleEntry2(3LL, v14, v8);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 68), 0xFFFFFFFF) == 1 )
        DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v18, 0LL, 0);
      goto LABEL_21;
    }
    v22 = Object;
  }
  v23 = *(_QWORD *)(v18 + 80);
  v24 = v23 + 256;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v23 + 256, 0LL);
  v25 = v23 + 280;
  *(_QWORD *)(v24 + 8) = KeGetCurrentThread();
  v26 = *(_QWORD **)(v25 + 8);
  if ( *v26 != v25 )
    __fastfail(3u);
  *v22 = v25;
  v22[1] = v26;
  *v26 = v22;
  *(_QWORD *)(v25 + 8) = v22;
  *(_QWORD *)(v24 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v24, 0LL);
  KeLeaveCriticalRegion();
  _InterlockedIncrement((volatile signed __int32 *)(v18 + 64));
  v22[2] = v18;
  v22[3] = 0LL;
  v22[4] = 0LL;
  *((_DWORD *)v22 + 10) = 0;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v18 + 80) + 16LL) + 209LL) )
  {
    Global = DXGGLOBAL::GetGlobal();
    NtSharedObject = DXG_GUEST_GLOBAL_VMBUS::VmBusSendCreateNtSharedObject(
                       *((DXG_GUEST_GLOBAL_VMBUS **)Global + 214),
                       v14,
                       0,
                       0LL,
                       0LL,
                       v36);
    *((_DWORD *)v22 + 10) = NtSharedObject;
    if ( !NtSharedObject )
    {
      WdLogSingleEntry1(2LL, 188LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendCreateNtSharedObject failed",
        188LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v8) = -1073741823;
      goto LABEL_33;
    }
  }
LABEL_21:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v36);
  if ( (int)v8 < 0 )
    goto LABEL_34;
  v27 = Object;
LABEL_23:
  *a7 = v27;
  return (unsigned int)v8;
}
