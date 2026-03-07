__int64 __fastcall UsbhQueryGlobalDeviceValue(__int64 a1, int a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  unsigned int v9; // ebx

  v9 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_Sdqdqq(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
  if ( a2 == 3 )
  {
    if ( a4 >= *(_DWORD *)(a6 + 12) )
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(a6 + 16))(a5, *(_QWORD *)a6, a3);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v9;
}
