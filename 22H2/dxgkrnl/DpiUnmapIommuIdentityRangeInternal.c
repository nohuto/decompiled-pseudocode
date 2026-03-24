/*
 * XREFs of DpiUnmapIommuIdentityRangeInternal @ 0x1C0057D18
 * Callers:
 *     DpiMapIommuContiguousInternal @ 0x1C00577A0 (DpiMapIommuContiguousInternal.c)
 *     DpiUnmapIommuContiguousInternal @ 0x1C0057C18 (DpiUnmapIommuContiguousInternal.c)
 *     DpiUnmapMemoryTrackerFromIoMmu @ 0x1C0057D80 (DpiUnmapMemoryTrackerFromIoMmu.c)
 *     DpiUnmapIommuIdentityRange @ 0x1C02C7870 (DpiUnmapIommuIdentityRange.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     IoMmuUnmapStagingMdl @ 0x1C0057410 (IoMmuUnmapStagingMdl.c)
 */

__int64 __fastcall DpiUnmapIommuIdentityRangeInternal(__int64 a1, __int64 a2, int a3, char a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax

  if ( a3 == 1 || *(_QWORD *)(a1 + 40) )
    return IoMmuUnmapStagingMdl(a1, a2, a4, a5);
  result = ((__int64 (__fastcall *)(_QWORD))qword_1C00B3078)(*(_QWORD *)(a1 + 8));
  if ( (int)result < 0 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v8 + 24) = 777LL;
    return WdLogEvent5_WdAssertion(v8);
  }
  return result;
}
