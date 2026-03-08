/*
 * XREFs of ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03A79C8
 * Callers:
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C03A926C (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C0004F40 (-FindByValue@-$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C016AFF0 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02BA704 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1C02F4C80 (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPnViaSDC(
        VIDPN_MGR *this,
        struct DMMVIDPN *a2,
        char a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 Pool2; // rbx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rbp
  int v13; // eax
  void *v14; // rcx

  if ( *((struct _KTHREAD **)this + 8) != KeGetCurrentThread() )
    WdLogSingleEntry0(1LL);
  if ( !Set<DMMVIDPN>::FindByValue((__int64)this + 136, (__int64)a2) )
  {
    WdLogSingleEntry2(2LL, a2, this);
    return 3223192323LL;
  }
  if ( !DMMVIDPN::IsFunctional(a2) )
  {
    WdLogSingleEntry1(2LL, a2);
    return 3223192323LL;
  }
  Pool2 = ExAllocatePool2(256LL, 32LL, 1313891414LL);
  v10 = *((_QWORD *)this + 1);
  if ( Pool2 )
  {
    *(_OWORD *)Pool2 = 0LL;
    *(_OWORD *)(Pool2 + 16) = 0LL;
    if ( !v10 )
      WdLogSingleEntry0(1LL);
    v11 = DispConfigConvertFromVidPn(
            (struct _DXGK_WIN32K_PARAM_DATA *)Pool2,
            *(struct DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL),
            a2,
            a3);
    LODWORD(v12) = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry3(2LL, a2, Pool2, v11);
    }
    else
    {
      if ( !*((_QWORD *)this + 1) )
        WdLogSingleEntry0(1LL);
      v13 = ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(
              *((DXGADAPTER ***)this + 1),
              (struct _DXGK_WIN32K_PARAM_DATA *)Pool2,
              a4);
      v12 = v13;
      if ( v13 >= 0 )
        return (unsigned int)v12;
      if ( !*((_QWORD *)this + 1) )
        WdLogSingleEntry0(1LL);
      WdLogSingleEntry2(2LL, *(_QWORD *)(*((_QWORD *)this + 1) + 16LL), v12);
    }
    v14 = *(void **)(Pool2 + 8);
    if ( v14 )
    {
      ExFreePoolWithTag(v14, 0);
      *(_QWORD *)(Pool2 + 8) = 0LL;
    }
    if ( *(_QWORD *)Pool2 )
    {
      ExFreePoolWithTag(*(PVOID *)Pool2, 0);
      *(_QWORD *)Pool2 = 0LL;
    }
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return (unsigned int)v12;
  }
  if ( !v10 )
    WdLogSingleEntry0(1LL);
  WdLogSingleEntry2(6LL, *(_QWORD *)(*((_QWORD *)this + 1) + 16LL), 32LL);
  return 3221225495LL;
}
