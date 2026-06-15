/*
 * XREFs of sub_1800D73F0 @ 0x1800D73F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180043EC0 @ 0x180043EC0 (sub_180043EC0.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D73F0(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v4; // ebx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]
  void (__fastcall ***v8)(_QWORD, __int64, __int64 *); // [rsp+58h] [rbp+10h] BYREF

  *(_OWORD *)pvar = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)&dwCreationFlags + 40LL))(
         *(_QWORD *)&dwCreationFlags,
         a2,
         &v8);
  if ( v4 >= 0 )
  {
    v4 = sub_180043EC0(v8, 0LL, (__int64)&unk_180172D00, (__int64)pvar);
    if ( v4 >= 0 )
    {
      if ( LOWORD(pvar[0]) == 19 )
      {
        *a3 = pvar[1];
      }
      else if ( LOWORD(pvar[0]) )
      {
        v4 = -2147024809;
      }
      else
      {
        *a3 = 0;
      }
    }
  }
  PropVariantClear(pvar);
  if ( v4 < 0 )
    sub_18005E8F8((__int64)"CPolicyConfig::GetShareMode", 2168, v4);
  if ( v8 )
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v8)[2])(v8);
  return (unsigned int)v4;
}
