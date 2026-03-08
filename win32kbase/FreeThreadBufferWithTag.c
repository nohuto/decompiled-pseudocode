/*
 * XREFs of FreeThreadBufferWithTag @ 0x1C009D840
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall FreeThreadBufferWithTag(__int64 a1)
{
  char *v1; // rbx
  __int64 v2; // rax
  char **v3; // rcx

  v1 = (char *)(a1 - 32);
  if ( a1 != 32 )
  {
    KeEnterCriticalRegion();
    v2 = *(_QWORD *)v1;
    if ( *(char **)(*(_QWORD *)v1 + 8LL) != v1 || (v3 = (char **)*((_QWORD *)v1 + 1), *v3 != v1) )
      __fastfail(3u);
    *v3 = (char *)v2;
    *(_QWORD *)(v2 + 8) = v3;
    *((_QWORD *)v1 + 1) = v1;
    *(_QWORD *)v1 = v1;
    KeLeaveCriticalRegion();
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
  }
}
