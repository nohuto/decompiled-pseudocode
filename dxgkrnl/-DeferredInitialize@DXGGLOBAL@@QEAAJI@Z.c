__int64 __fastcall DXGGLOBAL::DeferredInitialize(DXGGLOBAL *this, unsigned int a2)
{
  __int64 v2; // rbp
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rsi
  _QWORD *v8; // rsi
  DXGPROCESS *Current; // rax
  int v10; // edi
  _BYTE v12[16]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v13[2]; // [rsp+60h] [rbp-28h] BYREF

  v2 = a2;
  if ( DXGGLOBAL::m_pDxgmmsExport[a2] )
    return 0LL;
  v4 = operator new[](0x58uLL, 0x4B677844u, 64LL);
  v5 = v4;
  if ( v4 )
  {
    *(_QWORD *)(v4 + 64) = 0LL;
    *(_QWORD *)(v4 + 72) = 0LL;
    *(_BYTE *)v4 = 0;
    *(_OWORD *)(v4 + 8) = 0LL;
    *(_OWORD *)(v4 + 24) = 0LL;
    *(_OWORD *)(v4 + 40) = 0LL;
    *(_QWORD *)(v4 + 56) = 0LL;
    v6 = DXGMMS_EXPORT::Initialize((DXGMMS_EXPORT *)v4, v2);
    v7 = v6;
    if ( v6 < 0 )
    {
      WdLogSingleEntry2(6LL, v2, v6);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed the initialize m_pDxgmmsExport (%d), returning 0x%I64x",
        v2,
        v7,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v7;
    }
    else
    {
      DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v12);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
      DXGGLOBAL::m_pDxgmmsExport[v2] = v5;
      *((_QWORD *)this + v2 + 32) = *(_QWORD *)(v5 + 72);
      *((_QWORD *)this + v2 + 34) = *(_QWORD *)(v5 + 64);
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx((char *)this + 432, 0LL);
      _InterlockedIncrement((volatile signed __int32 *)this + 112);
      v8 = (_QWORD *)*((_QWORD *)this + 52);
      v13[0] = (char *)this + 416;
      while ( 1 )
      {
        v13[1] = v8;
        Current = (DXGPROCESS *)DXGNODELIST<DXGGLOBAL,DXGPROCESS>::ITERATOR::GetCurrent(v13);
        if ( !Current )
          break;
        v10 = DXGPROCESS::DeferredInitialize(Current, v2);
        if ( v10 < 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)this + 112);
          ExReleasePushLockSharedEx((char *)this + 432, 0LL);
          KeLeaveCriticalRegion();
          goto LABEL_11;
        }
        v8 = (_QWORD *)*v8;
      }
      _InterlockedDecrement((volatile signed __int32 *)this + 112);
      ExReleasePushLockSharedEx((char *)this + 432, 0LL);
      KeLeaveCriticalRegion();
      v10 = DXGPROCESS::DeferredInitialize(*((DXGPROCESS **)this + 171), v2);
      if ( v10 >= 0 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
LABEL_11:
      if ( v12[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
      return (unsigned int)v10;
    }
  }
  else
  {
    WdLogSingleEntry2(6LL, v2, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed the allocate m_pDxgmmsExport (%d), returning 0x%I64x",
      v2,
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
