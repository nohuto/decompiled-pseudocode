/*
 * XREFs of SeQueryTrustedPlatformModuleInformation @ 0x1405B7060
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExSystemExceptionFilter @ 0x140861790 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall SeQueryTrustedPlatformModuleInformation(int *a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v4; // r10d
  int v5; // ecx

  v4 = 0;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    return (unsigned int)-1073741790;
  }
  else if ( a2 >= 4 )
  {
    *a1 = 0;
    v5 = 0;
    if ( SepOsLoaderTpmDriverLoaded )
    {
      v5 = 1;
      *a1 = 1;
    }
    if ( PnpCoreDriverGroupLoadPhase > 2 )
      *a1 = v5 | 2;
  }
  else
  {
    if ( a3 )
      *a3 = 4;
    return (unsigned int)-1073741820;
  }
  return v4;
}
