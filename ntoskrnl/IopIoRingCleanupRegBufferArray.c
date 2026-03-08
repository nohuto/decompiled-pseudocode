/*
 * XREFs of IopIoRingCleanupRegBufferArray @ 0x1409462B4
 * Callers:
 *     IopDeleteIoRing @ 0x140946240 (IopDeleteIoRing.c)
 *     IopIoRingDispatchRegisterBuffers @ 0x140946620 (IopIoRingDispatchRegisterBuffers.c)
 * Callees:
 *     IopMcWaitAndCleanupBufferEntry @ 0x14055D068 (IopMcWaitAndCleanupBufferEntry.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall IopIoRingCleanupRegBufferArray(unsigned int a1, ULONG_PTR *a2)
{
  ULONG_PTR *v3; // rbx
  __int64 v4; // rdi

  if ( a1 )
  {
    v3 = a2;
    v4 = a1;
    do
    {
      if ( *v3 )
        IopMcWaitAndCleanupBufferEntry(*v3);
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  ExFreePoolWithTag(a2, 0x42527249u);
}
