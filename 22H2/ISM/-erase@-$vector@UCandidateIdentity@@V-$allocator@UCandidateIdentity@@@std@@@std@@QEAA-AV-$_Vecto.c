/*
 * XREFs of ?erase@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCandidateIdentity@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCandidateIdentity@@@std@@@std@@@2@@Z @ 0x180179E08
 * Callers:
 *     ?HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@@Z @ 0x1801793C0 (-HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV-$vector@UCandidateIdentity@@V-$allocator@UCan.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18003641C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??_GCandidateIdentity@@QEAAPEAXI@Z @ 0x180178D08 (--_GCandidateIdentity@@QEAAPEAXI@Z.c)
 */

_QWORD *__fastcall std::vector<CandidateIdentity>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  _OWORD *v8; // r14
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v4 = a3 + 40;
  if ( a3 + 40 != v3 )
  {
    do
    {
      v8 = (_OWORD *)(v4 - 40);
      std::wstring::_Tidy_deallocate(v4 - 40);
      *v8 = *(_OWORD *)v4;
      v8[1] = *(_OWORD *)(v4 + 16);
      *(_QWORD *)(v4 + 16) = 0LL;
      *(_QWORD *)(v4 + 24) = 7LL;
      *(_WORD *)v4 = 0;
      *(_DWORD *)(v4 - 8) = *(_DWORD *)(v4 + 32);
      v4 += 40LL;
    }
    while ( v4 != v3 );
    v3 = *(_QWORD *)(a1 + 8);
  }
  CandidateIdentity::`scalar deleting destructor'((CandidateIdentity *)(v3 - 40), 0);
  *(_QWORD *)(a1 + 8) -= 40LL;
  result = a2;
  *a2 = a3;
  return result;
}
