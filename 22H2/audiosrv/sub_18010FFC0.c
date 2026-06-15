/*
 * XREFs of sub_18010FFC0 @ 0x18010FFC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18010FFC0(__int64 a1, float a2)
{
  unsigned int v3; // edi
  __int64 v4; // rcx
  int v5; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v8; // [rsp+28h] [rbp-20h]

  v3 = 0;
  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 72));
  *(float *)(a1 + 64) = a2;
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    if ( *(_DWORD *)(a1 + 56) )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
      if ( v5 < 0 )
        v3 = v5;
    }
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
