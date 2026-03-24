/*
 * XREFs of VidSchiSetSchedulerStatus @ 0x1C008E274
 * Callers:
 *     VidSchiWorkerThread @ 0x1C008DFC0 (VidSchiWorkerThread.c)
 *     VidSchiHandleControlEvent @ 0x1C00CE8A8 (VidSchiHandleControlEvent.c)
 *     VidSchiResume @ 0x1C00CEE58 (VidSchiResume.c)
 * Callees:
 *     <none>
 */

LONG __fastcall VidSchiSetSchedulerStatus(__int64 a1, int a2, int a3)
{
  LONG result; // eax

  *(_DWORD *)(a1 + 304) = a2;
  if ( a3 )
  {
    *(_QWORD *)(a1 + 1320) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(a1 + 1288), 0, 0);
  }
  return result;
}
