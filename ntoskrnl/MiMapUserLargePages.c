/*
 * XREFs of MiMapUserLargePages @ 0x1406667E0
 * Callers:
 *     MiMapViewOfImageSection @ 0x1407D3750 (MiMapViewOfImageSection.c)
 *     MiReserveUserMemory @ 0x1407D4340 (MiReserveUserMemory.c)
 *     MiCopyLargeVad @ 0x140A466EC (MiCopyLargeVad.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402C9870 (KeShouldYieldProcessor.c)
 *     MiMakeSystemAddressValid @ 0x140321770 (MiMakeSystemAddressValid.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiWorkingSetIsContended @ 0x1403478E0 (MiWorkingSetIsContended.c)
 *     MiInitializeLargePfnList @ 0x14035059C (MiInitializeLargePfnList.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiComputePreferredNode @ 0x140615350 (MiComputePreferredNode.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14061B438 (MiLogPerfMemoryRangeEvent.c)
 *     MiFlushGraphicsPtes @ 0x140623FF8 (MiFlushGraphicsPtes.c)
 *     MiLockWorkingSetForLargeMapping @ 0x14064DB98 (MiLockWorkingSetForLargeMapping.c)
 *     MiCreateLargePfnList @ 0x14066540C (MiCreateLargePfnList.c)
 *     MiDemotePfnListChain @ 0x140665964 (MiDemotePfnListChain.c)
 *     MiInsertLargeUserMapping @ 0x140666510 (MiInsertLargeUserMapping.c)
 */

