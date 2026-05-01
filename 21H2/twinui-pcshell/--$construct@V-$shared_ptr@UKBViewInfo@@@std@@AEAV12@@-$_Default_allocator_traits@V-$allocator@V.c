/*
 * XREFs of ??$construct@V?$shared_ptr@UKBViewInfo@@@std@@AEAV12@@?$_Default_allocator_traits@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@SAXAEAV?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@1@QEAV?$shared_ptr@UKBViewInfo@@@1@AEAV31@@Z @ 0x1803B60D0
 * Callers:
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x1803BE340 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<std::shared_ptr<KBViewInfo>>>::construct<std::shared_ptr<KBViewInfo>,std::shared_ptr<KBViewInfo> &>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v3 = a3[1];
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  *a2 = *a3;
  result = a3[1];
  a2[1] = result;
  return result;
}
