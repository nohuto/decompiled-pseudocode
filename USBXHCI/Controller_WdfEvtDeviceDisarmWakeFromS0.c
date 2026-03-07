char __fastcall Controller_WdfEvtDeviceDisarmWakeFromS0(__int64 a1)
{
  char v1; // bl
  __int64 v2; // rax
  int v3; // edx
  unsigned int v4; // edi
  __int64 v5; // rsi
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rbp
  bool v9; // zf
  unsigned int *v10; // rbx
  __int16 Ulong; // ax

  v1 = a1;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00633D8);
  v4 = 0;
  v5 = *(_QWORD *)(v2 + 8);
  if ( *(_BYTE *)(v5 + 601) )
  {
    LOBYTE(v2) = KeGetCurrentIrql();
    if ( (_BYTE)v2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v3, v6, v7);
      LOBYTE(v2) = KdRefreshDebuggerNotPresent();
      if ( !(_BYTE)v2 )
        __debugbreak();
    }
  }
  v8 = *(_QWORD *)(v5 + 152);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    LOBYTE(v2) = WPP_RECORDER_SF_q(
                   *(_QWORD *)(v5 + 72),
                   v3,
                   4,
                   90,
                   (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
                   v1);
  }
  v9 = (*(_QWORD *)(v5 + 336) & 0x20000000LL) == 0;
  *(_BYTE *)(v5 + 468) = 0;
  if ( v9 && *(_DWORD *)(v8 + 16) )
  {
    do
    {
      RootHub_AcquireReadModifyWriteLock(v8, v4);
      v10 = (unsigned int *)(*(_QWORD *)(v8 + 40) + 16LL * v4);
      Ulong = XilRegister_ReadUlong(*(_QWORD *)(v5 + 88), v10);
      XilRegister_WriteUlong(*(_QWORD *)(v5 + 88), v10, Ulong & 0xC200);
      LOBYTE(v2) = RootHub_ReleaseReadModifyWriteLock(v8, v4++);
    }
    while ( v4 < *(_DWORD *)(v8 + 16) );
  }
  return v2;
}
