/*
 * XREFs of sub_1800DACAC @ 0x1800DACAC
 * Callers:
 *     sub_1800DB1F8 @ 0x1800DB1F8 (sub_1800DB1F8.c)
 * Callees:
 *     sub_1800DADF0 @ 0x1800DADF0 (sub_1800DADF0.c)
 */

_QWORD *__fastcall sub_1800DACAC(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax

  *a1 = &Spectre::Engine::RenderStateState::`vftable';
  a1[1] = 0LL;
  a1[2] = 0LL;
  v3 = *(_QWORD *)(a2 + 728);
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  a1[1] = *(_QWORD *)(a2 + 720);
  a1[2] = *(_QWORD *)(a2 + 728);
  a1[3] = 0LL;
  a1[4] = 0LL;
  *(_QWORD *)((char *)a1 + 44) = 0LL;
  *(_QWORD *)((char *)a1 + 52) = 0LL;
  sub_1800DADF0(a1);
  return a1;
}
