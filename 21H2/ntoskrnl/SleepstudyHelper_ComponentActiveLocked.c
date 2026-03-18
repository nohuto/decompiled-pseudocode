/*
 * XREFs of SleepstudyHelper_ComponentActiveLocked @ 0x1403B5CF0
 * Callers:
 *     SleepstudyHelper_ComponentActive @ 0x1403B5C80 (SleepstudyHelper_ComponentActive.c)
 * Callees:
 *     SshpSetBlockerActive @ 0x14036B250 (SshpSetBlockerActive.c)
 */

__int64 __fastcall SleepstudyHelper_ComponentActiveLocked(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // ecx
  bool v4; // zf

  v1 = 0;
  if ( a1 )
  {
    v3 = *(_DWORD *)(a1 + 8);
    if ( (v3 & 0x10) == 0 )
    {
      v4 = ++*(_DWORD *)(a1 + 12) == 1;
      *(_DWORD *)(a1 + 8) = v3 | 0x10;
      if ( v4 )
        SshpSetBlockerActive(a1, 1);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
