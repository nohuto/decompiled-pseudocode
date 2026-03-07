void __fastcall RAPID_HPD_MANAGER::ReportTriggerEvent(__int64 a1, unsigned int a2, __int64 a3)
{
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  int v9; // r15d
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  bool v14; // zf
  __int64 v15; // rcx
  int v16; // [rsp+70h] [rbp-9h] BYREF
  int v17; // [rsp+74h] [rbp-5h] BYREF
  int v18; // [rsp+78h] [rbp-1h] BYREF
  __int64 v19; // [rsp+80h] [rbp+7h] BYREF
  __int64 v20; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v21; // [rsp+90h] [rbp+17h] BYREF
  __int64 v22; // [rsp+98h] [rbp+1Fh] BYREF
  char v23; // [rsp+A0h] [rbp+27h]
  int v24; // [rsp+E0h] [rbp+67h] BYREF
  int v25; // [rsp+E8h] [rbp+6Fh] BYREF
  int v26; // [rsp+F8h] [rbp+7Fh] BYREF

  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v22,
    (struct DXGPUSHLOCKFAST *)a1,
    a3);
  if ( a2 == 4 )
  {
    Feature_RapidHpdDeferRecalc__private_ReportDeviceUsage();
    *(_BYTE *)(a1 + 32) = 1;
  }
  LOBYTE(v24) = 0;
  LOBYTE(v25) = 0;
  RAPID_HPD_MANAGER::InRapidHPDPeriod(a1, 1LL, &v24, &v25);
  v9 = (unsigned __int8)v24;
  if ( !(_BYTE)v24 )
  {
    if ( ExUuidCreate((UUID *)(a1 + 36)) < 0 )
    {
      WdLogSingleEntry1(2LL, 34LL);
      if ( bTracingEnabled != (_BYTE)v9 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v6,
          v10,
          v7,
          0,
          0,
          -1,
          (__int64)L"Failed to create new activity ID, hack to just increment current Id to make new",
          34LL,
          0LL,
          0LL,
          0LL,
          0LL);
      ++*(_BYTE *)(a1 + 44);
    }
    *(_QWORD *)(a1 + 72) = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 80) = a2;
  }
  *(_DWORD *)(a1 + 52) = 1;
  if ( a2 == 3 )
  {
    if ( (unsigned int)dword_1C013A8E0 > 5 )
    {
      v25 = (unsigned __int8)v25;
      v26 = *(unsigned __int8 *)(a1 + 32);
      v18 = *(_DWORD *)(a1 + 80);
      v24 = v9;
      v21 = a1 + 36;
      v20 = a3;
      v17 = 3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v6,
        (unsigned int)&unk_1C009FF69,
        v7,
        v8,
        (__int64)&v17,
        (__int64)&v18,
        (__int64)&v20,
        (__int64)&v26,
        (__int64)&v21,
        (__int64)&v24,
        (__int64)&v25);
    }
  }
  else if ( (unsigned int)dword_1C013A8E0 > 5 && tlgKeywordOn((__int64)&dword_1C013A8E0, 0x400000000002LL) )
  {
    v25 = (unsigned __int8)v25;
    v26 = *(unsigned __int8 *)(a1 + 32);
    v16 = *(_DWORD *)(a1 + 80);
    v24 = v9;
    v19 = a1 + 36;
    v20 = a3;
    v17 = a2;
    v18 = 2;
    v21 = 16779264LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v11,
      (unsigned int)&unk_1C009FFEC,
      v12,
      v13,
      (__int64)&v21,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v20,
      (__int64)&v26,
      (__int64)&v19,
      (__int64)&v24,
      (__int64)&v25);
  }
  if ( g_IsInternalRelease && a2 != 3 )
    DxgkLogCodePointPacket(
      0x75u,
      a2,
      *(_DWORD *)(a1 + 88) + (v9 << 16) + (*(unsigned __int8 *)(a1 + 32) << 8),
      *(_DWORD *)(a1 + 36),
      a3);
  v14 = v23 == 0;
  *(_DWORD *)(a1 + 64) = a2;
  if ( !v14 )
  {
    v15 = v22;
    *(_QWORD *)(v22 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v15, 0LL);
    KeLeaveCriticalRegion();
  }
}
