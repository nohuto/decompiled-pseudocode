/*
 * XREFs of ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1C0180D8C
 * Callers:
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x1C0180944 (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     Feature_PenTapped_ReportUsage @ 0x1C00CCB38 (Feature_PenTapped_ReportUsage.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0128388 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?RtlStringCchLengthA@@YAJPEBD_KPEA_K@Z @ 0x1C0180868 (-RtlStringCchLengthA@@YAJPEBD_KPEA_K@Z.c)
 *     ?RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1C01808C8 (-RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     ApiSetGetUserHandedness @ 0x1C01CF3D0 (ApiSetGetUserHandedness.c)
 */

void __fastcall PalmTelemetry::_Report(PalmTelemetry *this, int a2)
{
  unsigned __int64 v2; // r15
  char *v3; // r12
  int v5; // eax
  unsigned int v6; // r13d
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // rbx
  int v10; // esi
  int v11; // edi
  int UserHandedness; // eax
  __int64 v13; // rdx
  __int64 v14; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+B0h] [rbp+18h] BYREF
  char *Dest; // [rsp+B8h] [rbp+20h] BYREF

  v2 = 0LL;
  v3 = (char *)this + 28;
  v15 = 0LL;
  v5 = *((_DWORD *)this + 4);
  Dest = (char *)this + 28;
  if ( !v5 || (unsigned int)(a2 - v5) >= 0x2710 )
  {
    v6 = 0;
    if ( *((_DWORD *)this + 3) )
    {
      do
      {
        v7 = (v6 + *((_DWORD *)this + 6)) % 0x1AA;
        if ( v6 )
          LODWORD(v14) = 0;
        else
          LODWORD(v14) = *((_DWORD *)this + 519);
        v8 = 3 * v7;
        v9 = 3 * v7;
        v10 = *((_DWORD *)this + 6 * v7 + 524) / 100;
        v11 = *((_DWORD *)this + 6 * v7 + 523) / 100;
        UserHandedness = ApiSetGetUserHandedness();
        RtlStringCchPrintfA(
          Dest,
          2048 - v2,
          "%lu,%lu,0x%x,0x%x,%lu,%lu,%lu,%lu;",
          UserHandedness,
          *((_DWORD *)this + 2 * v8 + 520),
          *((_DWORD *)this + 2 * v8 + 521),
          *((_DWORD *)this + 2 * v9 + 522),
          v11,
          v10,
          *((_DWORD *)this + 2 * v8 + 525),
          v14);
        RtlStringCchLengthA(v3, v13, &v15);
        v2 = v15;
        if ( v15 + 48 >= 0x800 )
        {
          Feature_PenTapped_ReportUsage();
          if ( (unsigned int)dword_1C0249218 > 5 && tlgKeywordOn((__int64)&dword_1C0249218, 0x400000000000LL) )
          {
            v14 = (__int64)v3;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
              (__int64)&dword_1C0249218,
              byte_1C021CC03,
              0LL,
              0LL,
              (void **)&v14);
          }
          memset(v3, 0, 0x800uLL);
          v2 = 0LL;
          v15 = 0LL;
        }
        ++v6;
        Dest = &v3[v2];
      }
      while ( v6 < *((_DWORD *)this + 3) );
      if ( v2 )
      {
        Feature_PenTapped_ReportUsage();
        if ( (unsigned int)dword_1C0249218 > 5 && tlgKeywordOn((__int64)&dword_1C0249218, 0x400000000000LL) )
        {
          Dest = v3;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
            (__int64)&dword_1C0249218,
            byte_1C021CC03,
            0LL,
            0LL,
            (void **)&Dest);
        }
      }
    }
    *((_DWORD *)this + 4) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
}
