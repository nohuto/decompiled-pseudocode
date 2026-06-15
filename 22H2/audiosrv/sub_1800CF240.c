/*
 * XREFs of sub_1800CF240 @ 0x1800CF240
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001FB0 @ 0x180001FB0 (sub_180001FB0.c)
 *     sub_180002040 @ 0x180002040 (sub_180002040.c)
 *     sub_180003E08 @ 0x180003E08 (sub_180003E08.c)
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_180019EA0 @ 0x180019EA0 (sub_180019EA0.c)
 *     sub_18001B6A0 @ 0x18001B6A0 (sub_18001B6A0.c)
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_180044290 @ 0x180044290 (sub_180044290.c)
 *     sub_180045410 @ 0x180045410 (sub_180045410.c)
 *     sub_180057300 @ 0x180057300 (sub_180057300.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800D3C38 @ 0x1800D3C38 (sub_1800D3C38.c)
 */

__int64 __fastcall sub_1800CF240(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        int a6,
        _QWORD *a7,
        void **a8)
{
  __int64 v12; // rsi
  __int64 v13; // r8
  int v14; // edi
  __int64 v15; // rbx
  __int64 v16; // rdi
  _WORD *v17; // rax
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // r9d
  __int64 v21; // r15
  unsigned int v22; // eax
  __int64 v24; // [rsp+40h] [rbp-91h] BYREF
  __int64 v25; // [rsp+48h] [rbp-89h] BYREF
  __int64 v26; // [rsp+50h] [rbp-81h] BYREF
  __int64 v27; // [rsp+58h] [rbp-79h]
  _QWORD *v28; // [rsp+60h] [rbp-71h]
  _QWORD v29[10]; // [rsp+70h] [rbp-61h] BYREF

  v27 = a1;
  v28 = a7;
  sub_180003E08(&v25, (__int64)&qword_18019F818);
  sub_180002040((__int64)v29);
  v12 = 0LL;
  *a8 = 0LL;
  v13 = *(_QWORD *)(a1 + 296);
  v26 = 0LL;
  v24 = 0LL;
  v14 = sub_1800D3C38((unsigned int)v29, a2, v13, (_DWORD)a3, a6);
  if ( v14 < 0 || (v14 = sub_18001B6A0((__int64)v29, &v25), v14 < 0) )
  {
    v15 = v25;
LABEL_17:
    if ( *a8 )
    {
      sub_180033A70(*a8);
      *a8 = 0LL;
    }
    goto LABEL_19;
  }
  v15 = v25;
  v16 = (unsigned int)(*(_DWORD *)(v25 - 16) + 1);
  v17 = (_WORD *)sub_180045410(2 * v16);
  *a8 = v17;
  if ( !v17 )
  {
    v14 = -2147024882;
    goto LABEL_17;
  }
  v14 = sub_180057300(v17, (unsigned int)v16, v15);
  if ( v14 < 0 )
  {
    sub_180033A70(*a8);
    *a8 = 0LL;
    goto LABEL_21;
  }
  if ( a6 )
  {
    v18 = *a3 - 0x455E4240A9EF3FD9LL;
    if ( *a3 == 0x455E4240A9EF3FD9LL )
      v18 = a3[1] + 0x4D78E7CF4C0D2A5CLL;
    if ( !v18 )
      a4 |= 4u;
  }
  v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
  v20 = a4;
  v21 = v27;
  v14 = sub_180019EA0(v27, a2, (__int64)v29, v20, a5, v19, &v24);
  if ( v14 < 0 )
  {
    v12 = v24;
    goto LABEL_17;
  }
  v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
  v12 = v24;
  v14 = sub_180044290(v21, v22, 1, v24, &v26);
  if ( v14 < 0 )
    goto LABEL_17;
  *v28 = v26;
LABEL_19:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
LABEL_21:
  if ( v14 < 0 )
    sub_18005E8F8((__int64)"CAudioSessionManager::GetCurrentSession", 1939, v14);
  sub_180001FB0(v29);
  sub_180006A30((volatile signed __int32 *)(v15 - 24));
  return (unsigned int)v14;
}
