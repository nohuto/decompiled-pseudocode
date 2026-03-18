/*
 * XREFs of MiWriteRepurposedTransitionPte @ 0x14035A058
 * Callers:
 *     MiCombineInitialInstance @ 0x1402EC690 (MiCombineInitialInstance.c)
 *     MiCombineWithStandbyExisting @ 0x140359B7C (MiCombineWithStandbyExisting.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14021ACC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021AEA4 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140271240 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x140356D4C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140356DAC (MiPteHasShadow.c)
 */

__int64 __fastcall MiWriteRepurposedTransitionPte(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  int v5; // esi
  int v6; // edi
  __int64 *v7; // rsi
  __int64 v8; // r8
  bool v10; // zf

  v4 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL, 0LL, 0x80000000);
  v5 = *(_DWORD *)(a1 + 8);
  v6 = 0;
  v7 = (__int64 *)(v4 + (v5 & 0xFFF));
  if ( MiPteInShadowRange((unsigned __int64)v7) )
  {
    if ( MiPteHasShadow() )
    {
      v6 = 1;
      if ( HIBYTE(word_140C66DFC) )
        goto LABEL_2;
      v10 = (a2 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_2;
      v10 = (a2 & 1) == 0;
    }
    if ( !v10 )
      a2 |= 0x8000000000000000uLL;
  }
LABEL_2:
  *v7 = a2;
  if ( v6 )
    MiWritePteShadow((__int64)v7, a2, v8);
  return MiUnmapPageInHyperSpaceWorker((unsigned __int64)v7, 0x11u);
}
