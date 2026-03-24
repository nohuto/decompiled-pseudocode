/*
 * XREFs of PiUpdateGuestAssignedState @ 0x14074614C
 * Callers:
 *     PiProcessQueryDeviceState @ 0x140745EDC (PiProcessQueryDeviceState.c)
 *     PnpDeleteLockedDeviceNodes @ 0x14074B084 (PnpDeleteLockedDeviceNodes.c)
 * Callees:
 *     PnpRequestDeviceRemoval @ 0x14074C54C (PnpRequestDeviceRemoval.c)
 *     PipSendGuestAssignedNotification @ 0x1408B44B0 (PipSendGuestAssignedNotification.c)
 *     PipSetGuestAssignedProperty @ 0x1408B4554 (PipSetGuestAssignedProperty.c)
 */

__int64 __fastcall PiUpdateGuestAssignedState(__int64 a1, char a2)
{
  int v2; // r9d
  unsigned int v4; // eax
  int v6; // ebx
  __int64 v8; // rdx

  v2 = *(_DWORD *)(a1 + 704);
  v4 = v2 | 0x2000;
  if ( !a2 )
    v4 = v2 & 0xFFFFDFFF;
  *(_DWORD *)(a1 + 704) = v4;
  if ( ((v2 & 0x2000) != 0) == a2 )
  {
    return 0;
  }
  else
  {
    v6 = PipSetGuestAssignedProperty();
    if ( v6 < 0 || (LOBYTE(v8) = a2, v6 = PipSendGuestAssignedNotification(a1, v8), v6 < 0) )
      PnpRequestDeviceRemoval(a1, 0LL, 57LL, (unsigned int)v6);
  }
  return (unsigned int)v6;
}
