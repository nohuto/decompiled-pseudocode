/*
 * XREFs of ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C034BA24
 * Callers:
 *     DxgkOpenResourceFromNtHandleInternal @ 0x1C0184A40 (DxgkOpenResourceFromNtHandleInternal.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C0223924 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C034A4BC (-CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMU.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C034BE48 (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 *     ?OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z @ 0x1C034C008 (-OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z.c)
 *     ?VmBusOpenKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037D9F0 (-VmBusOpenKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009B78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000A070 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0024424 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0024440 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x1C00264BC (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0053210 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0053394 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C01A3A50 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z @ 0x1C0387414 (-VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::Open(DXGKEYEDMUTEX *this, unsigned int *a2, char *a3, unsigned int a4, bool a5)
{
  unsigned __int64 v5; // rdi
  __int64 v9; // rcx
  unsigned int *Current; // r15
  __int64 CurrentProcess; // rax
  int v13; // eax
  __int64 v14; // r14
  void *v15; // r9
  unsigned int v16; // edi
  _QWORD *v17; // rsi
  unsigned int v18; // edi
  struct DXGGLOBAL *Global; // rax
  int v20; // ebx
  __int64 v21; // rax
  int v22; // edx
  _BYTE v23[16]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v24[32]; // [rsp+60h] [rbp-48h] BYREF

  v5 = a4;
  Current = (unsigned int *)DXGPROCESS::GetCurrent((__int64)this);
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v9);
    WdLogSingleEntry2(3LL, a2, CurrentProcess);
    return 3221225485LL;
  }
  if ( !a2 )
    return 3221225485LL;
  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v23, this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  if ( !(_DWORD)v5 )
  {
    if ( !a3 )
      goto LABEL_22;
    goto LABEL_17;
  }
  v13 = *((_DWORD *)this + 42);
  if ( v13 )
  {
    if ( v13 == (_DWORD)v5 )
      goto LABEL_22;
    WdLogSingleEntry4(3LL, this, v5, *((unsigned int *)this + 42), -1073741811LL);
LABEL_18:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
    return 3221225485LL;
  }
  if ( !a3 )
  {
LABEL_17:
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    goto LABEL_18;
  }
  if ( *((_QWORD *)this + 20) )
  {
    WdLogSingleEntry1(1LL, 3811LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pPrivateRuntimeData == NULL", 3811LL, 0LL, 0LL, 0LL, 0LL);
  }
  v14 = v5;
  v15 = (void *)operator new[](v5, 0x4B677844u, 256LL);
  *((_QWORD *)this + 20) = v15;
  if ( !v15 )
  {
    v16 = -1073741801;
    WdLogSingleEntry3(6LL, this, v14, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"KeyedMutex 0x%I64x: Out of memory allocating m_PrivateRuntimeData of size 0x%I64x, returning 0x%I64x",
      (__int64)this,
      v14,
      -1073741801LL,
      0LL,
      0LL);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
    return v16;
  }
  *((_DWORD *)this + 42) = v5;
  if ( &a3[v5] < a3 || (unsigned __int64)&a3[v5] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v15, a3, v5);
LABEL_22:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
  DXGKEYEDMUTEX::AcquireReference(this);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v24,
    (struct DXGPROCESS *)Current);
  v17 = Current + 70;
  v18 = HMGRTABLE::AllocHandle(Current + 70, (__int64)this, 9, 0, 0);
  if ( !v18 )
  {
    v16 = -1073741801;
    WdLogSingleEntry2(6LL, this, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"pKeyedMutex 0x%I64x: Fail to allocate per process handle, returning 0x%I64x",
      (__int64)this,
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    DXGKEYEDMUTEX::ReleaseReference(this);
LABEL_29:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v24);
    return v16;
  }
  if ( *((_BYTE *)this + 176) )
  {
    if ( !a5 )
    {
      WdLogSingleEntry1(1LL, 3888LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"OpenForUserMode == true", 3888LL, 0LL, 0LL, 0LL, 0LL);
    }
    Global = DXGGLOBAL::GetGlobal();
    v20 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenKeyedMutex(
            *((DXG_GUEST_GLOBAL_VMBUS **)Global + 214),
            (struct DXGPROCESS *)Current,
            this,
            v18);
    if ( v20 < 0 )
    {
      DXGPROCESS::FreeHandleSafe((DXGPROCESS *)Current, v18);
      v16 = v20;
      goto LABEL_29;
    }
  }
  if ( a5 )
  {
    v21 = (v18 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v21 < Current[74] )
    {
      v22 = *(_DWORD *)(*v17 + 16 * v21 + 8);
      if ( ((v18 >> 25) & 0x60) == (*(_BYTE *)(*v17 + 16 * v21 + 8) & 0x60) && (v22 & 0x2000) == 0 && (v22 & 0x1F) != 0 )
        *(_DWORD *)(*v17 + 16 * (((unsigned __int64)v18 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v24);
  *a2 = v18;
  return 0LL;
}
