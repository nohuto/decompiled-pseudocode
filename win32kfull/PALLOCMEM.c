/*
 * XREFs of PALLOCMEM @ 0x1C012F624
 * Callers:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C012448C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PALLOCMEM(unsigned int a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return Win32AllocPoolZInit(a1, a2);
  return result;
}
