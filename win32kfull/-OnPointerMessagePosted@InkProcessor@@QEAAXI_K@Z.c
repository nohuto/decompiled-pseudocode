/*
 * XREFs of ?OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z @ 0x1C014AB96
 * Callers:
 *     InkProcessorOnPointerMessagePosted @ 0x1C0149830 (InkProcessorOnPointerMessagePosted.c)
 * Callees:
 *     ?GetPointerInfoByPointerMsgId@Pointer@@YAJ_KPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C014A9E6 (-GetPointerInfoByPointerMsgId@Pointer@@YAJ_KPEAPEBUtagPOINTER_INFO@@@Z.c)
 *     ?OnPointerMessagePosted@InkFeedbackServer@@QEAAXIPEBUtagPOINTER_INFO@@@Z @ 0x1C014AC80 (-OnPointerMessagePosted@InkFeedbackServer@@QEAAXIPEBUtagPOINTER_INFO@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0228D08 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

void __fastcall InkProcessor::OnPointerMessagePosted(InkProcessor *this, unsigned int a2, Pointer *a3)
{
  const struct tagPOINTER_INFO *v5; // rdi
  int PointerInfoByPointerMsgId; // eax
  unsigned __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v7 = 0LL;
  v5 = 0LL;
  if ( a2 == 583 || a2 == 594 )
  {
    PointerInfoByPointerMsgId = Pointer::GetPointerInfoByPointerMsgId(
                                  a3,
                                  (const struct tagPOINTER_INFO **)&v7,
                                  (const struct tagPOINTER_INFO **)a3);
    v5 = (const struct tagPOINTER_INFO *)v7;
    if ( PointerInfoByPointerMsgId < 0 )
      v5 = 0LL;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  if ( *((_BYTE *)this + 8) )
  {
    InkFeedbackServer::OnPointerMessagePosted((InkProcessor *)((char *)this + 96), a2, v5);
  }
  else if ( (unsigned int)dword_1C03570E0 > 2 )
  {
    LODWORD(v8) = -1073741823;
    v7 = (unsigned __int64)"Ink processor not enabled";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (int)&dword_1C03570E0,
      (__int64)&v8,
      (__int64)&v7);
  }
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
