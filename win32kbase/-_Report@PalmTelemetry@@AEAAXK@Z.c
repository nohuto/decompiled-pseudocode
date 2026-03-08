/*
 * XREFs of ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1C01DF7B8
 * Callers:
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x1C00F1B46 (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     Feature_PenTapped_ReportUsage @ 0x1C00DF604 (Feature_PenTapped_ReportUsage.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0159B5C (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?RtlStringCchLengthA@@YAJPEBD_KPEA_K@Z @ 0x1C01DF3A8 (-RtlStringCchLengthA@@YAJPEBD_KPEA_K@Z.c)
 *     ?RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1C01DF408 (-RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     ApiSetGetUserHandedness @ 0x1C0244CA8 (ApiSetGetUserHandedness.c)
 */

void __fastcall PalmTelemetry::_Report(PalmTelemetry *this, int a2)
{
  unsigned __int64 v2; // r13
  int v4; // eax
  unsigned int v5; // ecx
  __int64 v6; // r8
  int v7; // r15d
  int v8; // edi
  int v9; // esi
  int v10; // r14d
  int v11; // ebp
  int v12; // ebx
  int UserHandedness; // eax
  __int64 v14; // rdx
  char *v15; // [rsp+60h] [rbp-48h]
  __int64 v16; // [rsp+B0h] [rbp+8h] BYREF
  unsigned int v17; // [rsp+C0h] [rbp+18h]
  unsigned __int64 v18; // [rsp+C8h] [rbp+20h] BYREF

  v2 = 0LL;
  v18 = 0LL;
  v4 = *((_DWORD *)this + 4);
  v15 = (char *)this + 28;
  if ( !v4 || (unsigned int)(a2 - v4) >= 0x2710 )
  {
    v5 = 0;
    v17 = 0;
    if ( *((_DWORD *)this + 3) )
    {
      do
      {
        v6 = (v5 + *((_DWORD *)this + 6)) % 0x1AA;
        if ( v5 )
          LODWORD(v16) = 0;
        else
          LODWORD(v16) = *((_DWORD *)this + 519);
        v7 = *((_DWORD *)this + 6 * v6 + 525);
        v8 = *((_DWORD *)this + 6 * v6 + 521);
        v9 = *((_DWORD *)this + 6 * v6 + 520);
        v10 = *((_DWORD *)this + 6 * v6 + 524) / 100;
        v11 = *((_DWORD *)this + 6 * v6 + 523) / 100;
        v12 = *((_DWORD *)this + 6 * v6 + 522);
        UserHandedness = ApiSetGetUserHandedness();
        RtlStringCchPrintfA(
          v15,
          2048 - v2,
          "%lu,%lu,0x%x,0x%x,%lu,%lu,%lu,%lu;",
          UserHandedness,
          v9,
          v8,
          v12,
          v11,
          v10,
          v7,
          v16);
        RtlStringCchLengthA((const char *)this + 28, v14, &v18);
        v2 = v18;
        if ( v18 + 48 >= 0x800 )
        {
          Feature_PenTapped_ReportUsage();
          if ( (unsigned int)dword_1C02C93A0 > 5 && tlgKeywordOn((__int64)&dword_1C02C93A0, 0x400000000000LL) )
          {
            v16 = (__int64)this + 28;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
              (__int64)&dword_1C02C93A0,
              byte_1C0299428,
              0LL,
              0LL,
              (void **)&v16);
          }
          memset((char *)this + 28, 0, 0x800uLL);
          v2 = 0LL;
          v18 = 0LL;
        }
        v5 = v17 + 1;
        v15 = (char *)this + v2 + 28;
        v17 = v5;
      }
      while ( v5 < *((_DWORD *)this + 3) );
      if ( v2 )
      {
        Feature_PenTapped_ReportUsage();
        if ( (unsigned int)dword_1C02C93A0 > 5 && tlgKeywordOn((__int64)&dword_1C02C93A0, 0x400000000000LL) )
        {
          v16 = (__int64)this + 28;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
            (__int64)&dword_1C02C93A0,
            byte_1C0299428,
            0LL,
            0LL,
            (void **)&v16);
        }
      }
    }
    *((_DWORD *)this + 4) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
}
