/*
 * XREFs of wil::ResultFromException__lambda_c2b84dc65f1ba037143a467dc4ccf5a8___ @ 0x1800CE404
 * Callers:
 *     ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1803BE440 (-OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802862EC (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall wil::ResultFromException__lambda_c2b84dc65f1ba037143a467dc4ccf5a8___(__int64 *a1)
{
  __int64 v1; // r14
  __int64 v2; // rdi
  __int64 v3; // rsi
  std::_Ref_count_base *v4; // rcx

  v1 = *a1;
  v2 = *(_QWORD *)(*a1 + 432);
  v3 = *(_QWORD *)a1[1] + 16LL;
  if ( v3 != v2 )
  {
    do
    {
      std::shared_ptr<KBViewInfo>::operator=(v3 - 16, v3);
      v3 += 16LL;
    }
    while ( v3 != v2 );
    v2 = *(_QWORD *)(v1 + 432);
  }
  v4 = *(std::_Ref_count_base **)(v2 - 8);
  if ( v4 )
  {
    std::_Ref_count_base::_Decref(v4);
    v2 = *(_QWORD *)(v1 + 432);
  }
  *(_QWORD *)(v1 + 432) = v2 - 16;
  return 0LL;
}
