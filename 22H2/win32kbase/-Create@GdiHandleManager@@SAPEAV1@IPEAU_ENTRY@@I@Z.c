/*
 * XREFs of ?Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z @ 0x1C007E750
 * Callers:
 *     HmgCreate @ 0x1C007C9D4 (HmgCreate.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0029EC8 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z @ 0x1C007EC34 (-Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

struct GdiHandleManager *__fastcall GdiHandleManager::Create(unsigned int a1, struct _ENTRY *a2, unsigned int a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rbx
  struct GdiHandleEntryDirectory *v8; // rax

  if ( a3 < 0x10000 && a3 < a1 )
    return 0LL;
  v6 = NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 260LL, 0x20uLL, 0x636D6847u);
  v7 = (_QWORD *)v6;
  if ( !v6 )
    return 0LL;
  *(_DWORD *)v6 = 0;
  *(_DWORD *)(v6 + 4) = 0;
  *(_QWORD *)(v6 + 24) = 0LL;
  *(_DWORD *)(v6 + 8) = a1;
  v8 = GdiHandleEntryDirectory::Create(a2, a3);
  v7[2] = v8;
  if ( !v8 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v7);
    return 0LL;
  }
  return (struct GdiHandleManager *)v7;
}
