/*
 * XREFs of ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x1800595E0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A36DC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z @ 0x180059F60 (--$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z @ 0x18005A140 (-ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x180064DF8 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x180064E78 (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A3484 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800CC514 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     memset_0 @ 0x1800E7F5C (memset_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2929769787@@@details@wil@@QEAA_NXZ @ 0x1800EFDB8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_2929769787@@@details@wil@@QEAA_NX.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180161A78 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

__int64 __fastcall CExpression::ProcessSetNodesInfo(
        unsigned __int64 this,
        struct CResourceTable *a2,
        const struct tagMILCMD_EXPRESSION_SETNODESINFO *a3)
{
  char *v3; // rbp
  unsigned __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 Resource; // r14
  __int64 v9; // rax
  __int64 v10; // r15
  int v11; // eax
  unsigned int v12; // ebx
  char IsEnabled; // al
  unsigned __int64 v14; // rdx
  CSharedSectionBase *v15; // rcx
  void *v16; // rax
  int v17; // r9d
  unsigned int v18; // ecx
  size_t v19; // r8
  int v20; // r8d
  int v21; // r9d
  unsigned int v23; // [rsp+20h] [rbp-38h]
  unsigned int v24; // [rsp+60h] [rbp+8h] BYREF
  unsigned int TracingCookie; // [rsp+78h] [rbp+20h] BYREF

  v3 = (char *)(this + 312);
  v6 = this;
  if ( *(_QWORD *)(this + 312) || (v7 = *((unsigned int *)a3 + 2), !(_DWORD)v7) )
  {
    v23 = 211;
    goto LABEL_31;
  }
  Resource = CResourceTable::GetResource(a2, v7, 169LL);
  if ( !Resource )
  {
    v23 = 218;
LABEL_31:
    v17 = -2003303421;
    goto LABEL_32;
  }
  v9 = CResourceTable::GetResource(a2, *((unsigned int *)a3 + 5), 169LL);
  this = *((unsigned int *)a3 + 9);
  v10 = v9;
  if ( v9 )
  {
    if ( (_DWORD)this )
      goto LABEL_7;
LABEL_17:
    v23 = 230;
    goto LABEL_31;
  }
  if ( (_DWORD)this )
    goto LABEL_17;
LABEL_7:
  if ( *((_DWORD *)a3 + 3) < 4u || *((unsigned int *)a3 + 6) < 8 * this )
  {
    v23 = 239;
    goto LABEL_31;
  }
  ReplaceInterface<CSharedSection,CSharedSection>(v3, Resource);
  ReplaceInterface<CSharedSection,CSharedSection>(v6 + 328, v10);
  *(_DWORD *)(v6 + 320) = *((_DWORD *)a3 + 3);
  *(_DWORD *)(v6 + 324) = *((_DWORD *)a3 + 4);
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_2929769787>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_2929769787>::GetImpl'::`2'::impl) )
    *(_DWORD *)(v6 + 344) = *((_DWORD *)a3 + 6);
  *(_DWORD *)(v6 + 348) = *((_DWORD *)a3 + 9);
  *(_DWORD *)(v6 + 352) = *((_DWORD *)a3 + 10);
  v11 = CBaseExpression::SetChannelHandle((CBaseExpression *)v6, *((_DWORD *)a2 + 12));
  v12 = v11;
  if ( v11 < 0 )
  {
    v23 = 257;
    goto LABEL_27;
  }
  if ( *((_DWORD *)a3 + 9) )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_2929769787>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_2929769787>::GetImpl'::`2'::impl);
    v14 = *((unsigned int *)a3 + 7);
    v15 = *(CSharedSectionBase **)(v6 + 328);
    if ( IsEnabled )
    {
      v16 = CSharedSectionBase::ResolveAllocation(v15, v14, *((unsigned int *)a3 + 6));
      *(_QWORD *)(v6 + 336) = v16;
      if ( !v16 )
      {
        v17 = -2147024882;
        v23 = 268;
LABEL_32:
        v12 = v17;
        goto LABEL_33;
      }
      v18 = *((_DWORD *)a3 + 6);
      *(_DWORD *)(v6 + 344) = v18;
      if ( *((_DWORD *)a3 + 8) )
      {
        v19 = v18;
LABEL_23:
        memset_0(v16, 0, v19);
      }
    }
    else
    {
      v16 = CSharedSectionBase::ResolveAllocation(v15, v14, *(unsigned int *)(v6 + 344));
      *(_QWORD *)(v6 + 336) = v16;
      if ( !v16 )
      {
        v17 = -2147024882;
        v23 = 281;
        goto LABEL_32;
      }
      if ( *((_DWORD *)a3 + 8) )
        goto LABEL_23;
    }
  }
  v11 = CBaseExpression::TryRegisterWithExpressionManager((CBaseExpression *)v6);
  v12 = v11;
  if ( v11 < 0 )
  {
    v23 = 290;
LABEL_27:
    v17 = v11;
LABEL_33:
    MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0, v17, v23, 0LL);
    goto LABEL_34;
  }
  v12 = 0;
LABEL_34:
  if ( *(int *)(*(_QWORD *)(v6 + 304) + 4LL) < 0
    && (unsigned int)dword_180344E80 > 4
    && (qword_180344E90 & 1) != 0
    && (qword_180344E98 & 1) == qword_180344E98 )
  {
    v24 = v12;
    TracingCookie = CBaseExpression::GetTracingCookie((CBaseExpression *)v6);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_180344E80,
      (unsigned int)&unk_1802E8A81,
      v20,
      v21,
      (__int64)&TracingCookie,
      (__int64)&v24);
  }
  return v12;
}
