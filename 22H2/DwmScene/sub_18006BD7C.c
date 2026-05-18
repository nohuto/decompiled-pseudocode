/*
 * XREFs of sub_18006BD7C @ 0x18006BD7C
 * Callers:
 *     sub_180079798 @ 0x180079798 (sub_180079798.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     ?_Throw_Cpp_error@std@@YAXH@Z @ 0x18011FAC2 (-_Throw_Cpp_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006BD7C(__int64 a1, _OWORD *a2, _QWORD *a3)
{
  char *v6; // r9
  __int64 v7; // rax

  v6 = (char *)operator new(0x18uLL);
  if ( v6 )
  {
    *(_QWORD *)v6 = *a3;
    *(_OWORD *)(v6 + 8) = *a2;
  }
  v7 = o__beginthreadex(0LL, 0LL, sub_1800700D0);
  *(_QWORD *)a1 = v7;
  if ( !v7 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    std::_Throw_Cpp_error(6);
    JUMPOUT(0x18006BE06LL);
  }
  return a1;
}
