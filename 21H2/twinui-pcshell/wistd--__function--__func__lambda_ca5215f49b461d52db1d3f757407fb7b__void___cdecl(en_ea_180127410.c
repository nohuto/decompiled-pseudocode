/*
 * XREFs of wistd::__function::__func__lambda_ca5215f49b461d52db1d3f757407fb7b__void___cdecl(enum_wil::RegistryChangeKind)_::__move @ 0x180127410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_ca5215f49b461d52db1d3f757407fb7b__void___cdecl_enum_wil::RegistryChangeKind__::__move(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax

  *a2 = &off_180508560;
  a2[1] = *(_QWORD *)(a1 + 8);
  result = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  a2[2] = result;
  return result;
}
