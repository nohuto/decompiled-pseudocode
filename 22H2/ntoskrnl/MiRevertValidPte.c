/*
 * XREFs of MiRevertValidPte @ 0x1402B4990
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x140240500 (MiSetReadOnlyOnSectionView.c)
 *     MiProtectPrivateMemory @ 0x14028E080 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x1402B3300 (MiSetProtectionOnSection.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14025A9BC (MiCaptureWriteWatchDirtyBit.c)
 *     MiGetPagePrivilege @ 0x1402A8D80 (MiGetPagePrivilege.c)
 *     MiGetLeafVa @ 0x1402AD4F0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402EDDE0 (MiInsertLargeTbFlushEntry.c)
 *     MiCapturePageFileInfoInline @ 0x1402FB540 (MiCapturePageFileInfoInline.c)
 *     MiUserPdeOrAbove @ 0x140303E44 (MiUserPdeOrAbove.c)
 *     MiRotatedToFrameBuffer @ 0x140307C88 (MiRotatedToFrameBuffer.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiMarkPfnVerified @ 0x140310124 (MiMarkPfnVerified.c)
 *     MiReleasePageFileInfo @ 0x140330CC0 (MiReleasePageFileInfo.c)
 *     MiRewritePteWithLockBit @ 0x1403B65B8 (MiRewritePteWithLockBit.c)
 */

