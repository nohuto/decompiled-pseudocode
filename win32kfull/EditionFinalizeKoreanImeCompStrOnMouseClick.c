/*
 * XREFs of EditionFinalizeKoreanImeCompStrOnMouseClick @ 0x1C0142990
 * Callers:
 *     <none>
 * Callees:
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01ABEC0 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 */

void __fastcall EditionFinalizeKoreanImeCompStrOnMouseClick(__int64 a1, int a2)
{
  struct tagWND *v2; // rbx

  v2 = *(struct tagWND **)(a1 + 80);
  if ( (*gpsi & 4) != 0
    && !a2
    && (GetActiveHKL() & 0x3FF) == 0x12
    && (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v2 + 17) + 8LL) + 10LL) & 1) == 0 )
  {
    if ( gpqForeground )
      FinalizeKoreanImeCompStrOnMouseClick(v2);
  }
}
