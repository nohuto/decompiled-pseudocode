/*
 * XREFs of ?SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z @ 0x1C01F4A2C
 * Callers:
 *     ?SendMouseInput@Mouse@IVRootDeliver@@YAJAEAUCONTAINER_ID@@AEAUContainerMouseInput@@@Z @ 0x1C01F491C (-SendMouseInput@Mouse@IVRootDeliver@@YAJAEAUCONTAINER_ID@@AEAUContainerMouseInput@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0043E30 (RawInputManagerDeviceObjectResolveHandle.c)
 *     IsTouchpadDevice @ 0x1C00E8F60 (IsTouchpadDevice.c)
 *     ?ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1C01F0028 (-ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAVCIVMouseSerializer@@AEBU_UNICODE_STRING@@_NAEBUContainerMouseInput@@@Z @ 0x1C01F5F98 (-SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAVCIVMouseSerializer@@AEBU_UNICOD.c)
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x1C01FCDFC (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1C01FCFCC (--1CIVSerializer@@UEAA@XZ.c)
 */

__int64 __fastcall IVRootDeliver::Mouse::Detail::SendMouseInputToContainer(
        IVRootDeliver::Mouse::Detail *this,
        const struct CONTAINER_ID *a2,
        struct ContainerMouseInput *a3,
        const struct ContainerMouseInput *a4)
{
  char *v5; // rdi
  const struct _UNICODE_STRING *v7; // r8
  int v8; // r12d
  char v9; // bl
  int v10; // edx
  unsigned int v11; // ebx
  char v12; // r14
  int v13; // edx
  char v14; // bl
  void *v15; // r8
  __int64 v16; // rcx
  int v17; // eax
  int v18; // r8d
  char v19; // bl
  int v20; // edx
  const struct ContainerMouseInput *v22; // [rsp+20h] [rbp-49h]
  struct _UNICODE_STRING v23; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v24[12]; // [rsp+60h] [rbp-9h] BYREF
  char *v26; // [rsp+E8h] [rbp+7Fh] BYREF

  v26 = 0LL;
  v5 = 0LL;
  v23 = 0LL;
  CIVSerializer::CIVSerializer(v24, 4LL, a3, a4);
  v24[0] = &CIVGenericSerializer::`vftable';
  if ( !v24[2] )
  {
    v8 = -1073741801;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
      || (v9 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v9 = 0;
    }
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 13;
      LOBYTE(v10) = v9;
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        (_DWORD)v7,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        13,
        (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids,
        23);
    }
    goto LABEL_44;
  }
  v11 = 0;
  v12 = *(_BYTE *)(*(_QWORD *)a3 + 32LL);
  if ( a2 )
  {
    v8 = RawInputManagerDeviceObjectResolveHandle((char *)a2, 3u, 0, (PVOID *)&v26);
    if ( v8 < 0 )
    {
      v14 = 1;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
        || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v13) = 0;
      }
      v15 = &WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids;
      if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v13,
          (_DWORD)v15,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          12,
          14,
          (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids,
          v8);
        v15 = &WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids;
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
        || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v13) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v14 = 0;
      if ( (_BYTE)v13 || v14 )
      {
        LOBYTE(v15) = v14;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v13,
          (_DWORD)v15,
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          12,
          15,
          (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids);
      }
      goto LABEL_44;
    }
    v5 = v26;
    v16 = 0LL;
    v23 = *(struct _UNICODE_STRING *)(v26 + 296);
    if ( v26 != (char *)-88LL )
      v16 = *((_QWORD *)v26 + 11);
    if ( v12 && IsTouchpadDevice(v16) )
      v11 = 2;
  }
  LOBYTE(v7) = v12;
  v8 = IVRootDeliver::Mouse::Detail::SerializeContainerMouseInput(
         (IVRootDeliver::Mouse::Detail *)v24,
         &v23,
         v7,
         a3,
         v22);
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( v8 >= 0 )
  {
    v17 = ivrIVSend((const struct CIVSerializer *)v24, v11, this);
    v8 = v17;
    if ( v17 < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
        || (v19 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        v19 = 0;
      }
      if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v20 = 16;
        LOBYTE(v20) = v19;
        LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v20,
          v18,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          12,
          16,
          (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids,
          v17);
      }
    }
  }
LABEL_44:
  v24[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v24);
  return (unsigned int)v8;
}
