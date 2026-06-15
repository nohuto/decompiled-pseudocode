/*
 * XREFs of sub_1800DBEE0 @ 0x1800DBEE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800DBEE0(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned int v5; // ebx

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL) + 128LL))(
         *(_QWORD *)(a1 + 192) + 8LL,
         a2);
  if ( v2 )
    LeaveCriticalSection(v2);
  return v5;
}
