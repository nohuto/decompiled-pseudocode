/*
 * XREFs of sub_1800D6A04 @ 0x1800D6A04
 * Callers:
 *     sub_180016E30 @ 0x180016E30 (sub_180016E30.c)
 *     sub_1800D9990 @ 0x1800D9990 (sub_1800D9990.c)
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18002AF64 @ 0x18002AF64 (sub_18002AF64.c)
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall sub_1800D6A04(__int64 a1)
{
  _DWORD *v1; // rcx
  unsigned int i; // ebx
  bool v3; // di
  unsigned int v4; // [rsp+30h] [rbp-50h] BYREF
  __int64 v5; // [rsp+38h] [rbp-48h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-40h] BYREF
  __int64 v7; // [rsp+48h] [rbp-38h] BYREF
  void **p_pv; // [rsp+50h] [rbp-30h] BYREF
  void *v9; // [rsp+58h] [rbp-28h] BYREF
  char v10; // [rsp+60h] [rbp-20h]

  v5 = 0LL;
  v1 = (_DWORD *)sub_180008448(a1, sub_1800B6240)[1];
  if ( *v1 > 4u )
    sub_1800521E8((__int64)v1, byte_18016718F, 0LL, 0LL, 2, (__int64)&p_pv);
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)&dwCreationFlags + 24LL))(
         *(_QWORD *)&dwCreationFlags,
         0LL,
         1LL,
         &v5) >= 0
    && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v5 + 24LL))(v5, &v4) >= 0 )
  {
    for ( i = 0; i < v4; ++i )
    {
      v7 = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v5 + 32LL))(v5, i, &v7) >= 0 )
      {
        pv = 0LL;
        p_pv = &pv;
        v9 = 0LL;
        v10 = 1;
        v3 = (*(int (__fastcall **)(__int64, void **))(*(_QWORD *)v7 + 40LL))(v7, &v9) >= 0;
        if ( v10 )
          sub_18002A504(p_pv, v9);
        if ( v3 )
          sub_18002AF64((__int64)pv);
        if ( pv )
          CoTaskMemFree(pv);
      }
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
}
