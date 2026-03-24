/*
 * XREFs of ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C005686C
 * Callers:
 *     rimDoRimDevChange @ 0x1C00533E4 (rimDoRimDevChange.c)
 *     _lambda_d1874fae19b79ef5393f0e0766cf3e96_::_lambda_invoker_cdecl_ @ 0x1C0150480 (_lambda_d1874fae19b79ef5393f0e0766cf3e96_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C0044CEC (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$00@@U6@U6@U1@U?$_tlgWrapperByVal@$03@@U7@U7@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$00@@883AEBU?$_tlgWrapperByVal@$03@@9933@Z @ 0x1C0150564 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U2@U.c)
 *     ?RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C0151478 (-RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?RimDeviceFlags@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C01514C0 (-RimDeviceFlags@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDeviceHidData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0151880 (-RimDeviceHidData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDeviceMonitorMapping@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0151900 (-RimDeviceMonitorMapping@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0151A44 (-RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 */

void __fastcall InputTraceLogging::RIM::RimDevice(const struct RIMDEV *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  int v5; // r9d
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // r8
  int v9; // ecx
  const char *v10; // rax
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  const char *v15; // rax
  unsigned int v16; // ecx
  char v17; // [rsp+B0h] [rbp-80h] BYREF
  int v18; // [rsp+B4h] [rbp-7Ch] BYREF
  int v19; // [rsp+B8h] [rbp-78h] BYREF
  int v20; // [rsp+BCh] [rbp-74h] BYREF
  __int64 v21; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v22; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v23; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v24; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v25; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v26; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v27; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v28; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v29; // [rsp+100h] [rbp-30h] BYREF
  __int64 v30; // [rsp+108h] [rbp-28h] BYREF
  __int64 v31; // [rsp+110h] [rbp-20h] BYREF
  __int64 v32; // [rsp+140h] [rbp+10h] BYREF
  __int64 v33; // [rsp+148h] [rbp+18h] BYREF

  if ( InputTraceLogging::Enabled(0, a2, a3, (unsigned int)a2) )
  {
    if ( (unsigned int)dword_1C024AA90 > 4 && tlgKeywordOn((__int64)&dword_1C024AA90, 256LL) )
    {
      v6 = *((_DWORD *)a1 + 532);
      v7 = v4 - *((_QWORD *)a1 + 9);
      v8 = v4 - *((_QWORD *)a1 + 8);
      v21 = v7;
      v18 = *((_DWORD *)a1 + 38);
      v19 = *((_DWORD *)a1 + 68);
      v20 = *((_DWORD *)a1 + 72);
      v23 = *((_QWORD *)a1 + 31);
      LOBYTE(v32) = *((_BYTE *)a1 + 206);
      LOBYTE(v33) = *((_BYTE *)a1 + 205);
      v17 = *((_BYTE *)a1 + 204);
      v24 = *((_QWORD *)a1 + 24);
      v25 = (__int64)a1 + 2132;
      v26 = (__int64)a1 + 2112;
      v22 = v8;
      if ( v6 )
      {
        v9 = v6 - 1;
        if ( v9 )
        {
          if ( v9 == 1 )
            v10 = "Unknown";
          else
            v10 = "UNKNOWN";
        }
        else
        {
          v10 = "External";
        }
      }
      else
      {
        v10 = "Integrated";
      }
      v27 = (__int64)v10;
      v28 = (__int64)a1 + 208;
      v11 = v5 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              if ( v14 == 1 )
                v15 = "Reset";
              else
                v15 = (const char *)&unk_1C0224470;
            }
            else
            {
              v15 = "Destroyed";
            }
          }
          else
          {
            v15 = "Closed";
          }
        }
        else
        {
          v15 = "Opened";
        }
      }
      else
      {
        v15 = "Created";
      }
      v16 = *((unsigned __int8 *)a1 + 48);
      v29 = (__int64)v15;
      v30 = (__int64)InputTraceLogging::RimDevTypeToString(v16);
      v31 = (__int64)a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (int)&dword_1C024AA90,
        (int)&dword_1C021A4A4,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v17,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v23,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v22,
        (__int64)&v21);
    }
    InputTraceLogging::RIM::RimDeviceFlags(a1);
    if ( (*((_DWORD *)a1 + 50) & 0x80u) == 0 )
    {
      if ( *((_BYTE *)a1 + 48) == 2 )
        InputTraceLogging::RIM::RimDeviceHidData(a1);
    }
    else
    {
      InputTraceLogging::RIM::RimDevicePointerData(a1);
    }
    if ( *((_DWORD *)a1 + 336) )
      InputTraceLogging::RIM::RimDeviceMonitorMapping(a1);
  }
}
