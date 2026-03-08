/*
 * XREFs of ?MulDeleteDeviceOrRedirectionBitmap@@YAXPEAUDHSURF__@@@Z @ 0x1C02B18E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MulDeleteDeviceOrRedirectionBitmap(__int64 ***pv)
{
  __int64 **i; // rbx
  __int64 *v3; // rcx
  HSURF v4; // rsi

  for ( i = (__int64 **)**pv; i; i = (__int64 **)*i )
  {
    v3 = pv[1][*((unsigned int *)i + 4)];
    if ( v3 )
    {
      v3[15] = 0LL;
      v4 = (HSURF)v3[1];
      EngUnlockSurface((SURFOBJ *)v3);
      if ( !(unsigned int)HmgQueryAltLock(v4) )
      {
        GreMarkDeletableBitmap(v4);
        EngDeleteSurface(v4);
      }
    }
  }
  EngFreeMem(pv);
}
