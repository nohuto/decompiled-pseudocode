/*
 * XREFs of PopNotifyDevice @ 0x140A4ADB0
 * Callers:
 *     PopWakeDeviceList @ 0x14038BB00 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x14038BCE0 (PopSleepDeviceList.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14036B86C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopMapInternalActionToIrpAction @ 0x14038BF18 (PopMapInternalActionToIrpAction.c)
 *     PoFxActivateDeviceForSystemTransition @ 0x14038BF3C (PoFxActivateDeviceForSystemTransition.c)
 *     PopAllocateIrp @ 0x1403A3F0C (PopAllocateIrp.c)
 *     PopQueueQuerySetIrp @ 0x1403A4264 (PopQueueQuerySetIrp.c)
 *     PopLogNotifyDevice @ 0x1405D6E84 (PopLogNotifyDevice.c)
 */

NTSTATUS __fastcall PopNotifyDevice(__int64 a1, __int64 a2)
{
  char v4; // r8
  __int64 v5; // rdx
  _QWORD *v6; // r9
  ULONG v7; // r15d
  int v8; // r10d
  int v9; // esi
  _BYTE *v10; // r14
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
  PopAllocateIrp(*(struct _DEVICE_OBJECT **)(a2 + 48), v5, *(_BYTE *)a1, 0, v9, 1, 0, 0LL, 0LL, (__int64 *)&Irp, &v16);
  v10 = (_BYTE *)v16;
  v11 = Irp;
  *(_QWORD *)(v16 + 216) = a2;
  v10[224] = 0;
  CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].Parameters.Create.Options = 0;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = v9;
  CurrentStackLocation[-1].Parameters.Create.EaLength = v7;
  CurrentStackLocation[-1].Parameters.Read.Length = DWORD1(PopCurrentBroadcast);
  v13 = v11->Tail.Overlay.CurrentStackLocation;
  v13[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopSystemIrpCompletion;
  v13[-1].Context = v10;
  v13[-1].Control = -32;
  if ( (xmmword_140D06910 & 0x8000) != 0 )
    PopLogNotifyDevice(*(_QWORD *)(a2 + 48), a2, (__int64)v11);
  if ( v9 > 1 && (unsigned __int8)(*(_BYTE *)a1 - 2) <= 1u )
  {
    DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a2 + 48), 0x72496F50u);
    PoFxActivateDeviceForSystemTransition((__int64)DeviceAttachmentBaseRefWithTag, *(_BYTE *)a1 == 2);
    v10[224] = 1;
  }
  return PopQueueQuerySetIrp(v11);
}
