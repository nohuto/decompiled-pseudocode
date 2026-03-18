/*
 * XREFs of DrvSessionHasAnyGraphicsDevice @ 0x1C00D4370
 * Callers:
 *     <none>
 * Callees:
 *     UserIsUserCritSecIn @ 0x1C0090AB0 (UserIsUserCritSecIn.c)
 */

__int64 DrvSessionHasAnyGraphicsDevice()
{
  unsigned int v0; // ebx
  struct tagGRAPHICS_DEVICE *v1; // rcx

  v0 = 1;
  if ( !(unsigned int)UserIsUserCritSecIn() )
    WdLogSingleEntry0(1LL);
  if ( gProtocolType != -1 )
  {
    v1 = gpRemoteGraphicsDeviceList;
    if ( !gProtocolType )
      v1 = gpLocalGraphicsDeviceList;
    if ( !v1 || (*((_DWORD *)v1 + 40) & 0x2000000) != 0 && !*((_QWORD *)v1 + 16) )
      return 0;
  }
  return v0;
}
