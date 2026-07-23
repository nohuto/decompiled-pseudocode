/*
 * XREFs of PspProcessOpen @ 0x140696F10
 * Callers:
 *     <none>
 * Callees:
 *     PspIsParentProcess @ 0x140285248 (PspIsParentProcess.c)
 *     PsTestProtectedProcessIncompatibility @ 0x140697008 (PsTestProtectedProcessIncompatibility.c)
 */

__int64 __fastcall PspProcessOpen(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4, int *a5)
{
  bool IsParentProcess; // al
  __int64 v9; // r9
  unsigned int v10; // r10d
  unsigned int v11; // ecx
  int v12; // edx

  IsParentProcess = PspIsParentProcess(a3, a4);
  v11 = v10 & 0xFFFFFFFE;
  if ( !IsParentProcess )
    v11 = v10;
  if ( (v11 & *a5) != 0 && (unsigned __int8)PsTestProtectedProcessIncompatibility(a2, a3, v9) )
    return 3221225506LL;
  if ( *(_QWORD *)(a4 + 2240) && !*(_QWORD *)(a3 + 2240) && a2 && (~DWORD2(xmmword_140C1E080) & *a5) != 0 )
    return 3221225506LL;
  v12 = *a5;
  if ( (*a5 & 1) != 0 && a2 == 1 && (*(_DWORD *)(a4 + 2172) & 0x8000000) != 0 )
    return 3221225506LL;
  if ( (*a5 & 0x28) == 40 || (*a5 & 0x400) != 0 )
  {
    v12 |= 0x1000u;
    *a5 = v12;
  }
  if ( (v12 & 0x200) != 0 )
    *a5 = v12 | 0x2000;
  return 0LL;
}
