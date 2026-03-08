/*
 * XREFs of IopMcDereferenceBufferEntry @ 0x14055CAC0
 * Callers:
 *     IoTryReleasePage @ 0x14055C684 (IoTryReleasePage.c)
 *     IopMcReleaseMdl @ 0x14055CD74 (IopMcReleaseMdl.c)
 *     IopMcWaitAndCleanupBufferEntry @ 0x14055D068 (IopMcWaitAndCleanupBufferEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopMcDereferenceBufferEntry(ULONG_PTR BugCheckParameter2)
{
  signed __int32 v1; // ebx
  bool v2; // cc
  int v3; // ebx

  v1 = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 8), 0xFFFFFFFF);
  v2 = v1 <= 1;
  v3 = v1 - 1;
  if ( v2 )
  {
    if ( v3 < 0 )
      KeBugCheckEx(0x1F4u, 1uLL, BugCheckParameter2, v3, *(_QWORD *)BugCheckParameter2);
    ExFreePoolWithTag((PVOID)BugCheckParameter2, 0x6542634Du);
  }
  return (unsigned int)v3;
}
