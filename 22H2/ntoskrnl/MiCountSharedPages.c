/*
 * XREFs of MiCountSharedPages @ 0x1402E2400
 * Callers:
 *     MiDeletePartialVad @ 0x14027DF5C (MiDeletePartialVad.c)
 *     MiSetProtectionOnSection @ 0x1402B3300 (MiSetProtectionOnSection.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14053EB0C (MiPrepareImagePagesForHotPatch.c)
 * Callees:
 *     MiWalkPageTables @ 0x140209280 (MiWalkPageTables.c)
 *     MiFastLockLeafPageTable @ 0x14020E690 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x14027D77C (MiGetAnyMultiplexedVm.c)
 *     MiGetLeafVa @ 0x1402AD4F0 (MiGetLeafVa.c)
 *     MiGetProtoPteAddress @ 0x1402B11D0 (MiGetProtoPteAddress.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiPteNeedsCommitCharge @ 0x1402E2938 (MiPteNeedsCommitCharge.c)
 *     MiIsPrototypePteVadLookup @ 0x1402E3470 (MiIsPrototypePteVadLookup.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall MiCountSharedPages(__int64 a1, __int64 a2, unsigned __int64 a3, _DWORD *a4)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // r14
  unsigned __int8 v8; // al
  unsigned __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // r12
  unsigned __int64 v12; // rbx
  unsigned __int64 LeafVa; // rax
  char *AnyMultiplexedVm; // rsi
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // r12
  __int64 Process; // rcx
  char v22; // al
  unsigned __int64 v23; // rsi
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rbx
  unsigned __int8 v33; // [rsp+20h] [rbp-E0h]
  __int64 v34; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 *v35; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v36; // [rsp+38h] [rbp-C8h]
  __int64 v37; // [rsp+40h] [rbp-C0h]
  __int128 v38; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+60h] [rbp-A0h]
  _QWORD v41[22]; // [rsp+70h] [rbp-90h] BYREF

  v6 = a2;
  v7 = 0LL;
  v35 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v8 = MiLockWorkingSetShared((__int64)v35, a2, a3, a4);
  v33 = v8;
  if ( v6 > a3 )
    goto LABEL_73;
  v9 = v6;
  v10 = 0LL;
  v37 = 0LL;
  v11 = (__int64)(a3 << 25) >> 16;
  v40 = v11;
LABEL_3:
  v38 = 0LL;
  memset((char *)v41 + 2, 0, 0xAEuLL);
  LOWORD(v41[0]) = 2145;
  v12 = (__int64)((v9 << 25) - v10) >> 16;
  LeafVa = MiGetLeafVa(v12);
  if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_140C4FB38 && LeafVa <= qword_140C4E368 )
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  else
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v15 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v12, 0);
  if ( v15 )
  {
    LODWORD(v38) = v15 - 1;
    v18 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v38 + 1) = v18;
  }
  else
  {
    LOWORD(v41[0]) |= 4u;
    v41[21] = &v38;
    v41[2] = 0LL;
    v41[3] = AnyMultiplexedVm;
    BYTE2(v41[0]) = BYTE2(v41[0]) & 0xE3 | 4;
    v41[20] = MiGetNextPageTableTail;
    BYTE6(v41[0]) = v33;
    v41[4] = v12;
    v41[5] = v11;
    MiWalkPageTables((__int64)v41);
    v18 = *((_QWORD *)&v38 + 1);
  }
  if ( v18 )
  {
    v20 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v19 = a3 + 8;
  }
  else
  {
    v19 = a3 + 8;
    v20 = 0LL;
    v18 = a3 + 8;
  }
  Process = *(_DWORD *)(a1 + 48) >> 7;
  v22 = *(_DWORD *)(a1 + 48) & 0x70;
  v36 = v20;
  if ( v22 != 32 || (Process & 0x1F) == 1 )
  {
    Process &= 5u;
    if ( (_BYTE)Process != 5 )
      v7 += (__int64)(v18 - v6) >> 3;
    v6 = v18;
  }
  else
  {
    for ( ; v6 < v18; v6 += 8LL )
    {
      if ( (unsigned int)MiPteNeedsCommitCharge(a1, v6) == 1 )
        ++v7;
    }
  }
  if ( v6 != v19 )
  {
    v23 = (__int64)((v6 << 25) - v37) >> 16;
    while ( 1 )
    {
      v24 = *(_QWORD *)v6;
      if ( v6 >= 0xFFFFF6FB7DBED000uLL
        && v6 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(Process, 0xFFFFF6FB7DBED7F8uLL, v16, v17)
        && (v24 & 1) != 0
        && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        v25 = *(_QWORD *)(Process + 1928);
        if ( v25 )
        {
          v26 = *(_QWORD *)(v25 + 8 * ((v6 >> 3) & 0x1FF));
          v27 = v24 | 0x20;
          Process = (unsigned __int8)v26;
          LOBYTE(Process) = v26 & 0x20;
          if ( (v26 & 0x20) == 0 )
            v27 = v24;
          v24 = v27;
          if ( (v26 & 0x42) != 0 )
            v24 = v27 | 0x42;
        }
      }
      v34 = v24;
      if ( v24 )
      {
        if ( (v24 & 1) != 0 )
        {
          if ( (v24 & 0x200) != 0 )
            goto LABEL_66;
          if ( (unsigned __int64)&v34 >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)&v34 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(&v34, 0xFFFFF6FB7DBED7F8uLL, v16, v17)
            && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v29 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v34 >> 3) & 0x1FF));
              v30 = v24 | 0x20;
              if ( (v29 & 0x20) == 0 )
                v30 = v24;
              v24 = v30;
              if ( (v29 & 0x42) != 0 )
                v24 = v30 | 0x42;
            }
          }
          v31 = 48 * (((unsigned __int64)v24 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          if ( !(unsigned int)MI_PFN_IS_PROTO(v31) )
            goto LABEL_66;
          Process = MiGetProtoPteAddress(a1, v23 >> 12, 0, &v39);
          if ( (*(_QWORD *)(v31 + 8) | 0x8000000000000000uLL) != Process )
            goto LABEL_66;
        }
        else
        {
          if ( (v24 & 0x400) == 0 )
            goto LABEL_66;
          if ( (unsigned int)MiIsPrototypePteVadLookup(v24) )
          {
            if ( (v24 & 0xA0) == 0xA0 )
              goto LABEL_66;
          }
          else
          {
            if ( qword_140C4DF40 && (v24 & 0x10) == 0 )
              v24 &= ~qword_140C4DF40;
            if ( v24 >> 16 != MiGetProtoPteAddress(a1, v23 >> 12, 0, &v39)
              || (*(_DWORD *)(a1 + 48) & 0x70) == 0x20 && (unsigned int)MiPteNeedsCommitCharge(a1, v6) != 1 )
            {
              goto LABEL_66;
            }
          }
        }
      }
      else if ( (unsigned int)MiPteNeedsCommitCharge(a1, v6) != 1 )
      {
        goto LABEL_66;
      }
      ++v7;
LABEL_66:
      v6 += 8LL;
      v23 += 4096LL;
      v9 = v6;
      if ( (v6 & 0xFFF) == 0 || v6 > a3 )
      {
        MiUnlockPageTableInternal((__int64)v35, v36);
        v10 = v37;
        v11 = v40;
        if ( v6 > a3 )
          goto LABEL_72;
        goto LABEL_3;
      }
    }
  }
  if ( v20 )
    MiUnlockPageTableInternal((__int64)v35, v20);
LABEL_72:
  v8 = v33;
LABEL_73:
  MiUnlockWorkingSetShared((__int64)v35, v8);
  return v7;
}
