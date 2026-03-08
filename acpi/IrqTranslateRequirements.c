/*
 * XREFs of IrqTranslateRequirements @ 0x1C009A4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IrqTranslateRequirements(__int64 a1, _OWORD *a2, __int64 a3, _DWORD *a4, __int64 *a5)
{
  __int64 Pool2; // rax
  _OWORD *v9; // rax

  if ( a3 != a1 )
    return 3221225485LL;
  Pool2 = ExAllocatePool2(256LL, 32LL, 1232102209LL);
  *a5 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *a4 = 1;
  v9 = (_OWORD *)*a5;
  *v9 = *a2;
  v9[1] = a2[1];
  return 288LL;
}
