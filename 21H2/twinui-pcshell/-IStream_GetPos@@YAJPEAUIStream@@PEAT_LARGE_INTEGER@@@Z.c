/*
 * XREFs of ?IStream_GetPos@@YAJPEAUIStream@@PEAT_LARGE_INTEGER@@@Z @ 0x180158420
 * Callers:
 *     ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x180159B8C (-Load@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     ?SaveShellLink@CPinList@@QEAAJPEAVPINENTRY@@PEAUIStream@@@Z @ 0x18015BB9C (-SaveShellLink@CPinList@@QEAAJPEAVPINENTRY@@PEAUIStream@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IStream_GetPos(struct IStream *a1, union _LARGE_INTEGER *a2)
{
  return (*(__int64 (__fastcall **)(struct IStream *, _QWORD, __int64, union _LARGE_INTEGER *))(*(_QWORD *)a1 + 40LL))(
           a1,
           0LL,
           1LL,
           a2);
}
