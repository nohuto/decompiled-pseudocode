/*
 * XREFs of PspValidateJobAffinityState @ 0x140880118
 * Callers:
 *     PspInsertProcess @ 0x14070E514 (PspInsertProcess.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     PspCheckJobAccessState @ 0x1409AF0FC (PspCheckJobAccessState.c)
 */

__int64 __fastcall PspValidateJobAffinityState(__int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 v5; // rcx

  v4 = 0;
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 56), 1u);
  v5 = *(_QWORD *)(a1 + 528);
  if ( !v5 || (v4 = PspCheckJobAccessState(v5, a2), v4 >= 0) )
    _InterlockedOr((volatile signed __int32 *)(a2 + 1124), 0x4000000u);
  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  return (unsigned int)v4;
}
