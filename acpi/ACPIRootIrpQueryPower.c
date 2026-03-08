/*
 * XREFs of ACPIRootIrpQueryPower @ 0x1C003D0E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     ACPIDispatchForwardPowerIrp @ 0x1C0002AF0 (ACPIDispatchForwardPowerIrp.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C0009C8C (WPP_RECORDER_SF_qLqss.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIGetParent @ 0x1C0048724 (AMLIGetParent.c)
 *     AMLIIsNamedChildPresent @ 0x1C00487BC (AMLIIsNamedChildPresent.c)
 */

__int64 __fastcall ACPIRootIrpQueryPower(ULONG_PTR a1, IRP *a2)
{
  int Status; // ebx
  char v5; // bp
  __int64 DeviceExtension; // rax
  _QWORD *v7; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int v9; // ebx
  __int64 v10; // r14
  char v11; // r8
  const char *v12; // rax
  const char *v13; // rdx
  __int64 v14; // rcx

  Status = a2->IoStatus.Status;
  v5 = 1;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v7 = (_QWORD *)DeviceExtension;
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( !CurrentStackLocation->Parameters.Create.Options )
  {
    if ( CurrentStackLocation->Parameters.Create.EaLength == 7 )
    {
LABEL_3:
      v5 = 0;
      Status = -1073741808;
      goto LABEL_18;
    }
    switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
    {
      case 1u:
        v9 = 1597002591;
        break;
      case 2u:
        v9 = 1597068127;
        break;
      case 3u:
        v9 = 1597133663;
        break;
      case 4u:
        v9 = 1597199199;
        break;
      default:
        if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 5 <= 1 )
        {
          Status = 0;
          goto LABEL_18;
        }
        goto LABEL_3;
    }
    v10 = AMLIGetParent(*(_QWORD *)(DeviceExtension + 760));
    if ( (unsigned __int8)AMLIIsNamedChildPresent(v10, v9) )
    {
      Status = 0;
    }
    else
    {
      v5 = 0;
      Status = -1073741808;
    }
    AMLIDereferenceHandleEx(v10);
  }
LABEL_18:
  v11 = 0;
  a2->IoStatus.Status = Status;
  v12 = (const char *)&unk_1C00622D0;
  v13 = (const char *)&unk_1C00622D0;
  if ( v7 )
  {
    v14 = v7[1];
    v11 = (char)v7;
    if ( (v14 & 0x200000000000LL) != 0 )
    {
      v12 = (const char *)v7[76];
      if ( (v14 & 0x400000000000LL) != 0 )
        v13 = (const char *)v7[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x15u,
      (__int64)&WPP_751107becb7a3b7b48760ac4afe26340_Traceguids,
      (char)a2,
      Status,
      v11,
      v12,
      v13);
  if ( v5 )
    ACPIDispatchForwardPowerIrp(a1, a2);
  else
    IofCompleteRequest(a2, 0);
  return 259LL;
}
