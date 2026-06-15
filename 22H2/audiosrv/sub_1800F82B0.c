/*
 * XREFs of sub_1800F82B0 @ 0x1800F82B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F82B0(__int64 a1, __int64 a2)
{
  __int64 *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  int v7; // eax
  unsigned int v8; // ebx
  struct _TP_TIMER *pv[9]; // [rsp+30h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v12; // [rsp+90h] [rbp+18h] BYREF

  v3 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v3[1], v4, (struct _TP_TIMER *)L"s_apmSetPreferredChatApplication");
  if ( !qword_18019E618 )
  {
LABEL_8:
    v8 = 0;
    goto LABEL_9;
  }
  v12 = 0LL;
  if ( (**(int (__fastcall ***)(__int64, void *, __int64 *))qword_18019E618)(qword_18019E618, &unk_18015E380, &v12) < 0
    || (v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 88LL))(v12, a2), v8 = v7, v7 >= 0) )
  {
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    goto LABEL_8;
  }
  sub_18004BD84((int)retaddr, 932, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\playbackmanagerrpc.cpp", v7);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
LABEL_9:
  sub_18000F690((__int64)pv, v5, v6);
  return v8;
}
