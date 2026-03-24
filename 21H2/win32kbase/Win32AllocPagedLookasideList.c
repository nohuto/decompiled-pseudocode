/*
 * XREFs of Win32AllocPagedLookasideList @ 0x1C006B6E0
 * Callers:
 *     ?InitializeScanLookAsideList@RGNMEMOBJ@@SAHXZ @ 0x1C006B210 (-InitializeScanLookAsideList@RGNMEMOBJ@@SAHXZ.c)
 *     ?HmgInitializeLookAsideList@@YAHKKKG@Z @ 0x1C006B674 (-HmgInitializeLookAsideList@@YAHKKKG@Z.c)
 *     InitQEntryLookaside @ 0x1C0299EC0 (InitQEntryLookaside.c)
 *     Win32kBaseDriverEntry @ 0x1C029B770 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32AllocPagedLookasideList(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rbx
  int v9; // eax

  v4 = 0LL;
  if ( qword_1C0257D40 )
    v9 = qword_1C0257D40();
  else
    v9 = -1073741637;
  if ( v9 < 0 )
    return 0LL;
  if ( qword_1C0257D48 )
    return qword_1C0257D48(a1, a2, a3, a4);
  return v4;
}
