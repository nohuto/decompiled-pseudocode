/*
 * XREFs of ??$try_com_query_nothrow@UIHolographicExclusiveModeManagerProxy@@AEAPEAUIUnknown@@@wil@@YA?AV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@0@AEAPEAUIUnknown@@@Z @ 0x1802A8EE4
 * Callers:
 *     ?ProcessAddExclusiveModeProxy@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802A9C20 (-ProcessAddExclusiveModeProxy@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveExclusiveModeProxy@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802AA758 (-ProcessRemoveExclusiveModeProxy@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::try_com_query_nothrow<IHolographicExclusiveModeManagerProxy,IUnknown * &>(
        _QWORD *a1,
        void (__fastcall ****a2)(_QWORD, GUID *, _QWORD *))
{
  void (__fastcall ***v3)(_QWORD, GUID *, _QWORD *); // rcx

  v3 = *a2;
  *a1 = 0LL;
  (**v3)(v3, &GUID_143f61ed_01bd_4237_b4cb_c9ce1a59f0a0, a1);
  return a1;
}
