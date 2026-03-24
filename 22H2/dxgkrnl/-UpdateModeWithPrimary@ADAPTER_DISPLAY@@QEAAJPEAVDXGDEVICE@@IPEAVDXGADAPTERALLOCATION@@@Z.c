/*
 * XREFs of ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00E0770
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E63DC (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00EB788 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 * Callees:
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C0001900 (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002910 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0003524 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C00E0958 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C00E0C68 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00E5C14 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00EA8F4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00EABA0 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00EAD78 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::UpdateModeWithPrimary(
        PERESOURCE **this,
        PERESOURCE **a2,
        unsigned int a3,
        struct DXGADAPTERALLOCATION *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  PERESOURCE v11; // r15
  struct _LIST_ENTRY *Flink; // rbp
  PERESOURCE *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int *v20; // rbx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbp
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  void *v39; // [rsp+60h] [rbp+8h] BYREF

  v5 = a3;
  LODWORD(v8) = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v29 + 24) = 2766LL;
    WdLogEvent5_WdAssertion(v29);
  }
  if ( (unsigned int)v5 >= *((_DWORD *)this + 20) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v30 + 24) = 2767LL;
    WdLogEvent5_WdAssertion(v30);
  }
  if ( this[2] != a2[231] )
  {
    v31 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v31 + 24) = 2768LL;
    WdLogEvent5_WdAssertion(v31);
  }
  v11 = a2[2][2];
  Flink = v11[26].SystemResourcesList.Flink;
  if ( !Flink || !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)Flink[1].Flink) )
  {
    v32 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v32 + 24) = 2774LL;
    WdLogEvent5_WdAssertion(v32);
  }
  v13 = this[2];
  if ( v13[338] )
  {
    if ( v13 != (PERESOURCE *)v11 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v10, v9);
      *(_QWORD *)(v33 + 24) = 2781LL;
      WdLogEvent5_WdAssertion(v33);
    }
    ADAPTER_RENDER::DisableOverlays((ADAPTER_RENDER *)v11[26].SystemResourcesList.Flink);
  }
  ADAPTER_RENDER::FlushScheduler(Flink, 8LL, (unsigned int)v5, 0LL);
  if ( !DXGADAPTER::IsVSyncAvailable((DXGADAPTER *)this[2], v5) )
    return 0LL;
  if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)this[2]) )
  {
    if ( v15 )
    {
      ((void (__fastcall *)(struct _LIST_ENTRY *, _QWORD))Flink[38].Blink->Blink[55].Blink)(
        Flink[39].Flink,
        (unsigned int)v5);
    }
    else
    {
      v34 = *(_QWORD *)(*(_QWORD *)(v14 + 2696) + 384LL);
      if ( v34 )
        _InterlockedExchange((volatile __int32 *)(2904 * v5 + *(_QWORD *)(v34 + 8) + 944), 1);
    }
    goto LABEL_23;
  }
  if ( !v15 )
  {
LABEL_21:
    v25 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v5, 1u, 0x20u, 0);
    v8 = v25;
    if ( v25 < 0 )
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26);
      v38[3] = v8;
      v38[4] = this[2];
      v38[5] = v5;
      WdLogEvent5_WdError(v38);
    }
LABEL_23:
    ADAPTER_DISPLAY::UpdateGammaRamp((ADAPTER_DISPLAY *)this, v5);
    return (unsigned int)v8;
  }
  CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>(&v39);
  v20 = (unsigned int *)v39;
  if ( v39 )
  {
    if ( !a4 )
    {
      v36 = WdLogNewEntry5_WdAssertion(v17, v16);
      *(_QWORD *)(v36 + 24) = 2835LL;
      WdLogEvent5_WdAssertion(v36);
    }
    *v20 = v5;
    *((_QWORD *)v20 + 2) = *((_QWORD *)a4 + 2);
    ((void (__fastcall *)(struct _LIST_ENTRY *, _QWORD, unsigned int *, unsigned int *, _QWORD))Flink[40].Flink->Blink[14].Flink)(
      v11[26].SystemResourcesList.Flink[40].Blink,
      *((_QWORD *)a4 + 1),
      v20 + 1,
      v20 + 2,
      0LL);
    v20[138] |= 1u;
    v21 = ((__int64 (__fastcall *)(struct _LIST_ENTRY *, unsigned int *))Flink[38].Blink->Blink[51].Flink)(
            Flink[39].Flink,
            v20);
    v24 = v21;
    if ( v21 >= 0 )
    {
      operator delete(v20);
      goto LABEL_21;
    }
    v37 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
    v37[3] = v24;
    v37[4] = this[2];
    v37[5] = v5;
    v37[6] = v20[2];
    WdLogEvent5_WdError(v37);
  }
  else
  {
    v35 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
    *(_QWORD *)(v35 + 24) = this;
    WdLogEvent5_WdLowResource(v35);
    LODWORD(v24) = -1073741801;
  }
  operator delete(v20);
  return (unsigned int)v24;
}
