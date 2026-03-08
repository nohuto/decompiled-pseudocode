/*
 * XREFs of ?AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x1C00F81C0
 * Callers:
 *     ??0InkProcessor@@AEAA@XZ @ 0x1C00F8120 (--0InkProcessor@@AEAA@XZ.c)
 *     ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0240D1C (-OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C00F8DFC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTempl.c)
 */

__int64 __fastcall InkFeedbackServer::AddInkFeedbackProvider(
        InkFeedbackServer *this,
        struct InkFeedbackProviderBase *a2)
{
  InkFeedbackServer **v2; // r8
  InkFeedbackServer *v3; // rax

  v2 = (InkFeedbackServer **)*((_QWORD *)this + 1);
  v3 = (struct InkFeedbackProviderBase *)((char *)a2 + 8);
  if ( *v2 != this )
    __fastfail(3u);
  *(_QWORD *)v3 = this;
  *((_QWORD *)a2 + 2) = v2;
  *v2 = v3;
  *((_QWORD *)this + 1) = v3;
  if ( (unsigned int)dword_1C03570E0 > 4 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
      this,
      &unk_1C031F4E8);
  return 0LL;
}
