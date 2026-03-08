/*
 * XREFs of FsRtlpOplockBreakToII @ 0x1402F3B90
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x14023AE40 (FsRtlCheckOplockEx2.c)
 *     FsRtlCheckUpperOplock @ 0x14093AC60 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     FsRtlpWaitOnIrp @ 0x140201018 (FsRtlpWaitOnIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140201B90 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpClearOwner @ 0x14023AB1C (FsRtlpClearOwner.c)
 *     FsRtlpOplockKeysEqual @ 0x14023E170 (FsRtlpOplockKeysEqual.c)
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 *     FsRtlpModifyThreadPriorities @ 0x1402ECCB4 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1402EF888 (FsRtlpOplockSendModernAppTermination.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 */

__int64 __fastcall FsRtlpOplockBreakToII(
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
  int v16; // eax
  unsigned int v17; // edi
  int v18; // eax
  __int64 v19; // rsi
  __int64 v20; // r14
  _QWORD *v21; // rcx
  int v22; // eax
  int v23; // eax
  __int128 v25; // [rsp+60h] [rbp-38h] BYREF
  __int64 v26; // [rsp+70h] [rbp-28h]

  v25 = 0LL;
  v26 = 0LL;
  v16 = *(_DWORD *)(a1 + 144);
  if ( (v16 & 0x40) == 0 || (v16 & 0x7000) != 0 )
    return 0;
  if ( (a4 & 8) != 0 )
  {
    v17 = 0;
  }
  else
  {
    v17 = 0;
    if ( FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 8), 0) )
      return v17;
  }
  if ( (a4 & 0x10010000) != 0 )
    return (unsigned int)-1073739511;
  v18 = *(_DWORD *)(a1 + 144);
  if ( (v18 & 0x1F00F80) != 0 )
  {
    if ( (v18 & 0x80u) != 0 )
    {
      *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
      *(_QWORD *)(a1 + 8) = 0LL;
      return v17;
    }
    goto LABEL_20;
  }
  v19 = *(_QWORD *)a1;
  v20 = 7LL;
  *(_BYTE *)(v19 + 69) = KeAcquireQueuedSpinLock(7uLL);
  _InterlockedExchange64((volatile __int64 *)(v19 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v19 + 69));
  if ( !*(_BYTE *)(v19 + 68) )
  {
    v22 = *(_DWORD *)(a1 + 144);
    if ( (v22 & 6) != 0 )
    {
      v23 = v22 | 0x100;
    }
    else
    {
      v23 = v22 | 0x200;
      v20 = 8LL;
    }
    *(_DWORD *)(a1 + 144) = v23;
    *(_QWORD *)(*(_QWORD *)a1 + 56LL) = v20;
    *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
    IofCompleteRequest(*(PIRP *)a1, 1);
    *(_QWORD *)a1 = 0LL;
LABEL_20:
    if ( (a4 & 1) != 0 )
    {
      return 264;
    }
    else
    {
      FsRtlpModifyThreadPriorities(a1, 0LL, 1);
      FsRtlpOplockSendModernAppTermination(a1, 0LL);
      *a12 = 0;
      return (unsigned int)FsRtlpWaitOnIrp(a1, a3, a6, a7, a8, &v25, 0, a9, a10, a11, a13);
    }
  }
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
    v21 = *(_QWORD **)(a1 + 88);
    if ( v21 == (_QWORD *)(a1 + 88) )
      break;
    FsRtlpRemoveAndCompleteWaitingIrp(v21);
  }
  return v17;
}
