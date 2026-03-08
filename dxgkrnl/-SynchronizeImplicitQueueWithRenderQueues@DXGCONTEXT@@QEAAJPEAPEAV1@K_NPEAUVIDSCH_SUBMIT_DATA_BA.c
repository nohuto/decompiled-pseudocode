/*
 * XREFs of ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@1@Z @ 0x1C022405E
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0163E8C (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C019CB50 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01C9880 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C033B910 (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C0371F08 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 * Callees:
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000717C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007344 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0018D48 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C0186BD8 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0187E48 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ @ 0x1C0314790 (-GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ.c)
 */

__int64 __fastcall DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(
        DXGCONTEXT *this,
        struct DXGCONTEXT **a2,
        unsigned int a3,
        char a4,
        struct VIDSCH_SUBMIT_DATA_BASE *a5,
        bool a6)
{
  struct DXGDEVICESYNCOBJECT **v6; // rbx
  __int64 v7; // r13
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v11; // rax
  int SyncObject; // eax
  unsigned int v13; // ebx
  unsigned int v15; // r15d
  unsigned int RenderHwQueueCount; // esi
  DXGCONTEXT **v17; // r8
  __int64 v18; // r8
  __int64 v19; // r9
  _BYTE *Pool2; // rbx
  int v21; // esi
  unsigned int v22; // r8d
  _QWORD *v23; // r14
  _QWORD *i; // rdx
  __int64 v25; // rcx
  struct DXGCONTEXT **v26; // r10
  __int64 v27; // r11
  _QWORD *v28; // r9
  _QWORD *j; // rdx
  __int64 v30; // rcx
  struct VIDSCH_SUBMIT_DATA_BASE *v31; // rax
  __int64 v32; // r8
  struct _VIDSCH_SYNC_OBJECT *v33; // rdx
  _QWORD *k; // rbx
  struct _VIDSCH_SYNC_OBJECT *v35; // rax
  struct DXGCONTEXT **v36; // r15
  __int64 v37; // r12
  _QWORD *v38; // r14
  _QWORD *m; // rbx
  struct _VIDSCH_SYNC_OBJECT *v40; // rax
  _BYTE v41[8]; // [rsp+60h] [rbp-A0h] BYREF
  char v42; // [rsp+68h] [rbp-98h]
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v44[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE *v45; // [rsp+90h] [rbp-70h]
  _BYTE v46[64]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v47; // [rsp+D8h] [rbp-28h]
  _QWORD v48[16]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v49; // [rsp+170h] [rbp+70h] BYREF
  char v50; // [rsp+188h] [rbp+88h]

  v50 = a4;
  v6 = (struct DXGDEVICESYNCOBJECT **)((char *)this + 240);
  v7 = a3;
  if ( !*((_QWORD *)this + 30) )
  {
    memset(v48, 0, 0x50uLL);
    HIDWORD(v48[0]) |= 0x80u;
    LODWORD(v48[0]) = 5;
    *((_QWORD *)this + 31) = 0LL;
    v48[1] = 0LL;
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v41, Global, 1);
    if ( !a6 )
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v41);
    v11 = DXGGLOBAL::GetGlobal();
    SyncObject = DXGGLOBAL::CreateSyncObject(
                   (__int64)v11,
                   *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
                   *((struct DXGDEVICE **)this + 2),
                   1 << *((_DWORD *)this + 100),
                   (__int64)v48,
                   0x11u,
                   0,
                   0LL,
                   0LL,
                   v6,
                   0LL,
                   0LL);
    v13 = SyncObject;
    if ( SyncObject < 0 )
    {
      WdLogSingleEntry2(3LL, this, SyncObject);
      if ( v42 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v41);
      return v13;
    }
    if ( v42 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v41);
  }
  v49 = ++*((_QWORD *)this + 31);
  v15 = v7 + 1;
  RenderHwQueueCount = DXGCONTEXT::GetRenderHwQueueCount(this);
  if ( (unsigned int)(v7 + 1) > 1 )
  {
    v17 = a2 + 1;
    do
    {
      RenderHwQueueCount += DXGCONTEXT::GetRenderHwQueueCount(*v17);
      v17 = (DXGCONTEXT **)(v18 + 8);
    }
    while ( v19 != 1 );
  }
  v47 = 0;
  Pool2 = 0LL;
  v45 = 0LL;
  if ( RenderHwQueueCount <= 8 )
  {
    Pool2 = v46;
    v45 = v46;
    if ( RenderHwQueueCount )
    {
      memset(v46, 0, 8LL * RenderHwQueueCount);
      Pool2 = v45;
    }
    goto LABEL_18;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / RenderHwQueueCount >= 8 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8LL * RenderHwQueueCount, 1265072196LL);
    v45 = Pool2;
