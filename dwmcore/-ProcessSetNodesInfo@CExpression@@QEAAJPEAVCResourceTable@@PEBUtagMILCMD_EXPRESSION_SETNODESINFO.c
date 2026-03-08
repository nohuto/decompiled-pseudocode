/*
 * XREFs of ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x1800E0B74
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z @ 0x1800981C8 (-ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x1800981F0 (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18009B288 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EE80 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800BAD44 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z @ 0x1800E0CF8 (--$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800E197C (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 */

__int64 __fastcall CExpression::ProcessSetNodesInfo(
        CExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_EXPRESSION_SETNODESINFO *a3)
{
  char *v3; // rbp
  CExpression *v6; // rsi
  unsigned int v7; // edx
  __int64 Resource; // r14
  __int64 v9; // rax
  __int64 v10; // r15
  int v11; // eax
  unsigned int v12; // ebx
  void *v13; // rax
  __int64 v14; // rcx
  size_t v15; // r8
  int v17; // r9d
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // [rsp+20h] [rbp-38h]
  unsigned int v21; // [rsp+60h] [rbp+8h] BYREF
  unsigned int TracingCookie; // [rsp+78h] [rbp+20h] BYREF

  v3 = (char *)this + 336;
  v6 = this;
  if ( *((_QWORD *)this + 42) || (v7 = *((_DWORD *)a3 + 2)) == 0 )
  {
    v20 = 213;
    goto LABEL_28;
  }
  Resource = CResourceTable::GetResource((__int64)a2, v7, 0xA9u);
  if ( !Resource )
  {
    v20 = 220;
LABEL_28:
    v17 = -2003303421;
    v12 = -2003303421;
    goto LABEL_29;
  }
  v9 = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 5), 0xA9u);
  this = (CExpression *)*((unsigned int *)a3 + 9);
  v10 = v9;
  if ( !v9 )
  {
    if ( !(_DWORD)this )
      goto LABEL_6;
    goto LABEL_21;
  }
  if ( !(_DWORD)this )
  {
LABEL_21:
    v20 = 232;
    goto LABEL_28;
  }
LABEL_6:
  if ( *((_DWORD *)a3 + 3) < 4u || *((unsigned int *)a3 + 6) < 8 * (unsigned __int64)(unsigned int)this )
  {
    v20 = 241;
    goto LABEL_28;
  }
  ReplaceInterface<CSharedSection,CSharedSection>(v3, Resource);
  ReplaceInterface<CSharedSection,CSharedSection>((char *)v6 + 352, v10);
  *((_DWORD *)v6 + 86) = *((_DWORD *)a3 + 3);
  *((_DWORD *)v6 + 87) = *((_DWORD *)a3 + 4);
  *((_DWORD *)v6 + 92) = *((_DWORD *)a3 + 6);
  *((_DWORD *)v6 + 93) = *((_DWORD *)a3 + 9);
  *((_DWORD *)v6 + 94) = *((_DWORD *)a3 + 10);
  v11 = CBaseExpression::SetChannelHandle(v6, *((_DWORD *)a2 + 12));
  v12 = v11;
  if ( v11 < 0 )
  {
    v20 = 256;
    goto LABEL_25;
  }
  if ( *((_DWORD *)a3 + 9) )
  {
    v13 = CSharedSectionBase::ResolveAllocation(
            *((CSharedSectionBase **)v6 + 44),
            *((unsigned int *)a3 + 7),
            *((unsigned int *)v6 + 92));
    *((_QWORD *)v6 + 45) = v13;
    if ( !v13 )
    {
      v12 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x10Au, 0LL);
      goto LABEL_16;
    }
    if ( *((_DWORD *)a3 + 8) )
      memset_0(v13, 0, v15);
  }
  if ( (*((_BYTE *)v6 + 232) & 0x10) == 0 )
  {
    v11 = CBaseExpression::TryRegisterWithExpressionManager(v6);
    v12 = v11;
    if ( v11 < 0 )
    {
      v20 = 276;
LABEL_25:
      v17 = v11;
LABEL_29:
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v17, v20, 0LL);
      goto LABEL_16;
    }
  }
  v12 = 0;
LABEL_16:
  if ( (*(_DWORD *)(*((_QWORD *)v6 + 41) + 4LL) & 0x40000000) != 0
    && (unsigned int)dword_1803E07D0 > 4
    && tlgKeywordOn((__int64)&dword_1803E07D0, 1LL) )
  {
    v21 = v12;
    TracingCookie = CBaseExpression::GetTracingCookie(v6);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_1803E07D0,
      (int)&unk_18037D908,
      v18,
      v19,
      (__int64)&TracingCookie,
      (__int64)&v21);
  }
  return v12;
}
