/*
 * XREFs of ?EndActiveCommandsByPointerId@InkFeedbackProviderBase@@UEAAXI@Z @ 0x1C0250B20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C02503F0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapper.c)
 *     ?RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z @ 0x1C02513DC (-RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z.c)
 */

void __fastcall InkFeedbackProviderBase::EndActiveCommandsByPointerId(
        InkFeedbackProviderBase *this,
        int a2,
        __int64 a3,
        __int64 a4)
{
  struct InkFeedbackProviderBase::ActiveCommand *v4; // rsi
  struct InkFeedbackProviderBase::ActiveCommand *v6; // rbx
  struct InkFeedbackProviderBase::ActiveCommand *v8; // rdi
  __int64 v9; // rcx
  char v10; // al
  __int64 v11; // [rsp+50h] [rbp-20h] BYREF
  void *v12; // [rsp+58h] [rbp-18h] BYREF
  const char *v13; // [rsp+60h] [rbp-10h] BYREF
  struct InkFeedbackProviderBase::ActiveCommand *v14; // [rsp+68h] [rbp-8h] BYREF
  char v15; // [rsp+A0h] [rbp+30h] BYREF
  int v16; // [rsp+B0h] [rbp+40h] BYREF
  int v17; // [rsp+B8h] [rbp+48h] BYREF

  v4 = (InkFeedbackProviderBase *)((char *)this + 24);
  v6 = (struct InkFeedbackProviderBase::ActiveCommand *)*((_QWORD *)this + 3);
  while ( v6 != v4 )
  {
    v8 = v6;
    v14 = v6;
    v6 = *(struct InkFeedbackProviderBase::ActiveCommand **)v6;
    v9 = *((unsigned int *)v8 + 5);
    if ( (_DWORD)v9 == a2 )
    {
      if ( (unsigned int)dword_1C0326250 > 4 )
      {
        v11 = *((_QWORD *)v8 + 3);
        v16 = v9;
        v10 = *((_BYTE *)v8 + 16);
        v17 = 0;
        v15 = v10;
        v12 = (void *)*((_QWORD *)this + 6);
        v13 = "Terminating active command by pointer id";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v9,
          byte_1C02F1C2A,
          a3,
          a4,
          (__int64)&v17,
          (void **)&v13,
          &v12,
          (__int64)&v15,
          (__int64)&v16,
          (__int64)&v11);
      }
      (*(void (__fastcall **)(InkFeedbackProviderBase *, struct InkFeedbackProviderBase::ActiveCommand *))(*(_QWORD *)this + 40LL))(
        this,
        v8);
      InkFeedbackProviderBase::RemoveAndReleaseActiveCommand(this, &v14);
    }
  }
}
