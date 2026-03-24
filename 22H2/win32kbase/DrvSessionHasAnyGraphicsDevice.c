/*
 * XREFs of DrvSessionHasAnyGraphicsDevice @ 0x1C00C4E80
 * Callers:
 *     <none>
 * Callees:
 *     UserIsUserCritSecIn @ 0x1C004AA80 (UserIsUserCritSecIn.c)
 */

__int64 DrvSessionHasAnyGraphicsDevice()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int v2; // ebx
  struct tagGRAPHICS_DEVICE *v3; // rcx
  __int64 v5; // rax

  v2 = 0;
  if ( !(unsigned int)UserIsUserCritSecIn() )
  {
    v5 = WdLogNewEntry5_WdAssertion(v1, v0);
    WdLogEvent5_WdAssertion(v5);
  }
  if ( gProtocolType == -1 )
    return 1LL;
  v3 = gpRemoteGraphicsDeviceList;
  if ( !gProtocolType )
    v3 = gpLocalGraphicsDeviceList;
  if ( v3 && ((*((_DWORD *)v3 + 40) & 0x2000000) == 0 || *((_QWORD *)v3 + 16)) )
    return 1;
  return v2;
}
