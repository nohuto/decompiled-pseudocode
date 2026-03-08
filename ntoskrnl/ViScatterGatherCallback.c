/*
 * XREFs of ViScatterGatherCallback @ 0x140AC6D90
 * Callers:
 *     <none>
 * Callees:
 *     ExInterlockedInsertHeadList @ 0x1402E5000 (ExInterlockedInsertHeadList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ADD_MAP_REGISTERS @ 0x140AC1180 (ADD_MAP_REGISTERS.c)
 */

__int64 __fastcall ViScatterGatherCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v9; // r8

  v4 = *(_QWORD *)(a4 + 56);
  ADD_MAP_REGISTERS(v4, *(_DWORD *)a3, 1);
  *(_QWORD *)(a4 + 64) = a3;
  ExInterlockedInsertHeadList((PLIST_ENTRY)(v4 + 88), (PLIST_ENTRY)(a4 + 72), (PKSPIN_LOCK)(v4 + 104));
  v9 = *(_QWORD *)(a4 + 96);
  if ( v9 )
  {
    *(_QWORD *)(v9 + 48) = *(_QWORD *)(a3 + 8);
    *(_QWORD *)(a3 + 8) = -559026163LL;
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(a4 + 8))(a1, a2, a3, *(_QWORD *)a4);
}
