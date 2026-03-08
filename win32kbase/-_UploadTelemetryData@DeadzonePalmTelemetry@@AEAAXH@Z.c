/*
 * XREFs of ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x1C01DFB6C
 * Callers:
 *     ?ClearSession@DeadzonePalmTelemetry@@QEAAXXZ @ 0x1C01DF358 (-ClearSession@DeadzonePalmTelemetry@@QEAAXXZ.c)
 *     ?UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z @ 0x1C01DF478 (-UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0159B5C (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?RtlStringCchLengthA@@YAJPEBD_KPEA_K@Z @ 0x1C01DF3A8 (-RtlStringCchLengthA@@YAJPEBD_KPEA_K@Z.c)
 *     ?RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1C01DF408 (-RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     ApiSetGetUserHandedness @ 0x1C0244CA8 (ApiSetGetUserHandedness.c)
 */

void __fastcall DeadzonePalmTelemetry::_UploadTelemetryData(DeadzonePalmTelemetry *this, int a2)
{
  const char *v2; // r12
  unsigned __int64 v4; // r15
  unsigned int v5; // ecx
  unsigned __int64 v6; // r13
  unsigned int v7; // r15d
  int v8; // ebx
  int v9; // esi
  int v10; // ebp
  int v11; // edi
  int UserHandedness; // eax
  __int64 v13; // rdx
  int v14; // ebx
  int v15; // [rsp+40h] [rbp-58h]
  __int64 v16; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v17; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v18; // [rsp+B0h] [rbp+18h] BYREF
  char *v19; // [rsp+B8h] [rbp+20h]

  v18 = 0LL;
  v2 = (char *)this + 12;
  v19 = (char *)this + 12;
  LODWORD(v16) = 0;
  v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v15 = v4;
  if ( a2 || (unsigned int)(v4 - *((_DWORD *)this + 2)) >= 0x2710 )
  {
    v5 = *((_DWORD *)this + 1);
    if ( v5 <= 0x280 )
    {
      *((_DWORD *)this + 1) = v5;
      v17 = 0;
      if ( !v5 )
        return;
    }
    else
    {
      *((_DWORD *)this + 1) = 640;
      v17 = 0;
    }
    v6 = v18;
    v7 = v17;
    do
    {
      v8 = *((_DWORD *)this + 4 * (v7 % 0x280) + 516);
      v9 = *((_DWORD *)this + 4 * (v7 % 0x280) + 518);
      v10 = *((_DWORD *)this + 4 * (v7 % 0x280) + 517);
      v11 = *((_DWORD *)this + 4 * (v7 % 0x280) + 515);
      UserHandedness = ApiSetGetUserHandedness();
      RtlStringCchPrintfA(v19, 2048 - v6, "%lu,%d,%lu,%lu,%lu;", UserHandedness, v11, v8, v10, v9);
      RtlStringCchLengthA(v2, v13, &v18);
      v6 = v18;
      if ( v18 + 32 < 0x800 )
      {
        v14 = v16;
      }
      else
      {
        if ( (unsigned int)dword_1C02C9330 > 5 && tlgKeywordOn((__int64)&dword_1C02C9330, 0x400000000000LL) )
        {
          v16 = (__int64)v2;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
            (__int64)&dword_1C02C9330,
            byte_1C02993F7,
            0LL,
            0LL,
            (void **)&v16);
        }
        v6 = 0LL;
        v18 = 0LL;
        v14 = 1;
        LODWORD(v16) = 1;
        memset((char *)this + 13, 0, 0x7FFuLL);
        *v2 = 0;
      }
      ++v7;
      v19 = (char *)this + v6 + 12;
    }
    while ( v7 < *((_DWORD *)this + 1) );
    if ( v6 )
    {
      if ( (unsigned int)dword_1C02C9330 > 5 && tlgKeywordOn((__int64)&dword_1C02C9330, 0x400000000000LL) )
      {
        v16 = (__int64)v2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          (__int64)&dword_1C02C9330,
          byte_1C02993F7,
          0LL,
          0LL,
          (void **)&v16);
      }
    }
    else if ( !v14 )
    {
      return;
    }
    *((_DWORD *)this + 1) = 0;
    memset((char *)this + 2060, 0, 0x2800uLL);
    memset((char *)this + 13, 0, 0x7FFuLL);
    *v2 = 0;
    *((_DWORD *)this + 2) = v15;
  }
}
