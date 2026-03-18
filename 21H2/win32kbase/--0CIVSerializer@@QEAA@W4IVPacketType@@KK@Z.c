/*
 * XREFs of ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x1C01FCDFC
 * Callers:
 *     ??0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z @ 0x1C01E89EC (--0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z.c)
 *     ?SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z @ 0x1C01F4A2C (-SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMou.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C01F5528 (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z @ 0x1C01F5B34 (-SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall CIVSerializer::CIVSerializer(__int64 a1, int a2)
{
  _DWORD *v3; // rsi
  __int64 v4; // r14
  unsigned int v5; // eax
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  __int64 Pool2; // rbx
  int v9; // ecx
  char v11; // bp
  PVOID BackTrace[20]; // [rsp+20h] [rbp-B8h] BYREF

  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 36) = 0;
  v3 = gpLeakTrackingAllocator;
  *(_QWORD *)a1 = &CIVSerializer::`vftable';
  v4 = a2;
  v5 = dword_1C026B5B8[a2] + 16;
  *(_DWORD *)(a1 + 32) = v5;
  v6 = v5;
  if ( (v3[10] & 0x65735649) != 0x65735649 || (v7 = 0LL, !v3[11]) )
  {
LABEL_5:
    Pool2 = ExAllocatePool2(260LL, v6);
    goto LABEL_6;
  }
  while ( v3[v7] != 1702057545 )
  {
    if ( ++v7 >= (unsigned __int64)(unsigned int)v3[11] )
      goto LABEL_5;
  }
  v11 = 0;
  if ( v6 < 0x1000 || (v6 & 0xFFF) != 0 )
  {
    v11 = 1;
    v6 += 16LL;
  }
  Pool2 = ExAllocatePool2(260LL, v6);
  if ( !Pool2 )
    goto LABEL_13;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( !v11 || (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
           (__int64)v3,
           Pool2,
           (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      *(_QWORD *)(a1 + 24) = Pool2;
      goto LABEL_7;
    }
LABEL_20:
    ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_13:
    *(_QWORD *)(a1 + 24) = 0LL;
    return a1;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
          (__int64)v3,
          (const void *)Pool2,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
    goto LABEL_20;
  Pool2 += 16LL;
LABEL_6:
  *(_QWORD *)(a1 + 24) = Pool2;
  if ( Pool2 )
  {
LABEL_7:
    *(_QWORD *)(a1 + 16) = Pool2 + 16;
    v9 = dword_1C026B5B8[v4];
    *(_DWORD *)(a1 + 12) = v9;
    *(_DWORD *)(a1 + 36) = v9;
    *(_DWORD *)(Pool2 + 12) = 0;
    *(_DWORD *)(Pool2 + 4) = 1;
    *(_DWORD *)(Pool2 + 8) = v4;
    **(_DWORD **)(a1 + 24) = *(_DWORD *)(a1 + 32) - 16;
  }
  return a1;
}
