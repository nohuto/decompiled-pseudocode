/*
 * XREFs of ?RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x1C00F6CE8
 * Callers:
 *     ??1InkProcessor@@AEAA@XZ @ 0x1C00F6A98 (--1InkProcessor@@AEAA@XZ.c)
 *     ?OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C02411BC (-OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C00F8DFC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTempl.c)
 */

__int64 __fastcall InkFeedbackServer::RemoveInkFeedbackProvider(
        InkFeedbackServer *this,
        struct InkFeedbackProviderBase *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD *v4; // rcx

  v2 = (_QWORD *)((char *)a2 + 8);
  v3 = *((_QWORD *)a2 + 1);
  if ( *(struct InkFeedbackProviderBase **)(v3 + 8) != (struct InkFeedbackProviderBase *)((char *)a2 + 8)
    || (v4 = (_QWORD *)*((_QWORD *)a2 + 2), (_QWORD *)*v4 != v2) )
  {
    __fastfail(3u);
  }
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  *((_QWORD *)a2 + 2) = 0LL;
  *v2 = 0LL;
  if ( (unsigned int)dword_1C03570E0 > 4 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
      0LL,
      &unk_1C031F4E8);
  return 0LL;
}
