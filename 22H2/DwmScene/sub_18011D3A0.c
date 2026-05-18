/*
 * XREFs of sub_18011D3A0 @ 0x18011D3A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180068FF4 @ 0x180068FF4 (sub_180068FF4.c)
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_18011D3A0(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdi
  int result; // eax

  v2 = Mtx_lock((_Mtx_t)(a1 + 8));
  if ( v2 )
  {
LABEL_4:
    std::_Throw_C_error(v2);
    JUMPOUT(0x18011D410LL);
  }
  v3 = *(_QWORD *)(a1 + 96);
  sub_180068FF4(a1 + 96, a1 + 96, *(__int64 **)(v3 + 8));
  *(_QWORD *)(v3 + 8) = v3;
  *(_QWORD *)v3 = v3;
  *(_QWORD *)(v3 + 16) = v3;
  *(_QWORD *)(a1 + 104) = 0LL;
  result = Mtx_unlock((_Mtx_t)(a1 + 8));
  if ( result )
  {
    std::_Throw_C_error(result);
    goto LABEL_4;
  }
  return result;
}
