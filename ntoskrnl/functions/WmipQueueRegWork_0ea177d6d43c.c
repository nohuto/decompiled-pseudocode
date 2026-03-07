__int64 __fastcall WmipQueueRegWork(int a1, __int64 a2)
{
  __int64 Pool2; // rax
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 *v7; // rax

  Pool2 = ExAllocatePool2(256LL, 32LL, 1885957463LL);
  v5 = 0;
  v6 = Pool2;
  if ( Pool2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 48));
    *(_DWORD *)(Pool2 + 16) = a1;
    *(_QWORD *)(Pool2 + 24) = a2;
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    v7 = (__int64 *)off_140C069A8;
    if ( *off_140C069A8 != (_UNKNOWN *)&WmipRegWorkList )
      __fastfail(3u);
    *(_QWORD *)v6 = &WmipRegWorkList;
    *(_QWORD *)(v6 + 8) = v7;
    *v7 = v6;
    off_140C069A8 = (_UNKNOWN **)v6;
    KeReleaseMutex(&WmipSMMutex, 0);
    if ( _InterlockedIncrement(&WmipRegWorkItemCount) == 1 )
      ExQueueWorkItem(&WmipRegWorkQueue, DelayedWorkQueue);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
