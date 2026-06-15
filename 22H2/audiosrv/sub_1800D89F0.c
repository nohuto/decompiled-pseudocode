/*
 * XREFs of sub_1800D89F0 @ 0x1800D89F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800D8780 @ 0x1800D8780 (sub_1800D8780.c)
 */

__int64 __fastcall sub_1800D89F0(__int64 a1, __int64 a2, int a3)
{
  int v4; // ebx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v8 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)&dwCreationFlags + 40LL))(
         *(_QWORD *)&dwCreationFlags,
         a2,
         &v8);
  if ( v4 < 0
    || (v7 = 0LL,
        v6 = 0LL,
        DWORD2(v6) = a3,
        LOWORD(v6) = 19,
        v4 = sub_1800D8780(v8, 0LL, (__int64)&unk_180172D00, (__int64)&v6),
        v4 < 0) )
  {
    sub_18005E8F8((__int64)"CPolicyConfig::SetShareMode", 2201, v4);
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v4;
}
