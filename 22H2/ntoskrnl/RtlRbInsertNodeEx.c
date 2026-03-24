/*
 * XREFs of RtlRbInsertNodeEx @ 0x1402C0B10
 * Callers:
 *     KiAbEntryUpdateOwnerTreePosition @ 0x140272350 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1402726C0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x140272C9C (KiAbEntryUpdateWaiterTreePosition.c)
 *     RtlpHpSegFreeRangeInsert @ 0x14028AFE0 (RtlpHpSegFreeRangeInsert.c)
 *     PfSnGetFileInformation @ 0x14029C120 (PfSnGetFileInformation.c)
 *     RtlpHpVsChunkSplit @ 0x1402BF820 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsFreeChunkInsert @ 0x1402C08D0 (RtlpHpVsFreeChunkInsert.c)
 *     IoStartDiskIoAttributionForContext @ 0x1402E0190 (IoStartDiskIoAttributionForContext.c)
 *     KiSetClockInterval @ 0x1402F045C (KiSetClockInterval.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1402F05B0 (KiInsertTimer2WithCollectionLockHeld.c)
 *     RtlpHpVaMgrFree @ 0x1402FD9F0 (RtlpHpVaMgrFree.c)
 *     RtlpHpLargeAlloc @ 0x1402FDFBC (RtlpHpLargeAlloc.c)
 *     MiRescanPageFileBitmapPortion @ 0x14030F908 (MiRescanPageFileBitmapPortion.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x140331318 (MiBitmapsCachedEntryLengthChanged.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x140333BF0 (MiInvalidatePageFileBitmapsCache.c)
 *     KiInsertSchedulingGroupQueue @ 0x14035D35C (KiInsertSchedulingGroupQueue.c)
 *     MiInsertSlabEntry @ 0x1403999CC (MiInsertSlabEntry.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x1403A0AF4 (HalpAllocateDomainCommonBufferInternal.c)
 *     MiInitializePagefileBitmapsCache @ 0x1403BF7D4 (MiInitializePagefileBitmapsCache.c)
 *     HalpAllocateCommonBufferThin @ 0x1404CB230 (HalpAllocateCommonBufferThin.c)
 *     PspJobIoRateVolumeEntryInsert @ 0x14058202C (PspJobIoRateVolumeEntryInsert.c)
 *     VmpFaultEntryInsert @ 0x1405A2FF8 (VmpFaultEntryInsert.c)
 *     VmpInsertMemoryRange @ 0x1405A38C0 (VmpInsertMemoryRange.c)
 *     VmpSplitMemoryRange @ 0x1405A5084 (VmpSplitMemoryRange.c)
 *     EtwpSetProviderTraitsCommon @ 0x1406BC01C (EtwpSetProviderTraitsCommon.c)
 *     HvpViewMapCreateViewsForRegion @ 0x140722968 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x140723F20 (HvpViewMapPromoteRangeToMapping.c)
 *     KiGetSystemServiceTraceTable @ 0x1408BCFD0 (KiGetSystemServiceTraceTable.c)
 *     MiGetHotPatchEntry @ 0x1408CA03C (MiGetHotPatchEntry.c)
 *     EtwpRegisterPrivateSession @ 0x14093F3F8 (EtwpRegisterPrivateSession.c)
 *     KeInitializeClock @ 0x140A4B7CC (KeInitializeClock.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlRbInsertNodeEx(unsigned __int64 *a1, unsigned __int64 a2, bool a3, unsigned __int64 a4)
{
  bool v4; // r11
  char v6; // cl
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  char v10; // si
  unsigned __int64 v11; // r8
  char v12; // cl
  __int64 v13; // rbx
  _BOOL8 v14; // rbp
  _BOOL8 v15; // rdi
  __int64 v16; // rbx
  unsigned __int64 v17; // rax
  int v18; // r11d
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 *v22; // rsi
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rsi
  __int64 v29; // rdi
  unsigned __int64 v30; // rax
  int v31; // r9d
  __int64 v32; // r11
  __int64 *v33; // rbx
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  __int64 v43; // rdi
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // rax
  __int64 v48; // rbx
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax

  v4 = a3;
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  v6 = *((_BYTE *)a1 + 8);
  LOBYTE(v7) = v6 & 1;
  if ( !a2 )
  {
    v42 = (unsigned __int64)a1 ^ a4;
    if ( (_BYTE)v7 )
      *a1 = v42;
    else
      *a1 = a4;
    if ( (v6 & 1) != 0 )
    {
      a1[1] = v42;
      *((_BYTE *)a1 + 8) = v42 | 1;
    }
    else
    {
      a1[1] = a4;
    }
    *(_QWORD *)(a4 + 16) = 0LL;
    return v7;
  }
  v8 = a4;
  if ( (_BYTE)v7 )
    v8 = a4 ^ a2;
  *(_QWORD *)(a2 + 8LL * a3) = v8;
  v9 = a2;
  if ( (a1[1] & 1) != 0 )
    v9 = a4 ^ a2;
  *(_QWORD *)(a4 + 16) = v9 | 1;
  if ( !a3 )
  {
    v7 = a1[1];
    if ( (v7 & 1) != 0 )
      v41 = v7 == 1 ? 0LL : v7 ^ ((unsigned __int64)a1 | 1);
    else
      v41 = a1[1];
    if ( a2 == v41 )
    {
      if ( (v7 & 1) != 0 )
      {
        a1[1] = a4 ^ (unsigned __int64)a1;
        LOBYTE(v7) = a4 ^ (unsigned __int8)a1 | 1;
        *((_BYTE *)a1 + 8) = v7;
      }
      else
      {
        a1[1] = a4;
      }
    }
  }
  if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
  {
    v10 = *((_BYTE *)a1 + 8);
    while ( 1 )
    {
      v11 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v12 = v10 & 1;
      if ( (v10 & 1) != 0 && v11 )
        v11 ^= a2;
      v13 = *(_QWORD *)v11;
      if ( v12 && v13 )
        v13 ^= v11;
      LOBYTE(v7) = v13 != a2;
      v14 = v13 == a2;
      v15 = v13 != a2;
      v16 = *(_QWORD *)(v11 + 8 * v14);
      if ( v12 )
      {
        if ( !v16 )
          break;
        v16 ^= v11;
      }
      if ( !v16 || (*(_BYTE *)(v16 + 16) & 1) == 0 )
        break;
      *(_BYTE *)(a2 + 16) &= ~1u;
      a4 = v11;
      *(_BYTE *)(v16 + 16) &= ~1u;
      a2 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (a1[1] & 1) != 0 )
      {
        if ( !a2 )
          return v7;
        a2 ^= v11;
      }
      if ( a2 )
      {
        *(_BYTE *)(v11 + 16) = *(_QWORD *)(v11 + 16) | 1;
        v10 = *((_BYTE *)a1 + 8);
        v7 = *(_QWORD *)a2;
        if ( (v10 & 1) != 0 && v7 )
          v7 ^= a2;
        v4 = v11 != v7;
        if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
          continue;
      }
      return v7;
    }
    if ( v4 == v15 )
    {
LABEL_37:
      v28 = *a1;
      if ( (a1[1] & 1) != 0 )
      {
        if ( v28 )
          v28 ^= (unsigned __int64)a1;
        else
          v28 = 0LL;
      }
      v29 = (unsigned int)v15 ^ 1;
      v30 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v31 = a1[1] & 1;
      if ( (a1[1] & 1) != 0 && v30 )
        v30 ^= a2;
      if ( v30 != v11 )
        goto LABEL_138;
      v32 = (unsigned int)v29;
      v33 = (__int64 *)(v11 + 8 * ((unsigned int)v29 ^ 1LL));
      v34 = *v33;
      if ( (a1[1] & 1) != 0 && v34 )
        v34 ^= v11;
      if ( v34 != a2 )
        goto LABEL_138;
      v35 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (a1[1] & 1) != 0 )
      {
        if ( !v35 )
          goto LABEL_83;
        v35 ^= v11;
      }
      if ( v35 )
      {
        v36 = *(_QWORD *)(v35 + 8);
        if ( (a1[1] & 1) != 0 && v36 )
          v36 ^= v35;
        if ( v36 == v11 )
        {
          v37 = v35 ^ a2;
          if ( (a1[1] & 1) == 0 )
            v37 = a2;
          *(_QWORD *)(v35 + 8) = v37;
        }
        else
        {
          v46 = *(_QWORD *)v35;
          if ( (a1[1] & 1) != 0 && v46 )
            v46 ^= v35;
          if ( v46 != v11 )
            goto LABEL_138;
          v47 = v35 ^ a2;
          if ( (a1[1] & 1) == 0 )
            v47 = a2;
          *(_QWORD *)v35 = v47;
        }
        goto LABEL_49;
      }
LABEL_83:
      if ( v28 != v11 )
        goto LABEL_138;
      v28 = a2;
LABEL_49:
      if ( v31 && v35 )
        v35 ^= a2;
      *(_QWORD *)(a2 + 16) = v35 | *(_DWORD *)(a2 + 16) & 3;
      v38 = *(_QWORD *)(a2 + 8 * v29);
      if ( v31 )
      {
        if ( !v38 )
        {
LABEL_52:
          if ( v31 && v38 )
            v38 ^= v11;
          *v33 = v38;
          v39 = v11 ^ a2;
          v40 = v11 ^ a2;
          if ( !v31 )
          {
            v40 = v11;
            v39 = a2;
          }
          *(_QWORD *)(a2 + 8 * v32) = v40;
          v7 = v28;
          *(_QWORD *)(v11 + 16) = *(_DWORD *)(v11 + 16) & 3 | v39;
          if ( (a1[1] & 1) != 0 )
          {
            v7 = (unsigned __int64)a1 ^ v28;
            if ( !v28 )
              v7 = 0LL;
          }
          *a1 = v7;
          *(_BYTE *)(v11 + 16) |= 1u;
          *(_BYTE *)(a2 + 16) &= ~1u;
          return v7;
        }
        v38 ^= a2;
      }
      if ( !v38 )
        goto LABEL_52;
      v43 = *(_QWORD *)(v38 + 16);
      v44 = v43 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v31 && v44 )
        v44 ^= v38;
      if ( v44 == a2 )
      {
        v45 = v38 ^ v11;
        if ( !v31 )
          v45 = v11;
        *(_QWORD *)(v38 + 16) = v43 & 3 | v45;
        goto LABEL_52;
      }
LABEL_138:
      __fastfail(0x1Du);
    }
    v17 = *(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v18 = v10 & 1;
    if ( (v10 & 1) != 0 && v17 )
      v17 ^= a4;
    if ( v17 != a2 )
      goto LABEL_138;
    v19 = *(_QWORD *)(a2 + 8 * v14);
    if ( (v10 & 1) != 0 && v19 )
      v19 ^= a2;
    if ( v19 != a4 )
      goto LABEL_138;
    v20 = *(_QWORD *)(v11 + 8 * v15);
    if ( (v10 & 1) != 0 && v20 )
      v20 ^= v11;
    if ( v20 != a2 )
      goto LABEL_138;
    v21 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v10 & 1) != 0 && v21 )
      v21 ^= a2;
    if ( v21 != v11 )
      goto LABEL_138;
    v22 = (unsigned __int64 *)(a4 + 8 * v15);
    v23 = v11 ^ a4;
    v24 = v11 ^ a4;
    if ( !v18 )
    {
      v24 = a4;
      v23 = v11;
    }
    *(_QWORD *)(v11 + 8 * v15) = v24;
    *(_QWORD *)(a4 + 16) = *(_DWORD *)(a4 + 16) & 3 | v23;
    v25 = *v22;
    if ( v18 )
    {
      if ( !v25 )
      {
LABEL_33:
        if ( v18 && v25 )
          v25 ^= a2;
        *(_QWORD *)(a2 + 8 * v14) = v25;
        v26 = a4 ^ a2;
        v27 = a4 ^ a2;
        if ( !v18 )
        {
          v27 = a2;
          v26 = a4;
        }
        *v22 = v27;
        *(_QWORD *)(a2 + 16) = *(_DWORD *)(a2 + 16) & 3 | v26;
        a2 = a4;
        goto LABEL_37;
      }
      v25 ^= a4;
    }
    if ( v25 )
    {
      v48 = *(_QWORD *)(v25 + 16);
      v49 = v48 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v18 && v49 )
        v49 ^= v25;
      if ( v49 != a4 )
        goto LABEL_138;
      v50 = a2 ^ v25;
      if ( !v18 )
        v50 = a2;
      *(_QWORD *)(v25 + 16) = v48 & 3 | v50;
    }
    goto LABEL_33;
  }
  return v7;
}
