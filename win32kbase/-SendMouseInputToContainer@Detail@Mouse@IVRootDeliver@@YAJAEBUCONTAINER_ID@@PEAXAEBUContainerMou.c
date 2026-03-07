__int64 __fastcall IVRootDeliver::Mouse::Detail::SendMouseInputToContainer(
        IVRootDeliver::Mouse::Detail *this,
        const struct CONTAINER_ID *a2,
        struct ContainerMouseInput *a3,
        const struct ContainerMouseInput *a4)
{
  PVOID v6; // rdi
  const struct _UNICODE_STRING *v8; // r8
  int v9; // edx
  int v10; // r15d
  char v11; // bl
  unsigned int v12; // esi
  char v13; // r14
  int v14; // edx
  char v15; // bl
  __int64 v16; // rcx
  int v17; // edx
  int v18; // r8d
  char v19; // bl
  const struct ContainerMouseInput *v21; // [rsp+28h] [rbp-39h]
  struct _UNICODE_STRING v22; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v23[6]; // [rsp+68h] [rbp+7h] BYREF
  PVOID Object; // [rsp+E0h] [rbp+7Fh] BYREF

  v6 = 0LL;
  Object = 0LL;
  v22 = 0LL;
  CIVSerializer::CIVSerializer(v23, 4LL, a3, a4);
  v9 = 0;
  v23[0] = &CIVGenericSerializer::`vftable';
  if ( !v23[2] )
  {
    v10 = -1073741801;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
      || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v11 = 0;
    }
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = v11;
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        (_DWORD)v8,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        13,
        (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids,
        23);
    }
    goto LABEL_45;
  }
  v12 = 0;
  v13 = *(_BYTE *)(*(_QWORD *)a3 + 32LL);
  if ( a2 )
  {
    v10 = RawInputManagerDeviceObjectResolveHandle((char *)a2, 3u, 0, &Object);
    if ( v10 < 0 )
    {
      v15 = 1;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
        || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v14) = 0;
      }
      if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          v14,
          (_DWORD)v8,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          12,
          14,
          (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids,
          v10);
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
        || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v14) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v15 = 0;
      if ( (_BYTE)v14 || v15 )
      {
        LOBYTE(v8) = v15;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v14,
          (_DWORD)v8,
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          12,
          15,
          (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids);
      }
      goto LABEL_45;
    }
    v6 = Object;
    v16 = 0LL;
    v22 = *(struct _UNICODE_STRING *)((char *)Object + 280);
    if ( Object != (PVOID)-72LL )
      v16 = *((_QWORD *)Object + 9);
    if ( v13 && IsTouchpadDevice(v16) )
      v12 = 2;
  }
  else
  {
    v22.Length = 0;
  }
  LOBYTE(v8) = v13;
  v10 = IVRootDeliver::Mouse::Detail::SerializeContainerMouseInput(
          (IVRootDeliver::Mouse::Detail *)v23,
          &v22,
          v8,
          a3,
          v21);
  if ( v6 )
    ObfDereferenceObject(v6);
  if ( v10 >= 0 )
  {
    v10 = ivrIVSend((const struct CIVSerializer *)v23, v12, this);
    if ( v10 < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
        || (v19 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        v19 = 0;
      }
      if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = v19;
        LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          v17,
          v18,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          12,
          16,
          (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids,
          v10);
      }
    }
  }
LABEL_45:
  v23[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v23);
  return (unsigned int)v10;
}
