/*
 * XREFs of _std::vector_CandidateIdentity_std::allocator_CandidateIdentity___::_Emplace_reallocate_CandidateIdentity_&__::_1_::catch$30 @ 0x1801785EB
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18003C946 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@UCandidateIdentity@@@std@@@std@@YAXPEAUCandidateIdentity@@0AEAV?$allocator@UCandidateIdentity@@@0@@Z @ 0x18017842C (--$_Destroy_range@V-$allocator@UCandidateIdentity@@@std@@@std@@YAXPEAUCandidateIdentity@@0AEAV-$.c)
 */

void __fastcall __noreturn std::vector_CandidateIdentity_std::allocator_CandidateIdentity___::_Emplace_reallocate_CandidateIdentity____::_1_::catch_30(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<CandidateIdentity>>(
    *(CandidateIdentity **)(a2 + 112),
    *(CandidateIdentity **)(a2 + 32));
  std::_Deallocate<16,0>(*(void **)(a2 + 40), (const struct std::nothrow_t *)(40LL * *(_QWORD *)(a2 + 120)));
  throw;
}
