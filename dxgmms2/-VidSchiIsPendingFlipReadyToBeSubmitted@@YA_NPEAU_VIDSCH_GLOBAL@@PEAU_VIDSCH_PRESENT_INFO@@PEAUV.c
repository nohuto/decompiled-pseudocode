bool __fastcall VidSchiIsPendingFlipReadyToBeSubmitted(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        struct VIDSCH_FLIP_QUEUE *a3,
        struct _VIDSCH_FLIP_QUEUE_ENTRY *a4)
{
  int v4; // r10d

  v4 = *((_DWORD *)a4 + 263);
  return ((unsigned int)(v4 - 2) <= 1 || v4 == 14)
      && VidSchiCheckPendingFlipsForThisEntry(a1, a2, (unsigned __int64)a4, a3) == 0;
}
