/*
 * XREFs of sub_1800EF7D0 @ 0x1800EF7D0
 * Callers:
 *     sub_1800EF9D0 @ 0x1800EF9D0 (sub_1800EF9D0.c)
 * Callees:
 *     sub_1800EF878 @ 0x1800EF878 (sub_1800EF878.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800EF7D0(_Mtx_t a1, int a2, char a3, char a4)
{
  int v8; // eax
  int v9; // r9d
  int v10; // eax

  v8 = Mtx_lock(a1);
  if ( v8 )
    std::_Throw_C_error(v8);
  LOBYTE(v9) = a3;
  sub_1800EF878((_DWORD)a1, 1, a2, v9, a4);
  v10 = Mtx_unlock(a1);
  if ( v10 )
    std::_Throw_C_error(v10);
}
