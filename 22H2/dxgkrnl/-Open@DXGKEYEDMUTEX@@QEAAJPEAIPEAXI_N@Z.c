/*
 * XREFs of ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C0291758
 * Callers:
 *     DxgkOpenResourceFromNtHandle @ 0x1C012A160 (DxgkOpenResourceFromNtHandle.c)
 *     ?VmBusOpenKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0244910 (-VmBusOpenKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C0290410 (-CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMU.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C0291AEC (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 *     ?OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z @ 0x1C0291C6C (-OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C029B824 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 * Callees:
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C0003148 (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00033B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00038D4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x1C0027E30 (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0040C14 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0040F30 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0116660 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z @ 0x1C024AB1C (-VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::Open(DXGKEYEDMUTEX *this, unsigned int *a2, char *a3, __int64 a4, bool a5)
{
  SIZE_T v5; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGPROCESS *Current; // r15
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  PVOID v27; // r9
  _QWORD *v28; // rax
  unsigned int v29; // edi
  _QWORD *v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int v35; // edi
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  struct DXGGLOBAL *Global; // rax
  int v42; // ebx
  __int64 v43; // rax
  int v44; // edx
  _BYTE v45[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v46[32]; // [rsp+40h] [rbp-38h] BYREF

  v5 = (unsigned int)a4;
  Current = DXGPROCESS::GetCurrent((__int64)this, (__int64)a2, (__int64)a3, a4);
  if ( !Current )
  {
    v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v13 + 24) = a2;
    *(_QWORD *)(v13 + 32) = PsGetCurrentProcess(v15, v14, v16, v17);
    WdLogEvent5_WdWarning(v13);
    return 3221225485LL;
  }
  if ( !a2 )
    return 3221225485LL;
  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v45, this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v45);
  if ( !(_DWORD)v5 )
  {
    if ( !a3 )
      goto LABEL_22;
    goto LABEL_17;
  }
  v22 = *((_DWORD *)this + 40);
  if ( v22 )
  {
    if ( v22 == (_DWORD)v5 )
      goto LABEL_22;
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
    v30[3] = this;
    v30[4] = v5;
    v30[5] = *((unsigned int *)this + 40);
    v30[6] = -1073741811LL;
LABEL_18:
    WdLogEvent5_WdWarning(v30);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v45);
    return 3221225485LL;
  }
  if ( !a3 )
  {
LABEL_17:
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
    v30[3] = this;
    v30[4] = -1073741811LL;
    goto LABEL_18;
  }
  if ( *((_QWORD *)this + 19) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v20, v19);
    *(_QWORD *)(v23 + 24) = 3798LL;
    WdLogEvent5_WdAssertion(v23);
  }
  v27 = operator new[](v5, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 19) = v27;
  if ( !v27 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdLowResource(v25, v24, v26, 0LL);
    v28[3] = this;
    v28[4] = v5;
    v29 = -1073741801;
    v28[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v28);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v45);
    return v29;
  }
  *((_DWORD *)this + 40) = v5;
  if ( &a3[v5] < a3 || (unsigned __int64)&a3[v5] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v27, a3, v5);
LABEL_22:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v45);
  DXGKEYEDMUTEX::AcquireReference(this, v31);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v46,
    (struct _KTHREAD **)Current);
  v32 = (_QWORD *)((char *)Current + 240);
  v35 = HMGRTABLE::AllocHandle((unsigned int *)Current + 60, (__int64)this, 9, 0, 0);
  if ( !v35 )
  {
    v38 = WdLogNewEntry5_WdLowResource(v34, v33, v36, v37);
    *(_QWORD *)(v38 + 24) = this;
    v29 = -1073741801;
    *(_QWORD *)(v38 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v38);
    DXGKEYEDMUTEX::ReleaseReference(this, v39);
LABEL_29:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v46);
    return v29;
  }
  if ( *((_BYTE *)this + 168) )
  {
    if ( !a5 )
    {
      v40 = WdLogNewEntry5_WdAssertion(v34, v33);
      *(_QWORD *)(v40 + 24) = 3875LL;
      WdLogEvent5_WdAssertion(v40);
    }
    Global = DXGGLOBAL::GetGlobal(v34, v33);
    v42 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenKeyedMutex(
            *((DXG_GUEST_GLOBAL_VMBUS **)Global + 197),
            Current,
            this,
            v35);
    if ( v42 < 0 )
    {
      DXGPROCESS::FreeResourceHandleNoRefSafe(Current, v35);
      v29 = v42;
      goto LABEL_29;
    }
  }
  if ( a5 )
  {
    v43 = (v35 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v43 < *((_DWORD *)Current + 64) )
    {
      v44 = *(_DWORD *)(*v32 + 16 * v43 + 8);
      if ( ((v35 >> 25) & 0x60) == (*(_BYTE *)(*v32 + 16 * v43 + 8) & 0x60) && (v44 & 0x2000) == 0 && (v44 & 0x1F) != 0 )
        *(_DWORD *)(*v32 + 16 * (((unsigned __int64)v35 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v46);
  *a2 = v35;
  return 0LL;
}
