/*
 * XREFs of ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01ABA50
 * Callers:
 *     <none>
 * Callees:
 *     xxxKeyEventEx @ 0x1C004BFD0 (xxxKeyEventEx.c)
 *     ?NlsClearKeyStateToggle@@YAXE@Z @ 0x1C01AB5B8 (-NlsClearKeyStateToggle@@YAXE@Z.c)
 *     ?NlsGetCurrentInputMode@@YAEPEAE@Z @ 0x1C01AB774 (-NlsGetCurrentInputMode@@YAEPEAE@Z.c)
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x1C01ABEFC (-NlsTestKeyStateToggle@@YAHE@Z.c)
 *     NlsKbdSendIMEProc @ 0x1C01ABFAC (NlsKbdSendIMEProc.c)
 */

__int64 __fastcall NlsKatakanaModeProc(struct tagKE *a1, __int64 a2)
{
  __int16 v2; // r8
  __int16 v5; // r8
  char CurrentInputMode; // al
  __int16 v7; // r11

  v2 = *((_WORD *)a1 + 1);
  if ( v2 < 0 )
    return 0LL;
  *((_WORD *)a1 + 1) = v2 & 0x8F00;
  if ( !(unsigned int)NlsTestKeyStateToggle(0xF1u) )
  {
    CurrentInputMode = NlsGetCurrentInputMode(&NlsAlphaNumMode);
    NlsClearKeyStateToggle(CurrentInputMode);
    xxxKeyEventEx(
      *((_WORD *)a1 + 1) | v7 | 0x8000,
      *(unsigned __int8 *)a1,
      *((_DWORD *)a1 + 1),
      a2,
      *((void **)a1 + 1),
      (unsigned __int16 *)a1 + 8,
      0,
      0,
      0LL,
      0LL);
    v5 = *((_WORD *)a1 + 1);
  }
  *((_WORD *)a1 + 1) = v5 | 0xF1;
  if ( !gdwIMEOpenStatus && !(unsigned int)NlsTestKeyStateToggle(0x15u) )
    NlsKbdSendIMEProc(0LL, 0LL);
  return 1LL;
}
