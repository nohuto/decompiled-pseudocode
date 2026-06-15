/*
 * XREFs of sub_1800E4A50 @ 0x1800E4A50
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800E2B6C @ 0x1800E2B6C (sub_1800E2B6C.c)
 *     sub_1800E60FC @ 0x1800E60FC (sub_1800E60FC.c)
 *     sub_1800E6854 @ 0x1800E6854 (sub_1800E6854.c)
 *     sub_1800E6938 @ 0x1800E6938 (sub_1800E6938.c)
 *     sub_1800E6A1C @ 0x1800E6A1C (sub_1800E6A1C.c)
 */

__int64 __fastcall sub_1800E4A50(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  _DWORD *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(__int64 **)(a1 + 80);
  v5 = *v2;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v5 + 32))(v2, v6);
  if ( v7 < 0 )
    sub_18006D26C((int)retaddr, 1029, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp", v7);
  v9 = (_DWORD *)sub_180008448(v8, sub_1800B6240)[1];
  if ( *v9 > 4u )
  {
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 80LL))(a2);
    v15 = a1 & -(__int64)(a1 != 8);
    sub_1800E2B6C((__int64)v9, byte_180167AE6, v10, v11, (__int64)&v15, (__int64)&v14);
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 136LL))(a2) )
    sub_1800E6A1C(a1, 0xFFFFFFFFLL);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 144LL))(a2) )
    sub_1800E6854(a1, 0xFFFFFFFFLL);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2) )
    sub_1800E6938(a1, 0xFFFFFFFFLL);
  sub_1800E60FC(a1, a2);
  return 0LL;
}
