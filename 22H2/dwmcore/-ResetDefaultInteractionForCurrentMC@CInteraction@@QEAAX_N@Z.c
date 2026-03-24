/*
 * XREFs of ?ResetDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x1801C6BB0
 * Callers:
 *     ?CompleteInteraction@CInteraction@@UEAAJXZ @ 0x1801C5E20 (-CompleteInteraction@CInteraction@@UEAAJXZ.c)
 *     ?ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ @ 0x1801C6C58 (-ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801564D4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?Remove@?$CArray@PEAVCInteraction@@V?$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAHAEBQEAVCInteraction@@@Z @ 0x1801C6890 (-Remove@-$CArray@PEAVCInteraction@@V-$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAHAEBQEAVCInter.c)
 */

void __fastcall CInteraction::ResetDefaultInteractionForCurrentMC(CInteraction *this, char a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  CInteraction *v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(a3) = *((_BYTE *)this + 184) ^ (*((_BYTE *)this + 184) ^ (2 * *((_BYTE *)this + 184))) & 0x10;
  *((_BYTE *)this + 184) = a3;
  if ( a2 )
  {
    v6 = this;
    CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::Remove((__int64)this, &v6);
  }
  if ( (unsigned int)dword_180344E80 > 4 && (qword_180344E90 & 2) != 0 && (qword_180344E98 & 2) == qword_180344E98 )
  {
    v5 = (*((unsigned __int8 *)this + 184) >> 3) & 1;
    v6 = this;
    v7 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_180344E80,
      byte_1802E8ABA,
      a3,
      a4,
      (__int64)&v6,
      (__int64)&v7);
  }
}
