/*
 * XREFs of sub_1800CCF80 @ 0x1800CCF80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800CCF80(__int64 *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 *v9; // rax
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned int v14; // ebx
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  v5 = *a1;
  v9 = sub_180008448((__int64)a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v9[1], v10, (struct _TP_TIMER *)L"AudioSessionSetAllVolumes");
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(*(_QWORD *)v5 + 344LL))(
          v5,
          a2,
          a3,
          a4,
          a5);
  v14 = v11;
  if ( v11 >= 0 )
    v14 = 0;
  else
    sub_18004BD84((int)retaddr, 2264, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessioncontrol.cpp", v11);
  sub_18000F690((__int64)pv, v12, v13);
  return v14;
}
