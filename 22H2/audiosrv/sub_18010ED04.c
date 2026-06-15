/*
 * XREFs of sub_18010ED04 @ 0x18010ED04
 * Callers:
 *     sub_18010FE40 @ 0x18010FE40 (sub_18010FE40.c)
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18010ED04(struct _RTL_CRITICAL_SECTION *a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // edi
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  int v8; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  v6 = 0;
  sub_180066980((__int64)&lpCriticalSection, a1 + 2);
  DebugInfo = a1[1].DebugInfo;
  if ( DebugInfo )
  {
    v8 = (*(__int64 (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG, __int64, _QWORD))(*(_QWORD *)&DebugInfo->Type + 64LL))(
           DebugInfo,
           a2,
           a3);
    if ( v8 < 0 )
      v6 = v8;
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
