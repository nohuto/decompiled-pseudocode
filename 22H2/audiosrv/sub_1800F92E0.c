/*
 * XREFs of sub_1800F92E0 @ 0x1800F92E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F92E0(__int64 a1, unsigned int a2)
{
  __int64 *v3; // rax
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned int v8; // ebx
  struct _TP_TIMER *pv[9]; // [rsp+30h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  v3 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v3[1], v4, (struct _TP_TIMER *)L"s_setRingerVibrateState");
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_18019E618 + 256LL))(qword_18019E618, a2);
  v8 = v5;
  if ( v5 >= 0 )
    v8 = 0;
  else
    sub_18004BD84((int)retaddr, 28, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\playbackmanagerrpc.cpp", v5);
  sub_18000F690((__int64)pv, v6, v7);
  return v8;
}
