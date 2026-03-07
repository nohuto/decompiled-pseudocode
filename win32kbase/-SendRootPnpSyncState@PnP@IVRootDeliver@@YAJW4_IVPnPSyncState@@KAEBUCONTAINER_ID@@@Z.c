__int64 __fastcall IVRootDeliver::PnP::SendRootPnpSyncState(int a1, unsigned int a2, __int64 a3)
{
  int v5; // ebx
  int v7; // edx
  int v8; // r8d
  const struct CONTAINER_ID *v9; // r9
  int v10; // edx
  int v11; // r8d
  _QWORD v13[2]; // [rsp+50h] [rbp-38h] BYREF
  _DWORD *v14; // [rsp+60h] [rbp-28h]

  v5 = 0;
  CIVGenericSerializer::CIVGenericSerializer(v13);
  if ( v14 )
  {
    *v14 = a1;
    v5 = IVRootDeliver::PnP::Detail::SendPnP(
           (IVRootDeliver::PnP::Detail *)v13,
           (const struct CIVSerializer *)a2,
           a3,
           v9);
    if ( v5 < 0 )
    {
      LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          v10,
          v11,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          12,
          60,
          (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids,
          v5);
      }
    }
  }
  else
  {
    LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v8,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        59,
        (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids);
    }
  }
  v13[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v13);
  return (unsigned int)v5;
}
