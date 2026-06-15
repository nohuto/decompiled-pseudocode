/*
 * XREFs of sub_1800D07A0 @ 0x1800D07A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001FB0 @ 0x180001FB0 (sub_180001FB0.c)
 *     sub_180002040 @ 0x180002040 (sub_180002040.c)
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180019EA0 @ 0x180019EA0 (sub_180019EA0.c)
 *     sub_180044290 @ 0x180044290 (sub_180044290.c)
 *     sub_180047164 @ 0x180047164 (sub_180047164.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800C99E4 @ 0x1800C99E4 (sub_1800C99E4.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 */

__int64 __fastcall sub_1800D07A0(__int64 **a1, _WORD *a2, _QWORD *a3)
{
  __int64 *v6; // rax
  __int64 v7; // r8
  __int64 *v8; // rsi
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rbx
  int v14; // eax
  int v15; // eax
  int v16; // edx
  _BYTE *v17; // rbx
  __int64 v18; // rdi
  unsigned int v19; // eax
  __int64 v20; // rdx
  unsigned __int64 v21; // r8
  char v23; // [rsp+40h] [rbp-89h] BYREF
  __int64 v24; // [rsp+48h] [rbp-81h] BYREF
  int v25; // [rsp+50h] [rbp-79h] BYREF
  __int64 v26; // [rsp+58h] [rbp-71h] BYREF
  _BYTE *v27; // [rsp+60h] [rbp-69h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+68h] [rbp-61h] BYREF
  _QWORD v29[10]; // [rsp+A0h] [rbp-29h] BYREF
  _UNKNOWN *retaddr; // [rsp+128h] [rbp+5Fh]

  v6 = sub_180008448((__int64)a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v6[1], v7, (struct _TP_TIMER *)L"AudioSessionManagerGetSessionForStreamSwitch");
  *a3 = 0LL;
  v8 = *a1;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x3Eu, (__int64)&unk_18015DFC8, *v8);
  }
  v24 = 0LL;
  sub_1800CB144(&v24);
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)qword_18019E618 + 32LL))(
         qword_18019E618,
         0LL,
         &v24);
  v10 = v9;
  if ( v9 >= 0 )
  {
    sub_180002040((__int64)v29);
    v11 = sub_1800C99E4(*(_QWORD *)(*v8 + 296), a2, (__int64)v29, &v26, &v25, (bool *)&v23);
    v10 = v11;
    if ( v11 < 0 )
    {
      sub_18004BD84((int)retaddr, 2323, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp", v11);
LABEL_19:
      sub_180001FB0(v29);
      goto LABEL_20;
    }
    v12 = v24;
    v27 = 0LL;
    v13 = *v8;
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 40LL))(v24);
    v15 = sub_180019EA0(v13, v12, (__int64)v29, v26, v25, v14, (__int64 *)&v27);
    v10 = v15;
    if ( v15 >= 0 )
    {
      v17 = v27;
      if ( (*(unsigned int (__fastcall **)(_BYTE *))(*(_QWORD *)v27 + 56LL))(v27)
        || (v15 = sub_180047164(v17, v23), v10 = v15, v15 >= 0) )
      {
        v18 = *v8;
        v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 40LL))(v24);
        v15 = sub_180044290(v18, v19, 0, (int)v17, &v26);
        v10 = v15;
        if ( v15 >= 0 )
        {
          v10 = 0;
          *a3 = v26;
          goto LABEL_18;
        }
        v16 = 2344;
      }
      else
      {
        v16 = 2337;
      }
    }
    else
    {
      v16 = 2329;
    }
    sub_18004BD84((int)retaddr, v16, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp", v15);
LABEL_18:
    sub_18000F708((__int64 *)&v27);
    goto LABEL_19;
  }
  sub_18004BD84((int)retaddr, 2312, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp", v9);
LABEL_20:
  sub_18000F708(&v24);
  sub_18000F690((__int64)pv, v20, v21);
  return v10;
}
