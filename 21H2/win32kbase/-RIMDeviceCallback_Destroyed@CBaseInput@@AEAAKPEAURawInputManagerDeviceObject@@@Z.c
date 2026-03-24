/*
 * XREFs of ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0007D60
 * Callers:
 *     <none>
 * Callees:
 *     HMRemoveHandleForObject @ 0x1C0008390 (HMRemoveHandleForObject.c)
 *     HMMarkObjectDestroy @ 0x1C00329F0 (HMMarkObjectDestroy.c)
 *     isRootPartition @ 0x1C0041628 (isRootPartition.c)
 *     WPP_RECORDER_SF_q @ 0x1C0047360 (WPP_RECORDER_SF_q.c)
 *     Feature_InputVirtualization__private_ReportDeviceUsage @ 0x1C00CD3DC (Feature_InputVirtualization__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01BC120 (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Destroyed(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  struct DEVICEINFO *v2; // rax
  struct DEVICEINFO **v5; // rdx
  const struct CONTAINER_ID *v7; // r9
  unsigned int v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = CBaseInput::_spDevList;
  v5 = &CBaseInput::_spDevList;
  while ( 1 )
  {
    if ( !v2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_q(
          (_DWORD)gBaseLog,
          (_DWORD)v5,
          3,
          19,
          (__int64)&WPP_f3c7c3b8e3c935fa60aa5d5f3732d730_Traceguids,
          (char)a2);
      }
      return 0LL;
    }
    if ( v2 == (struct RawInputManagerDeviceObject *)((char *)a2 + 88) )
      break;
    v5 = (struct DEVICEINFO **)((char *)v2 + 56);
    v2 = (struct DEVICEINFO *)*((_QWORD *)v2 + 7);
  }
  *v5 = (struct DEVICEINFO *)*((_QWORD *)a2 + 18);
  *((_QWORD *)a2 + 18) = 0LL;
  ObfDereferenceObject(a2);
  Feature_InputVirtualization__private_ReportDeviceUsage();
  if ( (unsigned __int8)isRootPartition() && *((_DWORD *)this + 314) )
  {
    v8 = 0;
    IVRootDeliver::PnP::SendRootPnp(
      (struct RawInputManagerDeviceObject *)((char *)a2 + 88),
      (struct DEVICEINFO *)4,
      (unsigned int)&v8,
      v7);
  }
  if ( (*(unsigned __int8 (__fastcall **)(CBaseInput *, struct RawInputManagerDeviceObject *, char *))(*(_QWORD *)this + 104LL))(
         this,
         a2,
         (char *)a2 + 88)
    && (unsigned int)HMMarkObjectDestroy((char *)a2 + 88) )
  {
    HMRemoveHandleForObject((char *)a2 + 88);
  }
  return 0LL;
}
