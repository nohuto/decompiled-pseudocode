__int64 __fastcall _VIDSCH_FLIP_QUEUE_ENTRY::InitializeFlipQueueEntry(
        _VIDSCH_FLIP_QUEUE_ENTRY *this,
        struct _VIDSCH_GLOBAL *a2)
{
  __int64 Pool2; // rax
  _DWORD *v5; // r8
  int v6; // eax
  int v7; // ecx

  Pool2 = ExAllocatePool2(
            64LL,
            *((_DWORD *)a2 + 38) * ((*((_DWORD *)a2 + 19) << 6) + ((8 * *((_DWORD *)a2 + 19) + 231) & 0xFFFFFFF8)) + 16,
            828533078LL);
  *((_QWORD *)this + 147) = Pool2;
  v5 = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    v6 = *((_DWORD *)a2 + 19);
    v7 = *((_DWORD *)a2 + 38);
    v5[2] = v6;
    v5[1] = v7;
    v5[3] = v7 * ((v6 << 6) + ((8 * v6 + 231) & 0xFFFFFFF8)) + 16;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(3LL);
    return 3221225495LL;
  }
}
