/*
 * XREFs of SbCleanupTrace @ 0x180061704
 * Callers:
 *     LdrShutdownProcess @ 0x18005EFA0 (LdrShutdownProcess.c)
 * Callees:
 *     EtwNotificationUnregister @ 0x1800514F0 (EtwNotificationUnregister.c)
 */

__int64 __fastcall SbCleanupTrace(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // ebx
  char *pShimData; // rdi
  char *v6; // rdi
  unsigned __int64 v7; // rcx

  v4 = 0;
  pShimData = (char *)NtCurrentPeb()->pShimData;
  if ( pShimData )
  {
    v6 = pShimData + 2016;
    if ( !v6 || !*((_DWORD *)v6 + 12) )
      v6 = 0LL;
    if ( v6 )
    {
      v7 = *((_QWORD *)v6 + 2);
      if ( v7 )
      {
        EtwNotificationUnregister(v7, 0LL, a3, a4);
        *((_QWORD *)v6 + 2) = 0LL;
        return 1;
      }
    }
  }
  return v4;
}
