void __fastcall MiPIdleTimerFunc(struct tagWND *a1, __int64 a2, void *a3)
{
  __int64 v3; // rbx
  __int64 v5; // rcx
  _DWORD *v6; // rax
  __int64 v7; // rcx
  int v8; // eax

  v3 = *((_QWORD *)a1 + 2);
  if ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 1352);
    if ( v5 )
    {
      if ( *(_QWORD *)(v5 + 8) == *(_QWORD *)a1 )
        *(_QWORD *)(v5 + 8) = 0LL;
    }
  }
  FindTimer(a1, a3, 2u, 1, 0LL);
  if ( v3 )
  {
    v6 = *(_DWORD **)(v3 + 1352);
    if ( v6 )
    {
      if ( (*v6 & 1) != 0 && IsMiPEnabledForWindow((__int64)a1) )
      {
        *(_DWORD *)(*(_QWORD *)(v3 + 1352) + 32LL) = GetNextFrameId();
        *(_DWORD *)(*(_QWORD *)(v3 + 1352) + 88LL) = (MEMORY[0xFFFFF78000000320]
                                                    * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        *(_DWORD *)(*(_QWORD *)(v3 + 1352) + 112LL) = 0;
        *(LARGE_INTEGER *)(*(_QWORD *)(v3 + 1352) + 104LL) = KeQueryPerformanceCounter(0LL);
        v7 = *(_QWORD *)(v3 + 1352);
        v8 = *(_DWORD *)(v7 + 36);
        if ( (v8 & 0x10000) != 0 )
        {
          *(_DWORD *)(v7 + 36) = v8 & 0xFFFEFFFF;
          *(_DWORD *)(*(_QWORD *)(v3 + 1352) + 36LL) |= 0x20000u;
        }
        PostTransformableMessage(
          (unsigned __int64)a1,
          0x245u,
          ((unsigned __int64)(*(_WORD *)(*(_QWORD *)(v3 + 1352) + 36LL) & 0xE1F7) << 16) | 1,
          *(__int128 **)(*(_QWORD *)(v3 + 1352) + 376LL),
          0);
      }
    }
  }
}
