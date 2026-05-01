/*
 * XREFs of ??$make_shared@UPeoplePaneViewInfo@@AEAPEBGW4ViewType@@AEBUtagSIZE@@@std@@YA?AV?$shared_ptr@UPeoplePaneViewInfo@@@0@AEAPEBG$$QEAW4ViewType@@AEBUtagSIZE@@@Z @ 0x1802CD0A4
 * Callers:
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x1802D00B0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800904EC (--2@YAPEAX_K@Z.c)
 *     ??0PeoplePaneViewInfo@@QEAA@PEBGW4ViewType@@UtagSIZE@@@Z @ 0x1802CD2A8 (--0PeoplePaneViewInfo@@QEAA@PEBGW4ViewType@@UtagSIZE@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<PeoplePaneViewInfo,unsigned short const * &,enum ViewType,tagSIZE const &>(
        _QWORD *a1,
        _QWORD *a2,
        unsigned int *a3)
{
  _DWORD *v7; // [rsp+58h] [rbp+20h]

  v7 = operator new(0x60uLL);
  v7[2] = 1;
  v7[3] = 1;
  *(_QWORD *)v7 = &std::_Ref_count_obj<PeoplePaneViewInfo>::`vftable';
  PeoplePaneViewInfo::PeoplePaneViewInfo(v7 + 4, *a2, *a3, 0x28800000168LL);
  *a1 = v7 + 4;
  a1[1] = v7;
  return a1;
}
