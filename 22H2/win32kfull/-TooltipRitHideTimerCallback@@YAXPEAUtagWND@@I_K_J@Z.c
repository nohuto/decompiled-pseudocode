/*
 * XREFs of ?TooltipRitHideTimerCallback@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C013D3E0
 * Callers:
 *     <none>
 * Callees:
 *     FindTimer @ 0x1C003BF24 (FindTimer.c)
 *     ?PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z @ 0x1C01B56B0 (-PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z.c)
 */

void __fastcall TooltipRitHideTimerCallback(struct tagWND *a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(gptiCurrent + 456LL);
  FindTimer(0LL, *(_QWORD *)(v1 + 120), 4u, 1, 0LL);
  *(_QWORD *)(v1 + 120) = 0LL;
  *(_DWORD *)(v1 + 48) &= ~0x800u;
  PostEventMessageWindow(*(struct tagWND **)(v1 + 192), 0x1Au, *(int *)(v1 + 200), 1LL);
}
