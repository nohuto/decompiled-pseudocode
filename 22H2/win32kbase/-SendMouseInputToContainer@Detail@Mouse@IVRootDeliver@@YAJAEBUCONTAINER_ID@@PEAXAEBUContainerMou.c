/*
 * XREFs of ?SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z @ 0x1C01F300C
 * Callers:
 *     ?SendMouseInput@Mouse@IVRootDeliver@@YAJAEAUCONTAINER_ID@@AEAUContainerMouseInput@@@Z @ 0x1C01F2ED8 (-SendMouseInput@Mouse@IVRootDeliver@@YAJAEAUCONTAINER_ID@@AEAUContainerMouseInput@@@Z.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0072E20 (RawInputManagerDeviceObjectResolveHandle.c)
 *     IsTouchpadDevice @ 0x1C00E5A9C (IsTouchpadDevice.c)
 *     ?ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1C01EE8A4 (-ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAVCIVMouseSerializer@@AEBU_UNICODE_STRING@@_NAEBUContainerMouseInput@@@Z @ 0x1C01F3780 (-SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAVCIVMouseSerializer@@AEBU_UNICOD.c)
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x1C01FCE34 (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1C01FD0B8 (--1CIVSerializer@@UEAA@XZ.c)
 */

__int64 __fastcall IVRootDeliver::Mouse::Detail::SendMouseInputToContainer(
        IVRootDeliver::Mouse::Detail *this,
        const struct CONTAINER_ID *a2,
        struct ContainerMouseInput *a3,
        const struct ContainerMouseInput *a4)
{
  PVOID v6; // rbx
  const struct _UNICODE_STRING *v8; // r8
  int v9; // edi
  unsigned int v10; // esi
  char v11; // r14
  __int64 v12; // rcx
  struct _UNICODE_STRING v14; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v15[6]; // [rsp+30h] [rbp-30h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+48h] BYREF

  v6 = 0LL;
  Object = 0LL;
  CIVSerializer::CIVSerializer(v15, 4LL, a3, a4, 0LL, 0LL);
  v15[0] = &CIVGenericSerializer::`vftable';
  if ( v15[2] )
  {
    v10 = 0;
    v11 = *(_BYTE *)(*(_QWORD *)a3 + 32LL);
    if ( a2 )
    {
      v9 = RawInputManagerDeviceObjectResolveHandle((char *)a2, 3u, 0, &Object);
      if ( v9 < 0 )
        goto LABEL_15;
      v6 = Object;
      v12 = 0LL;
      v14 = *(struct _UNICODE_STRING *)((char *)Object + 280);
      if ( Object != (PVOID)-72LL )
        v12 = *((_QWORD *)Object + 9);
      if ( v11 && IsTouchpadDevice(v12) )
        v10 = 2;
    }
    else
    {
      v14.Length = 0;
    }
    LOBYTE(v8) = v11;
    v9 = IVRootDeliver::Mouse::Detail::SerializeContainerMouseInput(
           (IVRootDeliver::Mouse::Detail *)v15,
           &v14,
           v8,
           a3,
           *(const struct ContainerMouseInput **)&v14.Length);
    if ( v6 )
      ObfDereferenceObject(v6);
    if ( v9 >= 0 )
      v9 = ivrIVSend((const struct CIVSerializer *)v15, v10, this);
  }
  else
  {
    v9 = -1073741801;
  }
LABEL_15:
  v15[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v15);
  return (unsigned int)v9;
}
