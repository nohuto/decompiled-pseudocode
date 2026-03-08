/*
 * XREFs of Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C0036680
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00142CC (WPP_RECORDER_SF_q.c)
 *     XilRegister_ReadUlong @ 0x1C00180A0 (XilRegister_ReadUlong.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C00182B0 (RootHub_ReleaseReadModifyWriteLock.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x1C00182F4 (RootHub_AcquireReadModifyWriteLock.c)
 *     XilRegister_WriteUlong @ 0x1C0018428 (XilRegister_WriteUlong.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0037A20 (WPP_RECORDER_SF_sds.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceArmWakeFromS0(__int64 a1)
{
  char v1; // bp
  unsigned int v2; // ebx
  int v3; // edx
  __int64 v4; // rsi
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rdi
  unsigned int *v8; // rbp
  __int16 Ulong; // ax

  v1 = a1;
  v2 = 0;
  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C00633D8)
                 + 8);
  if ( *(_BYTE *)(v4 + 601) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v3, v5, v6);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v7 = *(_QWORD *)(v4 + 152);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_q(*(_QWORD *)(v4 + 72), v3, 4, 89, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v1);
  }
  *(_BYTE *)(v4 + 468) = 1;
  if ( *(_DWORD *)(v7 + 16) )
  {
    do
    {
      if ( (*(_DWORD *)(120LL * v2 + *(_QWORD *)(v7 + 48) + 64) & 2) == 0 )
      {
        RootHub_AcquireReadModifyWriteLock(v7, v2);
        v8 = (unsigned int *)(*(_QWORD *)(v7 + 40) + 16LL * v2);
        Ulong = XilRegister_ReadUlong(*(_QWORD *)(v4 + 88), v8);
        XilRegister_WriteUlong(*(_QWORD *)(v4 + 88), v8, Ulong & 0xC200 | 0xE000000);
        RootHub_ReleaseReadModifyWriteLock(v7, v2);
      }
      ++v2;
    }
    while ( v2 < *(_DWORD *)(v7 + 16) );
  }
  return 0LL;
}
