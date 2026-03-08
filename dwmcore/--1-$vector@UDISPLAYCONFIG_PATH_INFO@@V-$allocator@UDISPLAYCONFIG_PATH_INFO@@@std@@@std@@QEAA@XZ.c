/*
 * XREFs of ??1?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@QEAA@XZ @ 0x1801FF4C4
 * Callers:
 *     CalculateDisplayBlankTime @ 0x1801FF76C (CalculateDisplayBlankTime.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<DISPLAYCONFIG_PATH_INFO>::~vector<DISPLAYCONFIG_PATH_INFO>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 3));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
