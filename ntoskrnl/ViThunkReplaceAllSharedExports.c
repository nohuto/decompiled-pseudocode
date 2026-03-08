/*
 * XREFs of ViThunkReplaceAllSharedExports @ 0x140AD8E64
 * Callers:
 *     VfThunkApplyThunksCurrentSession @ 0x140AD83AC (VfThunkApplyThunksCurrentSession.c)
 * Callees:
 *     RtlNumberOfClearBits @ 0x14035C4F0 (RtlNumberOfClearBits.c)
 *     ViThunkReplaceSharedExports @ 0x140AD9108 (ViThunkReplaceSharedExports.c)
 */

__int64 __fastcall ViThunkReplaceAllSharedExports(_QWORD *a1)
{
  ULONG v2; // eax
  __int64 result; // rax
  ULONG v4; // eax
  ULONG v5; // eax

  v2 = RtlNumberOfClearBits(&VfPoolThunksBitMapHeader);
  result = ViThunkReplaceSharedExports(a1[4], v2);
  if ( !KernelVerifier )
  {
    v4 = RtlNumberOfClearBits(&VfRegularThunksBitMapHeader);
    ViThunkReplaceSharedExports(a1[3], v4);
    v5 = RtlNumberOfClearBits(&VfDifThunksBitMapHeader);
    return ViThunkReplaceSharedExports(a1[5], v5);
  }
  return result;
}
