/*
 * XREFs of ACPIDockIrpQueryPower @ 0x1C0009440
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     ACPIDispatchPowerIrpSuccess @ 0x1C0002B60 (ACPIDispatchPowerIrpSuccess.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C000A374 (WPP_RECORDER_SF_qqss.c)
 *     AMLIIsNamedChildPresent @ 0x1C00487BC (AMLIIsNamedChildPresent.c)
 */

__int64 __fastcall ACPIDockIrpQueryPower(ULONG_PTR a1, IRP *a2)
{
  _QWORD *DeviceExtension; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  void *v7; // rcx
  void *v8; // r8
  _UNKNOWN **v9; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v12; // r8
  __int64 v13; // rdx

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  v5 = DeviceExtension[23];
  if ( !v5 )
  {
    v6 = DeviceExtension[1];
    v7 = &unk_1C00622D0;
    v8 = &unk_1C00622D0;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v7 = (void *)DeviceExtension[76];
      if ( (v6 & 0x400000000000LL) != 0 )
        v8 = (void *)DeviceExtension[77];
    }
    v9 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_qqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v9,
        18,
        25,
        (__int64)&WPP_6625d3923c543510b1fa3235c3eeddfe_Traceguids,
        (char)a2,
        (char)DeviceExtension,
        (__int64)v7,
        (__int64)v8);
    }
    goto LABEL_7;
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( !CurrentStackLocation->Parameters.Create.Options && CurrentStackLocation->Parameters.Create.EaLength == 7 )
  {
    v12 = *(_QWORD *)(v5 + 760);
    if ( ((CurrentStackLocation->Parameters.Read.Length >> 8) & 0xF) != 1 )
    {
      switch ( (CurrentStackLocation->Parameters.Read.Length >> 8) & 0xF )
      {
        case 2u:
          v13 = 826951007LL;
          break;
        case 3u:
          v13 = 843728223LL;
          break;
        case 4u:
          v13 = 860505439LL;
          break;
        case 5u:
          v13 = 877282655LL;
          break;
        default:
          goto LABEL_7;
      }
      if ( !(unsigned __int8)AMLIIsNamedChildPresent(v12, v13) )
      {
        a2->IoStatus.Status = -1073741823;
        IofCompleteRequest(a2, 0);
        return 259LL;
      }
    }
  }
LABEL_7:
  ACPIDispatchPowerIrpSuccess(a1, a2);
  return 259LL;
}
