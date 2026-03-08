/*
 * XREFs of ?RawInputMouseRequestedByForeground@@YAHXZ @ 0x1C01AC380
 * Callers:
 *     EditionGetMouseWheelRoutingMode @ 0x1C0142A00 (EditionGetMouseWheelRoutingMode.c)
 * Callees:
 *     <none>
 */

__int64 RawInputMouseRequestedByForeground(void)
{
  unsigned int v0; // ebx
  __int64 v1; // rdx

  v0 = 0;
  if ( gpqForeground && *(_QWORD *)(gpqForeground + 104LL) && *(_DWORD *)(SGDGetUserSessionState(gpqForeground) + 15956) )
    return (unsigned int)IsDesktopApp(*(_QWORD *)(*(_QWORD *)(gpqForeground + 104LL) + 424LL), v1) != 0;
  return v0;
}
