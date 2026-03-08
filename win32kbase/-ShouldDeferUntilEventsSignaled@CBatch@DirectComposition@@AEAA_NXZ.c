/*
 * XREFs of ?ShouldDeferUntilEventsSignaled@CBatch@DirectComposition@@AEAA_NXZ @ 0x1C024BF7C
 * Callers:
 *     ?ShouldDefer@CBatch@DirectComposition@@QEAA_N_J_NPEAVCEvent@2@PEAW4DeferReason@12@@Z @ 0x1C024BE60 (-ShouldDefer@CBatch@DirectComposition@@QEAA_N_J_NPEAVCEvent@2@PEAW4DeferReason@12@@Z.c)
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0099740 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 */

char __fastcall DirectComposition::CBatch::ShouldDeferUntilEventsSignaled(DirectComposition::CBatch *this)
{
  __int64 i; // rbx
  void *v3; // rcx
  DirectComposition::CEvent *v4; // rcx
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  for ( i = *((_QWORD *)this + 13); ; *((_QWORD *)this + 13) = i )
  {
    if ( !i )
      return 0;
    v3 = *(void **)(i + 8);
    Timeout.QuadPart = 0LL;
    if ( KeWaitForSingleObject(v3, UserRequest, 0, 0, &Timeout) )
      break;
    v4 = (DirectComposition::CEvent *)*((_QWORD *)this + 13);
    i = *(_QWORD *)v4;
    if ( v4 )
      DirectComposition::CEvent::`scalar deleting destructor'(v4);
  }
  return 1;
}
