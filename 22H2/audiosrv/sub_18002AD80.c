/*
 * XREFs of sub_18002AD80 @ 0x18002AD80
 * Callers:
 *     sub_1800115D0 @ 0x1800115D0 (sub_1800115D0.c)
 *     sub_180014230 @ 0x180014230 (sub_180014230.c)
 *     sub_180016E30 @ 0x180016E30 (sub_180016E30.c)
 *     sub_18002A7D0 @ 0x18002A7D0 (sub_18002A7D0.c)
 *     sub_18002A978 @ 0x18002A978 (sub_18002A978.c)
 *     sub_18002AF64 @ 0x18002AF64 (sub_18002AF64.c)
 *     sub_1800643F0 @ 0x1800643F0 (sub_1800643F0.c)
 *     sub_18006901C @ 0x18006901C (sub_18006901C.c)
 *     sub_18006913C @ 0x18006913C (sub_18006913C.c)
 *     sub_1800B9818 @ 0x1800B9818 (sub_1800B9818.c)
 *     sub_1800D0EAC @ 0x1800D0EAC (sub_1800D0EAC.c)
 *     sub_1800D6BCC @ 0x1800D6BCC (sub_1800D6BCC.c)
 *     sub_1800D83F0 @ 0x1800D83F0 (sub_1800D83F0.c)
 *     sub_1800EA9AC @ 0x1800EA9AC (sub_1800EA9AC.c)
 *     sub_1800EABCC @ 0x1800EABCC (sub_1800EABCC.c)
 * Callees:
 *     sub_18006D208 @ 0x18006D208 (sub_18006D208.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002AD80(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r10

  v1 = sub_18006D208(a1 + 12);
  if ( !v1 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 24LL))(v2, v1 + 1);
    if ( qword_18019E418 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 16LL))(qword_18019E418);
  }
  return v1;
}
