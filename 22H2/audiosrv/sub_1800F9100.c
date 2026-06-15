/*
 * XREFs of sub_1800F9100 @ 0x1800F9100
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F9100(__int64 a1, int a2)
{
  __int64 *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  int v8; // eax
  __int64 v9; // r8
  unsigned int v10; // ebx
  int v11; // edx
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+8h]
  __int64 v15; // [rsp+90h] [rbp+20h] BYREF
  __int64 v16; // [rsp+98h] [rbp+28h] BYREF

  v4 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v4[1], v5, (struct _TP_TIMER *)L"s_pbmVoipCallStateChanged");
  if ( !qword_18019E618 )
  {
LABEL_15:
    v10 = 0;
    goto LABEL_16;
  }
  v16 = 0LL;
  if ( (**(int (__fastcall ***)(__int64, void *, __int64 *))qword_18019E618)(qword_18019E618, &unk_18015E380, &v16) < 0 )
  {
LABEL_13:
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    goto LABEL_15;
  }
  v15 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)qword_18019E618 + 32LL))(
         qword_18019E618,
         a1,
         &v15);
  v10 = v8;
  if ( v8 >= 0 )
  {
    LOBYTE(v9) = a2 == 0;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v16 + 72LL))(v16, v15, v9);
    v10 = v8;
    if ( v8 < 0 )
    {
      v11 = 529;
      goto LABEL_7;
    }
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    goto LABEL_13;
  }
  v11 = 527;
LABEL_7:
  sub_18004BD84((int)retaddr, v11, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\playbackmanagerrpc.cpp", v8);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
LABEL_16:
  sub_18000F690((__int64)pv, v6, v7);
  return v10;
}
