/*
 * XREFs of ?OnRemoteCloseNotification@CBaseInput@@AEAAJXZ @ 0x1C00B5D20
 * Callers:
 *     <none>
 * Callees:
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C00B5D50 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RimInputTypeToDeviceInputType @ 0x1C00B5F24 (RimInputTypeToDeviceInputType.c)
 */

__int64 __fastcall CBaseInput::OnRemoteCloseNotification(CBaseInput *this)
{
  unsigned int v1; // eax
  __int64 v2; // r8

  v1 = RimInputTypeToDeviceInputType(*((unsigned int *)this + 36));
  return RIMDirectPnpRemoveDevicesOfType(*(_QWORD *)(v2 + 8), v1);
}
