/*
 * XREFs of ?NlsKanaModeToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01AB9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x1C01ABEFC (-NlsTestKeyStateToggle@@YAHE@Z.c)
 */

__int64 __fastcall NlsKanaModeToggleProc(struct tagKE *a1)
{
  int v1; // eax
  __int16 v2; // r8
  __int64 v3; // r9

  v1 = NlsTestKeyStateToggle(0x15u);
  *(_WORD *)(v3 + 2) = v2 & 0xF00;
  if ( v2 < 0 )
    return 0LL;
  *(_WORD *)(v3 + 2) = v2 & 0xF00 | (v1 != 0 ? -32747 : 21);
  return 1LL;
}
