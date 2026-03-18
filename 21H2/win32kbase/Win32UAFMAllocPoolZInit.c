/*
 * XREFs of Win32UAFMAllocPoolZInit @ 0x1C0167510
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?AllocatePool@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_K0IPEAI@Z @ 0x1C0146428 (-AllocatePool@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX.c)
 */

void *__fastcall Win32UAFMAllocPoolZInit(size_t Size, unsigned int a2, _DWORD *a3)
{
  void *Pool; // rax
  void *v5; // rbx

  Pool = (void *)NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AllocatePool(
                   260LL,
                   Size,
                   a2,
                   a3);
  v5 = Pool;
  if ( Pool )
    memset(Pool, 0, Size);
  return v5;
}
