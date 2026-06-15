/*
 * XREFs of sub_1800ED584 @ 0x1800ED584
 * Callers:
 *     sub_1800135B8 @ 0x1800135B8 (sub_1800135B8.c)
 *     sub_1800EC438 @ 0x1800EC438 (sub_1800EC438.c)
 *     sub_1800EC60C @ 0x1800EC60C (sub_1800EC60C.c)
 * Callees:
 *     sub_180002AA0 @ 0x180002AA0 (sub_180002AA0.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB290 @ 0x1800BB290 (sub_1800BB290.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800CEBD8 @ 0x1800CEBD8 (sub_1800CEBD8.c)
 *     sub_1800ED398 @ 0x1800ED398 (sub_1800ED398.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800ED584(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  _QWORD *v14; // rbx
  __int64 *v15; // rdi
  int v16; // eax
  unsigned int v17; // esi
  int v18; // r9d
  int v19; // edx
  __int64 *i; // rsi
  __int64 *j; // r14
  int v23; // eax
  __int64 *v24; // [rsp+50h] [rbp-20h] BYREF
  __int128 v25; // [rsp+58h] [rbp-18h] BYREF
  __int64 v26; // [rsp+68h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+18h]
  unsigned __int64 v28; // [rsp+90h] [rbp+20h] BYREF

  v28 = a1;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 0x1Cu, (__int64)&unk_18015E5F0);
  }
  v28 = 0LL;
  v11 = a7;
  v12 = sub_1800CEBD8(a7, (__int64 *)&v28);
  v14 = (_QWORD *)v28;
  if ( v12 < 0 )
  {
    v23 = sub_1800ED398(v13, a2, a3, a4, a5, a6, v11, a8);
    v17 = v23;
    if ( v23 < 0 )
    {
      sub_18004BD84((int)retaddr, 2210, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v23);
      goto LABEL_17;
    }
    goto LABEL_16;
  }
  v25 = 0LL;
  v26 = 0LL;
  sub_180002AA0(v28, (__int64)&v25);
  v15 = (__int64 *)v25;
  if ( (__int64)(*((_QWORD *)&v25 + 1) - v25) >> 3 == 1
    && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)v25 + 96LL))(*(_QWORD *)v25)
    && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)*v15 + 104LL))(*v15) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v15 + 168LL))(*v15);
    (*(void (__fastcall **)(_QWORD *, __int64))(v14[2] + 40LL))(v14 + 2, 0xFFFFFFFFLL);
    v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)qword_18019EE48 + 24LL))(
            qword_18019EE48,
            a2,
            a3,
            a4,
            a5,
            a6,
            0LL,
            0LL,
            a8);
    v17 = v16;
    if ( v16 < 0 )
    {
      v18 = v16;
      v19 = 2194;
      goto LABEL_21;
    }
    for ( i = v15; i != *((__int64 **)&v25 + 1); ++i )
      sub_18000F708(i);
    v28 = (v26 - (_QWORD)v15) & 0xFFFFFFFFFFFFFFF8uLL;
    v24 = v15;
    if ( v28 >= 0x1000 )
    {
      sub_1800BB290(&v24, &v28);
      v15 = v24;
    }
    sub_18006A148(v15);
LABEL_16:
    v17 = 0;
    goto LABEL_17;
  }
  v17 = -2005139364;
  v18 = -2005139364;
  v19 = 2199;
LABEL_21:
  sub_18004BD84((int)retaddr, v19, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v18);
  if ( v15 )
  {
    for ( j = v15; j != *((__int64 **)&v25 + 1); ++j )
      sub_18000F708(j);
    v28 = (v26 - (_QWORD)v15) & 0xFFFFFFFFFFFFFFF8uLL;
    v24 = v15;
    if ( v28 >= 0x1000 )
    {
      sub_1800BB290(&v24, &v28);
      v15 = v24;
    }
    sub_18006A148(v15);
  }
LABEL_17:
  if ( v14 )
    (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
  return v17;
}
