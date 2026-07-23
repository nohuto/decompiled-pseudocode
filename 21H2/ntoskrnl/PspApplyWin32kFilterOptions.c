/*
 * XREFs of PspApplyWin32kFilterOptions @ 0x1406195EC
 * Callers:
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PspApplyWin32kFilterOptions(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  int v3; // r8d

  result = *(_QWORD *)(a2 + 472);
  if ( result )
  {
    v3 = *(_DWORD *)result;
    if ( (*(_DWORD *)result & 1) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x4000u);
      result = *(_QWORD *)(a2 + 472);
      v3 = *(_DWORD *)result;
    }
    if ( (v3 & 2) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x8000u);
      result = *(_QWORD *)(a2 + 472);
    }
    result = *(unsigned int *)(result + 4);
    *(_DWORD *)(a1 + 2408) = result;
  }
  return result;
}
