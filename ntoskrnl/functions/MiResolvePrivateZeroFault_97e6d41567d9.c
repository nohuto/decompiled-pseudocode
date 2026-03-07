__int64 __fastcall MiResolvePrivateZeroFault(int *a1)
{
  unsigned __int64 v1; // rbx
  int *v2; // rsi
  int v3; // edx
  __int64 v4; // r10
  __int64 v5; // r9
  __int64 v6; // r12
  struct _KTHREAD *v7; // r8
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r11
  __int64 v10; // r15
  __int64 v11; // r14
  unsigned int v12; // ebx
  __int64 LargePage; // r13
  __int64 v14; // rax
  int v15; // r11d
  int v16; // r15d
  int v17; // r12d
  unsigned int v18; // ecx
  __int64 v20; // rax
  unsigned int v21; // r8d
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // r9
  struct _LIST_ENTRY *v24; // rcx
  unsigned __int64 v25; // r15
  int v26; // r10d
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r11
  __int64 v29; // rdx
  bool v30; // zf
  int v31; // r9d
  unsigned int v32; // r9d
  unsigned int v33; // ecx
  int v34; // edx
  unsigned __int64 v35; // rdx
  unsigned int v36; // ecx
  int v37; // r9d
  __int64 ClusterPage; // rax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v40; // rax
  struct _LIST_ENTRY *v41; // r9
  __int64 v42; // rax
  __int64 v43; // r9
  unsigned __int64 v44; // r14
  __int64 v45; // rsi
  signed __int32 v46; // ecx
  __int64 SlabPage; // rax
  __int64 v48; // rdi
  int v49; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v50; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v51; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v52; // [rsp+50h] [rbp-B0h]
  __int64 v53; // [rsp+58h] [rbp-A8h]
  __int64 v54; // [rsp+60h] [rbp-A0h]
  __int128 v55; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v56[3]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v57[15]; // [rsp+90h] [rbp-70h] BYREF
  char v59; // [rsp+158h] [rbp+58h] BYREF
  __int64 v60; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v61; // [rsp+168h] [rbp+68h]

  v1 = *((_QWORD *)a1 + 2);
  v2 = a1;
  v3 = *a1;
  v4 = *((_QWORD *)a1 + 7);
  v50 = v1;
  if ( (*a1 & 2) != 0 )
  {
    v36 = a1[8];
    if ( v36 >> 3 == 3 )
    {
      if ( (v36 & 7) == 0 )
        goto LABEL_76;
    }
    else if ( v36 >> 3 != 1 )
    {
      goto LABEL_76;
    }
    if ( (v3 & 4) != 0 )
      goto LABEL_2;
LABEL_76:
    MiAdvanceFaultList(v4);
    return 0LL;
  }
LABEL_2:
  if ( (v3 & 8) != 0 && (*(_DWORD *)(v4 + 56) & 8) != 0 )
    return 3221225495LL;
  v5 = *((_QWORD *)v2 + 1);
  v6 = *(_QWORD *)(v5 + 56);
  v53 = v6;
  v54 = *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(v6 + 174));
  if ( (v3 & 0x40) == 0
    || (v7 = (struct _KTHREAD *)KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[10]) == 0LL
    || v7 == KeGetCurrentThread() )
  {
    v8 = 1LL;
    v51 = 1LL;
    v9 = -1LL;
    v10 = *((_QWORD *)v2 + 8);
    v11 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v12 = v2[12];
    LargePage = 0LL;
    v61 = v12;
    LODWORD(v60) = 0;
    *(_QWORD *)&v55 = v10;
    if ( !v10 )
    {
      if ( (v3 & 0x41) == 1 && (*(_BYTE *)(v6 + 184) & 7u) >= 2 )
      {
        v25 = MiComputeZeroClusterMaximum(v4, v6, 0LL);
        if ( v25 > 1 )
        {
          LODWORD(v60) = 1;
          goto LABEL_39;
        }
      }
      goto LABEL_7;
    }
    if ( (v3 & 0x15) != 0 )
    {
      v20 = MiComputeZeroClusterMaximum(v4, v6, v10);
      v3 = *v2;
      v9 = v20;
      LODWORD(v60) = 1;
    }
    v21 = *(_DWORD *)(v10 + 48);
    v52 = v9;
    v12 = (v21 >> 12) & 0x7F;
    v61 = v12;
    if ( (v21 & 0x200000) == 0 || MiVadPageSizes[(v21 >> 19) & 3] != 16 )
    {
      if ( (v11 & 0x7F) == 0
        && (v3 & 0x15) == 0
        && (v21 & 0x200000) != 0
        && (v21 & 0x600000) != 0x600000
        && !v2[9]
        && v50 >= ((*(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) + 16) << 12
        && (v11 & 0xFFF) != 0
        && (v50 < 0xFFFFF68000000000uLL || v50 > 0xFFFFF6FFFFFFFFFFuLL)
        && (v3 & 0x10000) == 0 )
      {
        v22 = 0LL;
        v23 = v11 - 8;
        do
        {
          v24 = *(struct _LIST_ENTRY **)v23;
          if ( v23 >= 0xFFFFF6FB7DBED000uLL
            && v23 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0x600000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
          {
            if ( ((unsigned __int8)v24 & 1) == 0 )
              break;
            if ( ((unsigned __int8)v24 & 0x20) == 0 || ((unsigned __int8)v24 & 0x42) == 0 )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                v40 = *((_QWORD *)&Flink->Flink + ((v23 >> 3) & 0x1FF));
                LOBYTE(Flink) = (unsigned __int8)v24 | 0x20;
                if ( (v40 & 0x20) == 0 )
                  Flink = *(struct _LIST_ENTRY **)v23;
                LOBYTE(v24) = (_BYTE)Flink;
                if ( (v40 & 0x42) != 0 )
                  LOBYTE(v24) = (unsigned __int8)Flink | 0x42;
              }
            }
          }
          if ( ((unsigned __int8)v24 & 1) == 0 )
            break;
          if ( ((unsigned __int8)v24 & 0x20) == 0 )
            break;
          ++v22;
          v23 -= 8LL;
        }
        while ( v22 < 0x10 );
        if ( v22 == 16 )
        {
          memset(v57, 0, 0x68uLL);
          v56[0] = v50 & 0xFFFFFFFFFFFFF000uLL;
          v8 = 1LL;
          v56[1] = 0x10000LL;
          v57[1] = v56;
          v57[2] = 1LL;
          v57[3] = 0LL;
          v57[4] = 0LL;
          if ( (unsigned __int64)MiComputeZeroClusterMaximum(v57, v53, v10) >= 0x10 )
          {
            v25 = 16LL;
            LODWORD(v60) = 2;
            goto LABEL_39;
          }
          v8 = v51;
          goto LABEL_7;
        }
        v8 = v51;
      }
      goto LABEL_58;
    }
    v37 = v2[8];
    v49 = v2[9];
    v59 = 0;
    ClusterPage = MiGetClusterPage(v55, v50, 16, v37, v49, (__int64)&v59);
    LargePage = ClusterPage;
    if ( ClusterPage )
    {
      if ( (*(_QWORD *)(ClusterPage + 24) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFFLL )
      {
        v9 = v52;
        if ( v59 )
          *v2 |= 4u;
LABEL_58:
        v31 = v60;
        if ( (_DWORD)v60 && !LargePage )
        {
          v61 = v12;
          v8 = 1LL;
          v25 = v9;
          if ( v9 <= 1 )
          {
LABEL_46:
            if ( v31 == 2 )
            {
              if ( v8 == v25 )
              {
                if ( v12 )
                  v32 = v12 - 1;
                else
                  v32 = *(_DWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 33364);
                v33 = v2[8];
                v34 = 1;
                if ( v33 )
                {
                  if ( v33 != 31 )
                  {
                    if ( v33 >> 3 == 3 )
                    {
                      if ( (v33 & 7) != 0 )
                        v34 = 2;
                    }
                    else
                    {
                      v34 = v33 >> 3 != 1;
                    }
                  }
                }
                else
                {
                  v34 = 3;
                }
                LargePage = MiGetLargePage(v54, v50, 2, v32, v34, 4, 0LL);
                if ( LargePage )
                {
                  *v2 |= 0x80u;
                  MiConvertEntireLargePageToSmall(LargePage, 2, 2, 1, 0LL, 0LL, 0LL);
                }
              }
              else
              {
                v8 = 1LL;
              }
            }
            v51 = v8;
            goto LABEL_7;
          }
LABEL_39:
          v26 = v2[9];
          v27 = v11 + 8;
          v28 = 0xFFFFF6FB7DBED7F8uLL;
          do
          {
            v29 = *(_QWORD *)v27;
            if ( v27 >= 0xFFFFF6FB7DBED000uLL
              && v27 <= v28
              && (MiFlags & 0x600000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v29 & 1) != 0
              && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
            {
              v41 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v41 )
              {
                v42 = *((_QWORD *)&v41->Flink + ((v27 >> 3) & 0x1FF));
                v43 = v29 | 0x20;
                if ( (v42 & 0x20) == 0 )
                  v43 = *(_QWORD *)v27;
                v29 = v43;
                if ( (v42 & 0x42) != 0 )
                  v29 = v43 | 0x42;
              }
            }
            if ( v26 )
            {
              if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v29) )
                break;
              v30 = v26 == ((v35 >> 5) & 0x1F);
            }
            else
            {
              v30 = v29 == 0;
            }
            if ( !v30 )
              break;
            ++v8;
            v27 += 8LL;
          }
          while ( v8 < v25 );
          v31 = v60;
          goto LABEL_46;
        }
LABEL_7:
        v14 = *((_QWORD *)v2 + 9);
        if ( v14 )
          v54 = *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v14 + 544) + 1838LL));
        if ( (*v2 & 0x10000) != 0
          && (v17 = v54, (*(_DWORD *)(v54 + 4) & 8) != 0)
          && (unsigned int)MiProtectionToCacheAttribute((unsigned int)v2[8]) == 1 )
        {
          if ( LargePage )
            return MiCompletePrivateZeroFault(v2, LargePage, v8);
          v60 = 0LL;
          v55 = 0LL;
          MiInitializePageColorBase(v53, v12, &v55);
          v44 = 0LL;
          v16 = 1;
          if ( v8 )
          {
            v45 = 0x3FFFFFFFFFLL;
            do
            {
              v46 = _InterlockedExchangeAdd((volatile signed __int32 *)v55, 1u);
              SlabPage = MiGetSlabPage(v54, 2u, HIDWORD(v55) | (unsigned int)v46 & DWORD2(v55), 24LL, &v60);
              v48 = SlabPage;
              if ( SlabPage == -1 )
                break;
              LargePage = 48 * SlabPage - 0x220000000000LL;
              MiSetPfnBlink(LargePage, v45, 0LL);
              ++v44;
              v45 = v48;
            }
            while ( v44 < v51 );
            v12 = v61;
            v2 = a1;
            if ( LargePage )
            {
              v8 = v44;
              return MiCompletePrivateZeroFault(v2, LargePage, v8);
            }
            v15 = v53;
            if ( v60 )
              v51 = 1LL;
          }
        }
        else
        {
          if ( LargePage )
            return MiCompletePrivateZeroFault(v2, LargePage, v8);
          v15 = v53;
          v16 = 1;
          v17 = v54;
        }
        v18 = v2[8];
        if ( v18 )
        {
          if ( v18 != 31 )
          {
            if ( v18 >> 3 == 3 )
            {
              if ( (v18 & 7) != 0 )
                v16 = 2;
            }
            else if ( v18 >> 3 == 1 )
            {
              v16 = 0;
            }
          }
        }
        else
        {
          v16 = 3;
        }
        LargePage = MiGetPageChain(v17, v15, *((_QWORD *)v2 + 2), v12, v16, 258, -1LL, (__int64)&v51);
        if ( LargePage )
        {
          v8 = v51;
          return MiCompletePrivateZeroFault(v2, LargePage, v8);
        }
        return 3221225495LL;
      }
      v8 = 16LL;
      v51 = 16LL;
      v50 &= 0xFFFFFFFFFFFF0000uLL;
      *((_QWORD *)v2 + 2) = v50;
      v11 = ((v50 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    v9 = v52;
    goto LABEL_58;
  }
  *(_DWORD *)(v5 + 80) |= 4u;
  return 0LL;
}
