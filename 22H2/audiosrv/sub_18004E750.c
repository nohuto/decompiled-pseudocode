/*
 * XREFs of sub_18004E750 @ 0x18004E750
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004E954 @ 0x18004E954 (sub_18004E954.c)
 *     sub_18004E9B8 @ 0x18004E9B8 (sub_18004E9B8.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB290 @ 0x1800BB290 (sub_1800BB290.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18004E750(__int64 a1, char a2)
{
  __int64 v4; // r14
  __int64 v5; // rcx
  _DWORD *v6; // rdi
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rcx
  int v10; // ecx
  void *v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  char v16; // [rsp+78h] [rbp+10h] BYREF
  __int64 v17; // [rsp+80h] [rbp+18h] BYREF

  *(_QWORD *)a1 = off_180146AC0;
  v4 = a1 + 8;
  *(_QWORD *)(a1 + 8) = off_1801469E0;
  *(_QWORD *)(a1 + 16) = off_1801469C0;
  *(_QWORD *)(a1 + 24) = off_180146990;
  v5 = *(_QWORD *)(a1 + 200);
  if ( v5 )
  {
    v15 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 248LL))(v5, &v15) >= 0 )
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 88LL))(*(_QWORD *)(a1 + 48), v15);
    sub_18000F708(&v15);
  }
  v6 = (_DWORD *)sub_180008448(v5, sub_1800B6240)[1];
  if ( *v6 > 4u )
  {
    v9 = *(_QWORD *)(a1 + 112);
    if ( v9 )
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL))(v9);
    else
      v10 = 0;
    v16 = *(_BYTE *)(a1 + 124);
    LODWORD(v15) = v10;
    v17 = v4;
    sub_18004E9B8((_DWORD)v6, (unsigned int)&unk_1801676B7, v7, v8, (__int64)&v17, (__int64)&v15, (__int64)&v16);
  }
  v11 = *(void **)(a1 + 208);
  *(_QWORD *)(a1 + 208) = 0LL;
  if ( v11 )
    CoTaskMemFree(v11);
  sub_18000F708((__int64 *)(a1 + 200));
  v12 = *(_QWORD *)(a1 + 176);
  if ( v12 )
  {
    v13 = 8 * ((*(_QWORD *)(a1 + 192) - v12) >> 3);
    v15 = v13;
    v17 = v12;
    if ( v13 >= 0x1000 )
    {
      sub_1800BB290(&v17, &v15);
      v13 = v15;
      v12 = v17;
    }
    sub_18006A148(v12, v13);
    *(_QWORD *)(a1 + 176) = 0LL;
    *(_QWORD *)(a1 + 184) = 0LL;
    *(_QWORD *)(a1 + 192) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 136));
  sub_18000F708((__int64 *)(a1 + 112));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  sub_18000F708((__int64 *)(a1 + 48));
  sub_18004E954(a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1, 224LL);
  return a1;
}
