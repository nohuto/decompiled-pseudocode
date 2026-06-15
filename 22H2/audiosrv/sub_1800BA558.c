/*
 * XREFs of sub_1800BA558 @ 0x1800BA558
 * Callers:
 *     sub_1800694B8 @ 0x1800694B8 (sub_1800694B8.c)
 *     sub_1800B8630 @ 0x1800B8630 (sub_1800B8630.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800BA558(__int64 a1)
{
  int v2; // eax
  int v3; // eax

  v2 = Mtx_lock((_Mtx_t)(a1 + 88));
  if ( v2 )
  {
    std::_Throw_C_error(v2);
    __debugbreak();
  }
  *(_BYTE *)(a1 + 80) = 1;
  v3 = Mtx_unlock((_Mtx_t)(a1 + 88));
  if ( v3 )
    std::_Throw_C_error(v3);
}
