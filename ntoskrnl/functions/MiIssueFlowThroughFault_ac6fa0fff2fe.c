__int64 __fastcall MiIssueFlowThroughFault(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7)
{
  char v7; // r11
  struct _KTHREAD *CurrentThread; // r10
  int v10; // eax
  const signed __int32 *v13; // rdx

  v7 = 0;
  CurrentThread = KeGetCurrentThread();
  v10 = *(_DWORD *)(a4 + 192);
  *a7 = 2;
  if ( (v10 & 0x80u) != 0 && (int)PsGetIoPriorityThread((__int64)CurrentThread) >= 2
    || CurrentThread == *(struct _KTHREAD **)(a4 + 152)
    || (v13 = (const signed __int32 *)&CurrentThread->116, (CurrentThread->MiscFlags & 0x8000) != 0)
    || LODWORD(CurrentThread->Process[2].Affinity.StaticBitmap[3])
    && (*(_QWORD *)(a4 + 256) || (*(_DWORD *)(a4 + 192) & 8) != 0) )
  {
    v7 = 1;
    v13 = (const signed __int32 *)&CurrentThread->116;
  }
  if ( *(__int64 *)(a5 + 40) < 0 && (*(_DWORD *)(a5 + 16) & 0x400LL) != 0 )
  {
    if ( !CurrentThread->WaitBlock[3].SpareLong && !_bittest(v13, 0xAu) && !*(_BYTE *)(a1 + 68) && !v7
      || (*(_DWORD *)(a4 + 192) & 0x20) != 0 )
    {
      return 0LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *a7 = 1;
    return MiResolveMappedFileFault(a1, a2, a3, a6);
  }
  else
  {
    if ( !BYTE6(CurrentThread[1].Queue) && (*(_DWORD *)(a4 + 192) & 8) == 0 && !v7
      || (*(_DWORD *)(a4 + 192) & 0x20) != 0 )
    {
      return 0LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *a7 = 1;
    return MiResolvePageFileFault(a1, a2, a3, a6);
  }
}
