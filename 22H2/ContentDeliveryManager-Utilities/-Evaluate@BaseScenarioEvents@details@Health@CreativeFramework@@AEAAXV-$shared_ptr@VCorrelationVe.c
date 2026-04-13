/*
 * XREFs of ?Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18002D3F0
 * Callers:
 *     ??$SetEventValue@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18002CF2C (--$SetEventValue@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800041B0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?ReadTrackingInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x18002D0C4 (-ReadTrackingInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?ReadPlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x18002D160 (-ReadPlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?WriteHealthEvaluationInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x18002D2F8 (-WriteHealthEvaluationInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180039178 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     ??$PlacementHealthEvaluation@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG$$QEAG$$QEA_KAEBE00PEBD@Z @ 0x18003B4B0 (--$PlacementHealthEvaluation@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@Cont.c)
 *     ??$ReportPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG$$QEAG$$QEA_KAEBE00PEBD@Z @ 0x18003B590 (--$ReportPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentD.c)
 *     ??$ReportSampledPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG$$QEAG$$QEA_KAEBE00PEBD@Z @ 0x18003B694 (--$ReportSampledPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@C.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CreativeFramework::Health::details::BaseScenarioEvents::Evaluate(
        CreativeFramework::Health::details::BaseScenarioEvents *this,
        char *a2)
{
  _DWORD *v4; // rdi
  const WCHAR *v5; // rdx
  unsigned __int64 v6; // r15
  __int64 v7; // r13
  __int16 v8; // si
  unsigned __int64 v9; // r8
  unsigned __int64 *v10; // r14
  unsigned __int64 v11; // rcx
  unsigned __int8 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r8
  int v15; // r9d
  __int64 v16; // rcx
  void **v17; // rax
  void **v18; // rax
  char *v19; // rdi
  char *v20; // rax
  __int16 v21; // r8
  __int64 v22; // rcx
  int v23; // r9d
  char v24; // cl
  char v25; // dl
  void **v26; // rax
  __int64 v27; // rcx
  void **v28; // rax
  void **v29; // rax
  volatile signed __int32 *v30; // rbx
  LPDWORD pcbData; // [rsp+38h] [rbp-E0h]
  __int16 v32; // [rsp+98h] [rbp-80h] BYREF
  __int16 v33; // [rsp+9Ah] [rbp-7Eh] BYREF
  __int16 v34; // [rsp+9Ch] [rbp-7Ch] BYREF
  DWORD v35; // [rsp+A0h] [rbp-78h] BYREF
  void **v36; // [rsp+A8h] [rbp-70h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+B0h] [rbp-68h] BYREF
  struct _FILETIME v38; // [rsp+B8h] [rbp-60h] BYREF
  char *v39; // [rsp+C0h] [rbp-58h] BYREF
  void **v40; // [rsp+C8h] [rbp-50h] BYREF
  void **v41; // [rsp+D0h] [rbp-48h] BYREF
  __int64 v42; // [rsp+D8h] [rbp-40h] BYREF
  char *v43; // [rsp+E0h] [rbp-38h] BYREF
  void **v44; // [rsp+E8h] [rbp-30h] BYREF
  __int64 v45; // [rsp+F0h] [rbp-28h] BYREF
  char *v46; // [rsp+F8h] [rbp-20h] BYREF
  void **v47; // [rsp+100h] [rbp-18h] BYREF
  void **v48; // [rsp+108h] [rbp-10h] BYREF
  _QWORD v49[2]; // [rsp+110h] [rbp-8h] BYREF
  void *v50[2]; // [rsp+120h] [rbp+8h] BYREF
  __int64 v51; // [rsp+130h] [rbp+18h]
  unsigned __int64 v52; // [rsp+138h] [rbp+20h]
  void *v53[2]; // [rsp+140h] [rbp+28h] BYREF
  __int64 v54; // [rsp+150h] [rbp+38h]
  unsigned __int64 v55; // [rsp+158h] [rbp+40h]
  wchar_t Buffer[512]; // [rsp+168h] [rbp+50h] BYREF
  wchar_t Src[512]; // [rsp+568h] [rbp+450h] BYREF

  v49[1] = -2LL;
  v39 = a2;
  CreativeFramework::Health::details::BaseScenarioEvents::ReadTrackingInfo(this);
  CreativeFramework::Health::details::BaseScenarioEvents::ReadPlacementReportedInfo(this);
  v4 = (_DWORD *)((char *)this + 144);
  *(_WORD *)((char *)this + 253) = 256;
  v35 = 36;
  v5 = (const WCHAR *)((char *)this + 216);
  if ( *((_QWORD *)this + 30) >= 8uLL )
    v5 = *(const WCHAR **)v5;
  if ( RegGetValueW(HKEY_CURRENT_USER, v5, L"HealthEvaluation", 8u, 0LL, (char *)this + 144, &v35)
    || v35 <= 4
    || *(_BYTE *)v4 != 4 )
  {
    *v4 = 0;
    *(_BYTE *)v4 = 4;
    *(_OWORD *)((char *)this + 152) = 0LL;
    *(_OWORD *)((char *)this + 168) = 0LL;
  }
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v6 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  v36 = (void **)*((_QWORD *)this + 19);
  v7 = (*(__int64 (__fastcall **)(CreativeFramework::Health::details::BaseScenarioEvents *))(*(_QWORD *)this + 8LL))(this);
  if ( (v7 & 2) != 0 )
    v8 = 2;
  else
    v8 = (v7 & 1) != 0;
  GetSystemTimeAsFileTime(&v38);
  v9 = v38.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&v38) << 32);
  v10 = (unsigned __int64 *)((char *)this + 168);
  if ( *((_WORD *)this + 81) != v8 || (v11 = *v10) == 0 )
  {
    *((_WORD *)this + 81) = v8;
    *((_BYTE *)this + 176) = 0;
    *v10 = v9;
    *((_BYTE *)this + 253) = 1;
    v11 = v9;
  }
  v12 = *((_BYTE *)this + 176);
  if ( v12 != 0xFF )
  {
    *((_BYTE *)this + 176) = ++v12;
    *((_BYTE *)this + 253) = 1;
  }
  if ( v8 != 2
    && ((unsigned int)(v11 - 2028888064)
      + (((unsigned int)v11 + (v11 & 0xFFFFFFFF00000000uLL) + 144000000000LL) & 0xFFFFFFFF00000000uLL) > v9
     || v12 <= 3u) )
  {
    v8 = *((_WORD *)this + 80);
  }
  StringCchPrintfW(
    Buffer,
    512LL,
    L"{ %llu; %llu; %llu; %llu; %llu; %llu; %llu; %llu; %u; %u; %u; %u; %u; %u; %u }",
    *((_QWORD *)this + 2),
    *((_QWORD *)this + 3),
    *((_QWORD *)this + 4),
    *((_QWORD *)this + 5),
    *((_QWORD *)this + 6),
    *((_QWORD *)this + 7),
    *((_QWORD *)this + 8),
    *((_QWORD *)this + 9),
    *((_DWORD *)this + 20),
    *((_DWORD *)this + 21),
    *((_DWORD *)this + 22),
    *((_DWORD *)this + 23),
    *((_BYTE *)this + 96) != 0,
    *((_BYTE *)this + 97) != 0,
    *((_BYTE *)this + 98) != 0);
  v55 = 7LL;
  v54 = 0LL;
  LOWORD(v53[0]) = 0;
  if ( Buffer[0] )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( Buffer[v13] );
  }
  std::wstring::assign(v53, Buffer);
  LODWORD(pcbData) = *((_DWORD *)this + 34);
  StringCchPrintfW(
    Src,
    512LL,
    L"{ %llu; %llu; %llu; %u }",
    *((_QWORD *)this + 14),
    *((_QWORD *)this + 15),
    *((_QWORD *)this + 16),
    pcbData);
  v52 = 7LL;
  v51 = 0LL;
  LOWORD(v50[0]) = 0;
  if ( Src[0] )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( Src[v14] );
  }
  std::wstring::assign(v50, Src);
  v16 = *(_QWORD *)a2 + 8LL;
  v17 = v50;
  if ( v52 >= 8 )
    v17 = (void **)v50[0];
  v40 = v17;
  v18 = v53;
  if ( v55 >= 8 )
    v18 = (void **)v53[0];
  v41 = v18;
  v42 = v7;
  v32 = v8;
  v19 = (char *)this + 184;
  if ( *((_QWORD *)this + 26) < 8uLL )
    v20 = (char *)this + 184;
  else
    v20 = *(char **)v19;
  v43 = v20;
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::PlacementHealthEvaluation<unsigned short const *,unsigned short,unsigned __int64,unsigned char const &,unsigned short const *,unsigned short const *>(
    (unsigned int)&v43,
    (unsigned int)&v32,
    (unsigned int)&v42,
    v15,
    (__int64)&v41,
    (__int64)&v40,
    v16);
  v21 = *((_WORD *)this + 80);
  if ( *((_QWORD *)this + 19) <= *v10 )
  {
    v22 = 1LL;
  }
  else
  {
    v22 = 10LL;
    if ( *((_BYTE *)this + 177) < 0xAu )
      v22 = *((unsigned __int8 *)this + 177);
  }
  v23 = (int)v36;
  if ( v21 != v8
    || !v36
    || (unsigned int)(711573504 * v22 + (_DWORD)v36)
     + ((((unsigned __int64)v36 & 0xFFFFFFFF00000000uLL) + 864000000000LL * v22 + (unsigned int)v36) & 0xFFFFFFFF00000000uLL) <= v6 )
  {
    *((_WORD *)this + 80) = v8;
    *((_QWORD *)this + 19) = v6;
    if ( v21 == v8 )
    {
      v24 = *((_BYTE *)this + 177);
      v25 = v24 + 1;
      if ( v24 == -1 )
        v25 = -1;
    }
    else
    {
      v25 = 1;
    }
    *((_BYTE *)this + 177) = v25;
    *((_BYTE *)this + 253) = 1;
    v26 = v50;
    v27 = *(_QWORD *)a2 + 8LL;
    if ( *((_BYTE *)this + 248) )
    {
      if ( v52 >= 8 )
        v26 = (void **)v50[0];
      v36 = v26;
      v28 = v53;
      if ( v55 >= 8 )
        v28 = (void **)v53[0];
      v44 = v28;
      v45 = v7;
      v33 = v8;
      if ( *((_QWORD *)this + 26) >= 8uLL )
        v19 = *(char **)v19;
      v46 = v19;
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportPlacementHealth<unsigned short const *,unsigned short,unsigned __int64,unsigned char const &,unsigned short const *,unsigned short const *>(
        (unsigned int)&v46,
        (unsigned int)&v33,
        (unsigned int)&v45,
        v23,
        (__int64)&v44,
        (__int64)&v36,
        v27);
    }
    else
    {
      if ( v52 >= 8 )
        v26 = (void **)v50[0];
      v47 = v26;
      v29 = v53;
      if ( v55 >= 8 )
        v29 = (void **)v53[0];
      v48 = v29;
      v49[0] = v7;
      v34 = v8;
      if ( *((_QWORD *)this + 26) >= 8uLL )
        v19 = *(char **)v19;
      v39 = v19;
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportSampledPlacementHealth<unsigned short const *,unsigned short,unsigned __int64,unsigned char const &,unsigned short const *,unsigned short const *>(
        (unsigned int)&v39,
        (unsigned int)&v34,
        (unsigned int)v49,
        v23,
        (__int64)&v48,
        (__int64)&v47,
        v27);
    }
  }
  CreativeFramework::Health::details::BaseScenarioEvents::WriteHealthEvaluationInfo(this);
  if ( v52 >= 8 )
    operator delete(v50[0]);
  v52 = 7LL;
  v51 = 0LL;
  LOWORD(v50[0]) = 0;
  if ( v55 >= 8 )
    operator delete(v53[0]);
  v55 = 7LL;
  v54 = 0LL;
  LOWORD(v53[0]) = 0;
  v30 = (volatile signed __int32 *)*((_QWORD *)a2 + 1);
  if ( v30 && _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v30)(v30);
    if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
  }
}
