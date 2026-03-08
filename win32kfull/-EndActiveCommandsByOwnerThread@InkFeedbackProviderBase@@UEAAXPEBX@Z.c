/*
 * XREFs of ?EndActiveCommandsByOwnerThread@InkFeedbackProviderBase@@UEAAXPEBX@Z @ 0x1C00DBE60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C0244820 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapper.c)
 *     ?RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z @ 0x1C024574C (-RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z.c)
 */

void __fastcall InkFeedbackProviderBase::EndActiveCommandsByOwnerThread(InkFeedbackProviderBase *this, const void *a2)
{
  struct InkFeedbackProviderBase::ActiveCommand *v2; // rsi
  struct InkFeedbackProviderBase::ActiveCommand *v4; // rbx
  struct InkFeedbackProviderBase::ActiveCommand *v6; // rcx
  struct InkFeedbackProviderBase::ActiveCommand *v7; // r14
  struct InkFeedbackProviderBase::ActiveCommand *v8; // [rsp+68h] [rbp-8h] BYREF

  v2 = (InkFeedbackProviderBase *)((char *)this + 24);
  v4 = (struct InkFeedbackProviderBase::ActiveCommand *)*((_QWORD *)this + 3);
  while ( v4 != v2 )
  {
    v6 = v4;
    v8 = v4;
    v7 = v4;
    v4 = *(struct InkFeedbackProviderBase::ActiveCommand **)v4;
    if ( *((const void **)v6 + 3) == a2 )
    {
      if ( (unsigned int)dword_1C03570E0 > 4 )
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v6,
          &unk_1C031F77D);
      (*(void (__fastcall **)(InkFeedbackProviderBase *, struct InkFeedbackProviderBase::ActiveCommand *))(*(_QWORD *)this + 40LL))(
        this,
        v7);
      InkFeedbackProviderBase::RemoveAndReleaseActiveCommand(this, &v8);
    }
  }
}
