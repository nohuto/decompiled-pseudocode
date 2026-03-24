/*
 * XREFs of ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x1C00AC960
 * Callers:
 *     RIMCreateDev @ 0x1C0055530 (RIMCreateDev.c)
 *     RIMFreeDev @ 0x1C014FBF0 (RIMFreeDev.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C00ACB34 (RimDeviceTypeToRimInputTypeString.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U6@U6@U5@U3@U3@U3@U5@U5@U3@U3@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@88755577557@Z @ 0x1C014F25C (--$Write@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$03@@U_ea_1C014F25C.c)
 *     ?GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z @ 0x1C014F4E0 (-GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z.c)
 *     ?LogPointerDeviceStateChange@RimTelemetry@@CAXHGGPEBG0H0AEBU_GUID@@_KEEEQEAXJJJ22HH0KHQEAU_UNICODE_STRING@@400AEBUtagRECT@@5@Z @ 0x1C014F598 (-LogPointerDeviceStateChange@RimTelemetry@@CAXHGGPEBG0H0AEBU_GUID@@_KEEEQEAXJJJ22HH0KHQEAU_UNICO.c)
 *     ?PointerDeviceTypeToString@RimTelemetry@@CAPEBGW4tagHPD_TYPE@@@Z @ 0x1C014FB40 (-PointerDeviceTypeToString@RimTelemetry@@CAPEBGW4tagHPD_TYPE@@@Z.c)
 */

