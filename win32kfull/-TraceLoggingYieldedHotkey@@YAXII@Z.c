void __fastcall TraceLoggingYieldedHotkey(__int64 a1, int a2)
{
  int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // r10
  void *ProcessImageFileName; // rax
  void *v9; // [rsp+40h] [rbp-18h] BYREF
  __int64 v10; // [rsp+48h] [rbp-10h] BYREF
  int v11; // [rsp+70h] [rbp+18h] BYREF
  int v12; // [rsp+78h] [rbp+20h] BYREF

  v3 = a1;
  PsGetCurrentProcessWin32Process(a1);
  if ( (unsigned int)dword_1C0357098 > 5 && tlgKeywordOn((__int64)&dword_1C0357098, 0x400000000000LL) )
  {
    if ( v7 )
      ProcessImageFileName = (void *)PsGetProcessImageFileName(*v7);
    else
      ProcessImageFileName = &unk_1C03206E9;
    v9 = ProcessImageFileName;
    v11 = a2;
    v12 = v3;
    v10 = 0x2000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      v4,
      byte_1C031DDAF,
      v5,
      v6,
      (__int64)&v10,
      (__int64)&v12,
      (__int64)&v11,
      &v9);
  }
}