struct _KTHREAD *__fastcall MiRevertValidPte(__int64 a1, unsigned __int64 a2, int a3, unsigned __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r15
  unsigned __int64 Process; // rdx
  __int64 v7; // r11
  int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r14
  __int64 v13; // rsi
  unsigned __int64 v14; // r13
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r14
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rbp
  int v21; // eax
  signed __int64 v22; // rbx
  unsigned __int64 v23; // r14
  int v24; // ebp
  BOOL v25; // r13d
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rdi
  struct _KTHREAD *result; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r8
  bool v34; // zf
  __int64 v35; // r9
  char v36; // si
  __int64 v37; // rbx
  __int64 v38; // rbx
  __int64 v39; // rdi
  unsigned __int8 v40; // r9
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // r10
  __int64 v43; // r10
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  ULONG_PTR v47; // r13
  volatile signed __int32 *v48; // rbx
  __int64 v49; // rbp
  int v50; // eax
  unsigned __int64 LeafVa; // rax
  __int64 v52; // rax
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // r8
  __int64 v56; // rax
  int v57; // [rsp+20h] [rbp-78h] BYREF
  int v58; // [rsp+24h] [rbp-74h] BYREF
  __int64 v59; // [rsp+28h] [rbp-70h]
  __int64 v60; // [rsp+30h] [rbp-68h]
  __int64 v61; // [rsp+38h] [rbp-60h]
  __int64 v62; // [rsp+40h] [rbp-58h]
  unsigned __int64 v63; // [rsp+48h] [rbp-50h]
  unsigned int v66; // [rsp+B0h] [rbp+18h]
  unsigned int v67; // [rsp+B8h] [rbp+20h]

  v5 = a2;
  Process = 0LL;
  v67 = 0;
  v7 = a1;
  v9 = a3;
  if ( (*(_DWORD *)(a1 + 48) & 0x500000) == 0x500000 )
  {
    v42 = ((unsigned __int64)*(unsigned int *)(a1 + 48) >> 18) & 3;
    v11 = (unsigned int)MiVadPageIndices[v42];
    v66 = v11;
    if ( (unsigned int)v11 <= 1 )
      v67 = 2 - v11;
    v10 = MiVadPageSizes[v42];
    v43 = 16LL;
    v12 = v10;
    if ( v10 == 16 )
      v12 = 1LL;
    else
      v43 = 1LL;
    v61 = v43;
  }
  else
  {
    v10 = 1LL;
    v11 = 3LL;
    v66 = 3;
    v12 = 1LL;
    v61 = 1LL;
  }
  v60 = v10;
  v13 = *(_QWORD *)v5;
  v62 = *(_QWORD *)v5;
  v14 = (__int64)(v5 << 25) >> 16;
  v63 = v14;
  if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v13 & 1) != 0
      && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v45 = *((_QWORD *)&Flink->Flink + ((v5 >> 3) & 0x1FF));
        v46 = v13 | 0x20;
        if ( (v45 & 0x20) == 0 )
          v46 = v13;
        v13 = v46;
        if ( (v45 & 0x42) != 0 )
          v13 = v46 | 0x42;
      }
      Process = 0LL;
    }
    v62 = v13;
  }
  v15 = a3 & 0x18;
  if ( (v13 & 0x18) == 8 )
  {
    v9 = a3 | 0x18;
    if ( v15 == 24 )
      v9 = a3;
  }
  else if ( (v13 & 0x10) != 0 )
  {
    if ( v15 != 8 )
      v9 = a3 & 0xFFFFFFE7 | 8;
  }
  else if ( (a3 & 0x18) != 0 )
  {
    v9 = a3 & 0xFFFFFFE7;
  }
  if ( a4 <= 0xFFFFFFFFFLL
    && (v16 = 0x4000000000000LL, (*(_QWORD *)(48 * a4 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0) )
  {
    v17 = 48 * a4 - 0x58000000000LL;
    v59 = v17;
    if ( (MiFlags & 0x40000) != 0 && (v9 & 2) != 0 )
    {
      if ( v12 )
      {
        v47 = 48 * a4 - 0x58000000000LL;
        v48 = (volatile signed __int32 *)(v17 + 24);
        v49 = v12;
        do
        {
          v57 = 0;
          while ( _interlockedbittestandset64(v48, 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v57, Process, v16, v11);
            while ( *(__int64 *)v48 < 0 );
          }
          if ( !(unsigned int)MiGetPagePrivilege(v47, 1, 0LL) )
            MiMarkPfnVerified(v47, 7LL);
          v16 = 0x7FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)v48, 0x7FFFFFFFFFFFFFFFuLL);
          v47 += 48LL;
          v48 += 12;
          --v49;
        }
        while ( v49 );
        v5 = a2;
        Process = 0LL;
        LODWORD(v11) = v66;
        v7 = a1;
        v59 = v47;
        v17 = v47;
        v14 = v63;
      }
      v17 += -48 * v12;
      v59 = v17;
    }
  }
  else
  {
    v17 = 0LL;
    v59 = 0LL;
  }
  if ( (unsigned int)v11 <= 1 )
    v9 |= 0x4000000u;
  v18 = v9 & 0x1F;
  v19 = ((a4 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v18] & 0xFFFF000000000E7FuLL | 0x21;
  if ( v5 < 0xFFFFF68000000000uLL || v5 > 0xFFFFF6FFFFFFFFFFuLL )
  {
LABEL_122:
    v19 |= 0x100uLL;
    goto LABEL_23;
  }
  if ( v5 >= 0xFFFFF6FB40000000uLL && v5 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( v5 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v19 = ((a4 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v18] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL;
    }
    else if ( (v9 & 0x4000000) == 0 )
    {
      v19 = ((a4 & 0xFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v18] & 0x7FFF000000000E7FLL | 0x21;
    }
    v50 = MiUserPdeOrAbove(v5, 0LL, 0x7FFFFFFFFFFFFFFFLL, 0x8000000000000000uLL);
    v17 = v59;
    v7 = a1;
    if ( v50 )
      v19 |= 4uLL;
    Process = 0LL;
  }
  if ( v5 <= 0xFFFFF6BFFFFFFF78uLL )
    v19 |= 4uLL;
  if ( (v9 & 0x4000000) != 0 )
  {
    LeafVa = MiGetLeafVa(v14);
    v17 = v59;
    v20 = LeafVa;
    Process = 0LL;
  }
  else
  {
    v20 = v14;
  }
  if ( v20 < 0xFFFF800000000000uLL )
  {
    v21 = HIBYTE(word_140C4E008);
    goto LABEL_22;
  }
  if ( (unsigned int)MiGetSystemRegionType(v20) != 1 && (v20 < 0xFFFFF68000000000uLL || v20 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( v20 < qword_140C4FB38 || (v21 = HIBYTE(word_140C4E008), v20 > qword_140C4E368) )
      v21 = (unsigned __int8)word_140C4E008;
    v7 = a1;
    Process = 0LL;
    v17 = v59;
LABEL_22:
    if ( !v21 )
      goto LABEL_23;
    goto LABEL_122;
  }
  v7 = a1;
  Process = 0LL;
  v17 = v59;
LABEL_23:
  if ( v9 < 0 && (v9 & 5) == 4 )
    v19 |= 0x42uLL;
  if ( (v9 & 0x40000000) != 0 )
    v19 &= ~4uLL;
  if ( (v9 & 0x20000000) != 0 )
    v19 ^= ((unsigned __int16)v19 ^ (unsigned __int16)((unsigned __int8)word_140C4E008 << 8)) & 0x100;
  if ( (v9 & 0x8000000) != 0 )
    v19 &= ~0x100uLL;
  if ( (v9 & 0x4000000) != 0 )
    v19 |= 0x80uLL;
  v22 = v19 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  if ( v17 )
  {
    if ( (MiFlags & 0x2000000) != 0 && (v13 & 0x42) == 0x40 )
      v22 |= 0x40uLL;
  }
  else
  {
    v52 = v22 | 0x42;
    if ( (v9 & 4) == 0 )
      v52 = v22;
    v22 = v52;
  }
  v23 = v5;
  v24 = 0;
  v25 = (*(_DWORD *)(v7 + 48) & 0x300000) == 3145728;
  do
  {
    if ( v25 && (MI_READ_PTE_LOCK_FREE(v23) & 0x42) != 0 )
    {
      v41 = MiGetLeafVa(v23);
      MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, v41, a1);
      v25 = 0;
    }
    v22 ^= (v22 ^ (a4 << 12)) & 0xFFFFFFFFF000LL;
    if ( !v24 )
    {
      if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
      {
        v26 = *(_QWORD *)v23;
        Process = 0xFFFFF6FB7DBED000uLL;
        if ( v23 >= 0xFFFFF6FB7DBED000uLL )
        {
          Process = 0xFFFFF6FB7DBED7F8uLL;
          if ( v23 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
          {
            Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            if ( *(_BYTE *)(Process + 912) != 1 && (v26 & 1) != 0 && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
            {
              Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
              v53 = *(_QWORD *)(Process + 1928);
              if ( v53 )
              {
                v54 = *(_QWORD *)(v53 + 8 * ((v23 >> 3) & 0x1FF));
                v55 = v26 | 0x20;
                Process = (unsigned __int8)v54;
                if ( (v54 & 0x20) == 0 )
                  v55 = *(_QWORD *)v23;
                v26 = v55;
                if ( (v54 & 0x42) != 0 )
                  v26 = v55 | 0x42;
              }
            }
          }
        }
        LOBYTE(Process) = (v26 & 0x40) != 0;
        if ( ((unsigned __int8)Process & ((v22 & 0x40) == 0)) != 0
          || (LOBYTE(Process) = (v26 & 2) != 0, ((unsigned __int8)Process & ((v22 & 2) == 0)) != 0)
          || v22 < 0 && v26 >= 0 )
        {
          v24 = 1;
        }
      }
      else
      {
        v24 = 1;
      }
    }
    ++a4;
    if ( v66 <= 1 )
    {
      result = (struct _KTHREAD *)MiRewritePteWithLockBit(
                                    &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6],
                                    v23,
                                    v22);
    }
    else
    {
      v27 = *(_QWORD *)v23;
      if ( v23 >= 0xFFFFF6FB7DBED000uLL
        && v23 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v27 & 1) != 0
        && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
      {
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Process )
        {
          v56 = *(_QWORD *)(Process + 8 * ((v23 >> 3) & 0x1FF));
          Process = v27 | 0x20;
          if ( (v56 & 0x20) == 0 )
            Process = *(_QWORD *)v23;
          v27 = Process;
          if ( (v56 & 0x42) != 0 )
            v27 = Process | 0x42;
        }
      }
      v28 = v22 ^ (v22 ^ v27) & 0xF00000000000000LL ^ (v22 ^ (v22 ^ v27) & 0xF00000000000000LL ^ v27) & 0x7000000000000000LL;
      result = (struct _KTHREAD *)MiPteInShadowRange(v23, Process);
      if ( !(_DWORD)result )
        goto LABEL_48;
      if ( !(unsigned int)MiPteHasShadow(v30, Process, v31, v32) )
      {
        result = KeGetCurrentThread();
        if ( (HIDWORD(result->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v28 & 1) != 0 )
        {
          result = (struct _KTHREAD *)0x8000000000000000LL;
          v28 |= 0x8000000000000000uLL;
        }
LABEL_48:
        *(_QWORD *)v23 = v28;
        goto LABEL_49;
      }
      if ( !HIBYTE(word_140C4E008) && (v28 & 1) != 0 )
        v28 |= 0x8000000000000000uLL;
      *(_QWORD *)v23 = v28;
      result = (struct _KTHREAD *)MiWritePteShadow(v23, v28);
    }
LABEL_49:
    v23 += 8LL;
    v33 = 0xF00000000000000LL;
    v34 = v61-- == 1;
    v35 = 0x7000000000000000LL;
  }
  while ( !v34 );
  v36 = v62;
  if ( !v24 )
    goto LABEL_51;
  if ( v67 )
  {
    result = (struct _KTHREAD *)MiInsertLargeTbFlushEntry(a5, v67, a2);
LABEL_51:
    v37 = v60;
  }
  else
  {
    v37 = v60;
    result = (struct _KTHREAD *)MiInsertTbFlushEntry(a5, v63, v60, 0LL);
  }
  if ( v37 == 1 && (v36 & 0x42) != 0 )
  {
    v38 = v59;
    if ( v59 )
    {
      if ( (*(_DWORD *)(a1 + 48) & 0x70) != 0x40
        || (result = (struct _KTHREAD *)MiRotatedToFrameBuffer(a2), (_DWORD)result) )
      {
        v39 = 0LL;
        v58 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v58, Process, v33, v35);
          while ( *(__int64 *)(v38 + 24) < 0 );
        }
        v40 = *(_BYTE *)(v38 + 34);
        result = 0LL;
        if ( (v40 & 0x10) == 0 )
        {
          if ( (!_bittest64((const signed __int64 *)(v38 + 16), 0xAu) & (unsigned __int8)~(v40 >> 3)) != 0 )
          {
            result = (struct _KTHREAD *)MiCapturePageFileInfoInline(v38 + 16, 1LL, 0LL);
            v40 = *(_BYTE *)(v38 + 34);
          }
          *(_BYTE *)(v38 + 34) = v40 | 0x10;
          if ( result )
            v39 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v38 + 40) >> 39) & 0x3FFLL));
        }
        _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( result )
          return (struct _KTHREAD *)MiReleasePageFileInfo(v39, result, 1LL);
      }
    }
  }
  return result;
}
