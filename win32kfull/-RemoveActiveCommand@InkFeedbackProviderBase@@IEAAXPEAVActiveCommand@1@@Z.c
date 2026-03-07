void __fastcall InkFeedbackProviderBase::RemoveActiveCommand(
        InkFeedbackProviderBase *this,
        struct InkFeedbackProviderBase::ActiveCommand ***a2,
        __int64 a3,
        __int64 a4)
{
  struct InkFeedbackProviderBase::ActiveCommand **v4; // r8
  struct InkFeedbackProviderBase::ActiveCommand **v5; // rax
  struct InkFeedbackProviderBase::ActiveCommand **v6; // [rsp+60h] [rbp-20h] BYREF
  void *v7; // [rsp+68h] [rbp-18h] BYREF
  const char *v8; // [rsp+70h] [rbp-10h] BYREF
  char v9; // [rsp+90h] [rbp+10h] BYREF
  int v10; // [rsp+98h] [rbp+18h] BYREF
  int v11; // [rsp+A0h] [rbp+20h] BYREF
  int v12; // [rsp+A8h] [rbp+28h] BYREF

  --*((_DWORD *)this + 10);
  v4 = *a2;
  if ( (*a2)[1] != (struct InkFeedbackProviderBase::ActiveCommand *)a2
    || (v5 = a2[1], *v5 != (struct InkFeedbackProviderBase::ActiveCommand *)a2) )
  {
    __fastfail(3u);
  }
  *v5 = (struct InkFeedbackProviderBase::ActiveCommand *)v4;
  v4[1] = (struct InkFeedbackProviderBase::ActiveCommand *)v5;
  a2[1] = 0LL;
  *a2 = 0LL;
  if ( (unsigned int)dword_1C03570E0 > 4 )
  {
    v10 = *((_DWORD *)this + 10);
    v6 = a2[3];
    v11 = *((_DWORD *)a2 + 5);
    v9 = *((_BYTE *)a2 + 16);
    v7 = (void *)*((_QWORD *)this + 6);
    v8 = "Removed active command";
    v12 = 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)this,
      byte_1C031F6F7,
      0LL,
      a4,
      (__int64)&v12,
      (void **)&v8,
      &v7,
      (__int64)&v9,
      (__int64)&v11,
      (__int64)&v6,
      (__int64)&v10);
  }
}
