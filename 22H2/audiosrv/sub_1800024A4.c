/*
 * XREFs of sub_1800024A4 @ 0x1800024A4
 * Callers:
 *     sub_18002CA40 @ 0x18002CA40 (sub_18002CA40.c)
 *     sub_180037AE8 @ 0x180037AE8 (sub_180037AE8.c)
 * Callees:
 *     sub_180002574 @ 0x180002574 (sub_180002574.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800024A4(__int64 a1)
{
  BOOL v2; // ebx
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // esi
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 64LL))(a1 + 8) != 0;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 120LL))(*(_QWORD *)(a1 + 80));
  v4 = sub_180002574(v2, *(unsigned int *)(a1 + 336), *(unsigned __int8 *)(a1 + 224), v3);
  v5 = v4;
  v6 = *(_DWORD *)(a1 + 228);
  if ( v4 == v6 )
    return 0LL;
  *(_DWORD *)(a1 + 228) = v4;
  v7 = *(_QWORD *)(a1 + 64);
  v12 = 0LL;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 80LL))(v7, &v12);
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v12 + 200LL))(v12, 1LL, v5, v6);
  v9 = v8;
  if ( v8 >= 0 )
  {
    sub_18000F708(&v12);
    return 0LL;
  }
  sub_18004BD84(retaddr, 746LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", (unsigned int)v8);
  sub_18000F708(&v12);
  return v9;
}
