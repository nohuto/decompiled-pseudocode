/*
 * XREFs of MiPostInsertVad @ 0x1402D5DE4
 * Callers:
 *     MiPerformVadSplitting @ 0x1402D581C (MiPerformVadSplitting.c)
 * Callees:
 *     MiManageSubsectionView @ 0x140335DC0 (MiManageSubsectionView.c)
 *     MiAweViewInserter @ 0x140A3E64C (MiAweViewInserter.c)
 */

__int64 __fastcall MiPostInsertVad(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 48) & 0x200000) == 0 )
  {
    *(_QWORD *)(a1 + 112) = (__int64)KeGetCurrentThread()->ApcState.Process | 1;
    result = MiManageSubsectionView(*(_QWORD *)(a1 + 72), a1 + 96, 3LL);
  }
  if ( a3 )
    return MiAweViewInserter(KeGetCurrentThread()->ApcState.Process, a3);
  return result;
}
