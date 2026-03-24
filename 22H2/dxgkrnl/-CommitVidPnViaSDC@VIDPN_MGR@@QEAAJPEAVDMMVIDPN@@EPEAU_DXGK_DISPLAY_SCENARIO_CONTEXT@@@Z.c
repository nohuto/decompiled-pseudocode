/*
 * XREFs of ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02DC128
 * Callers:
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C02DDD04 (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C000B060 (-FindByValue@-$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C016B2B0 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0214E58 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1C0295D44 (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPnViaSDC(
        DXGADAPTER ***this,
        struct DMMVIDPN *a2,
        char a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _DXGK_WIN32K_PARAM_DATA *PoolWithTag; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _DXGK_WIN32K_PARAM_DATA *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  DXGADAPTER **v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rax
  DXGADAPTER **v26; // rdx
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rbp
  DXGADAPTER **v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  DXGADAPTER **v39; // rcx
  _QWORD *v40; // rsi
  __int64 v41; // rax
  _QWORD *v42; // rcx
  PVOID ModesArray; // rcx

  if ( this[5][2] != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !Set<DMMVIDPN>::FindByValue((__int64)(this + 12), (__int64)a2) )
  {
    v11 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v11 + 32) = this;
LABEL_5:
    *(_QWORD *)(v11 + 24) = a2;
    WdLogEvent5_WdError(v11);
    return 3223192323LL;
  }
  if ( !DMMVIDPN::IsFunctional(a2) )
  {
    v11 = WdLogNewEntry5_WdError(v14, v13);
    goto LABEL_5;
  }
  PoolWithTag = (struct _DXGK_WIN32K_PARAM_DATA *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x4E506456u);
  v20 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_OWORD *)&PoolWithTag->PathsArray = 0LL;
    *(_OWORD *)&PoolWithTag->NumPathArrayElements = 0LL;
    v26 = this[1];
    if ( !v26 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v17, 0LL);
      WdLogEvent5_WdAssertion(v27);
      v26 = this[1];
    }
    v28 = DispConfigConvertFromVidPn(v20, v26[2], a2, a3);
    v31 = v28;
    if ( v28 < 0 )
    {
      v42 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
      v42[3] = a2;
      v42[4] = v20;
      v42[5] = v31;
    }
    else
    {
      v32 = this[1];
      if ( !v32 )
      {
        v33 = WdLogNewEntry5_WdAssertion(0LL, v29);
        WdLogEvent5_WdAssertion(v33);
        v32 = this[1];
      }
      v34 = ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(v32, v20, a4);
      v31 = v34;
      if ( v34 >= 0 )
        return (unsigned int)v31;
      v37 = WdLogNewEntry5_WdError(v36, v35);
      v39 = this[1];
      v40 = (_QWORD *)v37;
      if ( !v39 )
      {
        v41 = WdLogNewEntry5_WdAssertion(0LL, v38);
        WdLogEvent5_WdAssertion(v41);
        v39 = this[1];
      }
      v40[3] = v39[2];
      v42 = v40;
      v40[4] = v31;
    }
    WdLogEvent5_WdError(v42);
    ModesArray = v20->ModesArray;
    if ( ModesArray )
    {
      ExFreePoolWithTag(ModesArray, 0);
      v20->ModesArray = 0LL;
    }
    if ( v20->PathsArray )
    {
      ExFreePoolWithTag(v20->PathsArray, 0);
      v20->PathsArray = 0LL;
    }
    ExFreePoolWithTag(v20, 0);
    return (unsigned int)v31;
  }
  v21 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
  v23 = this[1];
  v24 = v21;
  if ( !v23 )
  {
    v25 = WdLogNewEntry5_WdAssertion(0LL, v22);
    WdLogEvent5_WdAssertion(v25);
    v23 = this[1];
  }
  *(_QWORD *)(v24 + 24) = v23[2];
  *(_QWORD *)(v24 + 32) = 32LL;
  WdLogEvent5_WdLowResource(v24);
  return 3221225495LL;
}
