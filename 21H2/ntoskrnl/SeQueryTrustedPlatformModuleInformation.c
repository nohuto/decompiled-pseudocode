/*
 * XREFs of SeQueryTrustedPlatformModuleInformation @ 0x140597710
 * Callers:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExSystemExceptionFilter @ 0x1407D5080 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall SeQueryTrustedPlatformModuleInformation(int *a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v3; // r10d
  int v4; // eax

  v3 = 0;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    return (unsigned int)-1073741790;
  }
  else if ( a2 >= 4 )
  {
    *a1 = 0;
    v4 = 0;
    if ( SepOsLoaderTpmDriverLoaded )
    {
      v4 = 1;
      *a1 = 1;
    }
    if ( PnpCoreDriverGroupLoadPhase > 2 )
      *a1 = v4 | 2;
  }
  else
  {
    if ( a3 )
      *a3 = 4;
    return (unsigned int)-1073741820;
  }
  return v3;
}
