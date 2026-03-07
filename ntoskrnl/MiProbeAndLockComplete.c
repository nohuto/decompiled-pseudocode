__int64 __fastcall MiProbeAndLockComplete(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 v5; // r8
  struct _MDL *v6; // rdi
  unsigned __int64 v8; // rdx

  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
  {
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 104), v3);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 104), *(_BYTE *)(a1 + 76));
  v6 = *(struct _MDL **)(a1 + 64);
  if ( (*(_BYTE *)(a1 + 72) & 0x40) == 0 && (MmTrackLockedPages & 1) != 0 )
    MiAddMdlTracker(*(_QWORD *)(a1 + 64));
  if ( a2 < 0 )
  {
    if ( (*(_DWORD *)(a1 + 72) & 0x40) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      if ( v8 > *(_QWORD *)a1 )
        MmUnlockPhysicalPagesByVa(*(_QWORD *)a1, v8 - *(_QWORD *)a1, v5, *(unsigned int *)(a1 + 96));
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(_QWORD *)(a1 + 88) + 1280LL),
        -((*(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8)) >> 12));
    }
    else
    {
      MmUnlockPages(v6);
    }
    ++dword_140C67B94;
  }
  return (unsigned int)a2;
}
