__int64 __fastcall MiReleaseLargeZeroingVa(__int64 a1, int a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rcx

  if ( !a2 )
    return MiZeroPageWorkMapping(*(_DWORD *)(a1 + 64), *(_QWORD *)(a1 + 32), 3);
  v2 = *(_QWORD *)(a1 + 344);
  v3 = *(_QWORD *)(v2 + 312);
  *(_QWORD *)(v2 + 312) = 0LL;
  MiFreeUltraMapping(v3);
  return MiDeleteUltraThreadContext(v2 + 184);
}
