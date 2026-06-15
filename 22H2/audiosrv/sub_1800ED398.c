/*
 * XREFs of sub_1800ED398 @ 0x1800ED398
 * Callers:
 *     sub_1800EC438 @ 0x1800EC438 (sub_1800EC438.c)
 *     sub_1800ED584 @ 0x1800ED584 (sub_1800ED584.c)
 * Callees:
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18002C2A0 @ 0x18002C2A0 (sub_18002C2A0.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800EA6C0 @ 0x1800EA6C0 (sub_1800EA6C0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800ED398(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  char v9; // di
  int v10; // ebx
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // r15
  int v14; // r12d
  void **p_pv; // [rsp+50h] [rbp-20h] BYREF
  void *v18; // [rsp+58h] [rbp-18h] BYREF
  char v19; // [rsp+60h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+38h]
  LPVOID pv; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v22; // [rsp+C0h] [rbp+50h]
  unsigned int v23; // [rsp+C8h] [rbp+58h]

  v23 = a4;
  v22 = a3;
  pv = 0LL;
  p_pv = &pv;
  v18 = 0LL;
  v9 = 1;
  v19 = 1;
  v10 = (*(__int64 (__fastcall **)(_QWORD, void **))(**(_QWORD **)(a2 + 16) + 40LL))(*(_QWORD *)(a2 + 16), &v18);
  if ( v19 )
    sub_18002A504(p_pv, v18);
  if ( v10 < 0 )
  {
    sub_18004BD84((int)retaddr, 2106, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v10);
    goto LABEL_18;
  }
  p_pv = &pv;
  LOBYTE(v18) = 1;
  v11 = 5LL;
  v12 = a8;
  v13 = a6;
  v14 = a5;
  while ( 1 )
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x1Bu, (__int64)&unk_18015E5F0, v11);
    }
    v10 = sub_18002C2A0(a7, 5u, 1);
    if ( v10 < 0 )
      goto LABEL_13;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)qword_18019EE48 + 24LL))(
            qword_18019EE48,
            a2,
            v22,
            v23,
            v14,
            v13,
            0LL,
            0LL,
            v12);
    if ( v10 >= 0 )
      break;
    Sleep(0xAu);
LABEL_13:
    if ( !v11-- )
    {
      sub_18004BD84((int)retaddr, 2140, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v10);
      goto LABEL_16;
    }
  }
  v9 = 0;
  v10 = 0;
LABEL_16:
  if ( v9 )
  {
    LOBYTE(v18) = 0;
    sub_1800EA6C0(&p_pv);
  }
LABEL_18:
  if ( pv )
    CoTaskMemFree(pv);
  return (unsigned int)v10;
}
