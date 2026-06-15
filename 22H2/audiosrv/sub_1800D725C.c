/*
 * XREFs of sub_1800D725C @ 0x1800D725C
 * Callers:
 *     sub_1800C5260 @ 0x1800C5260 (sub_1800C5260.c)
 *     sub_1800C55D0 @ 0x1800C55D0 (sub_1800C55D0.c)
 *     sub_1800DBFD0 @ 0x1800DBFD0 (sub_1800DBFD0.c)
 * Callees:
 *     sub_180043EC0 @ 0x180043EC0 (sub_180043EC0.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D725C(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v7; // ebx
  void (__fastcall ***v9)(_QWORD, __int64, __int64 *); // [rsp+20h] [rbp-18h] BYREF

  v9 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)&dwCreationFlags + 40LL))(
         *(_QWORD *)&dwCreationFlags,
         a1,
         &v9);
  if ( v7 < 0 || (v7 = sub_180043EC0(v9, a2, a3, a4), v7 < 0) )
    sub_18005E8F8((__int64)"CPolicyConfig::GetPropertyStoreProperty", 2773, v7);
  if ( v9 )
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v9)[2])(v9);
  return (unsigned int)v7;
}
