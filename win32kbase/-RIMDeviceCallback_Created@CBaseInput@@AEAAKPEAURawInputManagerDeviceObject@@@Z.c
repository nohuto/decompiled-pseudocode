/*
 * XREFs of ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0088CB0
 * Callers:
 *     <none>
 * Callees:
 *     isRootPartition @ 0x1C007B02C (isRootPartition.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C0086908 (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C0086944 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     HMCreateHandleForObject @ 0x1C0088D60 (HMCreateHandleForObject.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C0088EF0 (RawInputManagerDeviceObjectReference.c)
 *     HMRemoveHandleForObject @ 0x1C00896E0 (HMRemoveHandleForObject.c)
 *     Feature_InputVirtualization__private_ReportDeviceUsage @ 0x1C00E01B0 (Feature_InputVirtualization__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C0227610 (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1C0228560 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Created(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  struct RawInputManagerDeviceObject *v3; // rbx
  char *v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  const struct tagDomLock *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  const struct CONTAINER_ID *v17; // r8
  int v18; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v4 = (char *)a2 + 72;
  v5 = 0;
  LOBYTE(a2) = 19;
  v6 = HMCreateHandleForObject(v4, a2);
  v7 = v6;
  if ( v6 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CBaseInput *, struct RawInputManagerDeviceObject *, __int64))(*(_QWORD *)this + 80LL))(
           this,
           v3,
           v6) )
    {
      *(_QWORD *)(v7 + 56) = **((_QWORD **)this + 166);
      **((_QWORD **)this + 166) = v7;
      RawInputManagerDeviceObjectReference(v3);
      Feature_InputVirtualization__private_ReportDeviceUsage();
      if ( isRootPartition(v13, v12, v14, v15) && CIVChannel::ContainerConnected(*((_DWORD *)this + 340)) )
      {
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*((_QWORD *)v3 + 51) + 40LL) )
        {
          v18 = 0;
          IVRootDeliver::PnP::SendRootPnpCreated(v3, (struct RawInputManagerDeviceObject *)&v18, v17);
        }
        else
        {
          *((_DWORD *)v3 + 64) |= 0x80000000;
        }
      }
      return 1;
    }
    else
    {
      LockRefactorStagingAssertOwned(v9, v8, v10, v11);
      HMMarkObjectDestroyWorker((_DWORD *)v7);
      HMRemoveHandleForObject();
    }
  }
  return v5;
}
