/*
 * XREFs of StorDumpDiskPowerOn @ 0x1C0040250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall StorDumpDiskPowerOn(__int64 a1)
{
  __int64 result; // rax
  _BYTE *v3; // rcx
  __int64 v4; // rcx

  result = 0LL;
  if ( !a1 )
    return 3221225485LL;
  v3 = *(_BYTE **)(a1 + 16);
  if ( v3 )
  {
    if ( !*v3 )
    {
      if ( *(_BYTE *)a1 )
      {
        v4 = *(_QWORD *)(a1 + 8);
        if ( v4 )
        {
          result = PoFxPowerOnCrashdumpDevice(v4, 0LL);
          if ( (int)result >= 0 )
            **(_BYTE **)(a1 + 16) = 1;
        }
      }
    }
  }
  return result;
}
