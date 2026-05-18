/*
 * XREFs of sub_180064F68 @ 0x180064F68
 * Callers:
 *     sub_180064FF8 @ 0x180064FF8 (sub_180064FF8.c)
 * Callees:
 *     sub_180061438 @ 0x180061438 (sub_180061438.c)
 *     sub_1800617C4 @ 0x1800617C4 (sub_1800617C4.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180064F68(_QWORD *a1, _QWORD *a2)
{
  unsigned int v4; // eax
  volatile signed __int32 *v5; // rbx

  v4 = sub_1800617C4(*a2 + 24LL);
  sub_180061438((__int64)(a1 + 1), v4);
  a1[8] = 0LL;
  a1[9] = 0LL;
  *a1 = &Spectre::Engine::IRenderOutput::`vftable';
  v5 = (volatile signed __int32 *)a2[1];
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return a1;
}
