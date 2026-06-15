/*
 * XREFs of sub_180033810 @ 0x180033810
 * Callers:
 *     sub_1800335A0 @ 0x1800335A0 (sub_1800335A0.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180033930 @ 0x180033930 (sub_180033930.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180033810(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rdi
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  _QWORD *v9; // rdx
  int v10; // eax
  unsigned int v11; // ebx
  void *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  v15 = a2;
  v6 = a2;
  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 136);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 136));
  v9 = *(_QWORD **)(a1 + 184);
  if ( *(_QWORD **)(a1 + 192) == v9 )
  {
    sub_180033930(a1 + 176, v9, &v15);
    v6 = v15;
  }
  else
  {
    *v9 = v6;
    *(_QWORD *)(a1 + 184) += 8LL;
  }
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v6 + 112LL))(v6, a3, a4);
  if ( v8 )
    LeaveCriticalSection(v8);
  v14 = 0LL;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 8) + 80LL))(a1 + 8, &v14);
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v14 + 200LL))(
          v14,
          0LL,
          a4,
          0xFFFFFFFFLL);
  v11 = v10;
  if ( v10 < 0 )
  {
    sub_18004BD84(
      retaddr,
      2829LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (unsigned int)v10);
    sub_18000F708(&v14);
    return v11;
  }
  else
  {
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    return 0LL;
  }
}
