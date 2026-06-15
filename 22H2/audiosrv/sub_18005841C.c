/*
 * XREFs of sub_18005841C @ 0x18005841C
 * Callers:
 *     sub_180069010 @ 0x180069010 (sub_180069010.c)
 *     sub_1800D8D90 @ 0x1800D8D90 (sub_1800D8D90.c)
 *     sub_1800D8E00 @ 0x1800D8E00 (sub_1800D8E00.c)
 *     sub_1800D9990 @ 0x1800D9990 (sub_1800D9990.c)
 * Callees:
 *     sub_18001BF70 @ 0x18001BF70 (sub_18001BF70.c)
 *     sub_18002AF64 @ 0x18002AF64 (sub_18002AF64.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void sub_18005841C()
{
  void *v0; // rcx
  unsigned int v1; // ebx
  unsigned int v2; // [rsp+30h] [rbp-50h] BYREF
  int v3; // [rsp+34h] [rbp-4Ch] BYREF
  LPVOID pv; // [rsp+38h] [rbp-48h] BYREF
  __int64 v5; // [rsp+40h] [rbp-40h] BYREF
  __int64 v6; // [rsp+48h] [rbp-38h] BYREF
  __int64 v7; // [rsp+50h] [rbp-30h]
  __int128 v8; // [rsp+58h] [rbp-28h] BYREF
  int v9; // [rsp+68h] [rbp-18h]

  v2 = 0;
  v5 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)&dwCreationFlags + 24LL))(
         *(_QWORD *)&dwCreationFlags,
         0LL,
         1LL,
         &v5) >= 0
    && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v5 + 24LL))(v5, &v2) >= 0 )
  {
    v7 = 0LL;
    v0 = 0LL;
    pv = 0LL;
    v8 = xmmword_180160C48;
    v9 = 2;
    v1 = 0;
    if ( v2 )
    {
      do
      {
        v6 = 0LL;
        if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v5 + 32LL))(v5, v1, &v6) >= 0
          && (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v6 + 40LL))(v6, &pv) >= 0
          && (*(int (__fastcall **)(PVOID, LPVOID, __int64))(*(_QWORD *)::pv + 24LL))(::pv, pv, 1LL) >= 0 )
        {
          v3 = 0;
          sub_18001BF70(v7, (__int64)&v8, &v3);
          if ( v3 )
            sub_18002AF64((__int64)pv);
        }
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        ++v1;
      }
      while ( v1 < v2 );
      v0 = pv;
    }
    CoTaskMemFree(v0);
    pv = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
}
