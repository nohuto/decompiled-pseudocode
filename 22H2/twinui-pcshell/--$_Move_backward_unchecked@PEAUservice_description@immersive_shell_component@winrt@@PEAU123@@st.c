/*
 * XREFs of ??$_Move_backward_unchecked@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@PEAU123@00@Z @ 0x1804D06A8
 * Callers:
 *     ??$_Insert_range@PEBUservice_description@immersive_shell_component@winrt@@@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@@1@PEBUservice_description@immersive_shell_component@winrt@@1Uforward_iterator_tag@1@@Z @ 0x1804D0284 (--$_Insert_range@PEBUservice_description@immersive_shell_component@winrt@@@-$vector@Uservice_des.c)
 * Callees:
 *     ??4?$com_ptr@UIUnknown@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1804D1600 (--4-$com_ptr@UIUnknown@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

__int64 __fastcall std::_Move_backward_unchecked<winrt::immersive_shell_component::service_description *,winrt::immersive_shell_component::service_description *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rdi
  int v6; // eax

  if ( a2 != a1 )
  {
    v5 = a2 - 16;
    do
    {
      a3 -= 32LL;
      *(_OWORD *)a3 = *(_OWORD *)(v5 - 16);
      winrt::com_ptr<IUnknown>::operator=(a3 + 16, v5);
      v6 = *(_DWORD *)(v5 + 8);
      v5 -= 32LL;
      *(_DWORD *)(a3 + 24) = v6;
    }
    while ( v5 + 16 != a1 );
  }
  return a3;
}
