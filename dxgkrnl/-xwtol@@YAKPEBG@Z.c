/*
 * XREFs of ?xwtol@@YAKPEBG@Z @ 0x1C01FF51C
 * Callers:
 *     ParseModeCap @ 0x1C01FF3DC (ParseModeCap.c)
 *     ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x1C020D8B0 (-InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xwtol(const unsigned __int16 *a1)
{
  unsigned int v1; // edx
  int v2; // r8d

  v1 = 0;
  while ( 1 )
  {
    v2 = *a1;
    if ( (unsigned __int16)(v2 - 48) <= 9u )
    {
      v1 = v2 + 2 * (5 * v1 - 24);
      goto LABEL_4;
    }
    if ( v2 != 32 )
      return v1;
LABEL_4:
    ++a1;
  }
}
