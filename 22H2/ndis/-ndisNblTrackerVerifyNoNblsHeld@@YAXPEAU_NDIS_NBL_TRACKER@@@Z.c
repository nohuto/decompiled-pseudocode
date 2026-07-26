/*
 * XREFs of ?ndisNblTrackerVerifyNoNblsHeld@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C0074EB0
 * Callers:
 *     NdisNblTrackerDeregisterComponent @ 0x1C00204C0 (NdisNblTrackerDeregisterComponent.c)
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005F6B0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ndisNblTrackerAreNblsOutstandingOnComponent @ 0x1C0074688 (ndisNblTrackerAreNblsOutstandingOnComponent.c)
 */

void __fastcall ndisNblTrackerVerifyNoNblsHeld(ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // ebx

  v2 = 0;
  while ( !ndisNblTrackerAreNblsOutstandingOnComponent(BugCheckParameter3, v2) )
  {
    if ( ++v2 >= 2 )
      return;
  }
  if ( !ndisNblTrackerLeakedNblDisposition )
    ndisBugCheckEx(0x27uLL, 1uLL, BugCheckParameter3, 0LL);
  if ( ndisNblTrackerLeakedNblDisposition == 2 && !(_BYTE)KdDebuggerNotPresent )
    NT_ASSERT(
      "*** An NDIS driver has leaked an NET_BUFFER_LIST
    This is NOT a break in NDIS.sys
    The callstack has the dri"
      "ver with the leak.
");
}
