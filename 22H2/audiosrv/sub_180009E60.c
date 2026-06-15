/*
 * XREFs of sub_180009E60 @ 0x180009E60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000AF30 @ 0x18000AF30 (sub_18000AF30.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall sub_180009E60(__int64 a1)
{
  __int64 v1; // rdi
  struct _Mtx_internal_imp_t *v2; // rbx
  int v3; // eax
  int result; // eax

  v1 = a1 + 16;
  v2 = *(struct _Mtx_internal_imp_t **)(a1 + 128);
  v3 = Mtx_lock(v2);
  if ( v3 )
  {
    std::_Throw_C_error(v3);
    goto LABEL_5;
  }
  sub_18000AF30(v2, 1LL, v1);
  result = Mtx_unlock(v2);
  if ( result )
  {
LABEL_5:
    std::_Throw_C_error(result);
    JUMPOUT(0x18008071CLL);
  }
  return result;
}
