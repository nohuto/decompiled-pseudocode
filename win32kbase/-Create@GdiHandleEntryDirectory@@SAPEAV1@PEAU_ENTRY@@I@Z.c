/*
 * XREFs of ?Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z @ 0x1C00CB510
 * Callers:
 *     ?Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z @ 0x1C002D2F0 (-Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z @ 0x1C00CB5B0 (-_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

struct GdiHandleEntryDirectory *__fastcall GdiHandleEntryDirectory::Create(struct _ENTRY *a1, unsigned int a2)
{
  __int64 v4; // rbx
  struct GdiHandleEntryTable *v5; // rax
  struct GdiHandleEntryTable *v6; // rdi
  struct GdiHandleEntryDirectory *result; // rax

  v4 = NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 260LL, 0x810uLL, 0x63746547u);
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
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v4);
  }
  return 0LL;
}
