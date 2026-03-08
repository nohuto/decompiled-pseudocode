/*
 * XREFs of DbgkpLkmdSnapThreadApc @ 0x140938180
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     DbgkpLkmdSnapPendingIrps @ 0x140938048 (DbgkpLkmdSnapPendingIrps.c)
 *     DbgkpLkmdSnapThreadInContext @ 0x1409381FC (DbgkpLkmdSnapThreadInContext.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpLkmdSnapThreadApc(__int64 a1, __int64 a2, __int64 a3, void **a4, volatile signed __int32 **a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  void *v6; // rcx
  volatile signed __int32 *v7; // rbx

  CurrentThread = KeGetCurrentThread();
  v6 = *a4;
  v7 = *a5;
  if ( _InterlockedCompareExchange(*a5, 2, 0) )
  {
    ExFreePoolWithTag(v6, 0x704E534Bu);
  }
  else
  {
    if ( (int)DbgkpLkmdSnapThreadInContext(*((_QWORD *)v7 + 1), CurrentThread, *((_QWORD *)v7 + 3)) >= 0 )
      DbgkpLkmdSnapPendingIrps(*((_QWORD *)v7 + 1), (__int64)CurrentThread, *((_DWORD **)v7 + 3));
    KeSetEvent((PRKEVENT)(v7 + 8), 0, 0);
  }
}
