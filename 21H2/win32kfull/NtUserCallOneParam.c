/*
 * XREFs of NtUserCallOneParam @ 0x1C0053A80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserCallOneParam(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx

  v2 = a2;
  if ( a2 - 44 > 0x27 )
    return 0LL;
  if ( a2 == 83 )
  {
    _mm_lfence();
    EnterSharedCrit(0LL, 1LL);
    v6 = ((__int64 (__fastcall *)(__int64))*(&apfnSimpleCall + v2))(a1);
  }
  else
  {
    if ( a2 == 76 )
      return ((__int64 (*)(void))*(&apfnSimpleCall + 76))();
    _mm_lfence();
    EnterCrit(0LL, 1LL);
    v4 = (__int64 *)((__int64 (__fastcall *)(__int64))*(&apfnSimpleCall + v2))(a1);
    v6 = (__int64)v4;
    if ( (unsigned int)v2 < 0x2E )
    {
      if ( v4 )
        v6 = *v4;
      else
        v6 = 0LL;
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
