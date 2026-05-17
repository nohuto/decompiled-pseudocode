/*
 * XREFs of RtlDetermineDosPathNameType_U @ 0x180077290
 * Callers:
 *     LdrpGetDllPath @ 0x18001147C (LdrpGetDllPath.c)
 *     RtlDosSearchPath_U @ 0x180089470 (RtlDosSearchPath_U.c)
 *     LdrAddDllDirectory @ 0x18008BCE0 (LdrAddDllDirectory.c)
 *     LdrpResValidateFilePath @ 0x1800E4D88 (LdrpResValidateFilePath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlDetermineDosPathNameType_U(_WORD *a1)
{
  __int16 v2; // ax

  if ( *a1 == 92 || *a1 == 47 )
  {
    if ( a1[1] == 92 || a1[1] == 47 )
    {
      if ( a1[2] == 63 || a1[2] == 46 )
      {
        v2 = a1[3];
        if ( v2 == 92 || v2 == 47 )
          return 6LL;
        else
          return v2 != 0 ? 1 : 7;
      }
      else
      {
        return 1LL;
      }
    }
    else
    {
      return 4LL;
    }
  }
  else if ( *a1 && a1[1] == 58 )
  {
    if ( a1[2] == 92 || a1[2] == 47 )
      return 2LL;
    else
      return 3LL;
  }
  else
  {
    return 5LL;
  }
}
