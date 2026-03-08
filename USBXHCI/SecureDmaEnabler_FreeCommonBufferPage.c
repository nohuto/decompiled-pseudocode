/*
 * XREFs of SecureDmaEnabler_FreeCommonBufferPage @ 0x1C0051FD8
 * Callers:
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C0007A24 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C001E754 (CommonBuffer_ReleaseBuffer.c)
 *     XilCoreCommonBuffer_FreeUnusedResources @ 0x1C0052D68 (XilCoreCommonBuffer_FreeUnusedResources.c)
 * Callees:
 *     Controller_LowerAndTrackIrql @ 0x1C00074BC (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0007558 (Controller_RaiseAndTrackIrql.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

char __fastcall SecureDmaEnabler_FreeCommonBufferPage(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  char v4; // di
  char result; // al

  v3 = (__int64 *)(a1 + 8);
  v4 = 0;
  if ( KeGetCurrentIrql() == 2 )
  {
    Controller_LowerAndTrackIrql((_QWORD *)*v3);
    v4 = 1;
  }
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 1664))(
             WdfDriverGlobals,
             *(_QWORD *)(a2 + 16));
  if ( v4 )
    return Controller_RaiseAndTrackIrql(*v3);
  return result;
}
