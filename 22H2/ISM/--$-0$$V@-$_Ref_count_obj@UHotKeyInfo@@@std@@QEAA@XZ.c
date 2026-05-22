/*
 * XREFs of ??$?0$$V@?$_Ref_count_obj@UHotKeyInfo@@@std@@QEAA@XZ @ 0x18019D198
 * Callers:
 *     _lambda_116eb2b29a456c26711f063c826cbee8_::operator() @ 0x18019F530 (_lambda_116eb2b29a456c26711f063c826cbee8_--operator().c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Ref_count_obj<HotKeyInfo>::_Ref_count_obj<HotKeyInfo>(__int64 a1)
{
  _QWORD *v2; // rax

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<HotKeyInfo>::`vftable';
  memset_0((void *)(a1 + 16), 0, 0x40uLL);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v2 = v2;
  v2[1] = v2;
  *(_QWORD *)(a1 + 64) = v2;
  return a1;
}
