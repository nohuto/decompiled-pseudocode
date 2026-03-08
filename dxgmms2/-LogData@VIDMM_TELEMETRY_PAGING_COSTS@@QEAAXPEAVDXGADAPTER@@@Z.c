/*
 * XREFs of ?LogData@VIDMM_TELEMETRY_PAGING_COSTS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00F4494
 * Callers:
 *     ?LogTeardownTelemetry@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00E4D1C (-LogTeardownTelemetry@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0014A7C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U_tlgWrapperPtrSize@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU_tlgWrapperPtrSize@@@Z @ 0x1C0030940 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U_tlgWrapperPtrSize@@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU_tlgWrapperPtrSize@@66@Z @ 0x1C00309FC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapBuffer@U_UNIC_ea_1C00309FC.c)
 *     ??0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C0030F5C (--0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?ConvertTimingData@VIDMM_TELEMETRY_PAGING_COSTS@@CAXPEBUTimingData@1@PEAU21@@Z @ 0x1C00F3FCC (-ConvertTimingData@VIDMM_TELEMETRY_PAGING_COSTS@@CAXPEBUTimingData@1@PEAU21@@Z.c)
 */

void __fastcall VIDMM_TELEMETRY_PAGING_COSTS::LogData(VIDMM_TELEMETRY_PAGING_COSTS *this, struct DXGADAPTER *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int16 v28; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v29; // [rsp+52h] [rbp-AEh] BYREF
  __int16 v30; // [rsp+54h] [rbp-ACh] BYREF
  __int16 v31; // [rsp+56h] [rbp-AAh] BYREF
  __int16 v32; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v33; // [rsp+5Ah] [rbp-A6h] BYREF
  __int16 v34; // [rsp+5Ch] [rbp-A4h] BYREF
  __int16 v35; // [rsp+5Eh] [rbp-A2h] BYREF
  unsigned __int16 *v36; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int16 *v38; // [rsp+70h] [rbp-90h] BYREF
  __int64 v39; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int16 *v40; // [rsp+80h] [rbp-80h] BYREF
  __int64 v41; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int16 *v42; // [rsp+90h] [rbp-70h] BYREF
  __int64 v43; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int16 *v44; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v45; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int16 *v46; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v47; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int16 *v48; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v49; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int16 *v50; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v51; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v52; // [rsp+E0h] [rbp-20h] BYREF
  char v53; // [rsp+E8h] [rbp-18h]
  __int64 v54; // [rsp+F0h] [rbp-10h] BYREF
  int v55; // [rsp+F8h] [rbp-8h]
  _BYTE *v56; // [rsp+100h] [rbp+0h] BYREF
  int v57; // [rsp+108h] [rbp+8h]
  _BYTE *v58; // [rsp+110h] [rbp+10h] BYREF
  int v59; // [rsp+118h] [rbp+18h]
  _BYTE *v60; // [rsp+120h] [rbp+20h] BYREF
  int v61; // [rsp+128h] [rbp+28h]
  _BYTE *v62; // [rsp+130h] [rbp+30h] BYREF
  int v63; // [rsp+138h] [rbp+38h]
  _BYTE *v64; // [rsp+140h] [rbp+40h] BYREF
  int v65; // [rsp+148h] [rbp+48h]
  _BYTE *v66; // [rsp+150h] [rbp+50h] BYREF
  int v67; // [rsp+158h] [rbp+58h]
  _BYTE *v68; // [rsp+160h] [rbp+60h] BYREF
  int v69; // [rsp+168h] [rbp+68h]
  _BYTE *v70; // [rsp+170h] [rbp+70h] BYREF
  int v71; // [rsp+178h] [rbp+78h]
  _BYTE *v72; // [rsp+180h] [rbp+80h] BYREF
  int v73; // [rsp+188h] [rbp+88h]
  _BYTE *v74; // [rsp+190h] [rbp+90h] BYREF
  int v75; // [rsp+198h] [rbp+98h]
  _BYTE *v76; // [rsp+1A0h] [rbp+A0h] BYREF
  int v77; // [rsp+1A8h] [rbp+A8h]
  _BYTE *v78; // [rsp+1B0h] [rbp+B0h] BYREF
  int v79; // [rsp+1B8h] [rbp+B8h]
  _BYTE *v80; // [rsp+1C0h] [rbp+C0h] BYREF
  int v81; // [rsp+1C8h] [rbp+C8h]
  _BYTE *v82; // [rsp+1D0h] [rbp+D0h] BYREF
  int v83; // [rsp+1D8h] [rbp+D8h]
  _BYTE *v84; // [rsp+1E0h] [rbp+E0h] BYREF
  int v85; // [rsp+1E8h] [rbp+E8h]
  _BYTE *v86; // [rsp+1F0h] [rbp+F0h] BYREF
  int v87; // [rsp+1F8h] [rbp+F8h]
  _BYTE *v88; // [rsp+200h] [rbp+100h] BYREF
  int v89; // [rsp+208h] [rbp+108h]
  _BYTE *v90; // [rsp+210h] [rbp+110h] BYREF
  int v91; // [rsp+218h] [rbp+118h]
  _BYTE *v92; // [rsp+220h] [rbp+120h] BYREF
  int v93; // [rsp+228h] [rbp+128h]
  _BYTE *v94; // [rsp+230h] [rbp+130h] BYREF
  int v95; // [rsp+238h] [rbp+138h]
  _BYTE *v96; // [rsp+240h] [rbp+140h] BYREF
  int v97; // [rsp+248h] [rbp+148h]
  _BYTE v98[448]; // [rsp+250h] [rbp+150h] BYREF

  if ( (*((_DWORD *)a2 + 109) & 0x10) == 0 )
  {
    DXGAUTOPUSHLOCKFASTSHARED::DXGAUTOPUSHLOCKFASTSHARED(
      (DXGAUTOPUSHLOCKFASTSHARED *)&v52,
      (VIDMM_TELEMETRY_PAGING_COSTS *)((char *)this + 3168));
    if ( (unsigned int)dword_1C0076048 > 5 && tlgKeywordOn((__int64)&dword_1C0076048, 0x400000000008LL) )
    {
      v55 = 88;
      v54 = (__int64)this + 3080;
      v36 = (unsigned __int16 *)*((_QWORD *)a2 + 218);
      v28 = 0;
      v37 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize>(
        v4,
        byte_1C0055F4D,
        v5,
        v6,
        (__int64)&v37,
        (__int64)&v28,
        &v36,
        &v54);
    }
    memset(v98, 0, 0x1B8uLL);
    VIDMM_TELEMETRY_PAGING_COSTS::ConvertTimingData(this, (struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *)v98);
    if ( (unsigned int)dword_1C0076048 > 5 && tlgKeywordOn((__int64)&dword_1C0076048, 0x400000000008LL) )
    {
      v57 = 176;
      v56 = &v98[264];
      v59 = 176;
      v58 = &v98[88];
      v60 = v98;
      v38 = (unsigned __int16 *)*((_QWORD *)a2 + 218);
      v61 = 88;
      v29 = 0;
      v39 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v7,
        byte_1C0055EDB,
        v8,
        v9,
        (__int64)&v39,
        (__int64)&v29,
        &v38,
        (__int64 *)&v60,
        (__int64 *)&v58,
        (__int64 *)&v56);
    }
    VIDMM_TELEMETRY_PAGING_COSTS::ConvertTimingData(
      (VIDMM_TELEMETRY_PAGING_COSTS *)((char *)this + 440),
      (struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *)v98);
    if ( (unsigned int)dword_1C0076048 > 5 && tlgKeywordOn((__int64)&dword_1C0076048, 0x400000000008LL) )
    {
      v63 = 176;
      v62 = &v98[264];
      v65 = 176;
      v64 = &v98[88];
      v66 = v98;
      v40 = (unsigned __int16 *)*((_QWORD *)a2 + 218);
      v67 = 88;
      v30 = 0;
      v41 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v10,
        byte_1C0055E6D,
        v11,
        v12,
        (__int64)&v41,
        (__int64)&v30,
        &v40,
        (__int64 *)&v66,
        (__int64 *)&v64,
        (__int64 *)&v62);
    }
    VIDMM_TELEMETRY_PAGING_COSTS::ConvertTimingData(
      (VIDMM_TELEMETRY_PAGING_COSTS *)((char *)this + 880),
      (struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *)v98);
    if ( (unsigned int)dword_1C0076048 > 5 && tlgKeywordOn((__int64)&dword_1C0076048, 0x400000000008LL) )
    {
      v69 = 176;
      v68 = &v98[264];
      v71 = 176;
      v70 = &v98[88];
      v72 = v98;
      v42 = (unsigned __int16 *)*((_QWORD *)a2 + 218);
      v73 = 88;
      v31 = 0;
      v43 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v13,
        byte_1C0055DFF,
        v14,
        v15,
        (__int64)&v43,
        (__int64)&v31,
        &v42,
        (__int64 *)&v72,
        (__int64 *)&v70,
        (__int64 *)&v68);
    }
    VIDMM_TELEMETRY_PAGING_COSTS::ConvertTimingData(
      (VIDMM_TELEMETRY_PAGING_COSTS *)((char *)this + 1320),
      (struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *)v98);
    if ( (unsigned int)dword_1C0076048 > 5 && tlgKeywordOn((__int64)&dword_1C0076048, 0x400000000008LL) )
    {
      v75 = 176;
      v74 = &v98[264];
      v77 = 176;
      v76 = &v98[88];
      v78 = v98;
      v44 = (unsigned __int16 *)*((_QWORD *)a2 + 218);
      v79 = 88;
      v32 = 0;
      v45 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v16,
        byte_1C0055D8F,
        v17,
        v18,
        (__int64)&v45,
        (__int64)&v32,
        &v44,
        (__int64 *)&v78,
        (__int64 *)&v76,
        (__int64 *)&v74);
    }
    VIDMM_TELEMETRY_PAGING_COSTS::ConvertTimingData(
      (VIDMM_TELEMETRY_PAGING_COSTS *)((char *)this + 1760),
      (struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *)v98);
    if ( (unsigned int)dword_1C0076048 > 5 && tlgKeywordOn((__int64)&dword_1C0076048, 0x400000000008LL) )
    {
      v81 = 176;
      v80 = &v98[264];
      v83 = 176;
      v82 = &v98[88];
      v84 = v98;
      v46 = (unsigned __int16 *)*((_QWORD *)a2 + 218);
      v85 = 88;
      v33 = 0;
      v47 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v19,
        byte_1C0055D1A,
        v20,
        v21,
        (__int64)&v47,
        (__int64)&v33,
        &v46,
        (__int64 *)&v84,
        (__int64 *)&v82,
        (__int64 *)&v80);
    }
    VIDMM_TELEMETRY_PAGING_COSTS::ConvertTimingData(
      (VIDMM_TELEMETRY_PAGING_COSTS *)((char *)this + 2200),
      (struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *)v98);
    if ( (unsigned int)dword_1C0076048 > 5 && tlgKeywordOn((__int64)&dword_1C0076048, 0x400000000008LL) )
    {
      v87 = 176;
      v86 = &v98[264];
      v89 = 176;
      v88 = &v98[88];
      v90 = v98;
      v48 = (unsigned __int16 *)*((_QWORD *)a2 + 218);
      v91 = 88;
      v34 = 0;
      v49 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v22,
        byte_1C0055CA8,
        v23,
        v24,
        (__int64)&v49,
        (__int64)&v34,
        &v48,
        (__int64 *)&v90,
        (__int64 *)&v88,
        (__int64 *)&v86);
    }
    VIDMM_TELEMETRY_PAGING_COSTS::ConvertTimingData(
      (VIDMM_TELEMETRY_PAGING_COSTS *)((char *)this + 2640),
      (struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *)v98);
    if ( (unsigned int)dword_1C0076048 > 5 && tlgKeywordOn((__int64)&dword_1C0076048, 0x400000000008LL) )
    {
      v93 = 176;
      v92 = &v98[264];
      v95 = 176;
      v94 = &v98[88];
      v96 = v98;
      v50 = (unsigned __int16 *)*((_QWORD *)a2 + 218);
      v97 = 88;
      v35 = 0;
      v51 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v25,
        byte_1C0055C3C,
        v26,
        v27,
        (__int64)&v51,
        (__int64)&v35,
        &v50,
        (__int64 *)&v96,
        (__int64 *)&v94,
        (__int64 *)&v92);
    }
    if ( v53 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v52 + 16));
      ExReleasePushLockSharedEx(v52, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
