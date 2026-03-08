/*
 * XREFs of ACPIDockIrpQueryCapabilities @ 0x1C007AD60
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDebugGetIrpText @ 0x1C000153C (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00015BC (WPP_RECORDER_SF_qsLqss.c)
 *     WPP_RECORDER_SF_dqss @ 0x1C0009A6C (WPP_RECORDER_SF_dqss.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C000A374 (WPP_RECORDER_SF_qqss.c)
 *     AMLIIsNamedChildPresent @ 0x1C00487BC (AMLIIsNamedChildPresent.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C00952EC (ACPISystemPowerQueryDeviceCapabilities.c)
 */

__int64 __fastcall ACPIDockIrpQueryCapabilities(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  ULONG_PTR v5; // rbx
  __int64 v6; // rsi
  _IO_SECURITY_CONTEXT *SecurityContext; // rdi
  __int64 v8; // rax
  const char *v9; // rdi
  const char *v10; // rcx
  unsigned int v11; // esi
  _QWORD *v12; // rsi
  int DeviceCapabilities; // eax
  const char *SecurityQos_low; // rcx
  const char *v15; // rdi
  __int64 v16; // rax
  const char *v17; // rdx
  char *IrpText; // rax
  const char *v19; // r8
  unsigned __int8 MinorFunction; // [rsp+98h] [rbp+10h]

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = DeviceExtension;
  v6 = *(_QWORD *)(DeviceExtension + 184);
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( v6 )
  {
    v12 = *(_QWORD **)(v6 + 760);
    HIDWORD(SecurityContext->SecurityQos) |= 0x1F0u;
    if ( AMLIIsNamedChildPresent(v12, 810173791) )
      HIDWORD(SecurityContext->SecurityQos) |= 8u;
    if ( AMLIIsNamedChildPresent(v12, 826951007)
      || AMLIIsNamedChildPresent(v12, 843728223)
      || AMLIIsNamedChildPresent(v12, 860505439)
      || AMLIIsNamedChildPresent(v12, 877282655) )
    {
      HIDWORD(SecurityContext->SecurityQos) |= 0x10000u;
    }
    DeviceCapabilities = ACPISystemPowerQueryDeviceCapabilities(v5);
    LODWORD(SecurityContext[1].SecurityQos) = 4;
    v11 = DeviceCapabilities;
    HIDWORD(SecurityContext[1].SecurityQos) = 4;
    LODWORD(SecurityContext[1].AccessState) = 4;
    *(_OWORD *)(v5 + 508) = *(_OWORD *)&SecurityContext->SecurityQos;
    *(_QWORD *)(v5 + 524) = *(_QWORD *)&SecurityContext->DesiredAccess;
    SecurityQos_low = (const char *)LODWORD(SecurityContext[1].SecurityQos);
    v15 = byte_1C00622D0;
    *(_DWORD *)(v5 + 532) = (_DWORD)SecurityQos_low;
    if ( DeviceCapabilities < 0 )
    {
      v16 = *(_QWORD *)(v5 + 8);
      v17 = byte_1C00622D0;
      SecurityQos_low = byte_1C00622D0;
      if ( (v16 & 0x200000000000LL) != 0 )
      {
        v17 = *(const char **)(v5 + 608);
        if ( (v16 & 0x400000000000LL) != 0 )
          SecurityQos_low = *(const char **)(v5 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0xDu,
          (__int64)&WPP_6625d3923c543510b1fa3235c3eeddfe_Traceguids,
          v11,
          v5,
          v17,
          SecurityQos_low);
    }
    if ( (*(_QWORD *)(v5 + 8) & 0x200000000000LL) != 0 )
      v15 = *(const char **)(v5 + 608);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      IrpText = ACPIDebugGetIrpText((__int64)SecurityQos_low, MinorFunction);
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        5u,
        0xEu,
        (__int64)&WPP_6625d3923c543510b1fa3235c3eeddfe_Traceguids,
        (char)a2,
        (__int64)IrpText,
        v11,
        v5,
        v15,
        v19);
    }
  }
  else
  {
    v8 = *(_QWORD *)(DeviceExtension + 8);
    v9 = byte_1C00622D0;
    v10 = byte_1C00622D0;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v9 = *(const char **)(v5 + 608);
      if ( (v8 & 0x400000000000LL) != 0 )
        v10 = *(const char **)(v5 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x12u,
        0xCu,
        (__int64)&WPP_6625d3923c543510b1fa3235c3eeddfe_Traceguids,
        (char)a2,
        v5,
        v9,
        v10);
    v11 = -1073741823;
  }
  a2->IoStatus.Status = v11;
  IofCompleteRequest(a2, 0);
  return v11;
}
