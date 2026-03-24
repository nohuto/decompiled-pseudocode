/*
 * XREFs of MiUpdateSystemPdes @ 0x14052C920
 * Callers:
 *     KiInSwapProcesses @ 0x140249EA8 (KiInSwapProcesses.c)
 *     MiSyncSystemPdes @ 0x14035586C (MiSyncSystemPdes.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x1402B2140 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402C8FA0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiCopyTopLevelMappings @ 0x140355968 (MiCopyTopLevelMappings.c)
 */

__int64 __fastcall MiUpdateSystemPdes(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned __int64 v7; // r14
  int v8; // esi
  __int64 *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  bool v12; // zf
  unsigned __int8 v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = 0;
  v5 = *(_QWORD *)(a1 + 40) >> 12;
  v6 = MEMORY[0xFFFFF6FB7DBEDF68] ^ (MEMORY[0xFFFFF6FB7DBEDF68] ^ (v5 << 12)) & 0xFFFFFFFFF000LL;
  v7 = MiMapPageInHyperSpaceWorker(v5, &v14, 0x80000000, a4);
  MiCopyTopLevelMappings(a1, v7);
  v8 = 0;
  v9 = (__int64 *)(v7 + 3944);
  if ( MiPteInShadowRange(v7 + 3944) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v8 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_9;
      v12 = (v6 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_9;
      v12 = (v6 & 1) == 0;
    }
    if ( !v12 )
      v6 |= 0x8000000000000000uLL;
  }
LABEL_9:
  *v9 = v6;
  if ( v8 )
    MiWritePteShadow((__int64)v9, v6, v11);
  LOBYTE(v10) = v14;
  return MiUnmapPageInHyperSpaceWorker(v7, v10, 0x80000000LL);
}
