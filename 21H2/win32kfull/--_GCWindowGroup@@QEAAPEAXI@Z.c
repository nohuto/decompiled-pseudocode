/*
 * XREFs of ??_GCWindowGroup@@QEAAPEAXI@Z @ 0x1C023FD18
 * Callers:
 *     _lambda_61241d85ba638410c71ba06bf69ceb6b_::operator() @ 0x1C023FB08 (_lambda_61241d85ba638410c71ba06bf69ceb6b_--operator().c)
 *     ?Cleanup@CWindowGroupManager@@QEAAXW4CleanupType@1@@Z @ 0x1C0240054 (-Cleanup@CWindowGroupManager@@QEAAXW4CleanupType@1@@Z.c)
 * Callees:
 *     <none>
 */

CWindowGroup *__fastcall CWindowGroup::`scalar deleting destructor'(CWindowGroup *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
    Win32FreePool(v2);
  Win32FreePool(this);
  return this;
}
