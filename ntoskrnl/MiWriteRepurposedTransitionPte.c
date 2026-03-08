/*
 * XREFs of MiWriteRepurposedTransitionPte @ 0x14029EC64
 * Callers:
 *     MiCombineInitialInstance @ 0x14029CD58 (MiCombineInitialInstance.c)
 *     MiCombineWithStandbyExisting @ 0x14029F020 (MiCombineWithStandbyExisting.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x140214870 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140214A54 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiWriteRepurposedTransitionPte(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  int v5; // esi
  int v6; // edi
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  bool v12; // zf

  v4 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL, 0LL, 0x80000000);
  v5 = *(_DWORD *)(a1 + 8);
  v6 = 0;
  v7 = (_QWORD *)(v4 + (v5 & 0xFFF));
  if ( (unsigned int)MiPteInShadowRange(v7) )
  {
    if ( (unsigned int)MiPteHasShadow(v9, v8, v10) )
    {
      v6 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_2;
      v12 = (a2 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_2;
      v12 = (a2 & 1) == 0;
    }
    if ( !v12 )
      a2 |= 0x8000000000000000uLL;
  }
LABEL_2:
  *v7 = a2;
  if ( v6 )
    MiWritePteShadow(v7, a2);
  return MiUnmapPageInHyperSpaceWorker((unsigned __int64)v7, 0x11u);
}
