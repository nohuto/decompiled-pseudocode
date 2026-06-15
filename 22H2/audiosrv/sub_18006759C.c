/*
 * XREFs of sub_18006759C @ 0x18006759C
 * Callers:
 *     sub_1800674C0 @ 0x1800674C0 (sub_1800674C0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

int *__fastcall sub_18006759C(__int64 a1, int *a2, __int64 a3)
{
  __int64 (__fastcall *v4)(__int64, __int64, int *, int *, __int64); // rax
  int v5; // edx
  int v6; // r9d
  int v7; // r8d
  unsigned int v8; // edx
  int v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+44h] [rbp+Ch]
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v11 = HIDWORD(a1);
  v10 = 0;
  v4 = (__int64 (__fastcall *)(__int64, __int64, int *, int *, __int64))qword_18019FA18;
  if ( qword_18019FA18 || (v4 = (__int64 (__fastcall *)(__int64, __int64, int *, int *, __int64))qword_18019F988) != 0LL )
    v5 = v4(16046125LL, 1LL, &v12, &v10, a3);
  else
    v5 = 0;
  v6 = v5 & 0x100;
  v7 = (v10 != 0 ? 0x400 : 0) | (16 * (v5 & 0x80));
  v8 = v5 & 0xFFFFFE7F;
  if ( v8 && (v7 |= (v8 & 0x3F) << 12, v6) )
    a2[1] = v12;
  else
    a2[1] = 5;
  *a2 = v7;
  return a2;
}
