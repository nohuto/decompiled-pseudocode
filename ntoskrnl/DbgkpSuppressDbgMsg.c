/*
 * XREFs of DbgkpSuppressDbgMsg @ 0x14093650C
 * Callers:
 *     DbgkUnMapViewOfSection @ 0x1406A10EC (DbgkUnMapViewOfSection.c)
 *     DbgkMapViewOfSection @ 0x1407D2C6C (DbgkMapViewOfSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DbgkpSuppressDbgMsg(__int64 a1)
{
  _KPROCESS *Process; // rcx
  __int16 v3; // ax
  unsigned int v6; // [rsp+0h] [rbp-18h]

  v6 = 0;
  if ( *(char *)(a1 + 6126) >= 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[30] )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[1].Affinity.StaticBitmap[30] )
      {
        v3 = WORD2(Process[2].Affinity.StaticBitmap[20]);
        if ( v3 == 332 || v3 == 452 )
          return *(char *)(a1 + 12234) < 0;
      }
    }
  }
  else
  {
    return 1;
  }
  return v6;
}