__int64 __fastcall MiMapUserLargePages(__int64 a1, int a2, char a3, __int64 *a4)
{
  unsigned __int64 v8; // r8
  int v9; // edi
  __int64 v10; // rdx
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // r12d
  __int64 v16; // rdx
  __int64 v17; // r9
  unsigned __int64 v18; // r10
  __int64 result; // rax
  __int64 v20; // r14
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rsi
  __int64 v23; // rcx
  unsigned int v24; // r9d
  KIRQL v25; // r15
  ULONG_PTR v26; // rbx
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // r11
  unsigned int v29; // esi
  unsigned __int64 v30; // rcx
  unsigned int v31; // edx
  _QWORD **v32; // r10
  _QWORD *v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rdx
  ULONG_PTR v38; // r14
  __int64 v39; // rcx
  __int64 v40; // rbx
  int v41; // ecx
  KIRQL v42; // al
  unsigned __int64 v43; // rbx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // r9
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // r8
  __int64 v49; // rdx
  _QWORD *v50; // rcx
  _QWORD *v51; // rax
  _QWORD ***v52; // rax
  __int64 v53; // rax
  unsigned __int64 v54; // rbx
  __int64 v55; // rbx
  unsigned int v56; // [rsp+50h] [rbp-B0h]
  int v57; // [rsp+54h] [rbp-ACh]
  int v58; // [rsp+58h] [rbp-A8h]
  unsigned int v59; // [rsp+5Ch] [rbp-A4h]
  _QWORD *v60; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD ***v61; // [rsp+68h] [rbp-98h]
  int v62; // [rsp+70h] [rbp-90h]
  int v63; // [rsp+74h] [rbp-8Ch]
  int v64; // [rsp+78h] [rbp-88h]
  unsigned __int64 v65; // [rsp+80h] [rbp-80h]
  unsigned __int64 v66; // [rsp+88h] [rbp-78h]
  ULONG_PTR v67; // [rsp+90h] [rbp-70h]
  unsigned __int64 *v68; // [rsp+98h] [rbp-68h]
  unsigned __int64 v69; // [rsp+A0h] [rbp-60h]
  unsigned int v70; // [rsp+A8h] [rbp-58h]
  __int64 v71; // [rsp+B0h] [rbp-50h]
  _QWORD **v72; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v73; // [rsp+C0h] [rbp-40h]
  __int64 v74; // [rsp+C8h] [rbp-38h]
  __int64 v75; // [rsp+D0h] [rbp-30h]
  _KPROCESS *Process; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v77; // [rsp+E0h] [rbp-20h]
  __int64 v78; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v79; // [rsp+F0h] [rbp-10h]
  _QWORD v80[12]; // [rsp+100h] [rbp+0h] BYREF

  v75 = a1;
  memset(v80, 0, sizeof(v80));
  v8 = *(unsigned int *)(a1 + 48);
  v64 = *(_DWORD *)(a1 + 48) & 0x2200000;
  v79 = 0LL;
  if ( a2 )
    v9 = a2 - 1;
  else
    v9 = MiComputePreferredNode(a1);
  v10 = *(unsigned __int8 *)(a1 + 32);
  v11 = (unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32;
  Process = KeGetCurrentThread()->ApcState.Process;
  v68 = &Process[1].ActiveProcessors.StaticBitmap[26];
  v12 = (((*(unsigned int *)(a1 + 28) | v11) << 12) | 0xFFF) + 1;
  v73 = (*(unsigned int *)(a1 + 24) | (unsigned __int64)(v10 << 32)) << 12;
  v13 = (v8 >> 19) & 3;
  v77 = (v12 - v73) >> 12;
  if ( LODWORD(MiVadPageSizes[v13]) == 16 )
  {
    v14 = 2;
    v15 = 2;
  }
  else if ( (v8 & 0xA00000) == 0xA00000 )
  {
    v14 = MiVadPageIndices[v13];
    v15 = v14;
  }
  else
  {
    v14 = 1;
    v15 = (((unsigned __int64)KeFeatureBits >> 37) & 1) == 0;
  }
  v59 = v14;
  MiInitializeLargePfnList(v80);
  v78 = a1;
  result = MiCreateLargePfnList((__int64)&v78, v16, v18, v17, a2, a3, a4, 0, v80);
  if ( (int)result >= 0 )
  {
    v20 = v73;
    v21 = *(unsigned int *)(a1 + 48);
    v63 = 0;
    v22 = 0LL;
    v58 = 0;
    v23 = 0LL;
    v57 = 0;
    v24 = 0;
    v25 = 17;
    v69 = 0LL;
    v26 = 0LL;
    v67 = 0LL;
    v27 = v73;
    v56 = 0;
    v70 = MmMakeProtectNotWriteCopy[(v21 >> 7) & 0x1F];
    v61 = (_QWORD ***)&v60;
    v60 = &v60;
    v65 = v73;
    v28 = ((v73 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v66 = v28;
    if ( v73 < v12 )
    {
      while ( 1 )
      {
        v29 = v15;
        if ( v15 <= v59 )
        {
          while ( 1 )
          {
            v30 = MiLargePageSizes[v29] << 12;
            if ( !(v27 % v30) && v12 - v27 >= v30 )
              break;
            if ( ++v29 > v59 )
              goto LABEL_22;
          }
          v31 = v29;
          do
          {
            if ( (_QWORD *)v80[3 * v31] != &v80[3 * v31] )
              break;
            ++v31;
          }
          while ( v31 <= v59 );
          if ( v31 > v59 )
          {
            MiDemotePfnListChain((__int64)v80, v29);
            v24 = v56;
            v28 = v66;
          }
          else
          {
            v29 = v31;
          }
        }
LABEL_22:
        v32 = (_QWORD **)&v80[3 * v29];
        v74 = 3LL * v29;
        v33 = *v32;
        v72 = v32;
        if ( (_QWORD **)v33[1] != v32 )
          goto LABEL_79;
        v34 = (_QWORD *)*v33;
        if ( *(_QWORD **)(*v33 + 8LL) != v33 )
          goto LABEL_79;
        *v32 = v34;
        v34[1] = v32;
        v35 = MiLargePageSizes[v29];
        --v80[3 * v29 + 2];
        v71 = v35;
        v36 = v61;
        v37 = 16LL;
        if ( v29 != 2 )
          v37 = 1LL;
        v62 = v37;
        if ( *v61 != &v60 )
LABEL_79:
          __fastfail(3u);
        v33[1] = v61;
        *v33 = &v60;
        v38 = v28;
        *v36 = v33;
        v61 = (_QWORD ***)v33;
        if ( v29 < 2 )
        {
          v39 = 2 - v29;
          do
          {
            v38 = ((v38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v39;
          }
          while ( v39 );
          v32 = v72;
          v24 = v56;
        }
        if ( v58 || ((v38 ^ v26) & 0xFFFFFFFFFFFFF000uLL) != 0 )
          break;
LABEL_57:
        v43 = 0LL;
        v44 = (v71 << 12) + v65;
        v65 = v44;
        if ( v44 < v12 )
        {
          v45 = v12 - v44;
          if ( ((v38 + 8) & 0xFFF) != 0 )
            v46 = 512LL - (((unsigned int)(v38 + 8) >> 3) & 0x1FF);
          else
            v46 = 0LL;
          v47 = (v71 * (v46 / (unsigned int)v37)) << 12;
          if ( v47 > v45 )
            v47 = v45;
          v48 = v47 / (v71 << 12);
          if ( v48 )
          {
            v49 = v74;
            do
            {
              v50 = *v32;
              if ( *v32 == v32 )
                break;
              if ( (_QWORD **)v50[1] != v32 )
                goto LABEL_79;
              v51 = (_QWORD *)*v50;
              if ( *(_QWORD **)(*v50 + 8LL) != v50 )
                goto LABEL_79;
              *v32 = v51;
              v51[1] = v32;
              v52 = v61;
              --v80[v49 + 2];
              if ( *v52 != &v60 )
                goto LABEL_79;
              v50[1] = v52;
              *v50 = &v60;
              ++v43;
              *v52 = (_QWORD **)v50;
              v61 = (_QWORD ***)v50;
            }
            while ( v43 < v48 );
          }
        }
        MiInsertLargeUserMapping(v75, v28, &v60, v29, v70);
        v53 = v71 * v43;
        v54 = v43 + 1;
        v65 += v53 << 12;
        if ( v67 )
        {
          v56 += v54 * v62;
        }
        else
        {
          v67 = v38;
          v56 = v54 * v62;
        }
        v66 += 8 * v71 * v54;
        v63 += v54;
        if ( (v63 & 0xF) == 0 && MiWorkingSetIsContended((__int64)v68) || KeShouldYieldProcessor() )
          v58 = 1;
        v27 = v65;
        v26 = v38;
        v24 = v56;
        if ( v65 >= v12 )
        {
          v22 = v69;
          v20 = v73;
          v23 = v67;
          goto LABEL_81;
        }
        v28 = v66;
      }
      if ( v64 == 35651584 && v24 )
      {
        MiFlushGraphicsPtes(v67, v24);
        v67 = 0LL;
      }
      v40 = (__int64)v68;
      if ( v69 )
      {
        MiUnlockPageTableInternal((__int64)v68, v69);
        v69 = 0LL;
      }
      v41 = v57;
      if ( v58 )
        goto LABEL_41;
      if ( v57 == 1 )
      {
        if ( v29 )
          goto LABEL_41;
      }
      else if ( !v29 )
      {
LABEL_41:
        v58 = 0;
        if ( v25 != 17 )
        {
          if ( v57 == 1 )
            MiUnlockWorkingSetExclusive(v40, v25);
          else
            MiUnlockWorkingSetShared(v40, v25);
          v25 = 17;
        }
LABEL_49:
        if ( !v29 )
        {
          v57 = 1;
          v25 = MiLockWorkingSetForLargeMapping(v40, v37, v9);
        }
        if ( v25 == 17 )
        {
          v57 = 0;
          v42 = MiLockWorkingSetShared(v40);
          v41 = 0;
          v25 = v42;
          goto LABEL_55;
        }
        v41 = v57;
LABEL_54:
        if ( v41 )
        {
LABEL_56:
          MiMakeSystemAddressValid(v38, 0LL, v9 + 1, v25, v41);
          v32 = v72;
          LODWORD(v37) = v62;
          v28 = v66;
          goto LABEL_57;
        }
LABEL_55:
        v69 = ((v38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        goto LABEL_56;
      }
      if ( v25 != 17 )
        goto LABEL_54;
      goto LABEL_49;
    }
LABEL_81:
    if ( v64 == 35651584 && v24 )
      MiFlushGraphicsPtes(v23, v24);
    v55 = (__int64)v68;
    if ( v22 )
      MiUnlockPageTableInternal((__int64)v68, v22);
    if ( v25 != 17 )
    {
      if ( v57 == 1 )
        MiUnlockWorkingSetExclusive(v55, v25);
      else
        MiUnlockWorkingSetShared(v55, v25);
    }
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogPerfMemoryRangeEvent(v20, LODWORD(Process[1].Header.WaitListHead.Flink), 0x1Bu, v77);
    return 0LL;
  }
  return result;
}
