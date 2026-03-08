/*
 * XREFs of MulReplaceRedirectionChild @ 0x1C02B5930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MulReplaceRedirectionChild(__int64 ****a1, SURFOBJ *a2, __int64 a3)
{
  unsigned int v3; // r9d
  __int64 **v6; // rbx
  __int64 *v7; // rcx
  SURFOBJ *v8; // rsi

  v3 = 0;
  v6 = **a1;
  if ( v6 )
  {
    v7 = (__int64 *)a1[1];
    while ( 1 )
    {
      v8 = (SURFOBJ *)v7[*((unsigned int *)v6 + 4)];
      if ( v8 == a2 )
        break;
      v6 = (__int64 **)*v6;
      if ( !v6 )
        return v3;
    }
    GreMarkDeletableBitmap(v8->hsurf);
    EngUnlockSurface(v8);
    EngLockSurface(*(HSURF *)(a3 + 8));
    GreMarkUndeletableBitmap(*(_QWORD *)(a3 + 8));
    v3 = 1;
    a1[1][*((unsigned int *)v6 + 4)] = (__int64 **)a3;
  }
  return v3;
}
