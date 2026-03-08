/*
 * XREFs of SmpFpWaitForResource @ 0x1405CA06C
 * Callers:
 *     SmFpAllocate @ 0x14045D93E (SmFpAllocate.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     SmpFpAllocateResource @ 0x1405C9EC8 (SmpFpAllocateResource.c)
 */

__int64 __fastcall SmpFpWaitForResource(PEX_SPIN_LOCK SpinLock, int a2, struct _KTHREAD *a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v6; // esi
  struct _KTHREAD *i; // rax
  __int64 result; // rax

  CurrentThread = a3;
  if ( a3 )
  {
    v6 = 0;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 1;
  }
  for ( i = (struct _KTHREAD *)*((_QWORD *)SpinLock + 14);
        CurrentThread != i
     && (*((_QWORD *)SpinLock + 14)
      || _InterlockedCompareExchange64((volatile signed __int64 *)SpinLock + 14, (signed __int64)CurrentThread, 0LL));
        i = (struct _KTHREAD *)*((_QWORD *)SpinLock + 14) )
  {
    KeWaitForSingleObject((PVOID)(SpinLock + 2), Executive, 0, 0, 0LL);
  }
  result = SmpFpAllocateResource(SpinLock, a2);
  if ( v6 )
    _InterlockedExchange64((volatile __int64 *)SpinLock + 14, result);
  return result;
}
