/*
 * XREFs of sub_1800F1860 @ 0x1800F1860
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_180045410 @ 0x180045410 (sub_180045410.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F1860(_QWORD *a1, _QWORD *a2)
{
  __int64 *v4; // rax
  __int64 v5; // r8
  unsigned __int16 *v6; // rsi
  void *v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  v4 = sub_180008448((__int64)a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v4[1], v5, (struct _TP_TIMER *)L"asm_AudioServerGetApplicationSubmixFormat");
  v6 = (unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 152LL))(*a1);
  v7 = (void *)sub_180045410(v6[8] + 18LL);
  v8 = 0;
  *a2 = v7;
  if ( v7 )
  {
    memcpy(v7, v6, v6[8] + 18LL);
  }
  else
  {
    v8 = -2147024882;
    sub_18004BD84(
      (int)retaddr,
      272,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
      -2147024882);
  }
  sub_18000F690((__int64)pv, v9, v10);
  return v8;
}
