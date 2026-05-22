/*
 * XREFs of ?_Change_array@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@AEAAXQEAUCandidateIdentity@@_K1@Z @ 0x180179CF0
 * Callers:
 *     ??$_Emplace_reallocate@AEAUCandidateIdentity@@@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAAPEAUCandidateIdentity@@QEAU2@AEAU2@@Z @ 0x180178468 (--$_Emplace_reallocate@AEAUCandidateIdentity@@@-$vector@UCandidateIdentity@@V-$allocator@UCandid.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UCandidateIdentity@@@std@@@std@@YAXPEAUCandidateIdentity@@0AEAV?$allocator@UCandidateIdentity@@@0@@Z @ 0x18017842C (--$_Destroy_range@V-$allocator@UCandidateIdentity@@@std@@@std@@YAXPEAUCandidateIdentity@@0AEAV-$.c)
 */

__int64 __fastcall std::vector<CandidateIdentity>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  CandidateIdentity *v6; // rcx
  __int64 result; // rax

  v6 = *(CandidateIdentity **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<CandidateIdentity>>(v6, *(CandidateIdentity **)(a1 + 8));
    std::_Deallocate<16,0>(
      *(void **)a1,
      (const struct std::nothrow_t *)(40 * ((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) / 40LL)));
  }
  *(_QWORD *)a1 = a2;
  result = 5 * a4;
  *(_QWORD *)(a1 + 8) = a2 + 40 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 40 * a4;
  return result;
}
