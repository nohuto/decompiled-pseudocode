/*
 * XREFs of ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x180209B10
 * Callers:
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x1801A0564 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801A2A58 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     ?IsDefaultInteractionStateLocked@CInteraction@@AEAA_NXZ @ 0x1800E5488 (-IsDefaultInteractionStateLocked@CInteraction@@AEAA_NXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180208614 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?Add@?$CArray@PEAVCInteraction@@V?$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAHAEBQEAVCInteraction@@@Z @ 0x1802087C8 (-Add@-$CArray@PEAVCInteraction@@V-$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAHAEBQEAVCInteract.c)
 */

void __fastcall CInteraction::UpdateDefaultInteractionForCurrentMC(CInteraction *this)
{
  __int64 v2; // rcx
  char v3; // r9
  char v4; // al
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ecx
  __int64 v8; // rcx
  CInteraction *v9; // [rsp+40h] [rbp-18h] BYREF
  CInteraction *v10; // [rsp+70h] [rbp+18h] BYREF
  int v11; // [rsp+78h] [rbp+20h] BYREF

  if ( !CInteraction::IsDefaultInteractionStateLocked(this) )
  {
    if ( v3 )
      v4 = 0;
    else
      v4 = *(_BYTE *)(v2 + 192) >> 4;
    *(_BYTE *)(v2 + 192) &= ~0x20u;
    v10 = this;
    *(_BYTE *)(v2 + 192) |= 32 * (v4 & 1);
    CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::Add(v2, &v10);
    if ( (unsigned int)dword_1803E07D0 > 4 )
    {
      if ( tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
      {
        v7 = *((unsigned __int8 *)this + 192);
        v9 = this;
        LODWORD(v10) = (v7 >> 4) & 1;
        v8 = (v7 >> 5) & 1;
        v11 = v8;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v8,
          byte_18037C330,
          v5,
          v6,
          (__int64)&v9,
          (__int64)&v11,
          (__int64)&v10);
      }
    }
  }
}
