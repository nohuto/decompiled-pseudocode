__int64 __fastcall InternalOpRegionHandler(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 (__fastcall *v6)(_QWORD, __int64, _QWORD); // rax
  int v7; // edx
  unsigned int v8; // ebx

  if ( a6 && (v6 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a6 + 16)) != 0LL )
  {
    v8 = v6(a1, a2, a3);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        3,
        12,
        (__int64)&WPP_46f050f87a9c3f86e1bf3d4ff5286087_Traceguids,
        v8);
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v8;
}
