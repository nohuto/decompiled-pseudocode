/*
 * XREFs of sub_18006EBE4 @ 0x18006EBE4
 * Callers:
 *     sub_18006EE20 @ 0x18006EE20 (sub_18006EE20.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180023350 @ 0x180023350 (sub_180023350.c)
 *     sub_180023370 @ 0x180023370 (sub_180023370.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180054268 @ 0x180054268 (sub_180054268.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800C5FFC @ 0x1800C5FFC (sub_1800C5FFC.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 *     sub_1800DA7C4 @ 0x1800DA7C4 (sub_1800DA7C4.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18006EBE4(__int64 a1, char a2)
{
  unsigned int v4; // esi
  int v5; // edx
  __int64 v6; // rcx
  _DWORD *v7; // r15
  int v8; // ebx
  __int64 v9; // rdi
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rax
  void (*v13)(void); // rax
  __int64 v14; // rcx
  _QWORD *v15; // rbx
  __int64 v16; // rdi
  unsigned int v17; // eax
  int v18; // eax
  _QWORD *v20; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+48h] [rbp-18h] BYREF
  __int64 v22; // [rsp+50h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+58h] [rbp-8h] BYREF
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+38h]
  char v25; // [rsp+A0h] [rbp+40h] BYREF
  int v26; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+58h] BYREF

  sub_180023370((struct _RTL_CRITICAL_SECTION *)(a1 + 224), &v23);
  v4 = 0;
  if ( !*(_DWORD *)(a1 + 184) )
  {
    v5 = 2575;
LABEL_5:
    v4 = -2004287487;
    sub_18004BD84((int)retaddr, v5, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", -2004287487);
    goto LABEL_16;
  }
  if ( !*(_QWORD *)(a1 + 192) )
  {
    v5 = 2576;
    goto LABEL_5;
  }
  v27 = 0LL;
  sub_1800CB144(&v27);
  if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL) + 24LL))(
         *(_QWORD *)(a1 + 192) + 8LL,
         &v27) >= 0 )
  {
    v7 = (_DWORD *)sub_180054268(v6);
    if ( *v7 > 4u )
    {
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 40LL))(v27);
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL) + 80LL))(*(_QWORD *)(a1 + 192) + 8LL);
      v25 = a2;
      v26 = v8;
      v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 168) + 64LL))(*(_QWORD *)(a1 + 168));
      v22 = v9;
      sub_1800C5FFC(
        (_DWORD)v7,
        (unsigned int)&unk_1801673A5,
        v10,
        v11,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v26,
        (__int64)&v25);
    }
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 24LL);
    if ( a2 )
      v13 = *(void (**)(void))(v12 + 40);
    else
      v13 = *(void (**)(void))(v12 + 32);
    v13();
    v20 = 0LL;
    sub_1800DA7C4(v14, &v20);
    v15 = v20;
    v16 = *v20;
    v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 48LL))(v27);
    v18 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(v16 + 112))(v15, v17);
    if ( v18 < 0 )
      sub_18006D26C((int)retaddr, 2600, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v18);
    sub_18000F708((__int64 *)&v20);
  }
  sub_18000F708(&v27);
LABEL_16:
  sub_180023350(&v23);
  return v4;
}
