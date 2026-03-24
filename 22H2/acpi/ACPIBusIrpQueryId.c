/*
 * XREFs of ACPIBusIrpQueryId @ 0x1C008FF00
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalSetFlags @ 0x1C0002350 (ACPIInternalSetFlags.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0002DA4 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsdLqss @ 0x1C0002DC4 (WPP_RECORDER_SF_qsdLqss.c)
 *     WPP_RECORDER_SF_qsdqss @ 0x1C002B5AC (WPP_RECORDER_SF_qsdqss.c)
 *     ACPIBusAndFilterIrpQueryContainerId @ 0x1C002E158 (ACPIBusAndFilterIrpQueryContainerId.c)
 *     ACPIEmQueryFailDeviceResetOnOpenHandles @ 0x1C00609A0 (ACPIEmQueryFailDeviceResetOnOpenHandles.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C008F720 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C0096300 (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C009670C (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C00A2000 (ACPIBusIrpQueryInstanceId.c)
 *     ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule @ 0x1C00B61A0 (ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule.c)
 */

__int64 __fastcall ACPIBusIrpQueryId(ULONG_PTR a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  char v3; // si
  int Status; // r14d
  unsigned __int8 MinorFunction; // r13
  __int64 DeviceExtension; // rax
  unsigned int Length; // ebx
  const char *v9; // r12
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  _WORD *v13; // rcx
  __int64 v14; // rcx
  char *v15; // rax
  const char *v16; // r8
  char *IrpText; // rax
  __int64 v19; // rdx
  const char *v20; // r8
  char v21; // r10
  const char *v22; // r11
  int v23; // [rsp+A8h] [rbp+48h] BYREF
  PVOID P; // [rsp+B0h] [rbp+50h] BYREF
  size_t v25; // [rsp+B8h] [rbp+58h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  Status = a2->IoStatus.Status;
  v23 = 0;
  v25 = 0LL;
  P = 0LL;
  MinorFunction = CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  Length = CurrentStackLocation->Parameters.Read.Length;
  v9 = byte_1C00701BA;
  v10 = (_QWORD *)DeviceExtension;
  switch ( Length )
  {
    case 0u:
      v12 = ACPIBusIrpQueryDeviceId(&P, &v25, DeviceExtension, 0x200000000000LL);
      goto LABEL_7;
    case 1u:
      v12 = ACPIBusIrpQueryHardwareId((wchar_t **)&P, &v25, DeviceExtension);
      goto LABEL_7;
    case 2u:
      v12 = ACPIBusIrpQueryCompatibleId(&P, &v25, DeviceExtension, 0x200000000000LL);
      goto LABEL_7;
  }
  v11 = Length - 3;
  if ( Length == 3 )
  {
    v12 = ACPIBusIrpQueryInstanceId(&P, &v25, DeviceExtension, 0x200000000000LL);
LABEL_7:
    Status = v12;
    goto LABEL_8;
  }
  if ( Length == 5 )
  {
    v12 = ACPIBusAndFilterIrpQueryContainerId(&P, &v25, DeviceExtension);
    goto LABEL_7;
  }
  if ( DeviceExtension && (*(_QWORD *)(DeviceExtension + 8) & 0x200000000000LL) != 0 )
    v11 = 0x400000000000LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v11, MinorFunction);
    WPP_RECORDER_SF_qsdqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v19,
      (__int64)v20,
      0x2Au,
      (__int64)&WPP_aa0188d95df637fd68421574d89cc32b_Traceguids,
      (char)a2,
      IrpText,
      Length,
      v21,
      v22,
      v20);
  }
LABEL_8:
  if ( (AcpiOverrideAttributes & 0x100000) != 0 && Length - 1 <= 1 && Status >= 0 )
  {
    v13 = P;
    if ( !P )
      goto LABEL_10;
    if ( (int)ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule(Length, P, &v23) >= 0 && v23 == 2 )
      ACPIInternalSetFlags(v10 + 120, 0x800000uLL);
  }
  v13 = P;
LABEL_10:
  if ( (AcpiOverrideAttributes & 0x200000) != 0 && Length - 1 <= 1 )
  {
    if ( Status < 0 )
      goto LABEL_19;
    if ( v13 )
    {
      if ( (int)ACPIEmQueryFailDeviceResetOnOpenHandles(Length, v13) >= 0 && v23 == 2 )
        ACPIInternalSetFlags(v10 + 120, 0x40000000uLL);
      v13 = P;
    }
  }
  if ( Status >= 0 )
  {
    a2->IoStatus.Information = (unsigned __int64)v13;
    goto LABEL_13;
  }
LABEL_19:
  if ( v13 )
    ExFreePoolWithTag(v13, 0x53706341u);
LABEL_13:
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  if ( v10 )
  {
    v14 = 0x200000000000LL;
    v3 = (char)v10;
    if ( (v10[1] & 0x200000000000LL) != 0 )
    {
      v9 = (const char *)v10[71];
      v14 = 0x400000000000LL;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = ACPIDebugGetIrpText(v14, MinorFunction);
    WPP_RECORDER_SF_qsdLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      (__int64)v16,
      0x2Bu,
      (__int64)&WPP_aa0188d95df637fd68421574d89cc32b_Traceguids,
      (char)a2,
      v15,
      Length,
      Status,
      v3,
      v9,
      v16);
  }
  return (unsigned int)Status;
}
