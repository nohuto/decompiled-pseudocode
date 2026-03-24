/*
 * XREFs of MiReferenceIoPages @ 0x1402E8B74
 * Callers:
 *     MiProbeLockFrame @ 0x14020AC90 (MiProbeLockFrame.c)
 *     MiFillSystemPtes @ 0x140226EB0 (MiFillSystemPtes.c)
 *     MiMapContiguousMemoryLarge @ 0x1403B81F4 (MiMapContiguousMemoryLarge.c)
 *     MmRotatePhysicalView @ 0x14065FD60 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x14076ACC0 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407C33C8 (MiMapViewOfPhysicalSection.c)
 *     MiAddLoaderHalIoPte @ 0x140A62830 (MiAddLoaderHalIoPte.c)
 * Callees:
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140295410 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x140296BD0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIoSpaceIsConstant @ 0x1402E8F70 (MiIoSpaceIsConstant.c)
 *     MiDereferenceIoPages @ 0x1402EAAB8 (MiDereferenceIoPages.c)
 *     MiRemoveUnmappedIoNode @ 0x1402EB0A0 (MiRemoveUnmappedIoNode.c)
 *     MiInitializeIoPageNodeArray @ 0x1402EB164 (MiInitializeIoPageNodeArray.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiFlushCacheMdl @ 0x1405543F8 (MiFlushCacheMdl.c)
 */

