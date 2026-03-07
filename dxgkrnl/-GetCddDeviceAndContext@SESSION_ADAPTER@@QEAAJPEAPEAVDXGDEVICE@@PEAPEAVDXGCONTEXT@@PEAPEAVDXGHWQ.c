__int64 __fastcall SESSION_ADAPTER::GetCddDeviceAndContext(
        struct DXGADAPTER **this,
        struct DXGDEVICE **a2,
        struct DXGCONTEXT **a3,
        struct DXGHWQUEUE **a4,
        unsigned __int8 a5)
{
  struct DXGDEVICE *v5; // r15
  struct DXGADAPTER *v6; // rsi
  __int64 v9; // r14
  struct DXGADAPTER **v10; // rax
  int PairingAdapters; // eax
  struct DXGADAPTER *v12; // rdx
  __int64 v13; // rdi
  int CddDevice; // esi
  struct DXGDEVICE *v15; // rdx
  volatile signed __int64 **v17; // rax
  volatile signed __int64 *v18; // rax
  struct DXGHWQUEUE **v19; // rax
  struct DXGHWQUEUE *v20; // rcx
  struct DXGADAPTER *v21; // rdx
  struct DXGADAPTER **v22; // rax
  struct DXGADAPTER *v23; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-18h] BYREF
  DXGADAPTER *v25; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int64 v26; // [rsp+68h] [rbp-8h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v5 )
    {
      SESSION_ADAPTER::DestroyCddDeviceAndContext((SESSION_ADAPTER *)this, v5);
      v5 = 0LL;
    }
    v9 = *((_QWORD *)*this + 2332) + 216LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v9, 0LL);
    *(_QWORD *)(v9 + 8) = KeGetCurrentThread();
    v23 = 0LL;
    v10 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v23);
    PairingAdapters = DxgkpGetPairingAdapters(this[2], 0, v10, &v24, 0LL, 0LL, a5);
    if ( PairingAdapters < 0 )
      break;
    v12 = v23;
    if ( !v23 )
    {
      WdLogSingleEntry1(1LL, 2556LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"RenderAdapterRef", 2556LL, 0LL, 0LL, 0LL, 0LL);
      v12 = v23;
    }
    if ( v6 == v12 )
    {
      CddDevice = -1073741275;
      WdLogSingleEntry3(1LL, v12, this[2], -1073741275LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DxgkpGetPairingAdapters keeps returning same disabled adapter 0x%I64x for display adapter 0x%I64x, returning 0x%I64x.",
        (__int64)v23,
        (__int64)this[2],
        -1073741275LL,
        0LL,
        0LL);
      goto LABEL_39;
    }
    v13 = *((_QWORD *)v12 + 366) + 48LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v13, 0LL);
    CddDevice = 0;
    *(_QWORD *)(v13 + 8) = KeGetCurrentThread();
    v15 = this[7];
    if ( v15 )
    {
      if ( *(struct DXGADAPTER **)(*((_QWORD *)v15 + 2) + 16LL) == v23 )
      {
        if ( a2 )
        {
          *a2 = v15;
          _InterlockedIncrement64((volatile signed __int64 *)this[7] + 8);
        }
        if ( a3 )
        {
          v17 = (volatile signed __int64 **)(this + 8);
          if ( *((_DWORD *)this + 13) != 1 )
            v17 = (volatile signed __int64 **)*v17;
          v18 = *v17;
          *a3 = (struct DXGCONTEXT *)v18;
          _InterlockedIncrement64(v18 + 4);
        }
        if ( a4 )
        {
          v19 = (struct DXGHWQUEUE **)this[9];
          v20 = *v19;
          *a4 = *v19;
          if ( v20 )
            _InterlockedIncrement64((volatile signed __int64 *)v20 + 13);
        }
LABEL_14:
        *(_QWORD *)(v13 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v13, 0LL);
        KeLeaveCriticalRegion();
        DXGADAPTER_REFERENCE::Assign(&v23, 0LL);
        *(_QWORD *)(v9 + 8) = 0LL;
        goto LABEL_15;
      }
      if ( !a5 )
      {
        WdLogSingleEntry1(1LL, 2649LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"AllowPairingChanged", 2649LL, 0LL, 0LL, 0LL, 0LL);
      }
      v5 = this[7];
      v6 = *(struct DXGADAPTER **)(*((_QWORD *)v5 + 2) + 16LL);
    }
    else
    {
      v21 = v23;
      if ( v23 != this[2] )
      {
        v25 = 0LL;
        v22 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v25);
        CddDevice = DxgkpGetPairingAdapters(this[2], 0, v22, &v26, 0LL, 0LL, a5);
        if ( CddDevice < 0 )
        {
          DXGADAPTER_REFERENCE::Assign(&v25, 0LL);
LABEL_36:
          *(_QWORD *)(v13 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v13, 0LL);
          KeLeaveCriticalRegion();
          goto LABEL_39;
        }
        v6 = v23;
        if ( v23 != v25 )
        {
          WdLogSingleEntry1(3LL, v23);
          DXGADAPTER_REFERENCE::Assign(&v25, 0LL);
          goto LABEL_28;
        }
        DXGADAPTER_REFERENCE::Assign(&v25, 0LL);
        v21 = v23;
      }
      CddDevice = SESSION_ADAPTER::CreateCddDevice((SESSION_ADAPTER *)this, v21, a2, a3, a4);
      if ( CddDevice != -1073741267 )
        goto LABEL_14;
      if ( !a5 )
      {
        CddDevice = -1073741130;
        WdLogSingleEntry2(3LL, v23, -1073741130LL);
        goto LABEL_36;
      }
      v6 = v23;
      WdLogSingleEntry1(3LL, v23);
    }
LABEL_28:
    *(_QWORD *)(v13 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v13, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER_REFERENCE::Assign(&v23, 0LL);
    *(_QWORD *)(v9 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v9, 0LL);
    KeLeaveCriticalRegion();
  }
  CddDevice = PairingAdapters;
LABEL_39:
  DXGADAPTER_REFERENCE::Assign(&v23, 0LL);
  *(_QWORD *)(v9 + 8) = 0LL;
LABEL_15:
  ExReleasePushLockExclusiveEx(v9, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)CddDevice;
}
