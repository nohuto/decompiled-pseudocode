/*
 * XREFs of StorExtBuildScatterGatherList @ 0x1C0038AF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020250 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall StorExtBuildScatterGatherList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8,
        int a9)
{
  return (*(unsigned int (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int, __int64, __int64, char, __int64, int))(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a1 - 16) + 728LL) + 8LL) + 112LL))(
           *(_QWORD *)(**(_QWORD **)(a1 - 16) + 728LL),
           *(_QWORD *)(**(_QWORD **)(a1 - 16) + 8LL),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9) == -1073741789;
}
