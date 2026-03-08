/*
 * XREFs of ?ApplyTimerDelay@@YAXPEAUtagTIMER@@@Z @ 0x1C01C166C
 * Callers:
 *     ?xxxReadyTimer@@YAXPEAUtagTIMER@@K@Z @ 0x1C01C18D4 (-xxxReadyTimer@@YAXPEAUtagTIMER@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ApplyTimerDelay(struct tagTIMER *a1)
{
  int v1; // r8d
  int v2; // eax

  v1 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 424LL) + 1020LL);
  if ( v1 )
  {
    v2 = 0x7FFFFFFF;
    if ( (unsigned int)(v1 + *((_DWORD *)a1 + 13)) < 0x7FFFFFFF )
      v2 = v1 + *((_DWORD *)a1 + 13);
    *((_DWORD *)a1 + 13) = v2;
  }
}
