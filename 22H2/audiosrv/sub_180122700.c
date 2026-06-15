/*
 * XREFs of sub_180122700 @ 0x180122700
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_18004B9B4 @ 0x18004B9B4 (sub_18004B9B4.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180122300 @ 0x180122300 (sub_180122300.c)
 */

__int64 __fastcall sub_180122700(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  _QWORD *v4; // rax
  int v5; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a2 = 0;
  v7 = 0LL;
  v4 = (_QWORD *)sub_18004B9B4(a1 + 48, 0);
  if ( (int)sub_180122300(v4, &v7) >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v7 + 24LL))(v7, a2);
    if ( v5 < 0 )
      v2 = v5;
  }
  sub_1800461B8(&v7);
  return v2;
}
