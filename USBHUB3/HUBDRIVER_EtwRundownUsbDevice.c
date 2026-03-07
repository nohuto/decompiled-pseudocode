void __fastcall HUBDRIVER_EtwRundownUsbDevice(const GUID *a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rax
  GUID *v5; // rcx
  wchar_t *Pool2; // rax
  wchar_t *v7; // r15
  wchar_t *v8; // r12
  wchar_t *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // ecx
  unsigned __int16 *v13; // rdx
  char *v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r13
  __int64 v18; // rbx
  __int64 v19; // rcx
  int v20; // eax
  int v21; // r11d
  __int64 v22; // rcx
  char v23; // r8
  char v24; // r9
  bool v25; // zf
  char v26; // r11
  const char *v27; // r10
  char v28; // di
  const char *v29; // rdx
  const char *v30; // rcx
  char v31; // r11
  int v32; // [rsp+40h] [rbp-160h]
  char v33; // [rsp+120h] [rbp-80h]
  __int16 v34; // [rsp+124h] [rbp-7Ch]
  int v35; // [rsp+128h] [rbp-78h]
  int v36; // [rsp+12Ch] [rbp-74h]
  int v37; // [rsp+130h] [rbp-70h]
  int v38; // [rsp+134h] [rbp-6Ch]
  int v39; // [rsp+138h] [rbp-68h]
  unsigned __int16 v40; // [rsp+13Ch] [rbp-64h]
  __int64 v41; // [rsp+140h] [rbp-60h] BYREF
  int v42; // [rsp+148h] [rbp-58h]
  int v43; // [rsp+14Ch] [rbp-54h]
  __int64 v44; // [rsp+150h] [rbp-50h]
  __int64 v45; // [rsp+158h] [rbp-48h] BYREF
  __int64 v46; // [rsp+160h] [rbp-40h] BYREF
  const wchar_t *v47; // [rsp+168h] [rbp-38h]
  struct _UNICODE_STRING DestinationString; // [rsp+170h] [rbp-30h] BYREF
  __int128 v49; // [rsp+180h] [rbp-20h] BYREF
  __int64 v50; // [rsp+190h] [rbp-10h]
  __int64 v51; // [rsp+198h] [rbp-8h]
  __int128 v52; // [rsp+1A0h] [rbp+0h]
  __int64 v53; // [rsp+1B0h] [rbp+10h]
  void *Src[2]; // [rsp+1B8h] [rbp+18h] BYREF
  __int64 v55; // [rsp+1C8h] [rbp+28h]
  __int64 v56; // [rsp+1D0h] [rbp+30h]
  const GUID *v57; // [rsp+1D8h] [rbp+38h]
  int v58; // [rsp+1E0h] [rbp+40h] BYREF
  char v59; // [rsp+1E4h] [rbp+44h] BYREF

  DWORD1(v49) = 0;
  v57 = a1;
  v45 = 0LL;
  DestinationString = 0LL;
  *(_OWORD *)Src = 0LL;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C006A0F8);
  v46 = 0LL;
  v53 = 0LL;
  v50 = 0LL;
  v51 = 0x100000001LL;
  v49 = 0LL;
  LODWORD(v49) = 56;
  v52 = (unsigned __int64)a2;
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD, __int128 *, __int64 *))(WdfFunctions_01015
                                                                                                  + 656))(
         WdfDriverGlobals,
         a2,
         0LL,
         (unsigned int)ExDefaultNonPagedPoolType,
         &v49,
         &v46) < 0 )
    v47 = 0LL;
  else
    v47 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                             WdfDriverGlobals,
                             v46,
                             0LL);
  RtlInitUnicodeString(&DestinationString, 0LL);
  v4 = *(_QWORD *)(v3 + 24);
  v5 = &GUID_DEVINTERFACE_USB_DEVICE;
  if ( (*(_DWORD *)(v4 + 1632) & 2) != 0 )
    v5 = &GUID_DEVINTERFACE_USB_HUB;
  if ( (int)HUBMISC_GetDeviceInterfacePath((__int64)v5, a2, &v45, 0LL, *(_QWORD *)(*(_QWORD *)(v4 + 8) + 1432LL)) < 0 )
  {
    v7 = 0LL;
  }
  else
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 2472))(
      WdfDriverGlobals,
      v45,
      &DestinationString);
    Pool2 = (wchar_t *)ExAllocatePool2(64LL, DestinationString.Length + 2LL, 1681082453LL);
    v7 = Pool2;
    if ( Pool2 )
      memmove(Pool2, DestinationString.Buffer, DestinationString.Length);
  }
  v41 = 0LL;
  v53 = 0LL;
  v50 = 0LL;
  v51 = 0x100000001LL;
  v49 = 0LL;
  LODWORD(v49) = 56;
  v8 = 0LL;
  v52 = (unsigned __int64)a2;
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int128 *, __int64 *))(WdfFunctions_01015 + 2464))(
         WdfDriverGlobals,
         0LL,
         &v49,
         &v41) >= 0
    && (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 320))(
         WdfDriverGlobals,
         a2,
         v41) >= 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void **))(WdfFunctions_01015 + 2472))(
      WdfDriverGlobals,
      v41,
      Src);
    v9 = (wchar_t *)ExAllocatePool2(64LL, LOWORD(Src[0]) + 2LL, 1681082453LL);
    v8 = v9;
    if ( v9 )
      memmove(v9, Src[1], LOWORD(Src[0]));
  }
  v10 = *(_QWORD *)(v3 + 16);
  v11 = 5LL;
  v12 = *(unsigned __int16 *)(v10 + 320);
  v13 = (unsigned __int16 *)(v10 + 322);
  v58 = v12;
  v14 = &v59;
  do
  {
    v15 = *v13++;
    *(_DWORD *)v14 = v15;
    v14 += 4;
    --v11;
  }
  while ( v11 );
  v16 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 240LL);
  if ( (unsigned __int8)v16 < 6u )
    *(&v58 + v16) = *(unsigned __int16 *)(v3 + 48);
  v17 = *(_QWORD *)(v3 + 16);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
  {
    v18 = *(_QWORD *)(v3 + 24);
    v44 = v18;
    v19 = *(_QWORD *)(v18 + 8);
    v55 = v19;
    v20 = *(_DWORD *)(v19 + 204) >> 1;
    if ( (*(_DWORD *)(v19 + 204) & 2) != 0 )
      v33 = *(_BYTE *)(v19 + 1341);
    else
      v33 = 0;
    v21 = *(_DWORD *)(v17 + 168);
    v43 = v21;
    if ( v21 == 1 )
    {
      v34 = *(_WORD *)(v17 + 184);
      v35 = *(_DWORD *)(v17 + 180);
      v36 = *(_DWORD *)(v17 + 176);
      v37 = *(_DWORD *)(v17 + 196);
      v38 = *(_DWORD *)(v17 + 192);
      v39 = *(_DWORD *)(v17 + 188);
    }
    else
    {
      LOBYTE(v34) = 0;
      LOBYTE(v36) = -1;
      LOBYTE(v35) = -1;
      LOBYTE(v37) = 0;
      LOBYTE(v38) = 0;
      LOBYTE(v39) = 0;
    }
    v22 = *(_QWORD *)(v18 + 2016);
    v56 = v22;
    if ( v22 )
      v40 = *(_WORD *)(v22 + 2);
    else
      v40 = 0;
    v23 = *(_BYTE *)(v18 + 2713);
    LOBYTE(v20) = v20 & 1;
    v24 = *(_BYTE *)(v18 + 2712);
    v25 = v21 == 2;
    v26 = *(_BYTE *)(v3 + 32);
    v27 = 0LL;
    v28 = *(_BYTE *)(v17 + 240);
    v29 = 0LL;
    v42 = v20;
    v30 = 0LL;
    if ( v25 )
      v27 = (const char *)(v17 + 186);
    v31 = ~v26;
    if ( v25 )
    {
      v29 = (const char *)(v17 + 181);
      v30 = (const char *)(v17 + 176);
    }
    McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer(
      v44,
      &USBHUB3_ETW_EVENT_RUNDOWN_DEVICE_INFORMATION_V2,
      v57,
      *(_QWORD *)(v17 + 248),
      *(_QWORD *)(v44 + 24),
      *(_WORD *)(v3 + 48),
      v47,
      v7,
      v32,
      v18 + 1988,
      v40,
      v56,
      v8,
      v31 & 1,
      v28 + 1,
      (__int64)&v58,
      v39,
      v38,
      v37,
      v36,
      v35,
      v34,
      *(_DWORD *)(v3 + 384),
      *(_DWORD *)(v44 + 2224),
      v43,
      v30,
      v29,
      v27,
      v42,
      v33,
      *(_QWORD *)(v55 + 1416),
      v24,
      v23,
      *(_DWORD *)(v44 + 2716),
      *(_DWORD *)(v44 + 2720));
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0x64334855u);
  if ( v45 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x64334855u);
  if ( v41 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v46 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
}
