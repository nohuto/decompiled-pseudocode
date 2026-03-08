/*
 * XREFs of ?EndActiveCommandsByPointerId@InkFeedbackProviderBase@@UEAAXI@Z @ 0x1C0244F50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C0244820 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapper.c)
 *     ?RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z @ 0x1C024574C (-RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z.c)
 */

void __fastcall InkFeedbackProviderBase::EndActiveCommandsByPointerId(
        InkFeedbackProviderBase *this,
        int a2,
        __int64 a3,
        __int64 a4)
{
  struct InkFeedbackProviderBase::ActiveCommand *v4; // rsi
  struct InkFeedbackProviderBase::ActiveCommand *v6; // rbx
  __int64 v8; // rcx
  struct InkFeedbackProviderBase::ActiveCommand *v9; // r14
  int v10; // edx
  char v11; // al
  __int64 v12; // [rsp+50h] [rbp-20h] BYREF
  void *v13; // [rsp+58h] [rbp-18h] BYREF
  const char *v14; // [rsp+60h] [rbp-10h] BYREF
  struct InkFeedbackProviderBase::ActiveCommand *v15; // [rsp+68h] [rbp-8h] BYREF
  char v16; // [rsp+A0h] [rbp+30h] BYREF
  int v17; // [rsp+B0h] [rbp+40h] BYREF
  int v18; // [rsp+B8h] [rbp+48h] BYREF

  v4 = (InkFeedbackProviderBase *)((char *)this + 24);
  v6 = (struct InkFeedbackProviderBase::ActiveCommand *)*((_QWORD *)this + 3);
  while ( v6 != v4 )
  {
    v8 = (__int64)v6;
    v15 = v6;
    v9 = v6;
    v6 = *(struct InkFeedbackProviderBase::ActiveCommand **)v6;
    v10 = *(_DWORD *)(v8 + 20);
    if ( v10 == a2 )
    {
      if ( (unsigned int)dword_1C03570E0 > 4 )
      {
        v12 = *(_QWORD *)(v8 + 24);
        v17 = v10;
        v11 = *(_BYTE *)(v8 + 16);
        v18 = 0;
        v16 = v11;
        v13 = (void *)*((_QWORD *)this + 6);
        v14 = "Terminating active command by pointer id";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v8,
          byte_1C031F77D,
          a3,
          a4,
          (__int64)&v18,
          (void **)&v14,
          &v13,
          (__int64)&v16,
          (__int64)&v17,
          (__int64)&v12);
      }
      (*(void (__fastcall **)(InkFeedbackProviderBase *, struct InkFeedbackProviderBase::ActiveCommand *))(*(_QWORD *)this + 40LL))(
        this,
        v9);
      InkFeedbackProviderBase::RemoveAndReleaseActiveCommand(this, &v15);
    }
  }
}
