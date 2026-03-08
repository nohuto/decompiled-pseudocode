/*
 * XREFs of ?HmgInitializeLookAsideList@@YAHKKKG@Z @ 0x1C002D210
 * Callers:
 *     HmgCreate @ 0x1C002CDD0 (HmgCreate.c)
 * Callees:
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x1C00C6824 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 */

_BOOL8 __fastcall HmgInitializeLookAsideList(__int64 a1, unsigned int a2, __int64 a3, unsigned __int16 a4)
{
  unsigned int v4; // r14d
  unsigned int v5; // esi
  __int64 v7; // rbx
  __int64 v8; // rdi
  NSInstrumentation::CLeakTrackingAllocator *v9; // rcx
  void *PagedLookasideList; // rax
  _BOOL8 result; // rax

  v4 = a4;
  v5 = ((_DWORD)a1 << 24) + 811691079;
  v7 = (unsigned int)a1;
  result = 0;
  if ( (_DWORD)a1 << 24 < 0xCF9E93B9 )
  {
    v8 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
    *(_DWORD *)(v8 + 4 * v7 + 2200) = a2;
    PagedLookasideList = NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(v9, a2, v5, v5, v4);
    *(_QWORD *)(v8 + 8 * v7 + 1952) = PagedLookasideList;
    if ( PagedLookasideList )
      return 1;
  }
  return result;
}
