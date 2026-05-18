/*
 * XREFs of sub_180092530 @ 0x180092530
 * Callers:
 *     sub_1800918E0 @ 0x1800918E0 (sub_1800918E0.c)
 * Callees:
 *     sub_180062590 @ 0x180062590 (sub_180062590.c)
 *     sub_180063C48 @ 0x180063C48 (sub_180063C48.c)
 *     sub_1800925F0 @ 0x1800925F0 (sub_1800925F0.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180092530(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rdi
  unsigned int v7[4]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v8[72]; // [rsp+30h] [rbp-78h] BYREF
  char v9; // [rsp+78h] [rbp-30h] BYREF

  v7[0] = a2;
  sub_180063C48((__int64 *)(a1 + 128), v7);
  sub_1800925F0(a1, v8);
  v4 = 0LL;
  v5 = v8;
  do
  {
    if ( *v5 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 24LL))(*v5, a2);
    ++v5;
    ++v4;
  }
  while ( v4 != (&v9 < v8 ? 0 : 9) );
  return sub_180062590(a1, a2);
}
