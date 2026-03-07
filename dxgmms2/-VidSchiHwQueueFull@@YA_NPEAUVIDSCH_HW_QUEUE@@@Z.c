bool __fastcall VidSchiHwQueueFull(struct VIDSCH_HW_QUEUE *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  v2 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 8LL);
  v3 = *(_QWORD *)(v2 + 32);
  return !*(_BYTE *)(v2 + 204)
      && !_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 200), 0, 0)
      && !*(_DWORD *)(v3 + 3012)
      && *((_DWORD *)a1 + 38) >= *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) + 1724LL);
}
