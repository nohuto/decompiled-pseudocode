/*
 * XREFs of ?LogData@VIDMM_TELEMETRY_PROCESS_ALLOCATED_CONTENT@@QEAAXPEAVDXGPROCESS@@PEAVDXGADAPTER@@@Z @ 0x1C00AD88C
 * Callers:
 *     ??1VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C00AD690 (--1VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U_tlgWrapperPtrSize@@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU_tlgWrapperPtrSize@@7@Z @ 0x1C00148FC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWra.c)
 *     _tlgKeywordOn @ 0x1C0014A7C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 */

void __fastcall VIDMM_TELEMETRY_PROCESS_ALLOCATED_CONTENT::LogData(
        VIDMM_TELEMETRY_PROCESS_ALLOCATED_CONTENT *this,
        struct DXGPROCESS *a2,
        struct DXGADAPTER *a3)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // r11
  __int128 v8; // xmm0
  __int16 v9; // [rsp+50h] [rbp-9h] BYREF
  unsigned __int16 *v10; // [rsp+58h] [rbp-1h] BYREF
  __int128 *v11; // [rsp+60h] [rbp+7h] BYREF
  __int64 v12; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v13; // [rsp+70h] [rbp+17h] BYREF
  int v14; // [rsp+78h] [rbp+1Fh]
  __int64 v15; // [rsp+80h] [rbp+27h] BYREF
  int v16; // [rsp+88h] [rbp+2Fh]
  __int128 v17; // [rsp+90h] [rbp+37h] BYREF

  if ( *((_BYTE *)this + 264) && (unsigned int)dword_1C0076048 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C0076048, 0x400000000008LL) )
    {
      v8 = *(_OWORD *)(v7 + 360);
      v13 = v5;
      v15 = v5 + 176;
      v10 = *(unsigned __int16 **)(v6 + 1744);
      v11 = &v17;
      v14 = 176;
      v16 = 88;
      v17 = v8;
      v9 = 0;
      v12 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v3,
        (int)&unk_1C0056163,
        v4,
        v5,
        (__int64)&v12,
        (__int64)&v9,
        (__int64 *)&v11,
        &v10,
        &v15,
        &v13);
    }
  }
}
