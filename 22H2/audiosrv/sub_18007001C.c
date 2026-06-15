/*
 * XREFs of sub_18007001C @ 0x18007001C
 * Callers:
 *     sub_18006FC38 @ 0x18006FC38 (sub_18006FC38.c)
 * Callees:
 *     sub_18000FFC0 @ 0x18000FFC0 (sub_18000FFC0.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18006F568 @ 0x18006F568 (sub_18006F568.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800CD9A8 @ 0x1800CD9A8 (sub_1800CD9A8.c)
 *     sub_1800E34D4 @ 0x1800E34D4 (sub_1800E34D4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18007001C(int **a1)
{
  int *v2; // r15
  __int64 v3; // rsi
  __int64 *v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rbx
  unsigned int v7; // eax
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // ebx
  __int64 v12; // [rsp+50h] [rbp-20h] BYREF
  int v13; // [rsp+58h] [rbp-18h]
  __int128 v14; // [rsp+60h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+38h]
  __int64 v16; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v18; // [rsp+C0h] [rbp+50h] BYREF

  v16 = 0LL;
  v12 = 0LL;
  v2 = *a1;
  v13 = **a1;
  v3 = *(_QWORD *)a1[4];
  v14 = *(_OWORD *)(v3 + 48);
  v4 = (__int64 *)*((_QWORD *)a1[1] + 6);
  v5 = *(_QWORD *)a1[2];
  v6 = *v4;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a1[3] + 56LL))(*(_QWORD *)a1[3]);
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int128 *, _DWORD, int, __int64 *))(v6 + 56))(
         v4,
         v5,
         v7,
         &v14,
         *(_DWORD *)(v3 + 8),
         *v2,
         &v12);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _DWORD, __int64 *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)qword_18019EE48 + 24LL))(
            qword_18019EE48,
            *(_QWORD *)a1[3],
            *(_QWORD *)a1[4],
            2LL,
            0,
            &v12,
            0LL,
            0LL,
            &v16);
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 38LL, &unk_18015E5F0, (unsigned int)v10);
    }
    if ( v10 >= 0 )
    {
      sub_1800CD9A8(&v17, &v16);
      sub_18006F568((__int64)&v18, *(_QWORD **)a1[5], *((_QWORD **)a1[5] + 1), &v17);
      sub_18000FFC0(&v18);
    }
    v9 = 0;
  }
  else
  {
    sub_18004BD84((int)retaddr, 2680, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v8);
  }
  sub_1800E34D4(&v12);
  sub_18000FFC0(&v16);
  return v9;
}
