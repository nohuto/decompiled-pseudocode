/*
 * XREFs of MiRecheckCombineVm @ 0x14029F408
 * Callers:
 *     MiCombineInitialInstance @ 0x14029CD58 (MiCombineInitialInstance.c)
 *     MiCombineWithStandbyExisting @ 0x14029F020 (MiCombineWithStandbyExisting.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiGetTopLevelPfn @ 0x14022A3D0 (MiGetTopLevelPfn.c)
 *     MiCombineCandidate @ 0x14032C640 (MiCombineCandidate.c)
 */

__int64 __fastcall MiRecheckCombineVm(__int64 a1, __int64 a2, ULONG_PTR a3, char *a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // esi
  __int64 TopLevelPfn; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx

  v6 = MiCombineCandidate(a1, a2, a3);
  v7 = 0;
  v8 = v6;
  if ( !v6 )
    return 0LL;
  if ( v6 == 2 )
    return a4 == MiGetAnyMultiplexedVm(2);
  TopLevelPfn = MiGetTopLevelPfn(a3);
  v10 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
  v11 = (*(_QWORD *)(TopLevelPfn + 24) >> 62) & 1LL;
  if ( TopLevelPfn != a3 )
    _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v8 == 1 )
    return a4 == (char *)(v10 + 1664);
  if ( (_DWORD)v11 )
    return 0LL;
  LOBYTE(v7) = a4 == (char *)(v10 + 192);
  return v7;
}
