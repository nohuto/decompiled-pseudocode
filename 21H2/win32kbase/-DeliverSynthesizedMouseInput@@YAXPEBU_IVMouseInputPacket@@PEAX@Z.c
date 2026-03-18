/*
 * XREFs of ?DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z @ 0x1C01EC638
 * Callers:
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EE030 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0096098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0096160 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ @ 0x1C01E76C0 (-GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ.c)
 *     ?GetMouseInputDataFromIVMouseInput@@YAXQEAU_MOUSE_INPUT_DATA@@QEAU_IVMouseInputData@@@Z @ 0x1C01EC8C0 (-GetMouseInputDataFromIVMouseInput@@YAXQEAU_MOUSE_INPUT_DATA@@QEAU_IVMouseInputData@@@Z.c)
 */

void __fastcall DeliverSynthesizedMouseInput(const struct _IVMouseInputPacket *a1, void *a2)
{
  __int64 v2; // r14
  PVOID v3; // rbx
  struct _IVMouseInputData *v5; // r15
  char v7; // bp
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 Pool2; // rdi
  int v11; // r8d
  int v12; // edx
  char v13; // si
  _DWORD *v14; // rsi
  __int64 v15; // rbx
  struct InputVirtualization::RootSynthesizedMouseList *Instance; // rsi
  __int64 *v17; // rax
  PVOID BackTrace[20]; // [rsp+40h] [rbp-C8h] BYREF

  v2 = *((unsigned int *)a1 + 8);
  v3 = gpLeakTrackingAllocator;
  v5 = (struct _IVMouseInputData *)*((_QWORD *)a1 + 3);
  v7 = 1;
  v8 = 28 * (int)v2 + 36;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x736D5649) != 0x736D5649
    || (v9 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_5:
    Pool2 = ExAllocatePool2(260LL, v8);
    goto LABEL_6;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v9) != 1936545353 )
  {
    if ( ++v9 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_5;
  }
  v13 = 0;
  if ( v8 < 0x1000 || ((28 * (_WORD)v2 + 36) & 0xFFF) != 0 )
  {
    v13 = 1;
    v8 += 16LL;
  }
  Pool2 = ExAllocatePool2(260LL, v8);
  if ( !Pool2 )
    goto LABEL_7;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( !v13 || (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
           (__int64)v3,
           Pool2,
           (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      goto LABEL_24;
    }
LABEL_23:
    ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_7:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 49;
      LOBYTE(v12) = v7;
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v12,
        v11,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        49,
        (__int64)&WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids);
    }
    return;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
          (__int64)v3,
          (const void *)Pool2,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
    goto LABEL_23;
  Pool2 += 16LL;
LABEL_6:
  if ( !Pool2 )
    goto LABEL_7;
LABEL_24:
  *(_QWORD *)(Pool2 + 16) = a2;
  *(_DWORD *)(Pool2 + 32) = v2;
  *(_QWORD *)(Pool2 + 24) = *((_QWORD *)a1 + 6);
  if ( (_DWORD)v2 )
  {
    v14 = (_DWORD *)((char *)v5 + 40);
    v15 = Pool2 + 36;
    do
    {
      GetMouseInputDataFromIVMouseInput((struct _MOUSE_INPUT_DATA *const)v15, v5);
      v5 = (struct _IVMouseInputData *)((char *)v5 + 48);
      *(_DWORD *)(v15 + 24) = *v14;
      v14 += 12;
      v15 += 28LL;
      --v2;
    }
    while ( v2 );
  }
  Instance = InputVirtualization::RootSynthesizedMouseList::GetInstance();
  CPushLock::AcquireLockExclusive((struct InputVirtualization::RootSynthesizedMouseList *)((char *)Instance + 16));
  v17 = (__int64 *)*((_QWORD *)Instance + 1);
  if ( (struct InputVirtualization::RootSynthesizedMouseList *)*v17 != Instance )
    __fastfail(3u);
  *(_QWORD *)Pool2 = Instance;
  *(_QWORD *)(Pool2 + 8) = v17;
  *v17 = Pool2;
  *((_QWORD *)Instance + 1) = Pool2;
  KeSetEvent((PRKEVENT)gpevtSynthesizedContainerMouseInput, 1, 0);
  CPushLock::ReleaseLock((struct InputVirtualization::RootSynthesizedMouseList *)((char *)Instance + 16));
}
