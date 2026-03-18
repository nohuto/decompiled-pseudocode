/*
 * XREFs of RIMLogDeviceHealthTelemetry @ 0x1C018509C
 * Callers:
 *     RIMFillDeviceHealthInfo @ 0x1C0182ED0 (RIMFillDeviceHealthInfo.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C004DC2C (RimDeviceTypeToRimInputTypeString.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33AEBU?$_tlgWrapperByVal@$03@@444444444AEBU?$_tlgWrapperByVal@$07@@555@Z @ 0x1C017F7E8 (--$Write@U-$_tlgWrapSz@G@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U-$_tlgWrapp.c)
 */

void __fastcall RIMLogDeviceHealthTelemetry(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // al
  __int64 v4; // r8
  int v5; // r9d
  char v6; // al
  __int64 v7; // rax
  unsigned int v8; // ecx
  unsigned __int128 v9; // rax
  __int64 v10; // rax
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r9
  int v19; // [rsp+B0h] [rbp-80h] BYREF
  int v20; // [rsp+B4h] [rbp-7Ch] BYREF
  int v21; // [rsp+B8h] [rbp-78h] BYREF
  int v22; // [rsp+BCh] [rbp-74h] BYREF
  BOOL v23; // [rsp+C0h] [rbp-70h] BYREF
  int v24; // [rsp+C4h] [rbp-6Ch] BYREF
  int v25; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v26; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v27; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v28; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v29; // [rsp+E8h] [rbp-48h] BYREF
  const WCHAR *v30; // [rsp+F0h] [rbp-40h] BYREF
  const WCHAR *v31; // [rsp+F8h] [rbp-38h] BYREF
  const WCHAR *v32; // [rsp+100h] [rbp-30h] BYREF
  __int64 v33; // [rsp+128h] [rbp-8h] BYREF
  __int64 v34; // [rsp+130h] [rbp+0h] BYREF
  int v35; // [rsp+138h] [rbp+8h] BYREF

  v34 = a3;
  v33 = a2;
  if ( (unsigned int)dword_1C028D610 > 5 )
  {
    v3 = tlgKeywordOn((__int64)&dword_1C028D610, 0x400000000000LL);
    v5 = 0;
    if ( v3 )
    {
      v6 = *(_BYTE *)(v4 + 200);
      v26 = 0LL;
      if ( v6 < 0 && (v7 = *(_QWORD *)(v4 + 472)) != 0 )
        v8 = *(_DWORD *)(v7 + 768);
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
      if ( (v9 & 0x80u) != 0LL && (v10 = *(_QWORD *)(v4 + 472)) != 0 )
        v11 = -__CFSHR__(*(_DWORD *)(v10 + 360), 13);
      else
        v11 = 0;
      v12 = *(_DWORD *)(v4 + 184);
      LODWORD(v34) = v11;
      LODWORD(v33) = (v12 & 0x8000000u) >> 27;
      v35 = *(_DWORD *)(v4 + 152);
      v19 = *(_DWORD *)(v4 + 272);
      v20 = *(_DWORD *)(v4 + 288);
      if ( __CFSHR__(v12, 13) || (v13 = v12 << 20, v12 << 20 < 0) || (v12 & 0x100) != 0 )
      {
        v14 = 0;
        v13 = v12 << 20;
      }
      else
      {
        v14 = 1 - __CFSHR__(v12, 13);
      }
      v21 = v14;
      v22 = (unsigned __int8)(v12 & 0x80) >> 7;
      v23 = __CFSHR__(v12, 13);
      LOBYTE(v5) = v13 < 0;
      v25 = (unsigned __int16)(v12 & 0x2000) >> 13;
      v15 = *(unsigned __int8 *)(v4 + 48);
      v24 = v5;
      v30 = RimDeviceTypeToRimInputTypeString(v4, v15);
      v31 = *(const WCHAR **)(v16 + 216);
      v32 = L"RIMFillDeviceHealthInfo";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v17,
        byte_1C025D408,
        v16,
        v18,
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
        (__int64)&v35,
        (__int64)&v33,
        (__int64)&v34,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26);
    }
  }
}
