/*
 * XREFs of ?OnRemoteCloseNotification@CBaseInput@@AEAAJXZ @ 0x1C00563B0
 * Callers:
 *     <none>
 * Callees:
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C0052760 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RimInputTypeToDeviceInputType @ 0x1C00563DC (RimInputTypeToDeviceInputType.c)
 */

__int64 __fastcall CBaseInput::OnRemoteCloseNotification(CBaseInput *this, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r8

  v2 = RimInputTypeToDeviceInputType(*((unsigned int *)this + 36), a2, this);
  return RIMDirectPnpRemoveDevicesOfType(*(_QWORD *)(v3 + 8), v2);
}
