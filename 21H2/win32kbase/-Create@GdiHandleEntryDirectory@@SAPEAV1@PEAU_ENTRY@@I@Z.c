/*
 * XREFs of ?Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z @ 0x1C0055ACC
 * Callers:
 *     ?Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z @ 0x1C0055A2C (-Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z @ 0x1C0055B6C (-_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

struct GdiHandleEntryDirectory *__fastcall GdiHandleEntryDirectory::Create(struct _ENTRY *a1, unsigned int a2)
{
  __int64 v4; // rbx
  struct GdiHandleEntryTable *v5; // rax
  struct GdiHandleEntryTable *v6; // rdi
  struct GdiHandleEntryDirectory *result; // rax

  v4 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
         (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
         260LL,
         0x810uLL,
         1668572487);
  if ( v4 )
  {
    v5 = GdiHandleEntryTable::_Create(a2, 0);
    v6 = v5;
    if ( v5 )
    {
      *(_QWORD *)v5 = a1;
      memset((void *)(v4 + 16), 0, 0x7F8uLL);
      *(_BYTE *)v4 = 0;
      *(_WORD *)(v4 + 2) = 1;
      result = (struct GdiHandleEntryDirectory *)v4;
      *(_DWORD *)(v4 + 2056) = a2;
      *(_QWORD *)(v4 + 8) = v6;
      return result;
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (void *)v4);
  }
  return 0LL;
}
