char __fastcall UsbDevice_DisableCompletion(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rdi
  char v7; // r15
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  char v12; // cl
  int v13; // edx
  int v14; // edx
  __int64 v15; // r13
  __int64 *v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // rbp
  __int64 v19; // rcx
  _QWORD *XilCoreDeviceSlotData; // rax
  __int64 v21; // rcx
  unsigned int v22; // eax

  v4 = *(_QWORD *)(a1 + 48);
  v7 = 1;
  if ( (_DWORD)a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = *(unsigned __int8 *)(v4 + 135);
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        v8,
        12,
        55,
        (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
        *(_BYTE *)(v4 + 135),
        *(_QWORD *)v4);
    }
    LOBYTE(v9) = UsbDevice_SetDeviceDisabled(v4, a2);
LABEL_5:
    v7 = 0;
    v10 = 3221225473LL;
    goto LABEL_6;
  }
  v12 = *(_BYTE *)(a1 + 60);
  if ( v12 != 1 && v12 != 11 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = *(unsigned __int8 *)(a1 + 61);
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_dqL(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), v13, a3, 57);
    }
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)(v4 + 8),
      *(_QWORD *)v4,
      0,
      0x100000LL,
      "Disable Slot Command failed",
      (__int128 *)(a1 + 24),
      0LL);
    LOBYTE(v9) = Controller_ReportFatalErrorEx(*(_QWORD *)(v4 + 8), 2u, 4120, 0LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_5;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = *(unsigned __int8 *)(a1 + 61);
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      v14,
      12,
      56,
      (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
      *(_BYTE *)(a1 + 61),
      *(_QWORD *)v4);
  }
  v15 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 136LL);
  if ( a3 != 2 )
  {
    LOBYTE(a2) = 1;
    Endpoint_Disable(*(_QWORD *)(v4 + 176), a2);
  }
  v16 = (__int64 *)(v4 + 184);
  v17 = 30LL;
  do
  {
    if ( *v16 )
    {
      LOBYTE(a2) = 1;
      Endpoint_Disable(*v16, a2);
      *v16 = 0LL;
    }
    ++v16;
    --v17;
  }
  while ( v17 );
  v18 = *(unsigned __int8 *)(v4 + 135);
  if ( *(_BYTE *)(v15 + 80) )
  {
    XilDeviceSlot_SendClearDeviceContextRequest((__int64 *)(v15 + 16), v4);
    v9 = *(_QWORD *)(v15 + 88);
    if ( *(_BYTE *)(v9 + 80) )
      v19 = *(_QWORD *)(v9 + 24);
    else
      v19 = *(_QWORD *)(v9 + 72);
    *(_QWORD *)(v19 + 8 * v18) = 0LL;
  }
  else
  {
    XilCoreDeviceSlotData = (_QWORD *)DeviceSlot_GetXilCoreDeviceSlotData(*(_QWORD *)(v15 + 88), a2, a3, a4);
    LOBYTE(v9) = (unsigned __int8)XilCoreDeviceSlot_ClearDeviceContext(XilCoreDeviceSlotData, v4, v18);
  }
  *(_WORD *)(v4 + 134) = 0;
  v10 = 0LL;
  *(_QWORD *)(v4 + 160) = 0LL;
  if ( a3 == 2 )
  {
    memset((void *)(v4 + 456), 0, 0x60uLL);
    v21 = *(_QWORD *)(v4 + 8);
    *(_QWORD *)(v4 + 496) = UsbDevice_EnableCompletion;
    v22 = *(_DWORD *)(v4 + 492) & 0xFFFF27FF;
    *(_QWORD *)(v4 + 504) = v4;
    *(_QWORD *)(v4 + 528) = 0LL;
    *(_DWORD *)(v4 + 492) = v22 | 0x2400;
    *(_QWORD *)(v4 + 536) = 0LL;
    *(_QWORD *)(v4 + 544) = 0LL;
    LOBYTE(v9) = Command_SendCommand(*(_QWORD *)(v21 + 144), v4 + 456);
    return v9;
  }
LABEL_6:
  if ( a3 == 1 )
    v10 = 3221225473LL;
  if ( v7 )
  {
    v11 = *(_QWORD *)(v4 + 424);
    *(_QWORD *)(v4 + 424) = 0LL;
    LOBYTE(v9) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
                   WdfDriverGlobals,
                   v11,
                   v10);
  }
  return v9;
}
