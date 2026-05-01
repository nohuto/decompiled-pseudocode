/*
 * XREFs of ??0CPinnedListEnum@@QEAA@PEAVCPinnedList@@W4PinnedListEnumFlags@@@Z @ 0x1801528E0
 * Callers:
 *     ?EnumAllObjects@CPinnedList@@QEAAJPEAPEAUIEnumFullIDList@@@Z @ 0x180154DDC (-EnumAllObjects@CPinnedList@@QEAAJPEAPEAUIEnumFullIDList@@@Z.c)
 *     ?EnumObjects@CPinnedList@@UEAAJPEAPEAUIEnumFullIDList@@@Z @ 0x180154EF0 (-EnumObjects@CPinnedList@@UEAAJPEAPEAUIEnumFullIDList@@@Z.c)
 *     ?EnumTombstones@CPinnedList@@UEAAJPEAPEAUIEnumFullIDList@@@Z @ 0x180155000 (-EnumTombstones@CPinnedList@@UEAAJPEAPEAUIEnumFullIDList@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPinnedListEnum::CPinnedListEnum(__int64 a1, __int64 a2, int a3)
{
  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = &CPinnedListEnum::`vftable';
  *(_QWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 48) = a3;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
