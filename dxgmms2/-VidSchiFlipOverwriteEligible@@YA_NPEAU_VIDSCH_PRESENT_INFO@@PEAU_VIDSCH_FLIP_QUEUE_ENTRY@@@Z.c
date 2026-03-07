bool __fastcall VidSchiFlipOverwriteEligible(struct _VIDSCH_PRESENT_INFO *a1, struct _VIDSCH_FLIP_QUEUE_ENTRY *a2)
{
  return *((_DWORD *)a1 + 1) != 3 && (*((_DWORD *)a2 + 284) & 0x180) == 128;
}
