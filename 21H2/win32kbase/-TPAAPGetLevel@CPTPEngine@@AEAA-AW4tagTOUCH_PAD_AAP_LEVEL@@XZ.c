/*
 * XREFs of ?TPAAPGetLevel@CPTPEngine@@AEAA?AW4tagTOUCH_PAD_AAP_LEVEL@@XZ @ 0x1C0204338
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C020273C (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPTPEngine::TPAAPGetLevel(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 20) )
    return *(unsigned int *)(a1 + 460);
  else
    return 0LL;
}