void __fastcall RimTelemetry::ReportRimDevice(int a1, int a2, struct RIMDEV *const a3)
{
  int v4; // esi
  unsigned __int16 v5; // r13
  __int64 v6; // r9
  char v7; // r8
  int v8; // edx
  int v9; // ecx
  int v10; // r14d
  const unsigned __int16 *v11; // r15
  int v12; // r12d
  int v13; // r10d
  __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // rbx
  const unsigned __int16 *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r11
  void *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r11
  char v26; // [rsp+F8h] [rbp-80h]
  char v27; // [rsp+F9h] [rbp-7Fh]
  char v28; // [rsp+FAh] [rbp-7Eh]
  unsigned __int16 v29; // [rsp+FCh] [rbp-7Ch]
  int v30; // [rsp+100h] [rbp-78h]
  int v31; // [rsp+108h] [rbp-70h]
  int v32; // [rsp+10Ch] [rbp-6Ch]
  int v33; // [rsp+110h] [rbp-68h]
  void *v35; // [rsp+118h] [rbp-60h]
  unsigned __int64 v36; // [rsp+120h] [rbp-58h]
  unsigned __int64 v37; // [rsp+128h] [rbp-50h]
  unsigned __int16 *v38; // [rsp+130h] [rbp-48h]
  unsigned __int16 *v39; // [rsp+138h] [rbp-40h]
  unsigned __int64 v40; // [rsp+158h] [rbp-20h]
  struct _UNICODE_STRING v42; // [rsp+170h] [rbp-8h] BYREF
  struct _UNICODE_STRING v43; // [rsp+180h] [rbp+8h] BYREF
  __int64 v44; // [rsp+190h] [rbp+18h]
  __int64 v45; // [rsp+198h] [rbp+20h]
  __int64 v46; // [rsp+1A0h] [rbp+28h]
  void *v47; // [rsp+1A8h] [rbp+30h]
  __int64 v48; // [rsp+1B0h] [rbp+38h]
  const unsigned __int16 *v49; // [rsp+1B8h] [rbp+40h]
  __int64 v50; // [rsp+1C0h] [rbp+48h]
  __int64 v51; // [rsp+1C8h] [rbp+50h]
  __int64 v52; // [rsp+1D0h] [rbp+58h]
  void *v53; // [rsp+1D8h] [rbp+60h]
  unsigned __int64 v54; // [rsp+1E0h] [rbp+68h]
  __int64 v55; // [rsp+1E8h] [rbp+70h]
  const unsigned __int16 *v56; // [rsp+1F0h] [rbp+78h]
  unsigned __int16 *v57; // [rsp+1F8h] [rbp+80h]
  unsigned __int16 *v58; // [rsp+200h] [rbp+88h]
  char v59; // [rsp+208h] [rbp+90h] BYREF
  char v60; // [rsp+218h] [rbp+A0h] BYREF

  v4 = 0;
  v5 = 0;
  v29 = 0;
  v39 = (unsigned __int16 *)RimDeviceTypeToRimInputTypeString(a3, *((unsigned __int8 *)a3 + 48));
  v38 = (unsigned __int16 *)*((_QWORD *)a3 + 27);
  if ( v7 == 2 )
  {
    v14 = *((_QWORD *)a3 + 59);
    v5 = *(_WORD *)(v14 + 16);
    v29 = *(_WORD *)(v14 + 18);
  }
  v8 = *((_DWORD *)a3 + 532);
  v9 = *((_DWORD *)a3 + 46);
  v10 = -__CFSHR__(v9, 14);
  if ( v8 )
  {
    v15 = v8 - 1;
    if ( v15 )
    {
      if ( v15 == 1 )
        v11 = L"Unknown";
      else
        v11 = L"Unexpected Value";
    }
    else
    {
      v11 = L"External";
    }
  }
  else
  {
    v11 = L"Integrated";
  }
  v37 = *((_QWORD *)a3 + 24);
  v28 = *((_BYTE *)a3 + 204);
  v27 = *((_BYTE *)a3 + 205);
  v26 = *((_BYTE *)a3 + 206);
  v35 = (void *)*((_QWORD *)a3 + 31);
  v31 = *((_DWORD *)a3 + 72);
  v12 = -__CFSHR__(v9, 8);
  v32 = *((_DWORD *)a3 + 68);
  v30 = *((_DWORD *)a3 + 38);
  v40 = v6 - *((_QWORD *)a3 + 8);
  v36 = v6 - *((_QWORD *)a3 + 9);
  if ( (v9 & 0x100) != 0 || (v13 = 1, !__CFSHR__(v9, 8)) )
    v13 = 0;
  v33 = v13;
  if ( a2 )
  {
    v16 = *(_QWORD *)(*((_QWORD *)a3 + 4) + 568LL);
    v43.Buffer = (PWSTR)&v59;
    v42.Buffer = (PWSTR)&v60;
    *(_QWORD *)&v43.Length = 0x100000LL;
    *(_QWORD *)&v42.Length = 0x100000LL;
    RimTelemetry::GetHidVidPidStrings(a3, &v43, &v42);
    v17 = (const unsigned __int16 *)RimTelemetry::PointerDeviceTypeToString(*(unsigned int *)(v16 + 24));
    LOBYTE(v4) = *(_DWORD *)(v16 + 24) == 6;
    RimTelemetry::LogPointerDeviceStateChange(
      a1,
      v29,
      v5,
      v39,
      v38,
      v10,
      v11,
      (const struct _GUID *)a3 + 132,
      v37,
      v28,
      v27,
      v26,
      v35,
      v31,
      v32,
      v30,
      v40,
      v36,
      v12,
      v33,
      v17,
      *(_DWORD *)(v16 + 720),
      v4,
      (struct _UNICODE_STRING *const)(v16 + 320),
      (struct _UNICODE_STRING *const)(v16 + 848),
      v43.Buffer,
      v42.Buffer,
      (const struct tagRECT *)(v16 + 140),
      (const struct tagRECT *)(v16 + 124));
    return;
  }
  if ( v5 < 0xFF00u )
  {
    if ( a1 )
    {
      if ( (unsigned int)dword_1C0249170 > 5 && tlgKeywordOn((__int64)&dword_1C0249170, 0x800000000000LL) )
      {
        v22 = &unk_1C021966E;
        v47 = v35;
        v44 = 2048LL;
        v45 = v20;
        v46 = v19;
        v48 = v21;
        v49 = v11;
LABEL_24:
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v18,
          v22);
      }
    }
    else if ( (unsigned int)dword_1C0249170 > 5 && tlgKeywordOn((__int64)&dword_1C0249170, 0x800000000000LL) )
    {
      v22 = &unk_1C02194C4;
      v53 = v35;
      v54 = v37;
      v57 = v38;
      v58 = v39;
      v50 = 2048LL;
      v51 = v24;
      v52 = v23;
      v55 = v25;
      v56 = v11;
      goto LABEL_24;
    }
  }
}
