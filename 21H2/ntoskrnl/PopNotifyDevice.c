/*
 * XREFs of PopNotifyDevice @ 0x14099390C
 * Callers:
 *     PopWakeDeviceList @ 0x140383184 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x140383364 (PopSleepDeviceList.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14027171C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopAllocateIrp @ 0x14036E0F0 (PopAllocateIrp.c)
 *     PopMapInternalActionToIrpAction @ 0x14038359C (PopMapInternalActionToIrpAction.c)
 *     PoFxActivateDeviceForSystemTransition @ 0x1403835C0 (PoFxActivateDeviceForSystemTransition.c)
 *     PopQueueQuerySetIrp @ 0x140398494 (PopQueueQuerySetIrp.c)
 *     PopLogNotifyDevice @ 0x140576D0C (PopLogNotifyDevice.c)
 */

NTSTATUS __fastcall PopNotifyDevice(__int64 a1, __int64 a2)
{
  char v4; // r8
  __int64 v5; // rdx
  _QWORD *v6; // r9
  ULONG v7; // r15d
  int v8; // r10d
  int v9; // esi
  __int64 v10; // r14
  PIRP v11; // rbp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _IO_STACK_LOCATION *v13; // rax
  void *DeviceAttachmentBaseRefWithTag; // rax
  __int64 v16; // [rsp+90h] [rbp+8h] BYREF
  PIRP Irp; // [rsp+98h] [rbp+10h] BYREF

  Irp = 0LL;
  v16 = 0LL;
  v4 = *(_BYTE *)(a1 + 464) || **(_QWORD **)(a1 + 56) != *(_QWORD *)(a2 + 64);
  v7 = PopMapInternalActionToIrpAction(DWORD2(PopCurrentBroadcast), *(_DWORD *)(a1 + 4), v4);
  v9 = v8;
  if ( v7 == 7 && *v6 == *(_QWORD *)(a2 + 64) && *(_BYTE *)a1 == 2 )
  {
    *v6 = 0LL;
    v9 = *(_DWORD *)(a1 + 4);
  }
  PopAllocateIrp(*(struct _DEVICE_OBJECT **)(a2 + 48), v5, *(_BYTE *)a1, 0, v9, 1, 0, 0LL, 0LL, &Irp, &v16);
  v10 = v16;
  v11 = Irp;
  *(_QWORD *)(v16 + 216) = a2;
  *(_BYTE *)(v10 + 224) = 0;
  CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].Parameters.Create.Options = 0;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = v9;
  CurrentStackLocation[-1].Parameters.Create.EaLength = v7;
  CurrentStackLocation[-1].Parameters.Read.Length = DWORD1(PopCurrentBroadcast);
  v13 = v11->Tail.Overlay.CurrentStackLocation;
  v13[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopSystemIrpCompletion;
  v13[-1].Context = (PVOID)v10;
  v13[-1].Control = -32;
  if ( (xmmword_140CFC490 & 0x8000) != 0 )
    PopLogNotifyDevice(*(_QWORD *)(a2 + 48), a2, (__int64)v11);
  if ( v9 > 1 && (unsigned __int8)(*(_BYTE *)a1 - 2) <= 1u )
  {
    DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a2 + 48), 0x72496F50u);
    PoFxActivateDeviceForSystemTransition((__int64)DeviceAttachmentBaseRefWithTag, *(_BYTE *)a1 == 2);
    *(_BYTE *)(v10 + 224) = 1;
  }
  return PopQueueQuerySetIrp(v11);
}
