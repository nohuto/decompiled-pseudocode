/*
 * XREFs of ACPIProcessorStartDevice @ 0x1C003A140
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     ACPIProcessorStartDeviceWorker @ 0x1C003A1C0 (ACPIProcessorStartDeviceWorker.c)
 */

__int64 __fastcall ACPIProcessorStartDevice(ULONG_PTR a1, __int64 a2)
{
  struct _WORK_QUEUE_ITEM *DeviceExtension; // rax
  bool v4; // zf
  struct _WORK_QUEUE_ITEM *v5; // rcx

  DeviceExtension = (struct _WORK_QUEUE_ITEM *)ACPIInternalGetDeviceExtension(a1);
  v4 = AcpiProcessorAsyncStart == 0;
  v5 = DeviceExtension + 1;
  DeviceExtension[2].List.Flink = DeviceExtension[24].List.Flink;
  DeviceExtension[2].List.Blink = (_LIST_ENTRY *)a2;
  if ( v4 )
  {
    ACPIProcessorStartDeviceWorker();
    return *(unsigned int *)(a2 + 48);
  }
  else
  {
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
    v5->List.Flink = 0LL;
    DeviceExtension[1].WorkerRoutine = (void (__fastcall *)(void *))ACPIProcessorStartDeviceWorker;
    DeviceExtension[1].Parameter = &DeviceExtension[1];
    ExQueueWorkItem(v5, DelayedWorkQueue);
    return 259LL;
  }
}