__int64 __fastcall MiReferenceIoPages(unsigned int a1, __int64 a2, __int64 a3, int a4, _DWORD *a5, _QWORD *a6)
{
  __int64 v8; // r12
  unsigned __int64 v9; // rbx
  __int64 *v10; // rax
  _BYTE *v11; // r14
  unsigned __int64 v12; // rsi
  __int64 v13; // r15
  unsigned __int64 *v14; // r13
  unsigned __int8 CurrentIrql; // r12
  __int64 IsConstant; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  bool v19; // bp
  _QWORD *v20; // rdi
  _QWORD *v21; // rsi
  _QWORD *Pool; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int16 *v25; // rdi
  __int64 v26; // rax
  unsigned __int64 v27; // rbp
  int v28; // r10d
  unsigned __int16 v29; // ax
  __int64 v30; // rdx
  unsigned __int64 v32; // rax
  _QWORD *v33; // rax
  _DWORD *SchedulerAssist; // r9
  int v35; // eax
  int v36; // ecx
  _WORD *v37; // rcx
  __int64 v38; // r13
  unsigned __int64 v39; // rcx
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r9
  int v43; // eax
  bool v44; // zf
  unsigned __int8 v45; // al
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *v47; // r10
  int v48; // eax
  int v49; // [rsp+24h] [rbp-154h]
  unsigned int v52; // [rsp+30h] [rbp-148h]
  __int64 v53; // [rsp+38h] [rbp-140h]
  unsigned __int64 v54; // [rsp+48h] [rbp-130h]
  unsigned __int64 *v55; // [rsp+50h] [rbp-128h]
  __int64 *v56; // [rsp+58h] [rbp-120h]
  unsigned __int8 v57; // [rsp+70h] [rbp-108h]
  _BYTE v58[176]; // [rsp+80h] [rbp-F8h] BYREF

  v8 = (int)a1;
  v53 = a3;
  memset(v58, 0, sizeof(v58));
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0LL;
  v52 = 0;
  v49 = 0;
  v9 = a2 & 0xFFFFFFFFFLL;
  v54 = v9;
  v55 = (unsigned __int64 *)&xmmword_140C4EC48 + v8;
  v10 = &qword_140C4EC58;
  v11 = 0LL;
  v12 = v9;
  if ( (_DWORD)v8 != 1 )
    v10 = 0LL;
  v13 = -1LL;
  v56 = v10;
  v14 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v57 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( a1 == 1 )
  {
    IsConstant = MiIoSpaceIsConstant(v9, a3);
    if ( IsConstant )
      a4 = *(_DWORD *)(IsConstant + 40);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4EC40);
  v18 = a3;
  if ( !a3 )
  {
LABEL_39:
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4EC40);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v45 = KeGetCurrentIrql();
        if ( v45 <= 0xFu && CurrentIrql <= 0xFu && v45 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v47 = CurrentPrcb->SchedulerAssist;
          v48 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v44 = (v48 & v47[5]) == 0;
          v47[5] &= v48;
          if ( v44 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( v13 != -1 )
      MiDereferenceIoPages(a1, v12, v13 - v12);
    return v52;
  }
  while ( 1 )
  {
    v19 = 0;
    v20 = (_QWORD *)*v55;
    if ( *v55 )
    {
      while ( 1 )
      {
        v32 = v20[5];
        if ( v9 < v32 )
        {
          v33 = (_QWORD *)*v20;
          if ( !*v20 )
            break;
        }
        else
        {
          if ( v9 < v32 + 512 )
          {
            v21 = v20;
            goto LABEL_19;
          }
          v33 = (_QWORD *)v20[1];
          if ( !v33 )
          {
            v19 = 1;
            break;
          }
        }
        v20 = v33;
      }
    }
    if ( !v56 )
      break;
    v21 = (_QWORD *)MiRemoveUnmappedIoNode(v56, v9, v17, v18);
    if ( !v21 )
      break;
LABEL_17:
    RtlAvlInsertNodeEx(v55, (unsigned __int64)v20, v19, v21);
    v18 = v53;
LABEL_19:
    if ( a6 && !*a6 )
      *a6 = v21;
    v23 = v21[5];
    v17 = v21[6];
    v24 = v23 + 512;
    v25 = (unsigned __int16 *)(v17 + 2 * (v9 - v23));
    if ( v23 == -512 || v18 + v9 <= v24 )
      v26 = 2 * (v18 + v9 - v23);
    else
      v26 = 1024LL;
    v27 = v26 + v17;
    if ( (unsigned __int64)v25 < v26 + v17 )
    {
      v17 = (__int64)a5;
      v28 = v49;
      while ( 1 )
      {
        v29 = *v25;
        v24 = *v25;
        if ( (*v25 & 0x3FFF) == 0x3FFF )
          break;
        v30 = (unsigned int)v24 >> 14;
        if ( (v29 & 0x3FFF) != 0 )
        {
          if ( (_DWORD)v30 == a4 )
            ++dword_140C4EC80;
          else
            ++dword_140C4EC84;
        }
        else
        {
          ++v21[7];
          if ( (_DWORD)v30 == a4 )
          {
            ++dword_140C4EC8C;
          }
          else
          {
            if ( v56 && (v29 & 0xC000) == 0x4000 && !v28 )
            {
              ++dword_140C4EC90;
              if ( !v11 )
              {
                v11 = v58;
                v14 = (unsigned __int64 *)&v58[48];
              }
              *v14++ = v9;
              if ( v14 == (unsigned __int64 *)(v11 + 176) )
              {
                ++dword_140C4EC88;
                *(_QWORD *)v11 = 0LL;
                *((_DWORD *)v11 + 2) = 131248;
                *((_QWORD *)v11 + 4) = 0LL;
                *((_QWORD *)v11 + 5) = 0x10000LL;
                v35 = MiFlushCacheMdl(1LL, v30, v17);
                v36 = v49;
                v18 = v53;
                v11 = 0LL;
                if ( v35 )
                  v36 = 1;
                v49 = v36;
                v28 = v36;
              }
            }
            v17 = (__int64)a5;
            v29 = (_WORD)a4 << 14;
          }
        }
        if ( v17 )
          *(_DWORD *)v17 |= 1 << (v29 >> 14);
        v24 = 1LL;
        --v18;
        ++v9;
        v53 = v18;
        *v25++ = (v29 ^ (v29 + 1)) & 0x3FFF ^ v29;
        if ( (unsigned __int64)v25 >= v27 )
          goto LABEL_34;
      }
      v12 = v54;
      v52 = -1073741670;
      if ( v9 != v54 )
        v13 = v9;
      goto LABEL_37;
    }
LABEL_34:
    if ( v49 )
    {
      v37 = (_WORD *)v21[6];
      v24 = (unsigned __int64)(v37 + 512);
      if ( v37 < v37 + 512 )
      {
        v17 = 0x3FFFLL;
        do
        {
          if ( (*v37 & 0x3FFF) == 0 )
            *v37 |= 0xC000u;
          ++v37;
        }
        while ( (unsigned __int64)v37 < v24 );
        CurrentIrql = v57;
        v18 = v53;
      }
    }
    if ( !v18 )
    {
      v12 = v54;
LABEL_37:
      if ( v11 )
      {
        ++dword_140C4EC88;
        v38 = (char *)v14 - v11;
        *(_QWORD *)v11 = 0LL;
        *((_QWORD *)v11 + 4) = 0LL;
        *((_DWORD *)v11 + 11) = 0;
        *((_WORD *)v11 + 5) = 2;
        v39 = (unsigned __int64)(unsigned int)((v38 - 48) >> 3) << 12;
        *((_DWORD *)v11 + 10) = v39;
        *((_WORD *)v11 + 4) = 8 * (((v38 - 48) >> 3) + 6);
        MiFlushCacheMdl(v39, v24, v17);
      }
      goto LABEL_39;
    }
  }
  Pool = MiAllocatePool(64, 0x440uLL, 0x6F49694Du);
  v21 = Pool;
  if ( Pool )
  {
    Pool[5] = v9 & 0xFFFFFFFFFFFFFE00uLL;
    Pool[6] = Pool + 8;
    MiInitializeIoPageNodeArray(Pool);
    goto LABEL_17;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4EC40);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v40 = KeGetCurrentIrql();
      if ( v40 <= 0xFu && CurrentIrql <= 0xFu && v40 >= 2u )
      {
        v41 = KeGetCurrentPrcb();
        v42 = v41->SchedulerAssist;
        v43 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v44 = (v43 & v42[5]) == 0;
        v42[5] &= v43;
        if ( v44 )
          KiRemoveSystemWorkPriorityKick(v41);
      }
    }
  }
  __writecr8(CurrentIrql);
  MiDereferenceIoPages(a1, v54, v9 - v54);
  return 3221225626LL;
}
