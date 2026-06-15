/*
 * XREFs of sub_1800F1990 @ 0x1800F1990
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F1990(__int64 *a1, _QWORD *a2)
{
  __int64 *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  struct _TP_TIMER *pv[9]; // [rsp+30h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v14; // [rsp+80h] [rbp+8h] BYREF

  v4 = sub_180008448((__int64)a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v4[1], v5, (struct _TP_TIMER *)L"asm_AudioServerGetApplicationSubmixPeriod");
  v6 = *a1;
  v14 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 80LL))(v6, &v14);
  v8 = v7;
  if ( v7 >= 0 )
  {
    *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 104LL))(v14);
    v8 = 0;
  }
  else
  {
    sub_18004BD84((int)retaddr, 289, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp", v7);
  }
  sub_18000F708(&v14);
  sub_18000F690((__int64)pv, v9, v10);
  return v8;
}
