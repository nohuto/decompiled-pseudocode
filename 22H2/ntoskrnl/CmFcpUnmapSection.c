/*
 * XREFs of CmFcpUnmapSection @ 0x140810460
 * Callers:
 *     CmFcManagerStartRuntimePhase @ 0x140B3B6E8 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x1402137A0 (MiRemoveFromSystemSpace.c)
 */

void __fastcall CmFcpUnmapSection(__int64 a1)
{
  ULONG_PTR v1; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
    MiRemoveFromSystemSpace(v1, 1);
}
