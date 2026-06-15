/*
 * XREFs of sub_18004EB70 @ 0x18004EB70
 * Callers:
 *     sub_180074720 @ 0x180074720 (sub_180074720.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_180051B0C @ 0x180051B0C (sub_180051B0C.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_1800583E4 @ 0x1800583E4 (sub_1800583E4.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18004EB70(__int64 a1, char a2)
{
  std::_Ref_count_base *v4; // rcx
  void *v5; // rdi
  HANDLE ProcessHeap; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  void *v15; // rdi
  HANDLE v16; // rax
  void *v17; // rdi
  HANDLE v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx

  v4 = *(std::_Ref_count_base **)(a1 + 472);
  if ( v4 )
    sub_180052600(v4);
  v5 = *(void **)(a1 + 440);
  if ( v5 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v5);
  }
  v7 = *(_QWORD *)(a1 + 320);
  if ( v7 )
    sub_180051B0C(v7);
  v8 = *(_QWORD *)(a1 + 312);
  if ( v8 )
    sub_180051B0C(v8);
  v9 = *(_QWORD *)(a1 + 272);
  if ( v9 )
  {
    sub_1800583E4(*(_QWORD *)(a1 + 272), *(_QWORD *)(a1 + 280));
    sub_1800472E0(v9, (*(_QWORD *)(a1 + 288) - v9) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 272) = 0LL;
    *(_QWORD *)(a1 + 280) = 0LL;
    *(_QWORD *)(a1 + 288) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 232));
  v10 = *(_QWORD *)(a1 + 216);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = *(_QWORD *)(a1 + 208);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  sub_18000F708((__int64 *)(a1 + 200));
  v12 = *(_QWORD *)(a1 + 192);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v13 = *(_QWORD *)(a1 + 184);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = *(_QWORD *)(a1 + 176);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 136));
  v15 = *(void **)(a1 + 120);
  if ( v15 )
  {
    v16 = GetProcessHeap();
    HeapFree(v16, 0, v15);
  }
  v17 = *(void **)(a1 + 112);
  if ( v17 )
  {
    v18 = GetProcessHeap();
    HeapFree(v18, 0, v17);
  }
  v19 = *(_QWORD *)(a1 + 80);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  v20 = *(_QWORD *)(a1 + 64);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  *(_QWORD *)(a1 + 32) = &off_180147338;
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1, 480LL);
  return a1;
}
