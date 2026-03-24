/*
 * XREFs of ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C029B528
 * Callers:
 *     ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1C02A23BC (-ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0005090 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0008BB0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0008C04 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C011AC00 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z @ 0x1C012B02C (-ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C02990FC (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C029B824 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C029B910 (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::OpenForDevice(DXGDXGIKEYEDMUTEX *this, struct DXGDEVICE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // esi
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  PERESOURCE *Global; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  unsigned __int64 v37; // rbx
  struct DXGPROCESS *Current; // rsi
  unsigned int v39; // ecx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rbx
  __int64 v44; // rax
  bool v45; // zf
  _BYTE v46[8]; // [rsp+60h] [rbp-18h] BYREF
  char v47; // [rsp+68h] [rbp-10h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v6 + 24) = 471LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((_QWORD *)this + 1) )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = this;
    *(_QWORD *)(v7 + 32) = *((_QWORD *)this + 1);
    WdLogEvent5_WdError(v7);
    return 3221227288LL;
  }
  *((_QWORD *)this + 1) = a2;
  v11 = DXGDXGIKEYEDMUTEX::OpenLocalMutex(this, 0LL);
  if ( v11 < 0
    || (v11 = DXGDEVICE::ConfigureSharedResourceHelper(
                (PERESOURCE *)a2,
                0LL,
                (void *)0xFFFFFFFFFFFFFFFFLL,
                *(struct DXGSHAREDRESOURCE **)(*(_QWORD *)this + 16LL),
                1u,
                0),
        v11 < 0)
    || (v11 = DXGDXGIKEYEDMUTEX::OpenSharedSurfForDevice(this, a2), v11 < 0) )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = this;
    *(_QWORD *)(v12 + 32) = PsGetCurrentProcess(v14, v13, v15, v16);
    WdLogEvent5_WdError(v12);
LABEL_12:
    v31 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v31 + 24) = a2;
    *(_QWORD *)(v31 + 32) = PsGetCurrentProcess(v33, v32, v34, v35);
    WdLogEvent5_WdError(v31);
    DXGDXGIKEYEDMUTEX::CloseFromDevice(this, v36);
    return (unsigned int)v11;
  }
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v10, v9);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v46, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v46, v20);
  v11 = DXGSYNCOBJECT::Open(
          *(DXGSYNCOBJECT **)(*(_QWORD *)this + 32LL),
          0LL,
          0LL,
          0LL,
          (unsigned int *)this + 24,
          0LL,
          0LL,
          0,
          0LL,
          0,
          DXGSYNCOBJECT::FlagsDefault);
  if ( v11 < 0 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
    v26 = *(_QWORD *)this;
    v27 = v25;
    v28 = *(_QWORD *)(*(_QWORD *)this + 32LL);
    v25[3] = v28;
    v25[4] = a2;
    v25[5] = PsGetCurrentProcess(v26, v28, v29, v30);
    WdLogEvent5_WdError(v27);
    if ( v47 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v46);
    goto LABEL_12;
  }
  v37 = *((unsigned int *)this + 24);
  Current = DXGPROCESS::GetCurrent(v22, v21, v23, v24);
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
  v39 = ((unsigned int)v37 >> 6) & 0xFFFFFF;
  if ( v39 < *((_DWORD *)Current + 64) )
  {
    v40 = *((_QWORD *)Current + 30);
    v41 = v39;
    v42 = ((unsigned int)v37 >> 25) & 0x60;
    if ( (((unsigned int)v37 >> 25) & 0x60) == (*(_BYTE *)(v40 + 16 * v41 + 8) & 0x60)
      && (*(_DWORD *)(v40 + 16 * v41 + 8) & 0x1F) != 0 )
    {
      v43 = 2 * ((v37 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v40 + 8 * v43 + 8) & 0x2000) == 0 )
      {
        v44 = WdLogNewEntry5_WdAssertion(v42, v40);
        *(_QWORD *)(v44 + 24) = 222LL;
        WdLogEvent5_WdAssertion(v44);
        v40 = *((_QWORD *)Current + 30);
      }
      *(_DWORD *)(v40 + 8 * v43 + 8) &= ~0x2000u;
    }
  }
  *((_QWORD *)Current + 27) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
  KeLeaveCriticalRegion();
  v45 = v47 == 0;
  *((_QWORD *)this + 13) = *(_QWORD *)(*(_QWORD *)this + 32LL);
  if ( !v45 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v46);
  return 0LL;
}
