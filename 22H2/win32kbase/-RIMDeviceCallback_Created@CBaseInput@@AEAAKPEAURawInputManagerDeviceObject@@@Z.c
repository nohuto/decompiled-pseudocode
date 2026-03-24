/*
 * XREFs of ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C006AFB0
 * Callers:
 *     <none>
 * Callees:
 *     HMRemoveHandleForObject @ 0x1C0009810 (HMRemoveHandleForObject.c)
 *     HMMarkObjectDestroy @ 0x1C0033E60 (HMMarkObjectDestroy.c)
 *     isRootPartition @ 0x1C0042A98 (isRootPartition.c)
 *     HMCreateHandleForObject @ 0x1C006B090 (HMCreateHandleForObject.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C006B1E0 (RawInputManagerDeviceObjectReference.c)
 *     Feature_InputVirtualization__private_ReportDeviceUsage @ 0x1C00CD53C (Feature_InputVirtualization__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C01BC2F0 (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Created(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  struct RawInputManagerDeviceObject *v3; // rbx
  char *v4; // rcx
  __int64 v5; // rdi
  const struct CONTAINER_ID *v6; // r8
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v4 = (char *)a2 + 88;
  LOBYTE(a2) = 19;
  v5 = HMCreateHandleForObject(v4, a2);
  if ( v5 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CBaseInput *, struct RawInputManagerDeviceObject *, __int64))(*(_QWORD *)this + 80LL))(
           this,
           v3,
           v5) )
    {
      *(_QWORD *)(v5 + 56) = CBaseInput::_spDevList;
      CBaseInput::_spDevList = (struct DEVICEINFO *)v5;
      RawInputManagerDeviceObjectReference(v3);
      Feature_InputVirtualization__private_ReportDeviceUsage();
      if ( isRootPartition() && *((_DWORD *)this + 314) )
      {
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*((_QWORD *)v3 + 53) + 40LL) )
        {
          v8 = 0;
          IVRootDeliver::PnP::SendRootPnpCreated(v3, (struct RawInputManagerDeviceObject *)&v8, v6);
        }
        else
        {
          *((_DWORD *)v3 + 68) |= 0x20000000u;
        }
      }
    }
    else
    {
      HMMarkObjectDestroy((_DWORD *)v5);
      HMRemoveHandleForObject((_DWORD *)v5);
    }
  }
  return 0LL;
}
