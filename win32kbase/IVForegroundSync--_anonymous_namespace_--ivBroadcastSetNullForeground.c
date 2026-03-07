void __fastcall IVForegroundSync::_anonymous_namespace_::ivBroadcastSetNullForeground(
        int a1,
        const struct CONTAINER_ID *a2)
{
  int v4; // edx
  __int64 v5; // r8
  const struct CONTAINER_ID *v6; // r8
  _QWORD v7[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+90h] [rbp+18h] BYREF

  v9 = 0;
  CIVGenericSerializer::CIVGenericSerializer(v7);
  v5 = v8;
  if ( v8 )
  {
    *(_QWORD *)(v8 + 12) = 0xFFFF8300FFFF8300uLL;
    *(_QWORD *)v5 = 0LL;
    *(_DWORD *)(v5 + 8) = a1;
    v6 = (const struct CONTAINER_ID *)&v9;
    if ( a2 )
      v6 = a2;
    ivrIVBroadcast((const struct CIVSerializer *)v7, 3u, v6);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || (LOBYTE(v4) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v4) = 0;
    }
    if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v4,
        v5,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        10,
        (__int64)&WPP_5f4ff7e9f3c731e8a410f4df7a374e17_Traceguids);
    }
  }
  v7[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v7);
}
