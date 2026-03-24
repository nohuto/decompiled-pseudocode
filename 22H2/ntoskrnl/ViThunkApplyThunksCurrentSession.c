/*
 * XREFs of ViThunkApplyThunksCurrentSession @ 0x1409D8ECC
 * Callers:
 *     VfThunkApplyThunks @ 0x1409D8C64 (VfThunkApplyThunks.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140252B30 (RtlImageDirectoryEntryToData.c)
 *     VfTargetDriversGetNode @ 0x1405A1CDC (VfTargetDriversGetNode.c)
 *     ViIsDriverSuspectForVerifier @ 0x1409C6CF0 (ViIsDriverSuspectForVerifier.c)
 *     ViThunkReplaceAllSharedExports @ 0x1409D92D8 (ViThunkReplaceAllSharedExports.c)
 *     ViThunkReplaceAllThunkedImports @ 0x1409D9364 (ViThunkReplaceAllThunkedImports.c)
 */

__int64 __fastcall ViThunkApplyThunksCurrentSession(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rdi
  unsigned int v5; // r14d
  _DWORD *Node; // rax
  int v7; // edx
  _DWORD *v8; // rsi
  ULONG_PTR v9; // r12
  int v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v11 = 0;
  v5 = 0;
  Node = VfTargetDriversGetNode(v2);
  v8 = Node;
  if ( Node )
  {
    if ( (Node[6] & 1) == 0 )
    {
      LOBYTE(v7) = 1;
      v9 = RtlImageDirectoryEntryToData(v2, v7, 12, (int)&v11);
      if ( v9 )
      {
        if ( v11 )
        {
          if ( a2 )
          {
            _InterlockedExchange(&ViLookasideAlreadyLoadedDrivers, 1);
            _InterlockedExchange(&ViResourcesAlreadyLoadedDrivers, 1);
          }
          ViIsDriverSuspectForVerifier(a1);
          v5 = ViThunkReplaceAllThunkedImports(v9);
          if ( v5 )
            ViThunkReplaceAllSharedExports(v8, a2);
        }
      }
    }
  }
  return v5;
}
