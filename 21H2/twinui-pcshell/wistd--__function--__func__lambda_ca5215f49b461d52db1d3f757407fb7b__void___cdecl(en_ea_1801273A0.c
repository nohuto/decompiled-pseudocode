/*
 * XREFs of wistd::__function::__func__lambda_ca5215f49b461d52db1d3f757407fb7b__void___cdecl(enum_wil::RegistryChangeKind)_::__clone @ 0x1801273A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_ca5215f49b461d52db1d3f757407fb7b__void___cdecl_enum_wil::RegistryChangeKind__::__clone(
        __int64 a1,
        _QWORD *a2)
{
  *a2 = &off_180508560;
  a2[1] = *(_QWORD *)(a1 + 8);
  a2[2] = *(_QWORD *)(a1 + 16);
  return Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2 + 2);
}
