/*
 * XREFs of MiDereferenceControlAreaProbe @ 0x140214FAC
 * Callers:
 *     MiProbeUnlockPage @ 0x14027C720 (MiProbeUnlockPage.c)
 *     MiPrivateFixup @ 0x1402A180C (MiPrivateFixup.c)
 *     MiSegmentDelete @ 0x1406A6FD4 (MiSegmentDelete.c)
 * Callees:
 *     MiDeleteControlArea @ 0x140215028 (MiDeleteControlArea.c)
 *     MiQueueControlAreaDelete @ 0x140623600 (MiQueueControlAreaDelete.c)
 */

__int64 __fastcall MiDereferenceControlAreaProbe(volatile signed __int64 *a1, int a2)
{
  __int64 result; // rax

  result = _InterlockedExchangeAdd64(a1 + 14, 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
  {
    if ( a2 )
      return MiQueueControlAreaDelete();
    else
      return MiDeleteControlArea((PVOID)a1);
  }
  return result;
}
