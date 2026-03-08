/*
 * XREFs of EditionHandleHungWindow @ 0x1C0149170
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x1C009FF14 (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     ?ProcessHungWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F4E68 (-ProcessHungWindow@@YAXPEAUtagWND@@@Z.c)
 */

void __fastcall EditionHandleHungWindow(__int64 a1)
{
  struct tagWND *v1; // rbx

  v1 = *(struct tagWND **)(a1 + 80);
  if ( *(_QWORD *)(*((_QWORD *)v1 + 3) + 40LL) )
  {
    if ( IsHungWindow(*(const struct tagTHREADINFO ***)(a1 + 80)) )
      ProcessHungWindow(v1);
  }
}
