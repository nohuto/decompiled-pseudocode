/*
 * XREFs of ViThunkFindAllSharedExports @ 0x140A93BA8
 * Callers:
 *     ViThunkApplyWdmThunksCurrentSession @ 0x140A93A60 (ViThunkApplyWdmThunksCurrentSession.c)
 * Callees:
 *     RtlNumberOfClearBits @ 0x140209930 (RtlNumberOfClearBits.c)
 *     ViThunkFindSharedExports @ 0x140A93E84 (ViThunkFindSharedExports.c)
 */

__int64 __fastcall ViThunkFindAllSharedExports(_QWORD *a1, __int64 a2, __int64 a3)
{
  PVOID v3; // rbx
  ULONG v6; // eax
  ULONG v7; // eax
  ULONG v8; // eax

  v3 = ViWdmThunksWithIatIndex;
  v6 = RtlNumberOfClearBits(&VfPoolThunksBitMapHeader);
  ViThunkFindSharedExports(a1[4], v6, v3, a3);
  v7 = RtlNumberOfClearBits(&VfRegularThunksBitMapHeader);
  ViThunkFindSharedExports(a1[3], v7, v3, a3);
  v8 = RtlNumberOfClearBits(&VfDifThunksBitMapHeader);
  return ViThunkFindSharedExports(a1[5], v8, v3, a3);
}
