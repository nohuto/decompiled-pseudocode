__int64 __fastcall MmInitializeProcessAddressSpace(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR a2,
        __int64 a3,
        unsigned int *a4,
        char a5)
{
  _QWORD *Pool; // rax
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // r14
  int inserted; // ebx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v17; // rbx
  __int128 v18; // xmm0
  _QWORD *v19; // rax
  __int128 v20; // xmm1
  __int64 v21; // rcx
  __int128 v22; // xmm0
  __int64 v23; // r13
  __int128 v24; // xmm1
  __int128 v25; // xmm1
  __int64 v26; // rax
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 *v31; // rax
  struct _KTHREAD *CurrentThread; // rdi
  PVOID P; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v34; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v35; // [rsp+30h] [rbp-D0h]
  __int64 v36; // [rsp+38h] [rbp-C8h]
  _OWORD v37[4]; // [rsp+40h] [rbp-C0h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v38; // [rsp+80h] [rbp-80h] BYREF
  _BYTE Src[224]; // [rsp+B0h] [rbp-50h] BYREF

  memset(&v38, 0, sizeof(v38));
  memset(Src, 0, 0xD8uLL);
  Pool = MiAllocatePool(64, 0x280uLL, 0x3250694Du);
  v10 = (__int64)Pool;
  if ( Pool )
  {
    ExInitializeAutoExpandPushLock(Pool + 49, 1);
    if ( a2 )
    {
      v17 = *(_QWORD *)(a2 + 1680);
      memmove(Src, (const void *)(v17 + 48), 0xD8uLL);
      v18 = *(_OWORD *)(v17 + 424);
      v19 = &v37[1];
      v20 = *(_OWORD *)(v17 + 440);
      v21 = 2LL;
      v35 = *(_QWORD *)(v17 + 264);
      v37[0] = v18;
      v22 = *(_OWORD *)(v17 + 456);
      v23 = *(_QWORD *)(v17 + 344);
      v37[1] = v20;
      v24 = *(_OWORD *)(v17 + 472);
      v36 = v23;
      v37[2] = v22;
      v37[3] = v24;
      do
      {
        *v19 = 0LL;
        v19 += 4;
        --v21;
      }
      while ( v21 );
    }
    else
    {
      v35 = 0LL;
      v36 = 0LL;
      memset(v37, 0, sizeof(v37));
    }
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v38);
    *(_QWORD *)(BugCheckParameter1 + 1224) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 1232) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 2008) = 0LL;
    if ( (MmTrackLockedPages & 1) != 0 && (MmTrackLockedPages & 0x10000000) == 0 )
      MiInitializeLockedPagesTracking(BugCheckParameter1);
    v11 = BugCheckParameter1 + 1664;
    P = 0LL;
    MiInitializeWorkingSetList(BugCheckParameter1 + 1664, v10, 0, 0LL);
    v12 = *(_QWORD *)(BugCheckParameter1 + 1680);
    *(_DWORD *)(v12 + 280) = 1;
    MiInitializeProcessPageTableCommitmentBitMaps(BugCheckParameter1);
    _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 1124), 0x400u);
    v34 = 0LL;
    inserted = MiComputeProcessUserVa(BugCheckParameter1, a2, a3, &v34);
    if ( inserted >= 0 )
    {
      if ( a2
        || (*(_DWORD *)(BugCheckParameter1 + 2172) & 1) != 0
        || (P = MiAllocateProcessVads(BugCheckParameter1, v34)) != 0LL )
      {
        InitializeSListHead((PSLIST_HEADER)(v12 + 352));
        if ( a2
          || (MiInitializeProcessBottomUpEntropy(BugCheckParameter1),
              MiInitializeProcessTopDownEntropy(BugCheckParameter1, a3),
              inserted = MiInitializeVadBitMap(v14),
              inserted >= 0) )
        {
          inserted = MiInsertProcessVads(BugCheckParameter1, &P);
          if ( inserted >= 0 )
          {
            if ( a3 )
            {
              if ( (*(_BYTE *)(BugCheckParameter1 + 992) & 1) != 0 )
                v15 = PsMapSystemDlls(BugCheckParameter1, 0);
              else
                v15 = MiMapProcessExecutable(BugCheckParameter1, a3, a4);
              inserted = v15;
              goto LABEL_16;
            }
            if ( (*(_DWORD *)(BugCheckParameter1 + 2172) & 1) != 0 && !a2 )
            {
LABEL_16:
              MiAllowWorkingSetExpansion(BugCheckParameter1 + 1664);
LABEL_17:
              KiUnstackDetachProcess(&v38);
              return (unsigned int)inserted;
            }
            *a4 &= ~0x10u;
            if ( !a2 )
            {
              KiUnstackDetachProcess(&v38);
              return 0;
            }
            if ( (*(_BYTE *)(a2 + 992) & 1) != 0 )
            {
              inserted = -1073741595;
            }
            else
            {
              *(_QWORD *)(BugCheckParameter1 + 1448) = *(_QWORD *)(a2 + 1448);
              *(_DWORD *)(BugCheckParameter1 + 1456) = *(_DWORD *)(a2 + 1456);
              *(_WORD *)(BugCheckParameter1 + 1460) = *(_WORD *)(a2 + 1460);
              *(_BYTE *)(BugCheckParameter1 + 1462) = *(_BYTE *)(a2 + 1462);
              *(_QWORD *)(BugCheckParameter1 + 1496) = *(_QWORD *)(a2 + 1496);
              memmove((void *)(v12 + 48), Src, 0xD8uLL);
              v25 = v37[1];
              v26 = v35;
              *(_OWORD *)(v12 + 424) = v37[0];
              *(_QWORD *)(v12 + 264) = v26;
              v27 = v37[2];
              *(_OWORD *)(v12 + 440) = v25;
              v28 = v37[3];
              *(_OWORD *)(v12 + 456) = v27;
              *(_OWORD *)(v12 + 472) = v28;
              inserted = MiInitializeVadBitMap(v29);
              if ( inserted >= 0 )
              {
                v31 = *(__int64 **)(a2 + 1408);
                if ( v31 )
                {
                  v30 = *v31;
                  if ( *v31 )
                    **(_QWORD **)(BugCheckParameter1 + 1408) = v30;
                }
                if ( (*a4 & 0x80u) == 0 )
                  inserted = 0;
                else
                  inserted = MiSessionCreate(v30);
                *(_QWORD *)(v12 + 344) = (v36 + 1) & -(__int64)((a5 & 1) != 0);
                *(_QWORD *)(v12 + 320) = v12 + 312;
                *(_QWORD *)(v12 + 312) = v12 + 312;
                *(_BYTE *)(v12 + 341) |= 2u;
                KiUnstackDetachProcess(&v38);
                if ( inserted >= 0 )
                {
                  inserted = MiCloneProcessAddressSpace(a2, BugCheckParameter1);
                  if ( inserted >= 0 )
                  {
                    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v38);
                    CurrentThread = KeGetCurrentThread();
                    if ( *((_QWORD *)&v37[2] + 1) )
                      MiReferenceCfgVad((__int64)CurrentThread, *(unsigned __int64 *)&v37[2], 1);
                    if ( *((_QWORD *)&v37[0] + 1) )
                      MiReferenceCfgVad((__int64)CurrentThread, *(unsigned __int64 *)&v37[0], 0);
                    KiUnstackDetachProcess(&v38);
                  }
                }
                MiAllowWorkingSetExpansion(v11);
                return (unsigned int)inserted;
              }
            }
          }
        }
      }
      else
      {
        inserted = -1073741670;
      }
    }
    MiReturnProcessVads(P);
    goto LABEL_17;
  }
  return 3221225626LL;
}
