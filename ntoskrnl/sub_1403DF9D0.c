/*
 * XREFs of sub_1403DF9D0 @ 0x1403DF9D0
 * Callers:
 *     <none>
 * Callees:
 *     KeExitRetpoline @ 0x1402E3E6C (KeExitRetpoline.c)
 *     _guard_check_icall @ 0x140421180 (_guard_check_icall.c)
 */

__int64 __fastcall sub_1403DF9D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r10
  char v8; // r8
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r11
  __int16 v11; // r9
  unsigned __int64 v12; // rdi

  KeExitRetpoline();
  v7 = *(_QWORD *)(a1 + 32);
  v8 = 1;
  v9 = (unsigned __int64)&qword_140C0DF08 ^ ((v7 ^ ((v7 ^ 0xE5D49100uLL) >> 4)) >> 4);
  v10 = v9;
  v11 = v9;
  if ( (v9 & 0xF) != 0 )
    v8 = v9 & 0xF;
  for ( ; v8; --v8 )
  {
    v7 = *(_QWORD *)((v9 & 0xF) + v7);
    v9 ^= (v7 ^ ((v7 ^ 0x1E5200uLL) >> 4)) >> 4;
  }
  v12 = v10 ^ v7;
  if ( (v11 & 0x1000) == 0 )
    v12 = v7;
  return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64))(v12 + 24))(
           v12,
           *(_QWORD *)(v12 + 32),
           a3,
           a4);
}
