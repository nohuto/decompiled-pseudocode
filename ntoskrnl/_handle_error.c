/*
 * XREFs of _handle_error @ 0x1403D7EA0
 * Callers:
 *     sqrt @ 0x1403D5180 (sqrt.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _call_matherr @ 0x1403D7D60 (_call_matherr.c)
 *     _exception_enabled @ 0x1403D7DDC (_exception_enabled.c)
 *     _raise_exc @ 0x1403D8410 (_raise_exc.c)
 *     _ctrlfp @ 0x1403D872C (_ctrlfp.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

double __fastcall handle_error(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  BOOL v13; // eax
  __int64 v14; // r9
  __int64 v15; // xmm6_8
  double v17; // [rsp+48h] [rbp-91h] BYREF
  __int64 v18; // [rsp+50h] [rbp-89h] BYREF
  _QWORD v19[14]; // [rsp+58h] [rbp-81h] BYREF

  v18 = ctrlfp(8064LL, 65472LL);
  *(_QWORD *)&v17 = a3;
  v13 = exception_enabled(a5, v18);
  v15 = a8;
  if ( !v13 )
  {
    memset(v19, 0, sizeof(v19));
    if ( a9 == 2 )
    {
      v19[6] = a8;
      LODWORD(v19[8]) = 3;
    }
    raise_exc((unsigned int)v19, (unsigned int)&v18, a5, a2, (__int64)&a7, (__int64)&v17);
  }
  if ( !matherr_flag && a4 )
    return call_matherr(a4, a6, a1, v14, v15, v17, v18);
  xHalTimerWatchdogStop();
  ctrlfp(v18, 65472LL);
  return v17;
}
