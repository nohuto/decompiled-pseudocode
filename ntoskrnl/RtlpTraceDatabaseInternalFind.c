/*
 * XREFs of RtlpTraceDatabaseInternalFind @ 0x1405AF3E4
 * Callers:
 *     RtlTraceDatabaseFind @ 0x1405AF0E0 (RtlTraceDatabaseFind.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1405AF220 (RtlpTraceDatabaseInternalAdd.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

char __fastcall RtlpTraceDatabaseInternalFind(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  unsigned int v8; // eax
  __int64 i; // rdx
  __int64 j; // r8

  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(a1 + 128))(a2, a3);
  ++*(_DWORD *)(a1 + 4LL * (v8 & 0xF) + 152);
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (v8 % *(_DWORD *)(a1 + 112))); ; i = *(_QWORD *)(i + 40) )
  {
    if ( !i )
    {
      if ( a4 )
        *a4 = 0LL;
      return 0;
    }
    if ( a2 == *(_DWORD *)(i + 8) )
    {
      for ( j = 0LL; (unsigned int)j < a2; j = (unsigned int)(j + 1) )
      {
        if ( *(_QWORD *)(*(_QWORD *)(i + 48) + 8 * j) != *(_QWORD *)(a3 + 8 * j) )
          break;
      }
      if ( (_DWORD)j == a2 )
        break;
    }
  }
  if ( a4 )
    *a4 = i;
  return 1;
}
