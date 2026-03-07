void __fastcall InkFeedbackProviderBase::AddActiveCommand(
        InkFeedbackProviderBase *this,
        struct InkFeedbackProviderBase::ActiveCommand *a2,
        __int64 a3,
        __int64 a4)
{
  InkFeedbackProviderBase **v4; // r8
  int v5; // eax
  int v6; // [rsp+60h] [rbp-20h] BYREF
  __int64 v7; // [rsp+68h] [rbp-18h] BYREF
  void *v8; // [rsp+70h] [rbp-10h] BYREF
  const char *v9; // [rsp+78h] [rbp-8h] BYREF
  char v10; // [rsp+90h] [rbp+10h] BYREF
  int v11; // [rsp+A0h] [rbp+20h] BYREF
  int v12; // [rsp+A8h] [rbp+28h] BYREF

  ++*((_DWORD *)this + 10);
  v4 = (InkFeedbackProviderBase **)*((_QWORD *)this + 4);
  if ( *v4 != (InkFeedbackProviderBase *)((char *)this + 24) )
    __fastfail(3u);
  *(_QWORD *)a2 = (char *)this + 24;
  *((_QWORD *)a2 + 1) = v4;
  *v4 = a2;
  *((_QWORD *)this + 4) = a2;
  if ( (unsigned int)dword_1C03570E0 > 4 )
  {
    v5 = *((_DWORD *)this + 10);
    v6 = 0;
    v11 = v5;
    v7 = *((_QWORD *)a2 + 3);
    v12 = *((_DWORD *)a2 + 5);
    v10 = *((_BYTE *)a2 + 16);
    v8 = (void *)*((_QWORD *)this + 6);
    v9 = "Added active command";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)this,
      byte_1C031F6F7,
      (__int64)v4,
      a4,
      (__int64)&v6,
      (void **)&v9,
      &v8,
      (__int64)&v10,
      (__int64)&v12,
      (__int64)&v7,
      (__int64)&v11);
  }
}
