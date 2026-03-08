/*
 * XREFs of FsRtlOplockBreakH2 @ 0x1407932D0
 * Callers:
 *     FsRtlOplockBreakH @ 0x14093B170 (FsRtlOplockBreakH.c)
 * Callees:
 *     FsRtlpOplockBreakByCacheFlags @ 0x14023BD20 (FsRtlpOplockBreakByCacheFlags.c)
 *     ExReleaseFastMutexUnsafe @ 0x14023FBC0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x14023FC30 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpAttachOplockKey @ 0x14023FE88 (FsRtlpAttachOplockKey.c)
 */

__int64 __fastcall FsRtlOplockBreakH2(
        __int64 *a1,
        IRP *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        void (__fastcall *a6)(__int64, __int64),
        unsigned int *a7,
        unsigned __int16 *a8)
{
  __int64 v10; // rsi
  __int64 CurrentStackLocation; // r14
  unsigned int v12; // ebx
  void (__fastcall *v14)(__int64, __int64); // r12
  __int64 v15; // r13
  __int64 v16; // [rsp+20h] [rbp-A8h]
  char v17; // [rsp+D0h] [rbp+8h] BYREF
  char v18; // [rsp+D8h] [rbp+10h] BYREF
  unsigned int v19; // [rsp+E0h] [rbp+18h]
  __int64 v20; // [rsp+E8h] [rbp+20h]

  v20 = a4;
  v10 = *a1;
  CurrentStackLocation = (__int64)a2->Tail.Overlay.CurrentStackLocation;
  v17 = 0;
  v12 = 0;
  v18 = 0;
  if ( !v10 )
    return v12;
  v12 = FsRtlpAttachOplockKey(a2);
  if ( v12 )
    goto LABEL_19;
  if ( *(_BYTE *)CurrentStackLocation )
  {
LABEL_12:
    v14 = a6;
    v15 = a5;
    do
    {
      v18 = 0;
      if ( !v17 )
      {
        ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v10 + 152));
        v17 = 1;
      }
      LODWORD(v16) = 0;
      v12 = FsRtlpOplockBreakByCacheFlags(
              v10,
              CurrentStackLocation,
              (__int64)a2,
              a3,
              v16,
              0x2000u,
              a7,
              a8,
              v20,
              v15,
              v14,
              0LL,
              0LL,
              0LL,
              &v17,
              &v18);
    }
    while ( v18 );
    goto LABEL_19;
  }
  if ( !a7 )
  {
    if ( !a8 )
      goto LABEL_9;
LABEL_17:
    v12 = -1073741811;
    goto LABEL_19;
  }
  if ( !a8 )
    goto LABEL_17;
  a3 |= 0x40000000u;
  v19 = a3;
LABEL_9:
  if ( (*(_DWORD *)(*(_QWORD *)(CurrentStackLocation + 8) + 16LL) & 0xFFEFFE7F) != 0 )
  {
    if ( (*(_DWORD *)(CurrentStackLocation + 16) & 0x10000) != 0 )
    {
      a3 |= 0x10000000u;
      v19 = a3;
    }
    goto LABEL_12;
  }
  v12 = 0;
LABEL_19:
  if ( v17 )
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v10 + 152));
  return v12;
}
