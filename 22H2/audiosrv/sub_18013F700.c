/*
 * XREFs of sub_18013F700 @ 0x18013F700
 * Callers:
 *     <none>
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180140028 @ 0x180140028 (sub_180140028.c)
 */

__int64 __fastcall sub_18013F700(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 136));
  v10 = 0LL;
  if ( a3 && a2 )
  {
    *a3 = (unsigned __int8)sub_180140028(a1 + 184, *(unsigned int *)(a2 + 4), &v10) != 0;
    v6 = 0;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  else
  {
    v6 = -2147467261;
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
