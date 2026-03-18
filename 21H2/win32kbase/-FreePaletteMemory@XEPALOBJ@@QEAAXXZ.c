/*
 * XREFs of ?FreePaletteMemory@XEPALOBJ@@QEAAXXZ @ 0x1C016B444
 * Callers:
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C001DB70 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     HmgFree @ 0x1C0087080 (HmgFree.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0088360 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C0088400 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C016B4F4 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

void __fastcall XEPALOBJ::FreePaletteMemory(struct _SLIST_ENTRY **this)
{
  struct _SLIST_ENTRY *v1; // rdi
  char *Next; // rdx
  __int64 v4; // rbx
  __int64 v5; // rbx

  v1 = *this;
  Next = (char *)(*this)[8].Next;
  if ( Next )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      Next);
    v1 = *this;
  }
  v4 = *((_QWORD *)gpTypeIsolation + 1);
  if ( v4 )
  {
    memset(v1, 0, 0x90uLL);
    ++*(_DWORD *)(v4 + 76);
    v5 = v4 + 48;
    if ( ExQueryDepthSList((PSLIST_HEADER)v5) < *(_WORD *)(v5 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v5, v1);
    }
    else
    {
      ++*(_DWORD *)(v5 + 32);
      (*(void (__fastcall **)(struct _SLIST_ENTRY *, __int64))(v5 + 56))(v1, v5);
    }
  }
  *this = 0LL;
}
