/*
 * XREFs of ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C01DD3D0
 * Callers:
 *     <none>
 * Callees:
 *     isRootPartition @ 0x1C004FEE8 (isRootPartition.c)
 *     HMCreateHandleForObject @ 0x1C0078820 (HMCreateHandleForObject.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C0078960 (RawInputManagerDeviceObjectReference.c)
 *     HMMarkObjectDestroy @ 0x1C0096FE0 (HMMarkObjectDestroy.c)
 *     HMRemoveHandleForObject @ 0x1C00B3CF0 (HMRemoveHandleForObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C01F3410 (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1C01F38C4 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Created(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  const struct CONTAINER_ID *v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v15; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  v5 = HMCreateHandleForObject((_QWORD *)a2 + 9, 0x13u);
  v6 = v5;
  if ( v5 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CBaseInput *, struct RawInputManagerDeviceObject *, __int64))(*(_QWORD *)this + 80LL))(
           this,
           a2,
           v5) )
    {
      *(_QWORD *)(v6 + 56) = **((_QWORD **)this + 158);
      **((_QWORD **)this + 158) = v6;
      RawInputManagerDeviceObjectReference(a2);
      if ( isRootPartition() && CIVChannel::ContainerConnected(*((_DWORD *)this + 324)) )
      {
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*((_QWORD *)a2 + 51) + 40LL) )
        {
          v15 = 0;
          IVRootDeliver::PnP::SendRootPnpCreated(a2, (struct RawInputManagerDeviceObject *)&v15, v10);
        }
        else
        {
          *((_DWORD *)a2 + 64) |= 0x80000000;
        }
      }
      return 1;
    }
    else
    {
      HMMarkObjectDestroy((_DWORD *)v6, v7, v8, v9);
      HMRemoveHandleForObject((int *)v6, v11, v12, v13);
    }
  }
  return v4;
}
