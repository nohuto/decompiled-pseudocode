/*
 * XREFs of ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x1800E1624
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F1E8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z @ 0x1800983B8 (-ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x1800983E0 (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18009B3CC (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EFC0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _tlgKeywordOn @ 0x1800BB1F8 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800BB224 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z @ 0x1800E18D0 (--$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800E254C (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     memset_0 @ 0x1801100E8 (memset_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2460007739@@@details@wil@@QEAA_NXZ @ 0x18011A024 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_2460007739@@@details@wil@@QEAA_NX.c)
 */

__int64 __fastcall CExpression::ProcessSetNodesInfo(
        __int64 this,
        struct CResourceTable *a2,
        const struct tagMILCMD_EXPRESSION_SETNODESINFO *a3)
{
  char *v3; // rbp
  __int64 v6; // rdi
  unsigned int v7; // edx
  __int64 Resource; // r14
  __int64 v9; // rax
  __int64 v10; // r15
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // eax
  void *v14; // rax
  __int64 v15; // rcx
  int v16; // r9d
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v20; // [rsp+20h] [rbp-38h]
  unsigned int v21; // [rsp+60h] [rbp+8h] BYREF
  unsigned int TracingCookie; // [rsp+78h] [rbp+20h] BYREF

  v3 = (char *)(this + 336);
  v6 = this;
  if ( *(_QWORD *)(this + 336) || (v7 = *((_DWORD *)a3 + 2)) == 0 )
  {
    v20 = 215;
    goto LABEL_32;
  }
  Resource = CResourceTable::GetResource((__int64)a2, v7, 0xA9u);
  if ( !Resource )
  {
    v20 = 222;
LABEL_32:
    v16 = -2003303421;
    v12 = -2003303421;
    goto LABEL_33;
  }
  v9 = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 5), 0xA9u);
  this = *((unsigned int *)a3 + 9);
  v10 = v9;
  if ( v9 )
  {
    if ( (_DWORD)this )
      goto LABEL_7;
LABEL_16:
    v20 = 234;
    goto LABEL_32;
  }
  if ( (_DWORD)this )
    goto LABEL_16;
LABEL_7:
  if ( *((_DWORD *)a3 + 3) < 4u || *((unsigned int *)a3 + 6) < (unsigned __int64)(8 * this) )
  {
    v20 = 243;
    goto LABEL_32;
  }
  ReplaceInterface<CSharedSection,CSharedSection>(v3, Resource);
  ReplaceInterface<CSharedSection,CSharedSection>(v6 + 352, v10);
  *(_DWORD *)(v6 + 344) = *((_DWORD *)a3 + 3);
  *(_DWORD *)(v6 + 348) = *((_DWORD *)a3 + 4);
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_2460007739>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_2460007739>::GetImpl'::`2'::impl) )
    *(_DWORD *)(v6 + 368) = *((_DWORD *)a3 + 6);
  *(_DWORD *)(v6 + 372) = *((_DWORD *)a3 + 9);
  *(_DWORD *)(v6 + 376) = *((_DWORD *)a3 + 10);
  v11 = CBaseExpression::SetChannelHandle((CBaseExpression *)v6, *((_DWORD *)a2 + 12));
  v12 = v11;
  if ( v11 < 0 )
  {
    v20 = 261;
    goto LABEL_27;
  }
  if ( !*((_DWORD *)a3 + 9) )
  {
LABEL_24:
    if ( (*(_BYTE *)(v6 + 232) & 0x10) != 0
      || (v11 = CBaseExpression::TryRegisterWithExpressionManager((CBaseExpression *)v6), v12 = v11, v11 >= 0) )
    {
      v12 = 0;
      goto LABEL_34;
    }
    v20 = 294;
LABEL_27:
    v16 = v11;
LABEL_33:
    MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0, v16, v20, 0LL);
    goto LABEL_34;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_2460007739>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_2460007739>::GetImpl'::`2'::impl) )
    v13 = *((_DWORD *)a3 + 6);
  else
    v13 = *(_DWORD *)(v6 + 368);
  v14 = CSharedSectionBase::ResolveAllocation(*(CSharedSectionBase **)(v6 + 352), *((unsigned int *)a3 + 7), v13);
  *(_QWORD *)(v6 + 360) = v14;
  if ( v14 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_2460007739>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_2460007739>::GetImpl'::`2'::impl) )
      *(_DWORD *)(v6 + 368) = *((_DWORD *)a3 + 6);
    if ( *((_DWORD *)a3 + 8) )
      memset_0(*(void **)(v6 + 360), 0, *(unsigned int *)(v6 + 368));
    goto LABEL_24;
  }
  v12 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024882, 0x116u, 0LL);
LABEL_34:
  if ( (*(_DWORD *)(*(_QWORD *)(v6 + 328) + 4LL) & 0x40000000) != 0
    && (unsigned int)dword_1803E3798 > 4
    && tlgKeywordOn((__int64)&dword_1803E3798, 1LL) )
  {
    v21 = v12;
    TracingCookie = CBaseExpression::GetTracingCookie((CBaseExpression *)v6);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_1803E3798,
      (int)&unk_180380C21,
      v17,
      v18,
      (__int64)&TracingCookie,
      (__int64)&v21);
  }
  return v12;
}