LABEL_18:
    v47 = RenderHwQueueCount;
  }
  if ( Pool2 )
  {
    v22 = 0;
    v23 = (_QWORD *)((char *)this + 408);
    for ( i = (_QWORD *)*((_QWORD *)this + 51); i != v23 && i; i = (_QWORD *)*i )
    {
      v25 = v22++;
      *(_QWORD *)&Pool2[8 * v25] = i[5];
    }
    if ( v15 > 1 )
    {
      v26 = a2 + 1;
      v27 = v7;
      do
      {
        v28 = (_QWORD *)((char *)*v26 + 408);
        for ( j = (_QWORD *)*v28; j != v28 && j; j = (_QWORD *)*j )
        {
          v30 = v22++;
          *(_QWORD *)&Pool2[8 * v30] = j[5];
        }
        ++v26;
        --v27;
      }
      while ( v27 );
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX(
      (DXGAUTOMUTEX *)v44,
      (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 30) + 32LL) + 32LL),
      0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v44);
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                         *(DXGSYNCOBJECT **)(*((_QWORD *)this + 30) + 32LL),
                         *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 30) + 16LL) + 16LL));
    v21 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64, struct _VIDSCH_SYNC_OBJECT **, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL) + 648LL))(
            RenderHwQueueCount,
            Pool2,
            1LL,
            &VidSchSyncObject,
            0,
            &v49);
    if ( v21 >= 0 )
    {
      v31 = a5;
      v32 = v49;
      v33 = VidSchSyncObject;
      if ( a5 )
      {
        *((_QWORD *)a5 + 66) = VidSchSyncObject;
        *((_QWORD *)v31 + 67) = v32;
      }
      if ( v50 )
      {
        v21 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL)
                                                                                       + 632LL))(
                *((_QWORD *)this + 36),
                v33,
                v32);
      }
      else
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v44);
        for ( k = (_QWORD *)*v23; k != v23 && k; k = (_QWORD *)*k )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX(
            (DXGAUTOMUTEX *)v41,
            (struct DXGFASTMUTEX *const)(*(_QWORD *)(k[9] + 32LL) + 32LL),
            0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v41);
          v35 = DXGSYNCOBJECT::GetVidSchSyncObject(
                  *(DXGSYNCOBJECT **)(k[9] + 32LL),
                  *(struct ADAPTER_RENDER **)(*(_QWORD *)(k[9] + 16LL) + 16LL));
          v21 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL)
                                                                                        + 632LL))(
                  *((_QWORD *)this + 36),
                  v35,
                  k[10]);
          if ( v42 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v41);
        }
        if ( v15 > 1 )
        {
          v36 = a2 + 1;
          v37 = v7;
          do
          {
            v38 = (_QWORD *)((char *)*v36 + 408);
            for ( m = (_QWORD *)*v38; m != v38 && m; m = (_QWORD *)*m )
            {
              DXGAUTOMUTEX::DXGAUTOMUTEX(
                (DXGAUTOMUTEX *)v41,
                (struct DXGFASTMUTEX *const)(*(_QWORD *)(m[9] + 32LL) + 32LL),
                0);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v41);
              v40 = DXGSYNCOBJECT::GetVidSchSyncObject(
                      *(DXGSYNCOBJECT **)(m[9] + 32LL),
                      *(struct ADAPTER_RENDER **)(*(_QWORD *)(m[9] + 16LL) + 16LL));
              v21 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL)
                                                                                            + 632LL))(
                      *((_QWORD *)this + 36),
                      v40,
                      m[10]);
              if ( v42 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v41);
            }
            ++v36;
            --v37;
          }
          while ( v37 );
        }
      }
    }
    if ( v44[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v44);
    Pool2 = v45;
  }
  else
  {
    v21 = -1073741801;
  }
  if ( Pool2 != v46 && Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v21;
}
