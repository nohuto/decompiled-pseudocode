/*
 * XREFs of sub_1800020C8 @ 0x1800020C8
 * Callers:
 *     sub_180037AE8 @ 0x180037AE8 (sub_180037AE8.c)
 *     sub_1800C6710 @ 0x1800C6710 (sub_1800C6710.c)
 * Callees:
 *     sub_1800021CC @ 0x1800021CC (sub_1800021CC.c)
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800020C8(__int64 a1, float a2, __int64 a3, char a4)
{
  bool v4; // zf
  _DWORD *v7; // rbp
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // r8d
  int v14; // r9d
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19[6]; // [rsp+48h] [rbp-30h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  int v21; // [rsp+80h] [rbp+8h] BYREF
  float v22; // [rsp+88h] [rbp+10h]
  float v23; // [rsp+90h] [rbp+18h] BYREF

  v22 = a2;
  v4 = a2 == *(float *)(a1 + 100);
  *(_QWORD *)(a1 + 104) = a3;
  if ( v4 )
    return 0LL;
  v4 = *(_QWORD *)(a1 + 72) == 0LL;
  *(float *)(a1 + 100) = a2;
  if ( !v4 )
  {
    v7 = *(_DWORD **)(sub_180008448(a1, sub_1800B6240) + 8);
    if ( *v7 > 4u )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 40LL))(*(_QWORD *)(a1 + 80));
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 80LL))(a1 + 8);
      v10 = *(_QWORD *)(a1 + 72);
      v11 = v9;
      v21 = v8;
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 64LL))(v10);
      v19[0] = v11;
      v18 = v12;
      v23 = v22;
      sub_1800021CC(
        (_DWORD)v7,
        (unsigned int)&unk_180166DEA,
        v13,
        v14,
        (__int64)&v23,
        (__int64)v19,
        (__int64)&v18,
        (__int64)&v21);
    }
  }
  if ( !a4 )
    return 0LL;
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 120LL))(a1, 0LL, 0LL);
  v17 = v16;
  if ( v16 >= 0 )
    return 0LL;
  sub_18004BD84(retaddr, 1049LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", (unsigned int)v16);
  return v17;
}
