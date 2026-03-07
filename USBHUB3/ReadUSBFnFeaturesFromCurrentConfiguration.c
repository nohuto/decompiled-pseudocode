__int64 __fastcall ReadUSBFnFeaturesFromCurrentConfiguration(_DWORD *a1, char a2)
{
  const wchar_t *v2; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  unsigned __int16 v7; // r9
  int String; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  wchar_t *v12; // rdi
  int v14; // [rsp+20h] [rbp-38h]
  HANDLE Handle; // [rsp+70h] [rbp+18h] BYREF
  PVOID P; // [rsp+78h] [rbp+20h]

  Handle = 0LL;
  P = 0LL;
  v2 = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN";
  if ( a2 )
    v2 = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN\\Default";
  v5 = MyRegOpenKeyForRead(a1, v2, &Handle);
  v6 = v5;
  if ( v5 >= 0 )
  {
    String = MyRegQueryString(Handle);
    v12 = (wchar_t *)P;
    v6 = String;
    if ( String >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_SS((__int64)WPP_GLOBAL_Control->DeviceExtension, v9, v10, v11, v14, v2, (const wchar_t *)P);
      ZwClose(Handle);
      Handle = 0LL;
      v6 = CheckUSBFnConfiguration(a1, v12);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_Sd((__int64)WPP_GLOBAL_Control->DeviceExtension, 3u, v10, 0x1Fu, v14, v2);
    }
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
  }
  else
  {
    if ( a2 == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_18;
      v7 = 29;
      goto LABEL_7;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 30;
LABEL_7:
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        1u,
        v7,
        (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
        v5);
    }
  }
LABEL_18:
  if ( Handle )
    ZwClose(Handle);
  return v6;
}
