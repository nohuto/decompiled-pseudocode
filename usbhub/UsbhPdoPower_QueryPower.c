__int64 __fastcall UsbhPdoPower_QueryPower(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  __int64 v5; // rbp
  __int64 v6; // r14
  int v7; // r8d
  _IO_STACK_LOCATION *v8; // r9
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // r9
  unsigned int Options; // ecx
  PDEVICE_OBJECT v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // r11
  __int64 v18; // rax
  __int64 v19; // r10
  __int64 v20; // r11
  __int64 v21; // r10
  __int64 v22; // r11
  int v24; // r9d

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = PdoExt(a1);
  v6 = *(_QWORD *)(v5 + 1184);
  PdoExt(a1);
  v8 = a2->Tail.Overlay.CurrentStackLocation;
  if ( v8->Parameters.Create.Options <= 1 )
  {
    Log(v6, 16, 1346653747, (_DWORD)v8, (__int64)a2);
    *(_QWORD *)(v9 + 8 * v10 + 800) = a2;
    *(_QWORD *)(v9 + 8 * v10 + 816) = v11;
    *(_DWORD *)(v9 + 4 * v10 + 832) = 703;
  }
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( !Options )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_6;
    v13 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_6;
    v24 = 10;
LABEL_14:
    WPP_RECORDER_SF_dD(
      v13->DeviceExtension,
      *(unsigned __int16 *)(v5 + 1428),
      v7,
      v24,
      (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
      *(_WORD *)(v5 + 1428),
      CurrentStackLocation->Parameters.Read.ByteOffset.LowPart);
    goto LABEL_6;
  }
  if ( Options == 1 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v24 = 11;
      goto LABEL_14;
    }
  }
LABEL_6:
  v14 = *(_QWORD *)(PdoExt(a1) + 1184);
  v15 = PdoExt(a1);
  v16 = (__int64)a2->Tail.Overlay.CurrentStackLocation;
  v17 = v15;
  v18 = *(unsigned int *)(v16 + 16);
  if ( (unsigned int)v18 <= 1 )
  {
    Log(v14, 16, 1346653745, *(_QWORD *)(v17 + 8 * v18 + 800), (__int64)a2);
    Log(v14, 16, 1346653746, *(_QWORD *)(v20 + 8 * v19 + 816), v16);
    *(_QWORD *)(v22 + 8 * v21 + 800) = 0LL;
    *(_QWORD *)(v22 + 8 * v21 + 816) = 0LL;
    *(_DWORD *)(v22 + 4 * v21 + 832) = 716;
    PoStartNextPowerIrp(a2);
  }
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
