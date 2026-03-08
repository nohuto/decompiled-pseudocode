/*
 * XREFs of ??$emplace_back@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_T$$QEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180257428
 * Callers:
 *     ?AdvanceFrame@CDeviceManager@@IEAAXXZ @ 0x1800762D4 (-AdvanceFrame@CDeviceManager@@IEAAXXZ.c)
 *     ?ProcessPendingUnpin@CD3DDevice@@AEAAJ_N@Z @ 0x1800EE170 (-ProcessPendingUnpin@CD3DDevice@@AEAAJ_N@Z.c)
 *     ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x18025802C (-PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  _QWORD *result; // rax

  v3 = (__int64 *)a1[1];
  if ( v3 == (__int64 *)a1[2] )
    return std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>(
             a1,
             (__int64)v3,
             a2);
  v4 = *a2;
  *a2 = 0LL;
  *v3 = v4;
  result = (_QWORD *)a1[1];
  a1[1] = (__int64)(result + 1);
  return result;
}
