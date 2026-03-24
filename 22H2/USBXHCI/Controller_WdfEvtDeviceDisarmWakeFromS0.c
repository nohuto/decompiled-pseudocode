/*
 * XREFs of Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0034C10
 * Callers:
 *     <none>
 * Callees:
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C0011EE0 (RootHub_ReleaseReadModifyWriteLock.c)
 *     XilRegister_ReadUlong @ 0x1C0013DA0 (XilRegister_ReadUlong.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x1C0013DD0 (RootHub_AcquireReadModifyWriteLock.c)
 *     XilRegister_WriteUlong @ 0x1C0013F1C (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_i @ 0x1C00155A4 (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0035E5C (WPP_RECORDER_SF_sds.c)
 */

char __fastcall Controller_WdfEvtDeviceDisarmWakeFromS0(__int64 a1)
{
  char v1; // bl
  __int64 v2; // rax
  int v3; // edx
  int v4; // r8d
  int v5; // r9d
  unsigned int v6; // edi
  __int64 v7; // rsi
  __int64 v8; // rbp
  bool v9; // zf
  unsigned int *v10; // rbx
  __int16 Ulong; // ax
  int v12; // r8d
  int v13; // r9d

  v1 = a1;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00603D8);
  v6 = 0;
  v7 = *(_QWORD *)(v2 + 8);
  if ( *(_BYTE *)(v7 + 553) )
  {
    LOBYTE(v2) = KeGetCurrentIrql();
    if ( (_BYTE)v2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v3, v4, v5);
      LOBYTE(v2) = KdRefreshDebuggerNotPresent();
      if ( !(_BYTE)v2 )
        __debugbreak();
    }
  }
  v8 = *(_QWORD *)(v7 + 152);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    LOBYTE(v2) = WPP_RECORDER_SF_i(
                   *(_QWORD *)(v7 + 72),
                   v3,
                   4,
                   89,
                   (__int64)&WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids,
                   v1);
  }
  v9 = (*(_QWORD *)(v7 + 336) & 0x20000000LL) == 0;
  *(_BYTE *)(v7 + 468) = 0;
  if ( v9 && *(_DWORD *)(v8 + 16) )
  {
    do
    {
      RootHub_AcquireReadModifyWriteLock(v8, v6, v4, v5);
      v10 = (unsigned int *)(*(_QWORD *)(v8 + 40) + 16LL * v6);
      Ulong = XilRegister_ReadUlong(*(_QWORD *)(v7 + 88), v10);
      XilRegister_WriteUlong(*(_QWORD *)(v7 + 88), v10, Ulong & 0xC200);
      LOBYTE(v2) = RootHub_ReleaseReadModifyWriteLock(v8, v6++, v12, v13);
    }
    while ( v6 < *(_DWORD *)(v8 + 16) );
  }
  return v2;
}
