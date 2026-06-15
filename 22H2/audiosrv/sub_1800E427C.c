/*
 * XREFs of sub_1800E427C @ 0x1800E427C
 * Callers:
 *     sub_1800E40C0 @ 0x1800E40C0 (sub_1800E40C0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E427C(_QWORD **a1)
{
  __int64 *v2; // rdi
  __int64 v3; // rbx
  unsigned int v4; // eax
  _QWORD v6[8]; // [rsp+30h] [rbp-48h] BYREF

  v6[0] = off_180154C40;
  v6[7] = v6;
  ((void (__fastcall *)(_QWORD **, _QWORD *))(*a1)[44])(a1, v6);
  (*(void (__fastcall **)(_QWORD *, _QWORD **))(*a1[11] + 160LL))(a1[11], a1);
  v2 = a1[11];
  v3 = *v2;
  v4 = ((__int64 (__fastcall *)(_QWORD **))(*a1)[18])(a1);
  return (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64))(v3 + 72))(v2, 0LL, v4, 0xFFFFFFFFLL);
}
