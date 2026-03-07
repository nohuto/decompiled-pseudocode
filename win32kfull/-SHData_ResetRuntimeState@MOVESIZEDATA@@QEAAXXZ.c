void __fastcall MOVESIZEDATA::SHData_ResetRuntimeState(MOVESIZEDATA *this)
{
  char v2; // dl
  char v3; // r8

  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v2 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v2 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v3 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v3 = 0;
  }
  if ( v2 || v3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      v3,
      10,
      5,
      1,
      10,
      (__int64)&WPP_014a4f769f313c7aeb3767ee4b85a43c_Traceguids);
  *((_DWORD *)this + 80) = 0;
  *((_DWORD *)this + 74) = 0;
  *((_BYTE *)this + 316) = 0;
  *((_WORD *)this + 168) = 0;
}
