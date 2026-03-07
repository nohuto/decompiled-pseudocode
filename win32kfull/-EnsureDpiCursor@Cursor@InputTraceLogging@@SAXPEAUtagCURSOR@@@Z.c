void __fastcall InputTraceLogging::Cursor::EnsureDpiCursor(unsigned __int64 a1)
{
  int v2; // ecx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // [rsp+90h] [rbp+17h] BYREF
  int v6; // [rsp+94h] [rbp+1Bh] BYREF
  int v7; // [rsp+98h] [rbp+1Fh] BYREF
  int v8; // [rsp+9Ch] [rbp+23h] BYREF
  __int64 v9; // [rsp+A0h] [rbp+27h] BYREF
  __int64 v10; // [rsp+A8h] [rbp+2Fh] BYREF
  __int64 v11; // [rsp+B0h] [rbp+37h] BYREF
  __int64 v12; // [rsp+B8h] [rbp+3Fh] BYREF
  __int64 v13; // [rsp+C0h] [rbp+47h] BYREF
  unsigned __int64 v14; // [rsp+C8h] [rbp+4Fh] BYREF
  int v15; // [rsp+E8h] [rbp+6Fh] BYREF
  int v16; // [rsp+F0h] [rbp+77h] BYREF
  int v17; // [rsp+F8h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_1C035C080 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C035C080, 8LL) )
    {
      v9 = *(_QWORD *)(a1 + 48);
      v2 = *(_DWORD *)UPDWORDPointer(8232LL);
      v10 = *(_QWORD *)(a1 + 104);
      v11 = *(_QWORD *)(a1 + 96);
      v12 = *(_QWORD *)(a1 + 88);
      v16 = *(__int16 *)(a1 + 86);
      v17 = *(__int16 *)(a1 + 84);
      v5 = *(_DWORD *)(a1 + 144) >> 1;
      v6 = *(_DWORD *)(a1 + 140);
      v7 = *(_DWORD *)(a1 + 80);
      v8 = *(_DWORD *)(a1 + 76);
      v13 = *(_QWORD *)(a1 + 48);
      v15 = v2;
      v14 = a1 & -(__int64)(v13 != 0);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (__int64)&dword_1C035C080,
        byte_1C031B622,
        v3,
        v4,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v8,
        (__int64)&v7,
        (__int64)&v6,
        (__int64)&v5,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v15,
        (__int64)&v9);
    }
  }
}
