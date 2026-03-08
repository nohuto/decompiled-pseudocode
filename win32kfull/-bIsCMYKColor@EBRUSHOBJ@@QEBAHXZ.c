/*
 * XREFs of ?bIsCMYKColor@EBRUSHOBJ@@QEBAHXZ @ 0x1C0267C28
 * Callers:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C012448C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EBRUSHOBJ::bIsCMYKColor(EBRUSHOBJ *this)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *((_DWORD *)this + 18);
  result = 1LL;
  if ( (v1 & 1) == 0 || !*((_QWORD *)this + 8) || (v1 & 0x10000000) == 0 )
    return 0LL;
  return result;
}
