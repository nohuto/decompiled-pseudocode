/*
 * XREFs of sub_1800F8400 @ 0x1800F8400
 * Callers:
 *     sub_1800F83A0 @ 0x1800F83A0 (sub_1800F83A0.c)
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F8400(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // [rsp+30h] [rbp-58h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-50h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]

  v5 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v5[1], v6, (struct _TP_TIMER *)L"s_apmSetVolumeGroupGainScalarForId");
  v12 = 0LL;
  if ( (**(int (__fastcall ***)(__int64, void *, __int64 *))qword_18019E618)(qword_18019E618, &unk_18015E380, &v12) < 0 )
  {
    v10 = 0;
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v12 + 48LL))(v12, a2, a3);
    v10 = v9;
    if ( v9 < 0 )
      sub_18004BD84((int)retaddr, 824, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\playbackmanagerrpc.cpp", v9);
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  sub_18000F690((__int64)pv, v7, v8);
  return v10;
}
