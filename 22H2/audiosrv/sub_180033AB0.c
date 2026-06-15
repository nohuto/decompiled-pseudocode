/*
 * XREFs of sub_180033AB0 @ 0x180033AB0
 * Callers:
 *     sub_180074A90 @ 0x180074A90 (sub_180074A90.c)
 *     sub_180074AA0 @ 0x180074AA0 (sub_180074AA0.c)
 *     sub_180074AB0 @ 0x180074AB0 (sub_180074AB0.c)
 *     sub_1800E2748 @ 0x1800E2748 (sub_1800E2748.c)
 *     sub_1800E3414 @ 0x1800E3414 (sub_1800E3414.c)
 * Callees:
 *     sub_18006D208 @ 0x18006D208 (sub_18006D208.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180033AB0(__int64 a1)
{
  signed __int64 v1; // rax
  __int64 v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 272);
  v2 = a1;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646LL;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 272), v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_8;
  }
  v3 = sub_18006D208(2 * v1 + 16);
LABEL_8:
  if ( !v3 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v2 + 8) + 392LL))(v2 + 8, 1LL);
    if ( qword_18019E418 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 16LL))(qword_18019E418);
  }
  return v3;
}
