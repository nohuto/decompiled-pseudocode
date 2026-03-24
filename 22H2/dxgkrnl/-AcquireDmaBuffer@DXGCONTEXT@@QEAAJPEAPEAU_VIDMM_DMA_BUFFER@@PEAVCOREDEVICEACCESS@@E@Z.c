/*
 * XREFs of ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C0170464
 * Callers:
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F85D0 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCAT.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107DA0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C027EE24 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C027F70C (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C0282224 (-ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C028F10C (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 * Callees:
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C00031B4 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0005090 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0005500 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0008BB0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0008C04 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A008 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C011A458 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 */

__int64 __fastcall DXGCONTEXT::AcquireDmaBuffer(
        DXGCONTEXT *this,
        struct _VIDMM_DMA_BUFFER **a2,
        struct COREDEVICEACCESS *a3,
        char a4)
{
  struct _VIDMM_DMA_BUFFER **v6; // r12
  DXGCONTEXT *v7; // r14
  int v8; // edi
  __int64 v9; // rbx
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v15; // esi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rax
  DXGDEVICESYNCOBJECT *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  PERESOURCE *Global; // rax
  __int64 v25; // rdx
  struct DXGDEVICE *v26; // rsi
  __int64 v27; // rcx
  unsigned int v28; // edi
  struct ADAPTER_RENDER *v29; // rbp
  __int64 v30; // rdx
  struct DXGGLOBAL *v31; // rax
  int SyncObject; // eax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r8
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rax
  char *v41; // rdx
  __int64 v42; // rax
  _BYTE v43[8]; // [rsp+60h] [rbp-88h] BYREF
  char v44; // [rsp+68h] [rbp-80h]
  _QWORD v45[10]; // [rsp+70h] [rbp-78h] BYREF

  v6 = a2;
  v7 = this;
  if ( *((_BYTE *)this + 457) )
  {
    *a2 = 0LL;
    return 0LL;
  }
  v8 = 3;
  if ( *((_DWORD *)this + 18) > 3u )
    v8 = *((_DWORD *)this + 18);
  if ( *((_QWORD *)this + 29) )
    goto LABEL_5;
  v15 = *((_DWORD *)this + 26);
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, DXGCONTEXT *, char, _DWORD, int, int, _DWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL) + 440LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL),
          *((unsigned int *)this + 104),
          *(_QWORD *)(*((_QWORD *)this + 2) + 760LL),
          this,
          1,
          *((_DWORD *)this + 50),
          v8,
          v15,
          *((_DWORD *)this + 51),
          *((_DWORD *)this + 52));
  *((_QWORD *)v7 + 29) = v16;
  if ( !v16 )
  {
    v20 = WdLogNewEntry5_WdWarning(v17, 0LL, v18);
    LODWORD(v9) = -1073741801;
    *(_QWORD *)(v20 + 24) = v7;
    *(_QWORD *)(v20 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v20);
    goto LABEL_17;
  }
  LODWORD(v9) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL)
                                                                           + 640LL)
                                                               + 8LL)
                                                   + 448LL))(v16);
  if ( (int)v9 < 0 )
  {
LABEL_17:
    v21 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)v7 + 30);
    if ( v21 )
    {
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v21);
      *((_QWORD *)v7 + 30) = 0LL;
    }
    this = (DXGCONTEXT *)*((_QWORD *)v7 + 29);
    if ( this )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 640LL) + 8LL) + 456LL))();
      *((_QWORD *)v7 + 29) = 0LL;
    }
    goto LABEL_6;
  }
  v19 = *((_DWORD *)v7 + 105);
  *((_DWORD *)v7 + 53) = v8;
  *((_DWORD *)v7 + 54) = v15;
  if ( (v19 & 0x10) != 0 )
  {
    memset(v45, 0, sizeof(v45));
    LODWORD(v45[0]) = 5;
    *((_QWORD *)v7 + 31) = 0LL;
    v45[1] = 0LL;
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v23, v22);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v43, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v43, v25);
    v26 = (struct DXGDEVICE *)*((_QWORD *)v7 + 2);
    v27 = *((unsigned int *)v7 + 104);
    v28 = 1 << v27;
    v29 = (struct ADAPTER_RENDER *)*((_QWORD *)v26 + 2);
    v31 = DXGGLOBAL::GetGlobal(v27, v30);
    SyncObject = DXGGLOBAL::CreateSyncObject(
                   (__int64)v31,
                   v29,
                   v26,
                   v28,
                   (__int64)v45,
                   4u,
                   0,
                   0LL,
                   0LL,
                   (struct DXGDEVICESYNCOBJECT **)v7 + 30,
                   0LL,
                   0LL);
    v9 = SyncObject;
    if ( SyncObject < 0 )
    {
      v33 = WdLogNewEntry5_WdWarning(this, a2, a3);
      *(_QWORD *)(v33 + 24) = v7;
      *(_QWORD *)(v33 + 32) = v9;
      WdLogEvent5_WdWarning(v33);
      if ( v44 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v43);
      goto LABEL_17;
    }
    if ( v44 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v43);
  }
LABEL_5:
  LODWORD(v9) = 0;
LABEL_6:
  if ( (int)v9 < 0 )
  {
    v34 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v34 + 24) = v7;
    WdLogEvent5_WdWarning(v34);
    return (unsigned int)v9;
  }
  v10 = *((_QWORD *)v7 + 29);
  LOBYTE(a2) = 1;
  v11 = (*(__int64 (__fastcall **)(__int64, struct _VIDMM_DMA_BUFFER **, _QWORD, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 640LL) + 8LL) + 496LL))(
          v10,
          a2,
          0LL,
          v6);
  v9 = v11;
  if ( v11 != -1071775486 )
  {
    if ( v11 < 0 )
    {
      v42 = WdLogNewEntry5_WdEvent(v13, v12);
      *(_QWORD *)(v42 + 24) = v7;
      *(_QWORD *)(v42 + 32) = v9;
      WdLogEvent5_WdEvent(v42);
    }
    return (unsigned int)v9;
  }
  if ( !a3 )
    return (unsigned int)v9;
  COREDEVICEACCESS::Release(a3, v12);
  LOBYTE(v35) = a4;
  LODWORD(v9) = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 640LL) + 8LL)
                                                                                                 + 496LL))(
                  v10,
                  0LL,
                  v35,
                  v6);
  v36 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
  v39 = v36;
  if ( v36 >= 0 )
    return (unsigned int)v9;
  v40 = WdLogNewEntry5_WdEvent(v38, v37);
  *(_QWORD *)(v40 + 24) = v7;
  *(_QWORD *)(v40 + 32) = v39;
  WdLogEvent5_WdEvent(v40);
  COREDEVICEACCESS::AcquireSharedUncheck(a3, v41);
  return (unsigned int)v39;
}
