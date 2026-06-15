/*
 * XREFs of sub_1801197D0 @ 0x1801197D0
 * Callers:
 *     sub_180029348 @ 0x180029348 (sub_180029348.c)
 * Callees:
 *     sub_18001F490 @ 0x18001F490 (sub_18001F490.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
bool __fastcall sub_1801197D0(__int64 a1, __int64 a2, int a3, unsigned __int16 a4)
{
  bool v5; // si
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v9; // [rsp+30h] [rbp-50h] BYREF
  __int64 v10; // [rsp+38h] [rbp-48h] BYREF
  __int64 v11; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int16 Src[2]; // [rsp+48h] [rbp-38h] BYREF
  int v13; // [rsp+4Ch] [rbp-34h]
  int v14; // [rsp+50h] [rbp-30h]
  __int16 v15; // [rsp+54h] [rbp-2Ch]
  int v16; // [rsp+56h] [rbp-2Ah]
  _DWORD v17[4]; // [rsp+60h] [rbp-20h] BYREF
  __int16 v18; // [rsp+70h] [rbp-10h]

  v5 = 0;
  v9 = 0LL;
  v10 = 0LL;
  Src[0] = 3;
  Src[1] = a4;
  v13 = a3;
  v14 = 4 * a3 * a4;
  v15 = 4 * a4;
  v16 = 32;
  v17[0] = 131075;
  v17[1] = a3;
  v17[2] = 8 * a3;
  v17[3] = 2097160;
  v18 = 0;
  sub_18001F490(Src, 0x12u, &v10, 0.0, 0);
  sub_18001F490((unsigned __int16 *)v17, 0x12u, &v9, 0.0, 0);
  v6 = v9;
  v7 = v10;
  if ( v10 )
  {
    if ( v9 )
    {
      v11 = 0LL;
      v5 = (*(unsigned int (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)a2 + 56LL))(
             a2,
             v9,
             v10,
             &v11) == 0;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v5;
}
