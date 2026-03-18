/*
 * XREFs of ?HmgInitializeLookAsideList@@YAHKKKG@Z @ 0x1C0055768
 * Callers:
 *     HmgCreate @ 0x1C0055348 (HmgCreate.c)
 * Callees:
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x1C00BC680 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 */

_BOOL8 __fastcall HmgInitializeLookAsideList(
        NSInstrumentation::CLeakTrackingAllocator *a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int16 a4)
{
  __int64 v4; // rbx
  void **PagedLookasideList; // rax
  _BOOL8 result; // rax

  result = 0;
  if ( (_DWORD)a1 << 24 < 0xCF9E93B9 )
  {
    v4 = (unsigned int)a1;
    *((_DWORD *)&laSize + (unsigned int)a1) = a2;
    PagedLookasideList = (void **)NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
                                    a1,
                                    a2,
                                    ((_DWORD)a1 << 24) + 811691079,
                                    ((_DWORD)a1 << 24) + 811691079,
                                    a4);
    (&pHmgLookAsideList)[v4] = PagedLookasideList;
    if ( PagedLookasideList )
      return 1;
  }
  return result;
}
