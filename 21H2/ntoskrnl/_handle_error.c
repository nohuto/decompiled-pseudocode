/*
 * XREFs of _handle_error @ 0x1403D60B0
 * Callers:
 *     sqrt @ 0x1403D3500 (sqrt.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _call_matherr @ 0x1403D5F7C (_call_matherr.c)
 *     _exception_enabled @ 0x1403D5FEC (_exception_enabled.c)
 *     _raise_exc @ 0x1403D6610 (_raise_exc.c)
 *     _set_errno_from_matherr @ 0x1403D6904 (_set_errno_from_matherr.c)
 *     _ctrlfp @ 0x1403D6954 (_ctrlfp.c)
 *     memset @ 0x140414300 (memset.c)
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
  __int64 v17; // [rsp+48h] [rbp-A1h] BYREF
  double v18[2]; // [rsp+50h] [rbp-99h] BYREF
  _QWORD v19[14]; // [rsp+68h] [rbp-81h] BYREF

  v17 = ctrlfp(8064LL, 65472LL);
  *(_QWORD *)&v18[1] = a3;
  *(_QWORD *)&v18[0] = a3;
  v13 = exception_enabled(a5, v17);
  v15 = a8;
  if ( !v13 )
  {
    memset(v19, 0, sizeof(v19));
    if ( a9 == 2 )
    {
      v19[6] = a8;
      LODWORD(v19[8]) = 3;
    }
    raise_exc((unsigned int)v19, (unsigned int)&v17, a5, a2, (__int64)&a7, (__int64)v18);
  }
  if ( !matherr_flag && a4 )
    return call_matherr(a4, a6, a1, v14, v15, v18[0], v17);
  set_errno_from_matherr(a4);
  ctrlfp(v17, 65472LL);
  return v18[0];
}
