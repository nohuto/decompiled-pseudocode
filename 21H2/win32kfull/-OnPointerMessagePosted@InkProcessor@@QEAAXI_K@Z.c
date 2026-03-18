/*
 * XREFs of ?OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z @ 0x1C024CDC0
 * Callers:
 *     InkProcessorOnPointerMessagePosted @ 0x1C021AD00 (InkProcessorOnPointerMessagePosted.c)
 * Callees:
 *     ?GetPointerInfoByPointerMsgId@Pointer@@YAJ_KPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C016E3AC (-GetPointerInfoByPointerMsgId@Pointer@@YAJ_KPEAPEBUtagPOINTER_INFO@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C023AA94 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?OnPointerMessagePosted@InkFeedbackServer@@QEAAXIPEBUtagPOINTER_INFO@@@Z @ 0x1C0250CEC (-OnPointerMessagePosted@InkFeedbackServer@@QEAAXIPEBUtagPOINTER_INFO@@@Z.c)
 */

void __fastcall InkProcessor::OnPointerMessagePosted(InkProcessor *this, unsigned int a2, Pointer *a3)
{
  const struct tagPOINTER_INFO *v5; // rdi
  int PointerInfoByPointerMsgId; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  v9 = 0LL;
  v5 = 0LL;
  if ( a2 == 583 || a2 == 594 )
  {
    PointerInfoByPointerMsgId = Pointer::GetPointerInfoByPointerMsgId(
                                  a3,
                                  (const struct tagPOINTER_INFO **)&v9,
                                  (const struct tagPOINTER_INFO **)a3);
    v5 = (const struct tagPOINTER_INFO *)v9;
    if ( PointerInfoByPointerMsgId < 0 )
      v5 = 0LL;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  if ( *((_BYTE *)this + 8) )
  {
    InkFeedbackServer::OnPointerMessagePosted((InkProcessor *)((char *)this + 96), a2, v5);
  }
  else if ( (unsigned int)dword_1C0326250 > 2 )
  {
    LODWORD(v10) = -1073741823;
    v9 = (unsigned __int64)"Ink processor not enabled";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (__int64)&dword_1C0326250,
      byte_1C02F1438,
      v7,
      v8,
      (__int64)&v10,
      (void **)&v9);
  }
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
