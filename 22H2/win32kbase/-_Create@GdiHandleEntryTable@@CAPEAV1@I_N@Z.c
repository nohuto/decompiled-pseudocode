/*
 * XREFs of ?_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z @ 0x1C007ECD4
 * Callers:
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C003FBE0 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     ?Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z @ 0x1C007EC34 (-Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0029EC8 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Create@EntryDataLookupTable@GdiHandleEntryTable@@SAPEAV12@I@Z @ 0x1C007ED7C (-Create@EntryDataLookupTable@GdiHandleEntryTable@@SAPEAV12@I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 */

struct GdiHandleEntryTable *__fastcall GdiHandleEntryTable::_Create(unsigned int a1, char a2)
{
  unsigned int v2; // edi
  unsigned int v5; // eax
  _QWORD *v6; // rbx
  struct GdiHandleEntryTable::EntryDataLookupTable *v7; // rax

  v2 = 0;
  v5 = 32;
  if ( a2 )
  {
    v2 = 24 * a1;
    if ( 24 * (unsigned __int64)a1 > 0xFFFFFFFF )
      return 0LL;
    v5 = v2 + 32;
    if ( v2 + 32 < v2 )
      return 0LL;
  }
  v6 = (_QWORD *)NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 260LL, v5, 0x63746547u);
  if ( !v6 )
    return (struct GdiHandleEntryTable *)v6;
  v7 = GdiHandleEntryTable::EntryDataLookupTable::Create(a1);
  v6[3] = v7;
  if ( v7 )
  {
    if ( a2 )
    {
      *v6 = v6 + 4;
      memset(v6 + 4, 0, v2);
    }
    *((_DWORD *)v6 + 5) = 0;
    *((_DWORD *)v6 + 4) = 0;
    *((_DWORD *)v6 + 2) = a1;
    *((_DWORD *)v6 + 3) = -1;
    return (struct GdiHandleEntryTable *)v6;
  }
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v6);
  return 0LL;
}
