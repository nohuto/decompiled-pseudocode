void __fastcall InputTraceLogging::Inertia::PostInertiaMessage(
        __int64 a1,
        const struct INERTIA_INFO_INTERNAL *a2,
        struct tagPOINT a3)
{
  __int64 v3; // r10
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // r9d
  __int64 v9; // r9
  const char *v10; // rax
  int v11; // [rsp+70h] [rbp+27h] BYREF
  int v12; // [rsp+74h] [rbp+2Bh] BYREF
  int v13; // [rsp+78h] [rbp+2Fh] BYREF
  int v14; // [rsp+7Ch] [rbp+33h] BYREF
  int v15; // [rsp+80h] [rbp+37h] BYREF
  __int64 v16; // [rsp+88h] [rbp+3Fh] BYREF
  __int64 v17; // [rsp+90h] [rbp+47h] BYREF
  __int64 v18; // [rsp+98h] [rbp+4Fh] BYREF
  __int64 v19; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 2LL) )
  {
    v4 = *(_DWORD *)(v3 + 184);
    LODWORD(v19) = -__CFSHR__(v4, 4);
    v11 = -__CFSHR__(v4, 3);
    v12 = -__CFSHR__(v4, 5);
    v5 = *(_QWORD *)(v3 + 120);
    v13 = -__CFSHR__(v4, 2);
    v6 = *(unsigned int *)(v3 + 24);
    v16 = v5;
    v17 = InputTraceLogging::InertiaSourceToString(v6);
    v14 = HIDWORD(v7);
    v15 = v7;
    v9 = (unsigned int)(v8 - 571);
    if ( (_DWORD)v9 )
    {
      if ( (_DWORD)v9 == 1 )
        v10 = "EndInertia";
      else
        v10 = "UNKNOWN";
    }
    else
    {
      v10 = "StopInertia";
    }
    v18 = (__int64)v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_1C02CA7E0,
      (int)&dword_1C029C025,
      v7,
      v9,
      (void **)&v18,
      (__int64)&v15,
      (__int64)&v14,
      (void **)&v17,
      (__int64)&v16,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v19);
  }
}
