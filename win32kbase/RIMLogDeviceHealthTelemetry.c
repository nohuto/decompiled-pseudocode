char __fastcall RIMLogDeviceHealthTelemetry(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  __int64 v4; // r8
  int v5; // r9d
  char v6; // al
  __int64 v7; // r10
  unsigned int v8; // ecx
  unsigned __int128 v9; // rax
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r9
  int v19; // [rsp+B8h] [rbp-80h] BYREF
  int v20; // [rsp+BCh] [rbp-7Ch] BYREF
  int v21; // [rsp+C0h] [rbp-78h] BYREF
  int v22; // [rsp+C4h] [rbp-74h] BYREF
  BOOL v23; // [rsp+C8h] [rbp-70h] BYREF
  int v24; // [rsp+CCh] [rbp-6Ch] BYREF
  int v25; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v26; // [rsp+D8h] [rbp-60h] BYREF
  __int64 v27; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v28; // [rsp+E8h] [rbp-50h] BYREF
  __int64 v29; // [rsp+F0h] [rbp-48h] BYREF
  const WCHAR *v30; // [rsp+F8h] [rbp-40h] BYREF
  const WCHAR *v31; // [rsp+100h] [rbp-38h] BYREF
  const WCHAR *v32; // [rsp+108h] [rbp-30h] BYREF
  _UNKNOWN *retaddr; // [rsp+120h] [rbp-18h] BYREF
  __int64 v34; // [rsp+130h] [rbp-8h] BYREF
  __int64 v35; // [rsp+138h] [rbp+0h] BYREF
  int v36; // [rsp+140h] [rbp+8h] BYREF

  v3 = &retaddr;
  v35 = a3;
  v34 = a2;
  if ( (unsigned int)dword_1C02C92F8 > 5 )
  {
    LOBYTE(v3) = tlgKeywordOn((__int64)&dword_1C02C92F8, 0x400000000000LL);
    v5 = 0;
    if ( (_BYTE)v3 )
    {
      v6 = *(_BYTE *)(v4 + 200);
      v7 = v4 + 472;
      v26 = 0LL;
      if ( v6 < 0 && *(_QWORD *)v7 )
        v8 = *(_DWORD *)(*(_QWORD *)v7 + 768LL);
      else
        v8 = -1;
      v27 = v8;
      v28 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
          - *(_QWORD *)(v4 + 72);
      v9 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
      LOBYTE(v9) = *(_BYTE *)(v4 + 200);
      v29 = *((_QWORD *)&v9 + 1) - *(_QWORD *)(v4 + 64);
      if ( (v9 & 0x80u) != 0LL && *(_QWORD *)v7 )
        v10 = -__CFSHR__(*(_DWORD *)(*(_QWORD *)v7 + 360LL), 13);
      else
        v10 = 0;
      v11 = *(_DWORD *)(v4 + 184);
      LODWORD(v35) = v10;
      LODWORD(v34) = (v11 & 0x8000000u) >> 27;
      v36 = *(_DWORD *)(v4 + 152);
      v19 = *(_DWORD *)(v4 + 272);
      v20 = *(_DWORD *)(v4 + 288);
      if ( __CFSHR__(v11, 13) || (v12 = v11 << 20, v11 << 20 < 0) || (v11 & 0x100) != 0 )
      {
        v13 = 0;
        v12 = v11 << 20;
      }
      else
      {
        v13 = 1 - __CFSHR__(v11, 13);
      }
      v21 = v13;
      v22 = (unsigned __int8)(v11 & 0x80) >> 7;
      v23 = __CFSHR__(v11, 13);
      LOBYTE(v5) = v12 < 0;
      v25 = (unsigned __int16)(v11 & 0x2000) >> 13;
      v14 = *(unsigned __int8 *)(v4 + 48);
      v24 = v5;
      v30 = RimDeviceTypeToRimInputTypeString(v4, v14);
      v31 = *(const WCHAR **)(v15 + 216);
      v32 = L"RIMFillDeviceHealthInfo";
      LOBYTE(v3) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                     v16,
                     byte_1C02968EF,
                     v15,
                     v17,
                     &v32,
                     &v31,
                     &v30,
                     (__int64)&v25,
                     (__int64)&v24,
                     (__int64)&v23,
                     (__int64)&v22,
                     (__int64)&v21,
                     (__int64)&v20,
                     (__int64)&v19,
                     (__int64)&v36,
                     (__int64)&v34,
                     (__int64)&v35,
                     (__int64)&v29,
                     (__int64)&v28,
                     (__int64)&v27,
                     (__int64)&v26);
    }
  }
  return (char)v3;
}
