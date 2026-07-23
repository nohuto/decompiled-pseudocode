/*
 * XREFs of ValidateRegistrLangType @ 0x14078FE20
 * Callers:
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1403A85B0 (_RtlpMuiRegLoadInstalledFromKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateRegistrLangType(int a1)
{
  unsigned int v1; // edx
  int v2; // r9d
  __int64 *i; // r10
  unsigned int v4; // eax

  v1 = 0;
  if ( (a1 & 0x18) != 0 && (a1 & 7) != 0 )
  {
    v2 = 0;
    for ( i = ulInvalidTypes; *(_DWORD *)i != (a1 & *(_DWORD *)i); i = (__int64 *)((char *)i + 4) )
    {
      if ( ++v2 >= 8 )
      {
        if ( (a1 & 1) != 0 || (a1 & 2) != 0 )
        {
          v4 = 0;
          if ( (a1 & 0x10) == 0 )
            return (unsigned int)-1073741811;
          return v4;
        }
        return v1;
      }
    }
  }
  return (unsigned int)-1073741811;
}
