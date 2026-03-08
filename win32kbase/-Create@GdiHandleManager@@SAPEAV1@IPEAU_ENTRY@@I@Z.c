/*
 * XREFs of ?Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z @ 0x1C002D2F0
 * Callers:
 *     HmgCreate @ 0x1C002CDD0 (HmgCreate.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z @ 0x1C00CB510 (-Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z.c)
 */

struct GdiHandleManager *__fastcall GdiHandleManager::Create(unsigned int a1, struct _ENTRY *a2, unsigned int a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  struct GdiHandleEntryDirectory *v8; // rax

  if ( a3 < 0x10000 && a3 < a1 )
    return 0LL;
  v6 = NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 0x104uLL, 0x20uLL, 0x636D6847u);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  *(_DWORD *)v6 = 0;
  *((_DWORD *)v6 + 1) = 0;
  v6[3] = 0LL;
  *((_DWORD *)v6 + 2) = a1;
  v8 = GdiHandleEntryDirectory::Create(a2, a3);
  v7[2] = v8;
  if ( !v8 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v7);
    return 0LL;
  }
  return (struct GdiHandleManager *)v7;
}
