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
