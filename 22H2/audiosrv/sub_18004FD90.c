/*
 * XREFs of sub_18004FD90 @ 0x18004FD90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_18004FEF0 @ 0x18004FEF0 (sub_18004FEF0.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18004FD90(__int64 a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  std::_Ref_count_base *v7; // rcx

  *(_QWORD *)a1 = off_180148490;
  *(_DWORD *)(a1 + 8) = -1073741823;
  sub_18004FEF0();
  (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E5D8 + 16LL))(qword_18019E5D8);
  v4 = *(_QWORD *)(a1 + 496);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *(_QWORD *)(a1 + 480);
  if ( v5 )
    sub_18006A148(v5, 1LL);
  v6 = *(_QWORD *)(a1 + 472);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *(std::_Ref_count_base **)(a1 + 464);
  if ( v7 )
    sub_180052600(v7);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  sub_180006A30((volatile signed __int32 *)(*(_QWORD *)(a1 + 216) - 24LL));
  sub_180006A30((volatile signed __int32 *)(*(_QWORD *)(a1 + 208) - 24LL));
  CoTaskMemFree(*(LPVOID *)(a1 + 176));
  *(_QWORD *)(a1 + 176) = 0LL;
  sub_180006A30((volatile signed __int32 *)(*(_QWORD *)(a1 + 144) - 24LL));
  sub_180006A30((volatile signed __int32 *)(*(_QWORD *)(a1 + 112) - 24LL));
  sub_180006A30((volatile signed __int32 *)(*(_QWORD *)(a1 + 88) - 24LL));
  sub_180006A30((volatile signed __int32 *)(*(_QWORD *)(a1 + 80) - 24LL));
  sub_180006A30((volatile signed __int32 *)(*(_QWORD *)(a1 + 72) - 24LL));
  if ( *(_BYTE *)(a1 + 56) )
  {
    *(_BYTE *)(a1 + 56) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  }
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1, 560LL);
  return a1;
}
