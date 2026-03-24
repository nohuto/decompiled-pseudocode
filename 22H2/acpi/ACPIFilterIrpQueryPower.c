/*
 * XREFs of ACPIFilterIrpQueryPower @ 0x1C0055790
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDispatchForwardPowerIrp @ 0x1C000CE50 (ACPIDispatchForwardPowerIrp.c)
 *     AMLIIsNamedChildPresent @ 0x1C001F220 (AMLIIsNamedChildPresent.c)
 *     ACPIDockIsDockDevice @ 0x1C0020C40 (ACPIDockIsDockDevice.c)
 */

__int64 __fastcall ACPIFilterIrpQueryPower(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  __int64 *v6; // rbp
  unsigned int LowPart; // ebx
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  int v11; // edx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation->Control |= 1u;
  if ( CurrentStackLocation->Parameters.Create.Options )
    goto LABEL_15;
  if ( CurrentStackLocation->Parameters.Create.EaLength != 7 )
    goto LABEL_15;
  v6 = *(__int64 **)(DeviceExtension + 720);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( ACPIDockIsDockDevice(v6) )
    goto LABEL_15;
  v8 = LowPart - 2;
  if ( !v8 )
  {
    v11 = 826951007;
    goto LABEL_13;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v11 = 843728223;
    goto LABEL_13;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v11 = 860505439;
    goto LABEL_13;
  }
  if ( v10 == 1 )
  {
    v11 = 877282655;
LABEL_13:
    if ( !AMLIIsNamedChildPresent(v6, v11) )
      goto LABEL_8;
    a2->IoStatus.Status = 0;
LABEL_15:
    ACPIDispatchForwardPowerIrp(a1, a2);
    return 259LL;
  }
LABEL_8:
  a2->IoStatus.Status = -1073741823;
  IofCompleteRequest(a2, 0);
  return 259LL;
}
