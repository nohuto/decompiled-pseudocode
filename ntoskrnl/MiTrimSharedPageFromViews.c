__int64 __fastcall MiTrimSharedPageFromViews(_KPROCESS **a1, int a2, char a3, __int64 a4, _BYTE *a5)
{
  signed __int64 v7; // r11
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v9; // edx
  char v10; // r10
  char *v11; // r13
  __int64 v12; // r8
  _KPROCESS **v14; // rbx
  _KPROCESS *v15; // rsi
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r9
  __int64 v19; // r15
  __int64 v20; // rax
  unsigned __int64 v21; // r9
  __int64 **Address; // r15
  unsigned __int64 v23; // r12
  __int64 v24; // rsi
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // r9
  char v27; // bl
  unsigned __int64 v28; // rbx
  int v29; // r12d
  int v30; // eax
  __int64 SystemCacheReverseMap; // rax
  __int64 v32; // r8
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // rax
  char v38; // bl
  unsigned __int64 v39; // r12
  __int64 v40; // r8
  unsigned __int64 v41; // rbx
  unsigned __int64 ProtoPteAddress; // rax
  unsigned __int64 v43; // rdx
  __int64 v44; // rbx
  unsigned __int64 v45; // rsi
  __int64 v46; // rax
  char v47; // al
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  int v51; // ecx
  PVOID v52; // rbx
  struct _KPROCESS *v53; // rsi
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r9
  int v58; // ecx
  char *SessionVm; // rax
  __int64 v60; // r8
  int v61; // eax
  __int64 v62; // r11
  __int64 v63; // rax
  int v64; // edx
  int v65; // r15d
  unsigned __int64 OldIrql; // rbx
  __int64 v67; // rax
  int v68; // ecx
  unsigned __int64 v69; // r8
  __int64 v70; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v72; // r10
  _DWORD *v73; // r9
  int v74; // eax
  bool v75; // zf
  __int64 v76; // rcx
  struct _KPROCESS *SessionById; // rax
  int v78; // eax
  int SystemRegionType; // eax
  __int64 v80; // rbx
  struct _KTHREAD *v81; // rsi
  unsigned int AbEntrySummary; // eax
  unsigned int v83; // ecx
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  signed __int32 v86; // eax
  signed __int32 v87; // ett
  int SessionId; // eax
  _QWORD *v89; // rdx
  unsigned __int64 v90; // r8
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // r11
  int v96; // eax
  __int64 v97; // r11
  unsigned __int8 v98; // al
  char v99; // cl
  unsigned __int64 v100; // rbx
  unsigned __int8 v101; // cl
  struct _KPRCB *v102; // r10
  _DWORD *v103; // r9
  int v104; // eax
  int v105; // r9d
  int locked; // eax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  unsigned __int8 v111; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v112; // [rsp+38h] [rbp-C8h]
  __int64 valid; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v114; // [rsp+48h] [rbp-B8h]
  __int64 v115; // [rsp+50h] [rbp-B0h]
  __int64 v116; // [rsp+50h] [rbp-B0h]
  unsigned int v117; // [rsp+58h] [rbp-A8h]
  __int64 *v118; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+68h] [rbp-98h]
  unsigned int v120; // [rsp+70h] [rbp-90h]
  int v121; // [rsp+74h] [rbp-8Ch]
  int v122; // [rsp+78h] [rbp-88h]
  int v123; // [rsp+7Ch] [rbp-84h]
  __int64 v124; // [rsp+80h] [rbp-80h]
  __int64 v125; // [rsp+88h] [rbp-78h] BYREF
  struct _KPROCESS *v126; // [rsp+90h] [rbp-70h]
  PVOID P; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v128; // [rsp+A8h] [rbp-58h]
  struct _KTHREAD *v129; // [rsp+B0h] [rbp-50h]
  _BYTE *v130; // [rsp+B8h] [rbp-48h]
  PVOID v131; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v132; // [rsp+D0h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v134[16]; // [rsp+F0h] [rbp-10h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v136[24]; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v137[24]; // [rsp+260h] [rbp+160h] BYREF

  v123 = a2;
  v124 = a4;
  v130 = a5;
  v125 = 0LL;
  v132 = 0LL;
  v118 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  memset(v137, 0, 0xB8uLL);
  memset(v136, 0, 0xB8uLL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v134, 0, sizeof(v134));
  v7 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 0;
  v117 = 0;
  v10 = 17;
  v111 = 17;
  v11 = 0LL;
  v129 = CurrentThread;
  v12 = 0LL;
  valid = 0LL;
  if ( !a1 )
    return v9;
  while ( 1 )
  {
    v14 = a1;
    v131 = *a1;
    P = a1;
    v15 = a1[1];
    v16 = *((_QWORD *)P + 2);
    v17 = *((_QWORD *)P + 3);
    v18 = v16;
    v19 = *((_QWORD *)P + 4);
    v126 = 0LL;
    Object = v15;
    v112 = v16;
    v128 = v17;
    v115 = v19;
    v122 = 0;
    v121 = 0;
    if ( !v15 || v15 == KeGetCurrentThread()->ApcState.Process )
    {
      if ( *((_DWORD *)v14 + 11) < 2u )
        goto LABEL_5;
      v76 = *((unsigned int *)v14 + 10);
      if ( (_DWORD)v76 != -1 && (_DWORD)v76 != -2 )
      {
        SessionById = (struct _KPROCESS *)MmGetSessionById(v76, 0xFFFFF6FB40000000uLL);
        v7 = 0LL;
        v126 = SessionById;
        if ( !SessionById )
          goto LABEL_55;
        v78 = MmAttachSession(SessionById, &ApcState);
        v7 = 0LL;
        if ( v78 < 0 )
        {
          MmQuitNextSession(v126);
          v7 = 0LL;
          v126 = 0LL;
          goto LABEL_55;
        }
        v18 = v16;
      }
      if ( *((_DWORD *)v14 + 11) == 3 )
      {
        SystemRegionType = MiGetSystemRegionType(v18);
        v7 = 0LL;
        if ( *((_DWORD *)v14 + 10) == -2 )
        {
          if ( SystemRegionType == 1 )
            goto LABEL_55;
        }
        else if ( SystemRegionType != 1 )
        {
          goto LABEL_55;
        }
        v18 = v16;
      }
      else
      {
        if ( (a3 & 6) != 0 )
          goto LABEL_55;
        v120 = 0;
        --CurrentThread->SpecialApcDisable;
        v80 = 0LL;
        v81 = KeGetCurrentThread();
        _disable();
        AbEntrySummary = v81->AbEntrySummary;
        if ( v81->AbEntrySummary
          || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(&qword_140C681C0, v81), v7 = 0LL, AbEntrySummary) )
        {
          _BitScanForward(&v83, AbEntrySummary);
          v120 = v83;
          v81->AbEntrySummary = AbEntrySummary & ~(1 << v83);
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v86 = *SchedulerAssist;
            do
            {
              v87 = v86;
              v86 = _InterlockedCompareExchange(SchedulerAssist, v86 & 0xFFDFFFFF, v86);
            }
            while ( v87 != v86 );
            if ( (v86 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          _enable();
          v80 = (__int64)(&v81[1].Process + 12 * v120);
          if ( (unsigned __int64)&qword_140C681C0 - qword_140C65668 >= 0x8000000000LL )
            SessionId = -1;
          else
            SessionId = MmGetSessionIdEx(v81->ApcState.Process);
          *(_DWORD *)(v80 + 8) = SessionId;
          *(_QWORD *)v80 = (unsigned __int64)&qword_140C681C0 & 0x7FFFFFFFFFFFFFFCLL;
          v7 = 0LL;
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C681C0, 17LL, 0LL) )
        {
          ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140C681C0, 0, v80, (__int64)&qword_140C681C0);
          v7 = 0LL;
        }
        if ( v80 )
          *(_BYTE *)(v80 + 18) = 1;
        v89 = ::P;
        v18 = v16;
        while ( 1 )
        {
          while ( 1 )
          {
            if ( !v89 )
              goto LABEL_162;
            v90 = v89[11] & 0xFFFFFFFFFFFFF000uLL;
            if ( v16 < v90 + v89[4] )
              break;
            v89 = (_QWORD *)v89[1];
          }
          if ( v16 >= v90 )
            break;
          v89 = (_QWORD *)*v89;
        }
        v118 = (__int64 *)v89[6];
        if ( *v118 != v124 || v16 + (v89[3] << 12) - v19 != (v89[11] & 0xFFFFFFFFFFFFF000uLL) )
        {
LABEL_162:
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C681C0, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)&qword_140C681C0);
          KeAbPostRelease((ULONG_PTR)&qword_140C681C0);
          v75 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v75
            && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery(v92, v91, v93, v94);
          }
          v7 = 0LL;
          goto LABEL_55;
        }
        v121 = 1;
      }
    }
    else
    {
      KeAcquireInStackQueuedSpinLock(&qword_140C69440, &LockHandle);
      v122 = MiPrepareAttachThread((__int64)v15, (__int64)&v15[1].ActiveProcessors.StaticBitmap[26]);
      v65 = v122;
      KxReleaseQueuedSpinLock(&LockHandle);
      v7 = 0LL;
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          v72 = KeGetCurrentPrcb();
          v73 = v72->SchedulerAssist;
          v74 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v75 = (v74 & v73[5]) == 0;
          v73[5] &= v74;
          if ( v75 )
          {
            KiRemoveSystemWorkPriorityKick(v72);
            v7 = 0LL;
          }
        }
      }
      __writecr8(OldIrql);
      if ( !v65 )
        goto LABEL_55;
      KeForceAttachProcess((ULONG_PTR)v15);
      v18 = v16;
      v7 = 0LL;
    }
    v10 = v111;
    v12 = valid;
