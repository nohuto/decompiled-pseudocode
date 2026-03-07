__int64 __fastcall ACPIBusIrpQueryPower(ULONG_PTR a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 DeviceExtension; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation->Control |= 1u;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( CurrentStackLocation->Parameters.Create.Options || CurrentStackLocation->Parameters.Create.EaLength != 7 )
    goto LABEL_15;
  if ( _bittest64((const signed __int64 *)(DeviceExtension + 8), 0x33u) )
    goto LABEL_14;
  v6 = *(_QWORD *)(DeviceExtension + 760);
  if ( ACPIDockIsDockDevice() )
    goto LABEL_15;
  switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
  {
    case 2u:
      v7 = 826951007LL;
LABEL_13:
      if ( !(unsigned __int8)AMLIIsNamedChildPresent(v6, v7) )
        break;
LABEL_15:
      ACPIDispatchPowerIrpSuccess(a1, a2);
      return 259LL;
    case 3u:
      v7 = 843728223LL;
      goto LABEL_13;
    case 4u:
      v7 = 860505439LL;
      goto LABEL_13;
    case 5u:
      v7 = 877282655LL;
      goto LABEL_13;
  }
LABEL_14:
  a2->IoStatus.Status = -1073741823;
  IofCompleteRequest(a2, 0);
  return 259LL;
}
