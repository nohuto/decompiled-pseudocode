__int64 __fastcall Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  char v5; // al
  int v6; // edx
  int v7; // r8d
  char v8; // r14
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  __int64 v12; // r8
  unsigned int v13; // edi
  __int64 v14; // rbp
  unsigned int i; // edi
  int v17; // r9d

  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C00633D8)
                 + 8);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3104))(WdfDriverGlobals, a1);
  v8 = v5;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqh_EtwWriteTransfer(
      *(unsigned __int8 *)(v4 + 468),
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_POST_INTERRUPTS_START,
      v7,
      *(_QWORD *)(v4 + 8),
      a2,
      v5,
      *(_BYTE *)(v4 + 468));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qLL(
      *(_QWORD *)(v4 + 72),
      v6,
      4,
      75,
      (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
      a1,
      a2,
      *(_DWORD *)(v4 + 420));
  }
  if ( *(_DWORD *)(v4 + 464) && *(_QWORD *)(v4 + 848) && qword_1C0064B28 )
    qword_1C0064B28();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(v4 + 72),
      v6,
      4,
      122,
      (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
      v4,
      a2);
  }
  v9 = Controller_Start(v4);
  v13 = v9;
  if ( v9 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_14;
    v17 = 76;
    goto LABEL_22;
  }
  v14 = *(_QWORD *)(v4 + 152);
  for ( i = 1; i <= *(_DWORD *)(v14 + 16); ++i )
  {
    LOBYTE(v12) = 1;
    RootHub_DetectAndAcknowledgePortResume(v14, i, v12);
  }
  v9 = Command_D0EntryPostInterruptsEnabled(*(_QWORD *)(v4 + 144), a2);
  v13 = v9;
  if ( v9 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_14;
    v17 = 78;
LABEL_22:
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(v4 + 72), v10, 4, v17, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v9);
    goto LABEL_14;
  }
  if ( (*(_BYTE *)(v4 + 336) & 0x10) != 0 )
  {
    v13 = -1073741637;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(v4 + 72), v10, 4, 79, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
    }
  }
  else
  {
    Wmi_CreateControllerCapabilities(*(_QWORD *)(v4 + 160));
  }
LABEL_14:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqq_EtwWriteTransfer(
      v11,
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_POST_INTERRUPTS_COMPLETE,
      v12,
      *(_QWORD *)(v4 + 8),
      a2,
      v8,
      v13);
  Etw_ControllerRundown(0LL, v4);
  return v13;
}
