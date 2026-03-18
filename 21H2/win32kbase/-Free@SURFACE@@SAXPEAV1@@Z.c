/*
 * XREFs of ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C016BB6C
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C001A590 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$FreeIsolatedType@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C016B8A0 (--$FreeIsolatedType@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0179828 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

void __fastcall SURFACE::Free(PSLIST_ENTRY ListEntry, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  char *v5; // rdx

  v3 = *((_QWORD *)&ListEntry[42].Next + 1);
  if ( v3 )
    ReleaseReferenceCountedObjectHandle(0LL, v3, a3);
  if ( LOBYTE(ListEntry[43].Next) )
  {
    v5 = (char *)*((_QWORD *)&ListEntry[4].Next + 1);
    if ( v5 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v5);
      *((_QWORD *)&ListEntry[4].Next + 1) = 0LL;
    }
  }
  FreeIsolatedType<NSInstrumentation::CLookAsideTypeIsolation<180224,704>>(ListEntry);
}
