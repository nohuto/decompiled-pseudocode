/*
 * XREFs of ?StopInteraction@CInteractionContextWrapper@@UEAAJXZ @ 0x180281CF0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801CE600 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall CInteractionContextWrapper::StopInteraction(CInteractionContextWrapper *this)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v7; // [rsp+40h] [rbp+8h] BYREF
  CInteractionContextWrapper *v8; // [rsp+48h] [rbp+10h] BYREF

  if ( *((_QWORD *)this + 2) )
  {
    v2 = StopInteractionContext();
    if ( v2 >= 0 )
      (*(void (__fastcall **)(CInteractionContextWrapper *))(*(_QWORD *)this + 88LL))(this);
  }
  else
  {
    v2 = -2147019873;
  }
  if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
  {
    v7 = v2;
    v8 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v3,
      byte_18037F385,
      v4,
      v5,
      (__int64)&v8,
      (__int64)&v7);
  }
  return (unsigned int)v2;
}
