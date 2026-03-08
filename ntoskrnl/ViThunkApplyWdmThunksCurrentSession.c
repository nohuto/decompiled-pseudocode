/*
 * XREFs of ViThunkApplyWdmThunksCurrentSession @ 0x140AD86BC
 * Callers:
 *     VfThunkApplyWdmThunkToAllSession @ 0x140AD844C (VfThunkApplyWdmThunkToAllSession.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x140303628 (VfTargetDriversGetNode.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     VfUtilPrintCheckinString @ 0x140ABF804 (VfUtilPrintCheckinString.c)
 *     ViIsDriverSuspectForVerifier @ 0x140ABFB4C (ViIsDriverSuspectForVerifier.c)
 *     ViThunkFindAllSharedExports @ 0x140AD8804 (ViThunkFindAllSharedExports.c)
 *     ViThunkFindAllThunkedImports @ 0x140AD8940 (ViThunkFindAllThunkedImports.c)
 *     MmApplyVerifierToRunningImage @ 0x140AE4F80 (MmApplyVerifierToRunningImage.c)
 */

__int64 __fastcall ViThunkApplyWdmThunksCurrentSession(__int64 a1)
{
  int v2; // ebx
  __int64 Node; // rax
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdx
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  v2 = 0;
  Node = VfTargetDriversGetNode(*(_QWORD *)(a1 + 48));
  v4 = Node;
  if ( Node && (*(_DWORD *)(Node + 24) & 1) == 0 && (unsigned int)ViIsDriverSuspectForVerifier(a1) )
  {
    if ( ViWdmThunksWithIatIndex )
    {
      memset(ViWdmThunksWithIatIndex, 0, 24LL * (unsigned int)ViNumberOfWdmThunks);
      ViThunkFindAllThunkedImports(a1, v5, &v8);
      if ( v8 )
      {
        ViThunkFindAllSharedExports(v4, v6, &v8);
        v2 = MmApplyVerifierToRunningImage(a1, ViWdmThunksWithIatIndex, v8);
        if ( v2 >= 0 )
          VfUtilPrintCheckinString((unsigned __int16 *)(a1 + 88), 0);
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v2;
}
