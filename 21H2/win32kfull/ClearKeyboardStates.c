/*
 * XREFs of ClearKeyboardStates @ 0x1C010ACBC
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C009EBF8 (xxxSystemParametersInfoWorker.c)
 *     xxxSwitchDesktop @ 0x1C00B0E54 (xxxSwitchDesktop.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 ClearKeyboardStates()
{
  __m128i *v0; // rax
  __int64 v1; // rcx
  __int64 result; // rax

  v0 = *(__m128i **)gafAsyncKeyState;
  v1 = 4LL;
  do
  {
    *v0 = _mm_and_si128(_mm_loadu_si128(v0), (__m128i)_xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa);
    ++v0;
    --v1;
  }
  while ( v1 );
  ClearKeyboardToggleStates();
  result = gfsSASModifiersDown;
  gfsModifiers = 0;
  gfsModOnlyCandidate = 0;
  gfsRawModifiersForHotKey = 0;
  gfsSASModifiersDown = 0;
  WindowArrangementSequence::fWindowArrangementSequenceInProgress = 0;
  return result;
}
