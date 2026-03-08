/*
 * XREFs of ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x1C00875D8
 * Callers:
 *     RIMCreateDev @ 0x1C0036CBC (RIMCreateDev.c)
 *     RIMFreeDev @ 0x1C019DE20 (RIMFreeDev.c)
 * Callees:
 *     RimDeviceTypeToRimInputTypeString @ 0x1C00877F0 (RimDeviceTypeToRimInputTypeString.c)
 *     ?LogNonPointerDeviceStateChange@RimTelemetry@@CAXHGGPEBG0H0AEBU_GUID@@_KEEEQEAXJJJ22HH@Z @ 0x1C0087818 (-LogNonPointerDeviceStateChange@RimTelemetry@@CAXHGGPEBG0H0AEBU_GUID@@_KEEEQEAXJJJ22HH@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z @ 0x1C019D710 (-GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z.c)
 *     ?LogPointerDeviceStateChange@RimTelemetry@@CAXHGGPEBG0H0AEBU_GUID@@_KEEEQEAXJJJ22HH0KHQEAU_UNICODE_STRING@@400AEBUtagRECT@@5@Z @ 0x1C019D7C8 (-LogPointerDeviceStateChange@RimTelemetry@@CAXHGGPEBG0H0AEBU_GUID@@_KEEEQEAXJJJ22HH0KHQEAU_UNICO.c)
 *     ?PointerDeviceTypeToString@RimTelemetry@@CAPEBGW4tagHPD_TYPE@@@Z @ 0x1C019DD70 (-PointerDeviceTypeToString@RimTelemetry@@CAPEBGW4tagHPD_TYPE@@@Z.c)
 */

void __fastcall RimTelemetry::ReportRimDevice(int a1, int a2, struct RIMDEV *const a3)
{
  int v4; // esi
  unsigned __int16 v5; // bx
  unsigned __int16 v6; // r13
  __int64 v7; // r9
  char v8; // r8
  int v9; // edx
  int v10; // ecx
  int v11; // r14d
  const unsigned __int16 *v12; // r15
  unsigned __int64 v13; // r8
  char v14; // r10
  char v15; // r11
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r9
  int v18; // r12d
  int v19; // ecx
  __int64 v20; // rcx
  int v21; // edx
  __int64 v22; // rbx
  const unsigned __int16 *v23; // rax
  char v24; // [rsp+F8h] [rbp-80h]
  char v25; // [rsp+F9h] [rbp-7Fh]
  char v26; // [rsp+FAh] [rbp-7Eh]
  unsigned __int16 v27; // [rsp+FCh] [rbp-7Ch]
  int v28; // [rsp+100h] [rbp-78h]
  int v29; // [rsp+104h] [rbp-74h]
  int v30; // [rsp+108h] [rbp-70h]
  int v31; // [rsp+10Ch] [rbp-6Ch]
  unsigned __int64 v34; // [rsp+118h] [rbp-60h]
  void *v35; // [rsp+120h] [rbp-58h]
  unsigned __int16 *v36; // [rsp+128h] [rbp-50h]
  unsigned __int16 *v37; // [rsp+130h] [rbp-48h]
  struct _UNICODE_STRING v38; // [rsp+138h] [rbp-40h] BYREF
  struct _UNICODE_STRING v39; // [rsp+148h] [rbp-30h] BYREF
  unsigned __int64 v40; // [rsp+158h] [rbp-20h]
  unsigned __int64 v41; // [rsp+160h] [rbp-18h]
  char v42; // [rsp+168h] [rbp-10h] BYREF
  char v43; // [rsp+178h] [rbp+0h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v27 = 0;
  v37 = (unsigned __int16 *)RimDeviceTypeToRimInputTypeString(a3, *((unsigned __int8 *)a3 + 48));
  v36 = (unsigned __int16 *)*((_QWORD *)a3 + 27);
  if ( v8 == 2 )
  {
    v20 = *((_QWORD *)a3 + 58);
    v5 = *(_WORD *)(v20 + 18);
    v6 = *(_WORD *)(v20 + 16);
    v27 = v5;
  }
  v9 = *((_DWORD *)a3 + 534);
  v10 = *((_DWORD *)a3 + 46);
  v11 = -__CFSHR__(v10, 14);
  if ( v9 )
  {
    v21 = v9 - 1;
    if ( v21 )
    {
      if ( v21 == 1 )
        v12 = L"Unknown";
      else
        v12 = L"Unexpected Value";
    }
    else
    {
      v12 = L"External";
    }
  }
  else
  {
    v12 = L"Integrated";
  }
  v13 = *((_QWORD *)a3 + 24);
  v14 = *((_BYTE *)a3 + 204);
  v15 = *((_BYTE *)a3 + 205);
  v24 = *((_BYTE *)a3 + 206);
  v35 = (void *)*((_QWORD *)a3 + 31);
  v31 = *((_DWORD *)a3 + 72);
  v30 = *((_DWORD *)a3 + 68);
  v29 = *((_DWORD *)a3 + 38);
  v16 = v7 - *((_QWORD *)a3 + 8);
  v17 = v7 - *((_QWORD *)a3 + 9);
  v41 = v13;
  v18 = -__CFSHR__(v10, 8);
  v26 = v14;
  v25 = v15;
  v40 = v16;
  v34 = v17;
  if ( (v10 & 0x100) != 0 || (v19 = 1, !v18) )
    v19 = 0;
  v28 = v19;
  if ( a2 )
  {
    v22 = *(_QWORD *)(*((_QWORD *)a3 + 4) + 544LL);
    v39.Buffer = (PWSTR)&v42;
    v38.Buffer = (PWSTR)&v43;
    *(_QWORD *)&v39.Length = 0x100000LL;
    *(_QWORD *)&v38.Length = 0x100000LL;
    RimTelemetry::GetHidVidPidStrings(a3, &v39, &v38);
    v23 = (const unsigned __int16 *)RimTelemetry::PointerDeviceTypeToString(*(unsigned int *)(v22 + 24));
    LOBYTE(v4) = *(_DWORD *)(v22 + 24) == 6;
    RimTelemetry::LogPointerDeviceStateChange(
      a1,
      v27,
      v6,
      v37,
      v36,
      v11,
      v12,
      (const struct _GUID *)((char *)a3 + 2120),
      v41,
      v26,
      v25,
      v24,
      v35,
      v31,
      v30,
      v29,
      v40,
      v34,
      v18,
      v28,
      v23,
      *(_DWORD *)(v22 + 768),
      v4,
      (struct _UNICODE_STRING *const)(v22 + 368),
      (struct _UNICODE_STRING *const)(v22 + 896),
      v39.Buffer,
      v38.Buffer,
      (const struct tagRECT *)(v22 + 140),
      (const struct tagRECT *)(v22 + 124));
  }
  else if ( v6 < 0xFF00u )
  {
    RimTelemetry::LogNonPointerDeviceStateChange(
      a1,
      v5,
      v6,
      v37,
      v36,
      v11,
      v12,
      (const struct _GUID *)((char *)a3 + 2120),
      v13,
      v14,
      v15,
      v24,
      v35,
      v31,
      v30,
      v29,
      v16,
      v17,
      v18,
      v19);
  }
}
