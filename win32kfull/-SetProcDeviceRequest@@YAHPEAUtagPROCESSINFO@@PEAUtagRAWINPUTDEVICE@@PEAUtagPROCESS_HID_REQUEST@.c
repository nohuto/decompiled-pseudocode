/*
 * XREFs of ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C00D5E84
 * Callers:
 *     _RegisterRawInputDevices @ 0x1C00D5AC8 (_RegisterRawInputDevices.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?AllocateHidProcessRequest@@YAPEAUtagPROCESS_HID_REQUEST@@GG@Z @ 0x1C00D5FC8 (-AllocateHidProcessRequest@@YAPEAUtagPROCESS_HID_REQUEST@@GG@Z.c)
 *     ?IsLegacyDevice@@YAHGG@Z @ 0x1C00D6024 (-IsLegacyDevice@@YAHGG@Z.c)
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C00D604C (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 *     ?SetLegacyDeviceFlags@@YAXPEAUtagPROCESS_HID_TABLE@@PEBUtagRAWINPUTDEVICE@@@Z @ 0x1C00D6744 (-SetLegacyDeviceFlags@@YAXPEAUtagPROCESS_HID_TABLE@@PEBUtagRAWINPUTDEVICE@@@Z.c)
 *     ?RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z @ 0x1C01AABF8 (-RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z.c)
 */

__int64 __fastcall SetProcDeviceRequest(
        __int64 a1,
        __int64 a2,
        struct tagPROCESS_HID_REQUEST *a3,
        unsigned int a4,
        int a5)
{
  struct tagPROCESS_HID_REQUEST *HidProcessRequest; // rbx
  int v9; // r12d
  __int64 v10; // r14
  __int64 v11; // rcx
  struct tagWND *v12; // r15
  unsigned int v13; // esi
  int v14; // eax
  int v17; // [rsp+90h] [rbp+28h]

  HidProcessRequest = a3;
  v9 = IsLegacyDevice(*(_WORD *)a2, *(_WORD *)(a2 + 2));
  if ( a5 == 1 )
  {
    v10 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = 0LL;
    v17 = 1;
  }
  else
  {
    v17 = 0;
    v10 = 0LL;
  }
  v11 = *(_QWORD *)(a2 + 8);
  if ( v11 )
  {
    v12 = (struct tagWND *)ValidateHwnd(v11);
    if ( !v12 )
      return 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  v13 = 0;
  v14 = *(_DWORD *)(a2 + 4) & 0xF0;
  switch ( v14 )
  {
    case 32:
      v13 = 2;
      break;
    case 16:
      v13 = 3;
      break;
    case 0:
    case 48:
      v13 = 1;
      break;
  }
  if ( !a3 )
  {
    HidProcessRequest = AllocateHidProcessRequest(*(_WORD *)a2, *(_WORD *)(a2 + 2));
    if ( !HidProcessRequest )
    {
      UserSetLastError(8);
      return 0LL;
    }
  }
  if ( v10 )
    *((_QWORD *)HidProcessRequest + 5) = v10;
  if ( a3 )
  {
    RemoveProcRequest((struct tagPROCESSINFO *)a1, a3, a4, v9);
    HidProcessRequest = a3;
  }
  if ( !(unsigned int)InsertProcRequest(
                        (struct tagPROCESSINFO *)a1,
                        (const struct tagRAWINPUTDEVICE *)a2,
                        HidProcessRequest,
                        v13,
                        v9,
                        v12,
                        v17) )
  {
    if ( HidProcessRequest )
      Win32FreePool(HidProcessRequest);
    return 0LL;
  }
  if ( v9 )
    SetLegacyDeviceFlags(*(struct tagPROCESS_HID_TABLE **)(a1 + 824), (const struct tagRAWINPUTDEVICE *)a2);
  return 1LL;
}
