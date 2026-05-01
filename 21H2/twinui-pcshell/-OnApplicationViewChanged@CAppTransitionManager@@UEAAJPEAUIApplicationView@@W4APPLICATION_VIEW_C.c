/*
 * XREFs of ?OnApplicationViewChanged@CAppTransitionManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18007CE10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppTransitionManager::OnApplicationViewChanged(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rcx

  if ( a3 == 7 )
  {
    v6 = *(_QWORD *)(a1 + 112);
    if ( v6 != a2 )
    {
      if ( a2 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
        v6 = *(_QWORD *)(a1 + 112);
      }
      *(_QWORD *)(a1 + 112) = a2;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return 0LL;
}