LABEL_5:
    v20 = v115 - 4096;
    v21 = (v18 - 4096) >> 12;
    Address = 0LL;
    if ( v16 < v128 )
    {
      v23 = v16;
      while ( 1 )
      {
        v24 = v20;
        v25 = v21;
        v26 = v21 + 1;
        v116 = v20 + 4096;
        v114 = v26;
        v27 = v10;
        if ( v11 && ((v23 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL != v12 )
        {
          if ( HIDWORD(v137[1]) != (_DWORD)v7 )
          {
            v67 = MiFreeWsleList(v11, v137, 0LL);
            v68 = v117;
            if ( v67 )
              v68 = 277;
            v117 = v68;
          }
          MiFlushTbList(v136);
          if ( Object )
          {
            if ( valid )
              MiUnlockPageTableInternal((__int64)v11, valid);
            MiUnlockWorkingSetShared((__int64)v11, v111);
          }
          else
          {
            MiUnlockSystemVa(v134);
          }
          v26 = v114;
          v7 = 0LL;
          valid = 0LL;
          v11 = 0LL;
        }
        if ( !Object )
        {
          v28 = v112;
          v29 = 1;
          if ( v11 )
          {
LABEL_11:
            v30 = MiGetSystemRegionType(v112);
            v7 = 0LL;
            if ( !*((_DWORD *)P + 11) )
            {
              if ( v30 != 8 || !MiGetSystemCacheReverseMap(v112) )
                break;
              SystemCacheReverseMap = MiGetSystemCacheReverseMap(v112);
              v33 = *(_QWORD *)(SystemCacheReverseMap + 24) & 0xFFFFFFFFFFFFFFFEuLL;
              if ( (*(_QWORD *)(SystemCacheReverseMap + 24) & 1) == 0 )
                v33 = *(_QWORD *)(SystemCacheReverseMap + 24);
              if ( v11 != (char *)(*(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(*(_QWORD *)v33 + 60LL) & 0x3FF))
                                 + 17344LL) )
                break;
              v34 = *(_QWORD *)(v32 + 32);
              if ( v34 >> 62 != 3 )
                break;
              v35 = *(_QWORD *)(v32 + 24);
              v118 = (__int64 *)v35;
              if ( (v35 & 1) != 0 )
              {
                v35 &= ~1uLL;
                v118 = (__int64 *)v35;
              }
              if ( *(_QWORD *)v35 != v124 )
                break;
              if ( (*(_BYTE *)(v32 + 16) & 3) == 0 )
                v34 = 4 * (v34 & 0xFFFFFFFFFFFF0000uLL);
              if ( v34 + (v112 & 0x3FFFF) != v116 )
                break;
            }
            goto LABEL_24;
          }
          v54 = MiGetSystemRegionType(v112);
          if ( v54 == 8 )
          {
            v58 = 0;
            goto LABEL_75;
          }
          if ( v54 == 1 )
          {
            SessionVm = (char *)MiGetSessionVm(v56, v55, 1LL, v57);
          }
          else
          {
            if ( v54 == 6 )
            {
              v58 = 2;
            }
            else
            {
              if ( v54 != 12 )
              {
                v7 = 0LL;
LABEL_203:
                v52 = Object;
                goto LABEL_63;
              }
              v58 = 1;
            }
LABEL_75:
            SessionVm = MiGetAnyMultiplexedVm(v58);
          }
          v7 = 0LL;
          v11 = SessionVm;
          if ( !SessionVm )
            goto LABEL_203;
          v61 = MiSynchronizeSystemVa((__int64)SessionVm, v112, v60, 0LL, (__int64)v134);
          LODWORD(v7) = 0;
          if ( !v61 )
            goto LABEL_56;
          v11 = (char *)v134[3];
          if ( (a3 & 1) != 0 )
          {
            LODWORD(v136[0]) = MiTbFlushType(v134[3]);
            v136[1] = 20LL;
            WORD2(v136[0]) = v95;
            v136[2] = v95;
            v136[3] = v95;
          }
          valid = ((v112 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
          goto LABEL_11;
        }
        v29 = v7;
        if ( v11 )
        {
          v111 = v27;
          if ( Address )
          {
            v111 = v27;
            if ( v26 >= (*((unsigned int *)Address + 6) | ((unsigned __int64)*((unsigned __int8 *)Address + 32) << 32)) )
            {
              v111 = v27;
              if ( v26 <= (*((unsigned int *)Address + 7) | ((unsigned __int64)*((unsigned __int8 *)Address + 33) << 32)) )
              {
                v40 = v124;
                v111 = v27;
                v41 = v112;
                goto LABEL_35;
              }
            }
          }
        }
        else
        {
          v11 = (char *)Object + 1664;
          if ( (a3 & 1) != 0 )
          {
            v96 = MiTbFlushType((__int64)Object + 1664);
            WORD2(v136[0]) = 0;
            LODWORD(v136[0]) = v96;
            v136[1] = 20LL;
            v136[2] = v97;
            v136[3] = v97;
          }
          v111 = MiLockWorkingSetShared(v11);
        }
        MiLockVadTree(1LL);
        v41 = v112;
        Address = MiLocateAddress(v112);
        MiUnlockVadTree(1LL, 17LL);
        v7 = 0LL;
        if ( !Address )
          break;
        v64 = *((_DWORD *)Address + 12);
        if ( (v64 & 0x200000) != 0 )
          break;
        v40 = v124;
        if ( (*(_DWORD *)(v124 + 56) & 0x20) == 0 && (v64 & 0x70) != 0 )
          break;
        v118 = Address[9];
        if ( *v118 != v124 )
          break;
LABEL_35:
        if ( (*(_DWORD *)(v40 + 56) & 0x20) != 0 )
        {
          v69 = (unsigned __int64)Address[10];
          if ( (unsigned __int64)v130 < v69 )
            break;
          v70 = *((unsigned int *)Address + 6);
          if ( (unsigned __int64)v130 >= v69
                                       - 8 * (v70 | ((unsigned __int64)*((unsigned __int8 *)Address + 32) << 32))
                                       + 8
                                       * ((*((unsigned int *)Address + 7) | ((unsigned __int64)*((unsigned __int8 *)Address
                                                                                               + 33) << 32))
                                        + 1) )
            break;
          v41 = ((__int64)&v130[-v69] >> 3 << 12)
              + ((v70 | ((unsigned __int64)*((unsigned __int8 *)Address + 32) << 32)) << 12);
          v112 = v41;
        }
        else
        {
          ProtoPteAddress = MiGetProtoPteAddress(Address, v41 >> 12, 0LL, &v118);
          v7 = 0LL;
          if ( !ProtoPteAddress || !v118 )
            break;
          if ( v116 != MiStartingOffset(v118, ProtoPteAddress, 0xFFFFFFFF) )
          {
LABEL_54:
            v7 = 0LL;
            break;
          }
        }
        v43 = ((v41 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v12 = valid;
        v44 = ((v43 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( valid == v44 )
          goto LABEL_40;
        v7 = 0LL;
        if ( !valid )
        {
          valid = MiLockLowestValidPageTable((__int64)v11, v43, &v132);
          if ( valid != v44 )
            goto LABEL_54;
LABEL_40:
          v28 = v112;
LABEL_24:
          v36 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v37 = MI_READ_PTE_LOCK_FREE(v36);
          v38 = v37;
          v125 = v37;
          if ( (v37 & 1) == 0
            || (v45 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v125) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL,
                (a3 & 8) != 0)
            && ((v38 & 0x42) != 0 || (*(_BYTE *)(v45 + 34) & 0x10) != 0) )
          {
            v7 = 0LL;
            goto LABEL_26;
          }
          v7 = 0LL;
          if ( *(__int64 *)(v45 + 40) >= 0 )
          {
LABEL_26:
            v39 = v112;
          }
          else
          {
            v46 = *(_QWORD *)(v45 + 16) & 0x400LL;
            if ( (a3 & 1) == 0 )
            {
              if ( v46 || (*(_DWORD *)(v124 + 56) & 0x80u) == 0 )
              {
                v47 = MiGetWsleContents(1LL, v112) & 0xF;
                if ( *((_DWORD *)P + 11) != 3 || v47 != 9 )
                {
                  if ( v47 == 8 || (a3 & 0x10) != 0 )
                  {
                    v105 = ((a3 & 0x40) << 10) | 0x20000;
                    if ( a3 >= 0 )
                      v105 = (a3 & 0x40) << 10;
                    if ( (a3 & 8) != 0
                      || v123 == (_DWORD)v7
                      || (v11[184] & 7) == 2
                      || (locked = MiReplaceLockedPage((_DWORD)v11, v45, v112, v105, v29), v7 = 0LL, !locked) )
                    {
                      v117 = 277;
                    }
                  }
                  else
                  {
                    if ( dword_140C67C68 != (_DWORD)v7 )
                    {
                      MI_WSLE_LOG_ACCESS(v11, v36, v48, v49);
                      LODWORD(v7) = 0;
                    }
                    if ( HIDWORD(v137[1]) == (_DWORD)v7 )
                    {
                      LODWORD(v137[0]) = MiTbFlushType((__int64)v11);
                      v137[1] = 20LL;
                      WORD2(v137[0]) = 4;
                      v137[2] = v62;
                      v137[3] = v62;
                    }
                    MiInsertTbFlushEntry(v137, v112, 1LL);
                    if ( HIDWORD(v137[1]) == LODWORD(v137[1]) )
                    {
                      v63 = MiFreeWsleList(v11, v137, 0LL);
                      v7 = 0LL;
                      if ( v63 )
                        v117 = 277;
                    }
                    else
                    {
                      v7 = 0LL;
                    }
                  }
                }
              }
              goto LABEL_26;
            }
            if ( !v46 || (v38 & 0x42) == 0 )
              goto LABEL_26;
            v98 = MiLockPageInline(v45);
            v99 = *(_BYTE *)(v45 + 34);
            v100 = v98;
            if ( (v99 & 0x10) == 0 )
              *(_BYTE *)(v45 + 34) = v99 | 0x10;
            _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              v101 = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && v101 <= 0xFu && v98 <= 0xFu && v101 >= 2u )
              {
                v102 = KeGetCurrentPrcb();
                v103 = v102->SchedulerAssist;
                v104 = ~(unsigned __int16)(-1LL << (v98 + 1));
                v75 = (v104 & v103[5]) == 0;
                v103[5] &= v104;
                if ( v75 )
                  KiRemoveSystemWorkPriorityKick(v102);
              }
            }
            __writecr8(v100);
            v125 &= 0xFFFFFFFFFFFFFFBDuLL;
            MiWriteValidPteNewProtection(v36, v125);
            v39 = v112;
            MiInsertTbFlushEntry(v136, v112, 1LL);
            v7 = 0LL;
          }
          v12 = valid;
          v20 = v116;
          v21 = v114;
          goto LABEL_28;
        }
        v21 = v25;
        v39 = v112 - 4096;
        v20 = v24;
LABEL_28:
        v23 = v39 + 4096;
        v112 = v23;
        if ( v23 >= v128 )
          break;
        v10 = v111;
      }
    }
LABEL_55:
    if ( !v11 )
      goto LABEL_203;
LABEL_56:
    if ( HIDWORD(v137[1]) != (_DWORD)v7 )
    {
      v50 = MiFreeWsleList(v11, v137, 0LL);
      v51 = v117;
      if ( v50 )
        v51 = 277;
      v117 = v51;
    }
    MiFlushTbList(v136);
    v52 = Object;
    if ( Object )
    {
      if ( valid )
        MiUnlockPageTableInternal((__int64)v11, valid);
      MiUnlockWorkingSetShared((__int64)v11, v111);
    }
    else
    {
      MiUnlockSystemVa(v134);
    }
    v7 = 0LL;
    valid = 0LL;
    v11 = 0LL;
LABEL_63:
    if ( v121 == (_DWORD)v7 )
    {
      CurrentThread = v129;
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C681C0, v7, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_140C681C0);
      KeAbPostRelease((ULONG_PTR)&qword_140C681C0);
      CurrentThread = v129;
      v75 = v129->SpecialApcDisable++ == -1;
      if ( v75
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v108, v107, v109, v110);
      }
      LODWORD(v7) = 0;
    }
    v53 = v126;
    if ( v126 )
    {
      MmDetachSession(v126, &ApcState);
      MmQuitNextSession(v53);
    }
    else if ( v122 != (_DWORD)v7 )
    {
      KeForceDetachProcess(&ApcState, 0);
      MiAttachThreadDone((__int64)v52 + 1664);
    }
    if ( v52 )
      ObDereferenceObjectDeferDeleteWithTag(v52, 0x746C6644u);
    ExFreePoolWithTag(P, 0);
    v7 = 0LL;
    if ( v123 )
    {
      if ( (*v130 & 1) == 0 )
        break;
    }
    a1 = (_KPROCESS **)v131;
    if ( !v131 )
      return v117;
    v12 = valid;
    v10 = v111;
  }
  MiDeleteTrimViewInfoList(v131);
  return 0LL;
}
