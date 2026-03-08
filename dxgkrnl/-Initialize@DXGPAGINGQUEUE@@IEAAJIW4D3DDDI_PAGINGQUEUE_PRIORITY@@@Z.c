/*
 * XREFs of ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C01DF6EC
 * Callers:
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C01DF5AC (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000717C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007344 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C0018CC0 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0018D48 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C0186BD8 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0187E48 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?MapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAJIPEA_K@Z @ 0x1C01DF9FC (-MapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAJIPEA_K@Z.c)
 */

__int64 __fastcall DXGPAGINGQUEUE::Initialize(DXGPAGINGQUEUE *this, unsigned int a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v6; // rdx
  char v7; // r12
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rax
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v12; // rax
  DXGDEVICESYNCOBJECT **v13; // rdi
  int v14; // eax
  unsigned int v15; // esi
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // r9
  unsigned __int64 v19; // rdi
  __int64 result; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  int v22; // eax
  _BYTE v23[8]; // [rsp+68h] [rbp-29h] BYREF
  char v24; // [rsp+70h] [rbp-21h]
  _QWORD v25[10]; // [rsp+78h] [rbp-19h] BYREF
  unsigned int v26; // [rsp+100h] [rbp+6Fh] BYREF

  *((_DWORD *)this + 12) = a2;
  v4 = *((_QWORD *)this + 2);
  v6 = *(_QWORD *)(v4 + 16);
  v7 = *(_BYTE *)(*(_QWORD *)(v6 + 16) + 209LL);
  if ( !v7 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(*(_QWORD *)(*(_QWORD *)(v6 + 760) + 8LL) + 888LL))(
           *(_QWORD *)(v4 + 792),
           a2,
           a3,
           (char *)this + 32);
    v9 = v8;
    if ( v8 < 0 )
    {
      WdLogSingleEntry2(3LL, *((_QWORD *)this + 2), v8);
      return v9;
    }
  }
  memset(v25, 0, sizeof(v25));
  v10 = *((_QWORD *)this + 2);
  HIDWORD(v25[0]) |= 0x90u;
  LODWORD(v25[0]) = 5;
  v26 = 0;
  v25[1] = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 16LL) + 2892LL);
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v23, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v23);
  v12 = DXGGLOBAL::GetGlobal();
  v13 = (DXGDEVICESYNCOBJECT **)((char *)this + 40);
  v14 = DXGGLOBAL::CreateSyncObject(
          (__int64)v12,
          *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
          *((struct DXGDEVICE **)this + 2),
          1 << a2,
          (__int64)v25,
          2u,
          0,
          this,
          0LL,
          (struct DXGDEVICESYNCOBJECT **)this + 5,
          &v26,
          0LL);
  v15 = v14;
  if ( v14 < 0 )
  {
    WdLogSingleEntry2(3LL, *((_QWORD *)this + 2), v14);
    if ( v24 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v23);
    return v15;
  }
  if ( v24 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v23);
  v16 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v16 + 248));
  v17 = (v26 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v17 < *(_DWORD *)(v16 + 296) )
  {
    v18 = *(_QWORD *)(v16 + 280);
    if ( ((v26 >> 25) & 0x60) == (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60)
      && (*(_DWORD *)(v18 + 16 * v17 + 8) & 0x1F) != 0 )
    {
      v19 = 2 * (((unsigned __int64)v26 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v18 + 16 * (((unsigned __int64)v26 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
      {
        WdLogSingleEntry1(1LL, 217LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
          217LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_DWORD *)(*(_QWORD *)(v16 + 280) + 8 * v19 + 8) &= ~0x2000u;
      v13 = (DXGDEVICESYNCOBJECT **)((char *)this + 40);
    }
  }
  *(_QWORD *)(v16 + 256) = 0LL;
  ExReleasePushLockExclusiveEx(v16 + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v7 )
  {
    result = DXGDEVICESYNCOBJECT::MapGpuVaForPagingProcess(*v13, a2, (unsigned __int64 *)this + 7);
    v15 = result;
    if ( (int)result < 0 )
      return result;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (struct DXGFASTMUTEX *const)(*((_QWORD *)*v13 + 4) + 32LL), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                         *((DXGSYNCOBJECT **)*v13 + 4),
                         *(struct ADAPTER_RENDER **)(*((_QWORD *)*v13 + 2) + 16LL));
    (*(void (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                 + 760LL)
                                                                                     + 8LL)
                                                                         + 880LL))(
      *((_QWORD *)this + 4),
      VidSchSyncObject,
      v25[1]);
    if ( v24 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
  }
  v22 = DXGPROCESS::AllocHandleSafe(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL), (__int64)this, 0xAu);
  *((_DWORD *)this + 6) = v22;
  if ( !v22 )
  {
    v9 = -1073741801;
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    return v9;
  }
  return v15;
}
