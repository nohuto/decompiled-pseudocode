/*
 * XREFs of IsNsobjPciBus @ 0x1C008A678
 * Callers:
 *     ACPIBusIrpStartDeviceWorker @ 0x1C0081770 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIBusIrpStopDevice @ 0x1C0081900 (ACPIBusIrpStopDevice.c)
 *     ACPIFilterIrpStopDevice @ 0x1C0086CA0 (ACPIFilterIrpStopDevice.c)
 *     ACPIInitStopDevice @ 0x1C0087AE4 (ACPIInitStopDevice.c)
 *     ACPIInternalIsPci @ 0x1C0088074 (ACPIInternalIsPci.c)
 *     EnableDisableRegions @ 0x1C008A57C (EnableDisableRegions.c)
 *     IsPciBus @ 0x1C008A744 (IsPciBus.c)
 *     IsPciBusExtension @ 0x1C008A768 (IsPciBusExtension.c)
 * Callees:
 *     IsPciBusAsync @ 0x1C0035270 (IsPciBusAsync.c)
 *     AMLIGetNSObjectContext @ 0x1C0048364 (AMLIGetNSObjectContext.c)
 */

char __fastcall IsNsobjPciBus(volatile signed __int32 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  char result; // al
  _BYTE Event[32]; // [rsp+30h] [rbp-28h] BYREF
  char v6; // [rsp+68h] [rbp+10h] BYREF

  memset(Event, 0, sizeof(Event));
  v2 = AMLIGetNSObjectContext((__int64)a1);
  if ( !v2 )
    goto LABEL_6;
  v3 = *(_QWORD *)(v2 + 8);
  if ( (v3 & 0x2000000) != 0 )
    return 1;
  if ( (v3 & 0x100000000LL) != 0 )
    return 0;
LABEL_6:
  KeInitializeEvent((PRKEVENT)Event, SynchronizationEvent, 0);
  *(_DWORD *)&Event[24] = -1073741275;
  v6 = 0;
  if ( (unsigned int)IsPciBusAsync(a1, (__int64)AmlisuppCompletePassive, (__int64)Event, &v6) != 259 )
    return v6;
  KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
  result = v6;
  if ( *(int *)&Event[24] < 0 )
    return 0;
  return result;
}
