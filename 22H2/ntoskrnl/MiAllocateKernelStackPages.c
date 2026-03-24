/*
 * XREFs of MiAllocateKernelStackPages @ 0x14023E170
 * Callers:
 *     MmCreateKernelStack @ 0x1402AABF0 (MmCreateKernelStack.c)
 *     MmGrowKernelStackEx @ 0x1403244F0 (MmGrowKernelStackEx.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAB0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiGetPage @ 0x1402135D0 (MiGetPage.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiSetNonResidentPteHeat @ 0x14023E120 (MiSetNonResidentPteHeat.c)
 *     MiMarkKernelStack @ 0x14023E770 (MiMarkKernelStack.c)
 *     MiInitializePageColorBase @ 0x14023EBF0 (MiInitializePageColorBase.c)
 *     MiSetPfnTbFlushStamp @ 0x14023FAD0 (MiSetPfnTbFlushStamp.c)
 *     MiProtectionToCacheAttribute @ 0x1402417B0 (MiProtectionToCacheAttribute.c)
 *     PsGetPagePriorityThread @ 0x140242140 (PsGetPagePriorityThread.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiChangePageAttribute @ 0x140284864 (MiChangePageAttribute.c)
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140333FA0 (MiLockNestedPageAtDpcInline.c)
 *     MiReleaseFreshPage @ 0x140357CD4 (MiReleaseFreshPage.c)
 *     MiWaitForFreePage @ 0x14055C13C (MiWaitForFreePage.c)
 */

