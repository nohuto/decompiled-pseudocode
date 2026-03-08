/*
 * XREFs of PspGetThreadPpmPolicy @ 0x1409AB4B8
 * Callers:
 *     NtQueryInformationThread @ 0x1406A7BF0 (NtQueryInformationThread.c)
 * Callees:
 *     KeGetThreadPpmPolicy @ 0x14057470C (KeGetThreadPpmPolicy.c)
 */

__int64 __fastcall PspGetThreadPpmPolicy(__int64 a1)
{
  int ThreadPpmPolicy; // eax
  unsigned int v2; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // eax

  ThreadPpmPolicy = KeGetThreadPpmPolicy(a1);
  v2 = 0;
  if ( ThreadPpmPolicy )
  {
    v3 = ThreadPpmPolicy - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          if ( v5 == 1 )
            return 8;
          else
            return 9;
        }
        else
        {
          return 3;
        }
      }
      else
      {
        return 2;
      }
    }
    else
    {
      return 1;
    }
  }
  return v2;
}
