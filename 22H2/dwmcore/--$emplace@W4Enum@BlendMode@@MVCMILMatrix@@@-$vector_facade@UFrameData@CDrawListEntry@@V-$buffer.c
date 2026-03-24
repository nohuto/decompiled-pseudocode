/*
 * XREFs of ??$emplace@W4Enum@BlendMode@@MVCMILMatrix@@@?$vector_facade@UFrameData@CDrawListEntry@@V?$buffer_impl@UFrameData@CDrawListEntry@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UFrameData@CDrawListEntry@@@1@V?$basic_iterator@$$CBUFrameData@CDrawListEntry@@@1@W4Enum@BlendMode@@MVCMILMatrix@@@Z @ 0x1801A1394
 * Callers:
 *     ??$emplace_back@W4Enum@BlendMode@@MVCMILMatrix@@@?$vector_facade@UFrameData@CDrawListEntry@@V?$buffer_impl@UFrameData@CDrawListEntry@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXW4Enum@BlendMode@@MVCMILMatrix@@@Z @ 0x1801A1440 (--$emplace_back@W4Enum@BlendMode@@MVCMILMatrix@@@-$vector_facade@UFrameData@CDrawListEntry@@V-$b.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@UFrameData@CDrawListEntry@@V?$buffer_impl@UFrameData@CDrawListEntry@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUFrameData@CDrawListEntry@@_K0@Z @ 0x1801A26B8 (-reserve_region@-$vector_facade@UFrameData@CDrawListEntry@@V-$buffer_impl@UFrameData@CDrawListEn.c)
 */

_QWORD *__fastcall detail::vector_facade<CDrawListEntry::FrameData,detail::buffer_impl<CDrawListEntry::FrameData,1,1,detail::liberal_expansion_policy>>::emplace<enum BlendMode::Enum,float,CMILMatrix>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        int a4,
        int a5,
        __int128 *a6)
{
  __int64 v9; // rdi
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  int v15; // ecx

  v9 = (*a3 - *a1) / 76LL;
  v10 = detail::vector_facade<CDrawListEntry::FrameData,detail::buffer_impl<CDrawListEntry::FrameData,1,1,detail::liberal_expansion_policy>>::reserve_region(
          a1,
          v9);
  *(_DWORD *)(v10 + 4) = a5;
  v11 = *a6;
  *(_DWORD *)v10 = a4;
  v12 = a6[1];
  *(_OWORD *)(v10 + 8) = v11;
  v13 = a6[2];
  *(_OWORD *)(v10 + 24) = v12;
  v14 = a6[3];
  v15 = *((_DWORD *)a6 + 16);
  *(_OWORD *)(v10 + 40) = v13;
  *(_OWORD *)(v10 + 56) = v14;
  *(_DWORD *)(v10 + 72) = v15;
  *a2 = *a1 + 76 * v9;
  return a2;
}
