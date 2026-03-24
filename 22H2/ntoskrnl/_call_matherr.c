/*
 * XREFs of _call_matherr @ 0x1403D570C
 * Callers:
 *     _handle_error @ 0x1403D5840 (_handle_error.c)
 *     _handle_errorf @ 0x1403D597C (_handle_errorf.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x1402526A0 (HalSystemVectorDispatchEntry.c)
 *     _set_errno_from_matherr @ 0x1403D6094 (_set_errno_from_matherr.c)
 *     _ctrlfp @ 0x1403D60E4 (_ctrlfp.c)
 */

double __fastcall call_matherr(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6, __int64 a7)
{
  ctrlfp(a7, 65472LL);
  if ( !(unsigned int)HalSystemVectorDispatchEntry() )
    set_errno_from_matherr(a1);
  return a6;
}
