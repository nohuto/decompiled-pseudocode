/*
 * XREFs of ??$_Merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@V?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA?AV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@000V10@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800ACB38
 * Callers:
 *     ??$_Buffered_merge_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800AB644 (--$_Buffered_merge_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@.c)
 * Callees:
 *     ??4?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800795C0 (--4-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@.c)
 *     ??1?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAA@XZ @ 0x1800AADB4 (--1-$_Temp_iterator@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@s.c)
 *     ??$_Move@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@YA?AV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0V10@@Z @ 0x1800AC490 (--$_Move@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$_Temp_i.c)
 */

_QWORD *__fastcall std::_Merge<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>,CreativeFramework::TargetedContentLayoutHelpers::less_than_special_bindings>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 a6)
{
  __int64 *v8; // rbx
  double v10; // xmm0_8
  double v11; // xmm1_8
  bool v12; // al
  __int64 v13; // rcx
  __int64 *v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int128 v20; // [rsp+20h] [rbp-58h] BYREF
  __int128 v21; // [rsp+30h] [rbp-48h]
  __int64 v22; // [rsp+40h] [rbp-38h]
  _QWORD *v23[5]; // [rsp+48h] [rbp-30h] BYREF

  v8 = a2;
  while ( v8 != a3 )
  {
    if ( a4 == a5 )
      break;
    v10 = *(double *)(*a4 + 32);
    v11 = *(double *)(*v8 + 32);
    v12 = v11 > v10 || v10 == v11 && *(double *)(*v8 + 40) > *(double *)(*a4 + 40);
    v13 = *(_QWORD *)(a6 + 32);
    v14 = *(__int64 **)(v13 + 8);
    if ( v12 )
    {
      if ( (unsigned __int64)v14 >= *(_QWORD *)(v13 + 16) )
      {
        *v14 = 0LL;
        v14[1] = 0LL;
        if ( v14 != a4 )
        {
          v14[1] = a4[1];
          a4[1] = 0LL;
          v15 = *v14;
          *v14 = *a4;
          *a4 = v15;
        }
        v16 = *(_QWORD *)(a6 + 32);
        *(_QWORD *)(v16 + 8) += 16LL;
        *(_QWORD *)(*(_QWORD *)(a6 + 32) + 16LL) = *(_QWORD *)(v16 + 8);
      }
      else
      {
        *(_QWORD *)(v13 + 8) = v14 + 2;
        std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(v14, a4);
      }
      a4 += 2;
    }
    else
    {
      if ( (unsigned __int64)v14 >= *(_QWORD *)(v13 + 16) )
      {
        *v14 = 0LL;
        v14[1] = 0LL;
        if ( v14 != v8 )
        {
          v14[1] = v8[1];
          v8[1] = 0LL;
          v17 = *v14;
          *v14 = *v8;
          *v8 = v17;
        }
        v18 = *(_QWORD *)(a6 + 32);
        *(_QWORD *)(v18 + 8) += 16LL;
        *(_QWORD *)(*(_QWORD *)(a6 + 32) + 16LL) = *(_QWORD *)(v18 + 8);
      }
      else
      {
        *(_QWORD *)(v13 + 8) = v14 + 2;
        std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(v14, v8);
      }
      v8 += 2;
    }
  }
  v22 = *(_QWORD *)(a6 + 32);
  v20 = 0LL;
  v21 = 0LL;
  *(_QWORD *)(a6 + 32) = std::_Move<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>>(
                           v23,
                           v8,
                           a3,
                           (__int64)&v20)[4];
  std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::~_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(v23);
  v22 = *(_QWORD *)(a6 + 32);
  v20 = 0LL;
  v21 = 0LL;
  std::_Move<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>>(
    a1,
    a4,
    a5,
    (__int64)&v20);
  std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::~_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>((_QWORD **)a6);
  return a1;
}
