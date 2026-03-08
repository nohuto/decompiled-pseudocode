/*
 * XREFs of PiUpdateDevicePanel @ 0x140683D74
 * Callers:
 *     PipProcessStartPhase3 @ 0x14068203C (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     _CmUpdateDevicePanel @ 0x140683E30 (_CmUpdateDevicePanel.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x140685094 (PnpDeviceObjectToDeviceInstance.c)
 */

__int64 __fastcall PiUpdateDevicePanel(__int64 a1, HANDLE a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int updated; // edi
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  Handle = 0LL;
  if ( a2 )
  {
    Handle = a2;
  }
  else
  {
    updated = PnpDeviceObjectToDeviceInstance(*(_QWORD *)(a1 + 32), &Handle, 131097LL, a4);
    if ( updated < 0 )
      goto LABEL_4;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  updated = CmUpdateDevicePanel(*(_QWORD *)&PiPnpRtlCtx, *(_QWORD *)(a1 + 48), Handle);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
LABEL_4:
  if ( Handle && Handle != a2 )
    ZwClose(Handle);
  return (unsigned int)updated;
}
