void __fastcall RAPID_HPD_MANAGER::ExtendExistingHPDPeriod(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // [rsp+70h] [rbp-29h] BYREF
  int v13; // [rsp+74h] [rbp-25h] BYREF
  BOOL v14; // [rsp+78h] [rbp-21h] BYREF
  int v15; // [rsp+7Ch] [rbp-1Dh] BYREF
  unsigned int v16; // [rsp+80h] [rbp-19h] BYREF
  int v17; // [rsp+84h] [rbp-15h] BYREF
  int v18; // [rsp+88h] [rbp-11h] BYREF
  int v19; // [rsp+8Ch] [rbp-Dh] BYREF
  BOOL v20; // [rsp+90h] [rbp-9h] BYREF
  int v21; // [rsp+94h] [rbp-5h] BYREF
  unsigned int v22; // [rsp+98h] [rbp-1h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+Fh] BYREF
  __int64 v25; // [rsp+B0h] [rbp+17h] BYREF
  __int64 v26; // [rsp+B8h] [rbp+1Fh] BYREF
  __int64 v27; // [rsp+C0h] [rbp+27h] BYREF
  __int64 v28; // [rsp+C8h] [rbp+2Fh] BYREF
  char v29; // [rsp+D0h] [rbp+37h]
  bool v30; // [rsp+100h] [rbp+67h] BYREF
  bool v31; // [rsp+118h] [rbp+7Fh] BYREF

  DXGAUTOPUSHLOCKFASTSHARED::DXGAUTOPUSHLOCKFASTSHARED((DXGAUTOPUSHLOCKFASTSHARED *)&v28, (struct DXGPUSHLOCKFAST *)a1);
  v31 = 0;
  v30 = 0;
  RAPID_HPD_MANAGER::InRapidHPDPeriod(a1, 2, &v31, &v30);
  if ( v31 )
  {
    if ( (unsigned int)dword_1C013A8E0 > 5 && tlgKeywordOn((__int64)&dword_1C013A8E0, 0x400000000002LL) )
    {
      v10 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 72);
      v24 = a3;
      v16 = a2;
      v17 = 1;
      v25 = 16779264LL;
      v13 = *(_DWORD *)(a1 + 80);
      v14 = v30;
      v23 = a1 + 36;
      v15 = *(unsigned __int8 *)(a1 + 32);
      v12 = (int)v10 / 10000;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v10,
        byte_1C009FEBF,
        v8,
        v9,
        (__int64)&v25,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v24,
        (__int64)&v15,
        &v23,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12);
    }
    DxgkLogCodePointPacket(
      0x76u,
      a2,
      *(_DWORD *)(a1 + 88) + (*(unsigned __int8 *)(a1 + 32) << 8),
      *(_DWORD *)(a1 + 36),
      a3);
  }
  else if ( (unsigned int)dword_1C013A8E0 > 5 )
  {
    v11 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 72);
    v27 = a3;
    v22 = a2;
    v19 = *(_DWORD *)(a1 + 80);
    v20 = v30;
    v26 = a1 + 36;
    v21 = *(unsigned __int8 *)(a1 + 32);
    v18 = (int)v11 / 10000;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v11,
      byte_1C009FE27,
      v6,
      v7,
      (__int64)&v22,
      (__int64)&v27,
      (__int64)&v21,
      &v26,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18);
  }
  if ( v29 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v28 + 16));
    ExReleasePushLockSharedEx(v28, 0LL);
    KeLeaveCriticalRegion();
  }
}
