/*
 * XREFs of PipIsProviderStarted @ 0x14085B6DC
 * Callers:
 *     IoResolveDependency @ 0x1403943F0 (IoResolveDependency.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x1406CB7E0 (PipCheckForUnsatisfiedDependencies.c)
 * Callees:
 *     <none>
 */

char __fastcall PipIsProviderStarted(__int64 a1)
{
  char result; // al

  switch ( *(_DWORD *)(a1 + 300) )
  {
    case 0x30A:
    case 0x30E:
    case 0x30F:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
