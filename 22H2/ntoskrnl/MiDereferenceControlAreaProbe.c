/*
 * XREFs of MiDereferenceControlAreaProbe @ 0x140278130
 * Callers:
 *     MmUnlockPages @ 0x1402443E0 (MmUnlockPages.c)
 *     MiWaitForInPageComplete @ 0x14029B880 (MiWaitForInPageComplete.c)
 *     MiPrivateFixup @ 0x1402E29C8 (MiPrivateFixup.c)
 *     MiSegmentDelete @ 0x140635830 (MiSegmentDelete.c)
 * Callees:
 *     MiDeleteControlArea @ 0x140278164 (MiDeleteControlArea.c)
 *     MiQueueControlAreaDelete @ 0x14052A55C (MiQueueControlAreaDelete.c)
 */

__int64 __fastcall MiDereferenceControlAreaProbe(volatile signed __int64 *a1, int a2)
{
  __int64 result; // rax

  result = _InterlockedExchangeAdd64(a1 + 14, 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
  {
    if ( a2 == 1 )
      return MiQueueControlAreaDelete();
    else
      return MiDeleteControlArea((PVOID)a1);
  }
  return result;
}
