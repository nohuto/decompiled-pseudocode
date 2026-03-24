/*
 * XREFs of ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C00F148C
 * Callers:
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00F135C (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0005090 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0008BB0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0008C04 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C00090A0 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?MapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAJIPEA_K@Z @ 0x1C00F1778 (-MapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAJIPEA_K@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C011A458 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01252E8 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DXGPAGINGQUEUE::Initialize(DXGPAGINGQUEUE *this, unsigned int a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v6; // rdx
  char v7; // r12
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  PERESOURCE *Global; // rax
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdx
  struct DXGGLOBAL *v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rbx
  __int64 v30; // rax
  char *v31; // rbx
  __int64 result; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rax
  _BYTE v41[8]; // [rsp+68h] [rbp-29h] BYREF
  char v42; // [rsp+70h] [rbp-21h]
  __int64 v43[10]; // [rsp+78h] [rbp-19h] BYREF
  unsigned int v44; // [rsp+100h] [rbp+6Fh] BYREF

  *((_DWORD *)this + 12) = a2;
  v4 = *((_QWORD *)this + 2);
  v6 = *(_QWORD *)(v4 + 16);
  v7 = *(_BYTE *)(*(_QWORD *)(v6 + 16) + 209LL);
  if ( !v7 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(*(_QWORD *)(*(_QWORD *)(v6 + 640) + 8LL) + 896LL))(
           *(_QWORD *)(v4 + 760),
           a2,
           a3,
           (char *)this + 32);
    v12 = v8;
    if ( v8 < 0 )
    {
      v39 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v39 + 24) = *((_QWORD *)this + 2);
LABEL_21:
      *(_QWORD *)(v39 + 32) = v12;
      WdLogEvent5_WdWarning(v39);
      return (unsigned int)v12;
    }
  }
  memset(v43, 0, sizeof(v43));
  v13 = *((_QWORD *)this + 2);
  HIDWORD(v43[0]) |= 0x10u;
  v44 = 0;
  LODWORD(v43[0]) = 5;
  v43[1] = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL) + 2668LL);
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v43[1], v14);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v41, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v41, v16);
  v17 = *((_QWORD *)this + 2);
  v18 = *(_QWORD *)(v17 + 16);
  v20 = DXGGLOBAL::GetGlobal(a2, v19);
  v21 = DXGGLOBAL::CreateSyncObject(
          v20,
          v18,
          v17,
          (unsigned int)(1 << a2),
          v43,
          2,
          0,
          this,
          0LL,
          (char *)this + 40,
          &v44,
          0LL);
  v25 = v21;
  if ( v21 < 0 )
  {
    v40 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v40 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v40 + 32) = v25;
    WdLogEvent5_WdWarning(v40);
    if ( v42 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v41);
    return (unsigned int)v25;
  }
  if ( v42 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v41);
  v26 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v26 + 208));
  v27 = (v44 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v27 < *(_DWORD *)(v26 + 256) )
  {
    v28 = *(_QWORD *)(v26 + 240);
    if ( ((v44 >> 25) & 0x60) == (*(_BYTE *)(v28 + 16 * v27 + 8) & 0x60)
      && (*(_DWORD *)(v28 + 16 * v27 + 8) & 0x1F) != 0 )
    {
      v29 = 2 * (((unsigned __int64)v44 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v28 + 16 * (((unsigned __int64)v44 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
      {
        v30 = WdLogNewEntry5_WdAssertion((v44 >> 25) & 0x60, v28);
        *(_QWORD *)(v30 + 24) = 222LL;
        WdLogEvent5_WdAssertion(v30);
        v28 = *(_QWORD *)(v26 + 240);
      }
      *(_DWORD *)(v28 + 8 * v29 + 8) &= ~0x2000u;
    }
  }
  *(_QWORD *)(v26 + 216) = 0LL;
  ExReleasePushLockExclusiveEx(v26 + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v7 )
  {
    v31 = (char *)this + 40;
    result = DXGDEVICESYNCOBJECT::MapGpuVaForPagingProcess(
               *((DXGDEVICESYNCOBJECT **)this + 5),
               a2,
               (unsigned __int64 *)this + 7);
    LODWORD(v25) = result;
    if ( (int)result < 0 )
      return result;
    DXGAUTOMUTEX::DXGAUTOMUTEX(
      (DXGAUTOMUTEX *)v41,
      (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)v31 + 32LL) + 32LL),
      0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v41);
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                         *(DXGSYNCOBJECT **)(*(_QWORD *)v31 + 32LL),
                         *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)v31 + 16LL) + 16LL));
    (*(void (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                  + 640LL)
                                                                                      + 8LL)
                                                                          + 888LL))(
      *((_QWORD *)this + 4),
      VidSchSyncObject,
      v43[1]);
    if ( v42 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v41, v34);
  }
  v35 = DXGPROCESS::AllocHandleSafe(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL), (__int64)this, 0xAu);
  *((_DWORD *)this + 6) = v35;
  if ( !v35 )
  {
    v39 = WdLogNewEntry5_WdWarning(v37, v36, v38);
    v12 = -1073741801LL;
    *(_QWORD *)(v39 + 24) = this;
    goto LABEL_21;
  }
  return (unsigned int)v25;
}
