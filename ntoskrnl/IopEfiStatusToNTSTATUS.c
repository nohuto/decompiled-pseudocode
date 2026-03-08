/*
 * XREFs of IopEfiStatusToNTSTATUS @ 0x14094D674
 * Callers:
 *     IopEnumerateEnvironmentVariablesTrEE @ 0x14094D8E0 (IopEnumerateEnvironmentVariablesTrEE.c)
 *     IopGetEnvironmentVariableTrEE @ 0x14094DED0 (IopGetEnvironmentVariableTrEE.c)
 *     IopQueryEnvironmentVariableInfoTrEE @ 0x14094E2E0 (IopQueryEnvironmentVariableInfoTrEE.c)
 *     IopSetEnvironmentVariableTrEE @ 0x14094E500 (IopSetEnvironmentVariableTrEE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopEfiStatusToNTSTATUS(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned int v2; // r8d
  __int64 result; // rax

  if ( a1 > 0x800000000000000DuLL )
  {
    switch ( a1 )
    {
      case 0x800000000000000EuLL:
        result = 3221225728LL;
        break;
      case 0x800000000000000FuLL:
      case 0x800000000000001AuLL:
        result = 3221225506LL;
        break;
      case 0x8000000000000010uLL:
      case 0x8000000000000012uLL:
        result = 258LL;
        break;
      case 0x8000000000000011uLL:
        result = 3221226098LL;
        break;
      case 0x8000000000000013uLL:
        result = 3221225635LL;
        break;
      case 0x8000000000000014uLL:
        result = 3221225528LL;
        break;
      case 0x8000000000000015uLL:
        result = 3221226048LL;
        break;
      default:
        result = 3221225473LL;
        break;
    }
  }
  else if ( a1 == 0x800000000000000DuLL )
  {
    return 2147483676LL;
  }
  else
  {
    if ( a1 > 0x8000000000000006uLL )
    {
      switch ( a1 )
      {
        case 0x8000000000000007uLL:
          return 3221225861LL;
        case 0x8000000000000008uLL:
          return 3221225634LL;
        case 0x8000000000000009uLL:
          return 3221226580LL;
        case 0x800000000000000AuLL:
          return 3221225522LL;
        case 0x800000000000000BuLL:
          return 3221225599LL;
      }
      v1 = 0x800000000000000CuLL;
      v2 = -1073741448;
    }
    else
    {
      switch ( a1 )
      {
        case 0x8000000000000006uLL:
          return 3221226021LL;
        case 0uLL:
          return 0LL;
        case 0x8000000000000001uLL:
          return 3221226092LL;
        case 0x8000000000000002uLL:
          return 3221225485LL;
        case 0x8000000000000003uLL:
          return 3221225659LL;
        case 0x8000000000000004uLL:
          return 3221225990LL;
      }
      v1 = 0x8000000000000005uLL;
      v2 = -1073741789;
    }
    result = 3221225473LL;
    if ( a1 == v1 )
      return v2;
  }
  return result;
}
