/*
 * XREFs of VidSchiResume @ 0x1C010649C
 * Callers:
 *     VidSchiHandleControlEvent @ 0x1C0105F7C (VidSchiHandleControlEvent.c)
 * Callees:
 *     VidSchiSetSchedulerStatus @ 0x1C00B7824 (VidSchiSetSchedulerStatus.c)
 */

LONG __fastcall VidSchiResume(__int64 a1)
{
  LONG result; // eax

  result = VidSchiSetSchedulerStatus(a1, 1, 1);
  if ( *(_DWORD *)(a1 + 724) )
  {
    *(_QWORD *)(a1 + 1224) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(a1 + 1192), 0, 0);
  }
  return result;
}
