/*
 * XREFs of ?ndisWakeUpDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0095D28
 * Callers:
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C008D060 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C011F064 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisWdfPreReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011F670 (-ndisWdfPreReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0015428 (-ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F9820 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisWakeUpDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 result; // rax

  if ( a1->CurrentDevicePowerState != PowerDeviceD0 )
  {
    result = ndisRequestDevicePowerD0(a1, NdisMEventD0_D3DResume);
    if ( (_DWORD)result != 259 )
      return result;
    ndisWaitForKernelObject(&a1->PowerD0CompleteEvent);
  }
  return 0LL;
}
