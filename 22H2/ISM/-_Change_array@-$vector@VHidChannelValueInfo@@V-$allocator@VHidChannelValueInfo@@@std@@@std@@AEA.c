/*
 * XREFs of ?_Change_array@?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@AEAAXQEAVHidChannelValueInfo@@_K1@Z @ 0x1800A8EC8
 * Callers:
 *     ??$_Emplace_reallocate@AEBVHidChannelValueInfo@@@?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@QEAAPEAVHidChannelValueInfo@@QEAV2@AEBV2@@Z @ 0x1800A4CBC (--$_Emplace_reallocate@AEBVHidChannelValueInfo@@@-$vector@VHidChannelValueInfo@@V-$allocator@VHi.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<HidChannelValueInfo>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)(72 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v6) / 72LL)));
  *(_QWORD *)a1 = a2;
  result = 9 * a4;
  *(_QWORD *)(a1 + 8) = a2 + 72 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 72 * a4;
  return result;
}
