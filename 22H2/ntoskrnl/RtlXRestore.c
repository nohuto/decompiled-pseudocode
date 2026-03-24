/*
 * XREFs of RtlXRestore @ 0x14031C12C
 * Callers:
 *     KeSaveExtendedAndSupervisorState @ 0x14031A61C (KeSaveExtendedAndSupervisorState.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x14031C008 (KeRestoreExtendedAndSupervisorState.c)
 *     RtlXRestoreS @ 0x140381658 (RtlXRestoreS.c)
 *     KiRestoreProcessorState @ 0x140525238 (KiRestoreProcessorState.c)
 *     KiParkUmsThread @ 0x140525E60 (KiParkUmsThread.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlXRestore(__int64 a1, unsigned __int64 a2)
{
  int v2; // r8d
  unsigned __int64 result; // rax

  if ( *(__int64 *)(a1 + 520) >= 0 && (a2 & 6) == 4 )
  {
    v2 = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 24) = _mm_getcsr();
    result = a2;
    _xrstor((void *)a1, a2);
    *(_DWORD *)(a1 + 24) = v2;
  }
  else
  {
    result = a2;
    _xrstor((void *)a1, a2);
  }
  return result;
}
