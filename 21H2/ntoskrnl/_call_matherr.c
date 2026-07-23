/*
 * XREFs of _call_matherr @ 0x1403D5F7C
 * Callers:
 *     _handle_error @ 0x1403D60B0 (_handle_error.c)
 *     _handle_errorf @ 0x1403D61EC (_handle_errorf.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140251020 (HalSystemVectorDispatchEntry.c)
 *     _set_errno_from_matherr @ 0x1403D6904 (_set_errno_from_matherr.c)
 *     _ctrlfp @ 0x1403D6954 (_ctrlfp.c)
 */

double __fastcall call_matherr(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6, __int64 a7)
{
  ctrlfp(a7, 65472LL);
  if ( !(unsigned int)HalSystemVectorDispatchEntry() )
    set_errno_from_matherr(a1);
  return a6;
}
