__int64 __fastcall FsRtlpOplockBreakToNone(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        void (__fastcall *a8)(__int64, __int64),
        __int64 a9,
        __int64 a10,
        void (__fastcall *a11)(__int128 *),
        _BYTE *a12,
        char *a13)
{
  unsigned int v17; // ebx
  int v18; // eax
  __int64 v19; // r14
  _QWORD *v20; // rcx
  unsigned int v21; // eax
  _QWORD *i; // rsi
  int v23; // ecx
  int v24; // ecx
  __int128 v26; // [rsp+60h] [rbp-38h] BYREF
  __int64 v27; // [rsp+70h] [rbp-28h]

  v26 = 0LL;
  v27 = 0LL;
  v17 = 0;
  if ( !a1 )
    return v17;
  v18 = *(_DWORD *)(a1 + 144);
  if ( v18 == 1 || (v18 & 0x6000) != 0 )
    return v17;
  if ( (v18 & 0x1F00F90) == 0 )
  {
    v19 = *(_QWORD *)a1;
    if ( (v18 & 0x1000) != 0 )
      return v17;
    if ( (a4 & 0x10010000) != 0 )
      return (unsigned int)-1073739511;
    *(_BYTE *)(v19 + 69) = KeAcquireQueuedSpinLock(7uLL);
    _InterlockedExchange64((volatile __int64 *)(v19 + 104), 0LL);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v19 + 69));
    if ( *(_BYTE *)(v19 + 68) )
    {
      *(_QWORD *)(v19 + 56) = 8LL;
      FsRtlpModifyThreadPriorities(a1, 0LL, 0);
      FsRtlpClearOwner(a1, 0LL);
      *(_BYTE *)(a1 + 32) = 0;
      if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) == a1 )
        *(_QWORD *)(*(_QWORD *)a1 + 56LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)a1 + 48LL) = -1073741536;
      IofCompleteRequest(*(PIRP *)a1, 1);
      *(_QWORD *)a1 = 0LL;
      ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
      while ( 1 )
      {
        v20 = *(_QWORD **)(a1 + 88);
        if ( v20 == (_QWORD *)(a1 + 88) )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(v20);
      }
      return v17;
    }
    *(_QWORD *)(*(_QWORD *)a1 + 56LL) = 8LL;
    *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
    IofCompleteRequest(*(PIRP *)a1, 1);
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 144) |= 0x200u;
    goto LABEL_14;
  }
  if ( (v18 & 0x1F0FFDF) == 0x10 || (v18 & 0x1F0FFDF) == 0x1010 )
  {
    if ( (a4 & 0x10010000) != 0 )
      return (unsigned int)-1073739511;
    for ( i = *(_QWORD **)(a1 + 40); i != (_QWORD *)(a1 + 40); i = (_QWORD *)*i )
    {
      if ( *(_DWORD *)(i[2] + 24LL) != 590400 )
      {
        i = (_QWORD *)i[1];
        FsRtlpRemoveAndCompleteReadOnlyIrp(*i, 0LL, 0LL, a1);
      }
    }
    v23 = *(_DWORD *)(a1 + 144) & 0x20;
    if ( (*(_DWORD *)(a1 + 144) & 0x1F0FFDF) == 0x1010 )
      v24 = v23 | 0x1000;
    else
      v24 = v23 | 1;
    *(_DWORD *)(a1 + 144) = v24;
  }
  else
  {
    if ( (v18 & 0x100) != 0 )
    {
      if ( (a4 & 0x10010000) != 0 )
        return (unsigned int)-1073739511;
      v21 = v18 & 0xFFFFFEFF;
      *(_DWORD *)(a1 + 144) = v21;
      *(_DWORD *)(a1 + 144) = v21 | 0x400;
      goto LABEL_14;
    }
    if ( (v18 & 0x80u) == 0 )
    {
LABEL_14:
      if ( (a4 & 8) == 0 && FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 8), 0) )
        return v17;
      if ( (a4 & 1) != 0 )
        return 264;
      if ( (a4 & 0x10010000) == 0 )
      {
        FsRtlpModifyThreadPriorities(a1, 0LL, 1);
        FsRtlpOplockSendModernAppTermination(a1, 0LL);
        *a12 = 0;
        return (unsigned int)FsRtlpWaitOnIrp(a1, a3, a6, a7, a8, &v26, 0, a9, a10, a11, a13);
      }
      return (unsigned int)-1073739511;
    }
    if ( (a4 & 0x10010000) != 0 )
      return (unsigned int)-1073739511;
    *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
    *(_QWORD *)(a1 + 8) = 0LL;
    if ( *(_QWORD *)(a1 + 24) )
    {
      FsRtlpClearOwner(a1, 0LL);
      *(_BYTE *)(a1 + 32) = 0;
    }
  }
  return v17;
}
