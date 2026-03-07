__int64 __fastcall UsbhRegQueryGlobalLegacyDeviceKeys(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx
  wchar_t *Pool2; // rdi
  int v6; // edx
  unsigned int GlobalKey; // esi
  int v8; // r8d
  __int64 v9; // [rsp+28h] [rbp-E0h]
  int v10; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v11[2]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v12[5]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 (__fastcall *v13)(__int64, __int64, const void *, unsigned int, __int64, __int64); // [rsp+78h] [rbp-90h] BYREF
  int v14; // [rsp+80h] [rbp-88h]
  wchar_t *v15; // [rsp+88h] [rbp-80h]
  _QWORD *v16; // [rsp+90h] [rbp-78h]
  int v17; // [rsp+98h] [rbp-70h]
  __int64 v18; // [rsp+A0h] [rbp-68h]
  int v19; // [rsp+A8h] [rbp-60h]
  __int64 (__fastcall *v20)(__int64, __int64, const void *, unsigned int, __int64, __int64); // [rsp+B0h] [rbp-58h]
  int v21; // [rsp+B8h] [rbp-50h]
  const wchar_t *v22; // [rsp+C0h] [rbp-48h]
  _QWORD *v23; // [rsp+C8h] [rbp-40h]
  int v24; // [rsp+D0h] [rbp-38h]
  __int64 v25; // [rsp+D8h] [rbp-30h]
  int v26; // [rsp+E0h] [rbp-28h]
  __int64 v27; // [rsp+E8h] [rbp-20h]
  int v28; // [rsp+F0h] [rbp-18h]
  __int64 v29; // [rsp+F8h] [rbp-10h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x48u,
      (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids);
  v3 = PdoExt(a2);
  v3[358] &= ~0x800u;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, 54LL, 1112885333LL);
  if ( !Pool2 )
    return 3221225626LL;
  LOWORD(v10) = 0;
  LODWORD(v9) = *((unsigned __int16 *)v3 + 705);
  GlobalKey = RtlStringCbPrintfW(Pool2, 0x36uLL, L"IgnoreHWSerNum%04x%04x", *((unsigned __int16 *)v3 + 704), v9);
  if ( (GlobalKey & 0xC0000000) != 0xC0000000 )
  {
    v14 = 0;
    v13 = UsbhQueryGlobalLegacyDeviceValue;
    v11[1] = &v10;
    v20 = UsbhQueryGlobalLegacyDeviceValue;
    v16 = v11;
    v15 = Pool2;
    LODWORD(v11[0]) = 3;
    v17 = 3;
    v18 = 0LL;
    v21 = 0;
    v19 = 2;
    v22 = L"GenericUSBDeviceString";
    LODWORD(v12[0]) = 0;
    v12[1] = v3 + 548;
    v23 = v12;
    v24 = 0;
    v25 = 0LL;
    v26 = 0;
    v27 = 0LL;
    v28 = 0;
    v29 = 0LL;
    GlobalKey = UsbhRegQueryGlobalKey(2u, (__int64)L"usbflags", 2LL, (__int64)&v13, 0xA8u);
    if ( (GlobalKey & 0xC0000000) != 0xC0000000 )
    {
      if ( (_BYTE)v10 )
        v3[358] |= 0x800u;
    }
  }
  if ( v3[549] && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_S(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        v8,
        73,
        (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
        *((_QWORD *)v3 + 275));
  }
  ExFreePoolWithTag(Pool2, 0);
  return GlobalKey;
}