__int64 __fastcall MiAllocateKernelStackPages(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int a5, char a6)
{
  __int64 v6; // rbp
  __int64 *v7; // r12
  _QWORD *v10; // r14
  signed __int32 v11; // ecx
  unsigned int v12; // esi
  __int64 Page; // rax
  __int64 v14; // rsi
  __int64 ValidPte; // rdi
  unsigned __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // r8
  _DWORD *v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  int v24; // ebp
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // rbx
  _QWORD *v35; // rbx
  unsigned __int64 v36; // rcx
  __int64 v37; // rcx
  unsigned __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rdx
  _KPROCESS *Process; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  struct _LIST_ENTRY *v44; // rax
  __int64 v45; // rax
  struct _LIST_ENTRY *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v51; // rbx
  unsigned int Queue; // ebp
  unsigned int v53; // ebp
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  __int64 v57; // rdx
  int v58; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v59; // [rsp+24h] [rbp-74h]
  int v60; // [rsp+28h] [rbp-70h]
  int v61; // [rsp+2Ch] [rbp-6Ch]
  unsigned __int64 v62; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v63; // [rsp+38h] [rbp-60h] BYREF
  __int128 v64; // [rsp+40h] [rbp-58h] BYREF
  __int64 v65; // [rsp+50h] [rbp-48h]
  unsigned __int64 v66; // [rsp+58h] [rbp-40h]
  unsigned __int8 v67; // [rsp+B0h] [rbp+18h]

  v6 = a3;
  v7 = a2;
  v64 = 0LL;
  if ( !a3 )
    return 1LL;
  v10 = 0LL;
  v66 = (unsigned __int64)&a2[a3];
  MiInitializePageColorBase(0LL, (unsigned int)(a5 + 1), &v64);
  while ( 1 )
  {
    v11 = _InterlockedExchangeAdd((volatile signed __int32 *)v64, 1u);
    v12 = DWORD2(v64) & v11 | HIDWORD(v64);
    Page = MiGetPage(a1, v12, 0LL);
    if ( Page == -1 )
      break;
LABEL_7:
    v14 = 48 * Page - 0x58000000000LL;
    *(_QWORD *)v14 = v10;
    v10 = (_QWORD *)v14;
    if ( !--v6 )
    {
      ValidPte = MiMakeValidPte(v7, 0LL, 2684354564LL);
      v16 = 0LL;
      v67 = MiLockWorkingSetShared((__int64)&unk_140C4F500, v17, v18, v19);
      v59 = MiProtectionToCacheAttribute(4LL, v20, v21, v22);
      v24 = MiPteInShadowRange(&v63, v23);
      v61 = v24;
      while ( 1 )
      {
        v65 = *(_QWORD *)v14;
        v25 = (ValidPte ^ (((v14 + 0x58000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL;
        ValidPte ^= v25;
        if ( v16 )
        {
          if ( ((unsigned __int16)v7 & 0xFFF) != 0 )
            goto LABEL_13;
          MiUnlockPageTableInternal(&unk_140C4F500, v16);
        }
        v16 = (((unsigned __int64)v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal((__int64)&unk_140C4F500, v16, 0LL);
LABEL_13:
        v26 = *v7;
        v60 = MiPteInShadowRange(v7, v25);
        if ( v60
          && (unsigned int)MiPteHasShadow(v28, v27, v29, v30)
          && (v26 & 1) != 0
          && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v32 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)v7 >> 3) & 0x1FF));
            v33 = v26 | 0x20;
            if ( (v32 & 0x20) == 0 )
              v33 = v26;
            v26 = v33;
            if ( (v32 & 0x42) != 0 )
              v26 = v33 | 0x42;
          }
        }
        if ( v26 )
          v34 = v26 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
        else
          v34 = MiSwizzleInvalidPte(128LL);
        v62 = v34;
        MiSetNonResidentPteHeat(&v62, 0);
        v36 = v62;
        *(_QWORD *)v14 &= 0xFFFFFFFFFFFFC00FuLL;
        *(_QWORD *)(v14 + 16) = v36 & 0xFFFFFFFFFC00FFFFuLL;
        v37 = ((unsigned __int64)v7 >> 9) & 0x7FFFFFFFF8LL;
        *(_WORD *)(v14 + 32) = 1;
        v38 = *(_QWORD *)(v37 - 0x98000000000LL);
        if ( (unsigned int)MiPteInShadowRange(v37 - 0x98000000000LL, v39)
          && (unsigned int)MiPteHasShadow(Process, v40, v42, v43)
          && (v38 & 1) != 0
          && ((v38 & 0x20) == 0 || (v38 & 0x42) == 0) )
        {
          v40 = ((unsigned __int64)v7 >> 9) & 0xFFFFFFF8;
          Process = KeGetCurrentThread()->ApcState.Process;
          v44 = Process[1].ProcessListEntry.Flink;
          if ( v44 )
          {
            v45 = *((_QWORD *)&v44->Flink + (((((unsigned __int64)v7 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
            v40 = v38 | 0x20;
            Process = (_KPROCESS *)(unsigned __int8)v45;
            LOBYTE(Process) = v45 & 0x20;
            if ( (v45 & 0x20) == 0 )
              v40 = v38;
            v38 = v40;
            if ( (v45 & 0x42) != 0 )
              v38 = v40 | 0x42;
          }
        }
        v63 = v38;
        if ( v24
          && (unsigned int)MiPteHasShadow(Process, v40, v42, v43)
          && (v38 & 1) != 0
          && ((v38 & 0x20) == 0 || (v38 & 0x42) == 0) )
        {
          v46 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v46 )
          {
            v47 = *((_QWORD *)&v46->Flink + (((unsigned __int64)&v63 >> 3) & 0x1FF));
            v48 = v38 | 0x20;
            if ( (v47 & 0x20) == 0 )
              v48 = v38;
            v38 = v48;
            if ( (v47 & 0x42) != 0 )
              v38 = v48 | 0x42;
          }
        }
        v49 = (v38 >> 12) & 0xFFFFFFFFFLL;
        *(_QWORD *)(v14 + 40) = v49 | *(_QWORD *)(v14 + 40) & 0xFFFFFFF000000000uLL;
        CurrentThread = KeGetCurrentThread();
        v51 = 48 * v49 - 0x58000000000LL;
        Queue = (unsigned int)CurrentThread[1].Queue;
        if ( (Queue & 0x100) != 0 )
          v53 = Queue >> 9;
        else
          LOBYTE(v53) = PsGetPagePriorityThread(CurrentThread);
        v58 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v58);
          while ( *(__int64 *)(v14 + 24) < 0 );
        }
        MiLockNestedPageAtDpcInline(v51);
        *(_QWORD *)(v51 + 24) ^= (*(_QWORD *)(v51 + 24) ^ (*(_QWORD *)(v51 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( *(unsigned __int8 *)(v14 + 34) >> 6 != v59 )
          MiChangePageAttribute(v14, v59, 1LL);
        MiSetPfnTbFlushStamp(v14, 0LL, 1LL);
        v56 = *(_QWORD *)(v14 + 24);
        *(_BYTE *)(v14 + 35) ^= (*(_BYTE *)(v14 + 35) ^ v53) & 7;
        *(_QWORD *)(v14 + 8) = v7;
        *(_QWORD *)(v14 + 24) = v56 & 0xC000000000000000uLL | 1;
        *(_BYTE *)(v14 + 34) = *(_BYTE *)(v14 + 34) & 0xF8 | 6;
        *(_BYTE *)(v14 + 34) |= 0x10u;
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v57 = ValidPte;
        if ( v60 )
        {
          if ( (unsigned int)MiPteHasShadow(0xC000000000000001uLL, ValidPte, v54, v55) )
          {
            if ( !HIBYTE(word_140C4E008) && (ValidPte & 1) != 0 )
              v57 |= 0x8000000000000000uLL;
            *v7 = v57;
            MiWritePteShadow(v7, v57);
            goto LABEL_67;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ValidPte & 1) != 0 )
          {
            v57 |= 0x8000000000000000uLL;
          }
        }
        *v7 = v57;
LABEL_67:
        MiMarkKernelStack(v7, a4);
        v14 = v65;
        ++v7;
        v24 = v61;
        if ( (unsigned __int64)v7 >= v66 )
        {
          if ( v16 )
            MiUnlockPageTableInternal(&unk_140C4F500, v16);
          MiUnlockWorkingSetShared((__int64)&unk_140C4F500, v67);
          return 1LL;
        }
      }
    }
  }
  while ( (a6 & 2) == 0 )
  {
    MiWaitForFreePage(a1);
    Page = MiGetPage(a1, v12, 0LL);
    if ( Page != -1 )
      goto LABEL_7;
  }
  if ( v10 )
  {
    do
    {
      v35 = (_QWORD *)*v10;
      MiReleaseFreshPage(v10);
      v10 = v35;
    }
    while ( v35 );
  }
  return 0LL;
}
