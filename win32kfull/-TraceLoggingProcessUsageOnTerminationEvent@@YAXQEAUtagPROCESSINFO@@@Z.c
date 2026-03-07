void __fastcall TraceLoggingProcessUsageOnTerminationEvent(struct tagPROCESSINFO *const a1)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  int v5; // ecx
  int v6; // [rsp+A0h] [rbp+7h] BYREF
  int v7; // [rsp+A4h] [rbp+Bh] BYREF
  int v8; // [rsp+A8h] [rbp+Fh] BYREF
  int v9; // [rsp+ACh] [rbp+13h] BYREF
  int v10; // [rsp+B0h] [rbp+17h] BYREF
  int v11; // [rsp+B4h] [rbp+1Bh] BYREF
  int v12; // [rsp+B8h] [rbp+1Fh] BYREF
  int v13; // [rsp+BCh] [rbp+23h] BYREF
  int v14; // [rsp+C0h] [rbp+27h] BYREF
  const char *v15; // [rsp+C8h] [rbp+2Fh] BYREF
  __int64 v16[4]; // [rsp+D0h] [rbp+37h] BYREF
  int v17; // [rsp+100h] [rbp+67h] BYREF
  int v18; // [rsp+108h] [rbp+6Fh] BYREF
  int v19; // [rsp+110h] [rbp+77h] BYREF
  int v20; // [rsp+118h] [rbp+7Fh] BYREF

  v2 = *((_DWORD *)a1 + 70);
  if ( (v2 & 0xF) != 2 || (v2 & 0xF0) != 0x20 )
    ProcessDpiAwarenessFromKernelDpiAwarenessContext();
  if ( (unsigned int)dword_1C0357098 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C0357098, 0x400000000000LL) )
    {
      v5 = *((_DWORD *)a1 + 243);
      v7 = v4;
      v16[0] = 0x1000000LL;
      v17 = -__CFSHR__(v5, 3);
      v18 = -__CFSHR__(v5, 2);
      v20 = *((_DWORD *)a1 + 241);
      v6 = *((_DWORD *)a1 + 242);
      v8 = *((_DWORD *)a1 + 239);
      v9 = *((_DWORD *)a1 + 238);
      v10 = *((_DWORD *)a1 + 237);
      v11 = *((_DWORD *)a1 + 236);
      v12 = *((_DWORD *)a1 + 240);
      v13 = *((_DWORD *)a1 + 235);
      v15 = "ATTRI_DEPRECATED";
      v14 = *((_DWORD *)a1 + 230);
      v19 = -(v5 & 1);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v19,
        (unsigned int)&unk_1C031E6D9,
        v3,
        v4,
        (__int64)v16,
        (__int64)&v14,
        (__int64)&v15,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v7,
        (__int64)&v6,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17);
    }
  }
}
