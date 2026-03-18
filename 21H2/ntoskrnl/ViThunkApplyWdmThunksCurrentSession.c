/*
 * XREFs of ViThunkApplyWdmThunksCurrentSession @ 0x140A93A60
 * Callers:
 *     VfThunkApplyWdmThunkToAllSession @ 0x140A937C4 (VfThunkApplyWdmThunkToAllSession.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x1402D86CC (VfTargetDriversGetNode.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MmApplyVerifierToRunningImage @ 0x140A81214 (MmApplyVerifierToRunningImage.c)
 *     VfUtilPrintCheckinString @ 0x140A81E94 (VfUtilPrintCheckinString.c)
 *     ViIsDriverSuspectForVerifier @ 0x140A821E0 (ViIsDriverSuspectForVerifier.c)
 *     ViThunkFindAllSharedExports @ 0x140A93BA8 (ViThunkFindAllSharedExports.c)
 *     ViThunkFindAllThunkedImports @ 0x140A93CE4 (ViThunkFindAllThunkedImports.c)
 */

__int64 __fastcall ViThunkApplyWdmThunksCurrentSession(__int64 a1)
{
  int v2; // ebx
  _DWORD *Node; // rax
  _DWORD *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdx
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  v2 = 0;
  Node = VfTargetDriversGetNode(*(_QWORD *)(a1 + 48));
  v4 = Node;
  if ( Node && (Node[6] & 1) == 0 && (unsigned int)ViIsDriverSuspectForVerifier(a1) )
  {
    if ( ViWdmThunksWithIatIndex )
    {
      memset(ViWdmThunksWithIatIndex, 0, 24LL * (unsigned int)ViNumberOfWdmThunks);
      ViThunkFindAllThunkedImports(a1, v5, &v8);
      if ( v8 )
      {
        ViThunkFindAllSharedExports(v4, v6, &v8);
        v2 = MmApplyVerifierToRunningImage((_QWORD *)a1, (int *)ViWdmThunksWithIatIndex, v8);
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
