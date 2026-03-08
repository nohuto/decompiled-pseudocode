/*
 * XREFs of MiHandleTransitionFault @ 0x1402720E0
 * Callers:
 *     MiResolveTransitionFault @ 0x140271760 (MiResolveTransitionFault.c)
 * Callees:
 *     MiLocateAddress @ 0x140228680 (MiLocateAddress.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     MiUnlinkPageFromListEx @ 0x140264100 (MiUnlinkPageFromListEx.c)
 *     MiMigratePfn @ 0x140272370 (MiMigratePfn.c)
 *     MiUnlockProtoPoolPage @ 0x1402861D0 (MiUnlockProtoPoolPage.c)
 *     MiFreeInPageSupportBlock @ 0x140287B5C (MiFreeInPageSupportBlock.c)
 *     MiUnlockVadTree @ 0x140330EC8 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1403334B4 (MiLockVadTree.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     MiDiscardTransitionPteEx @ 0x14064E040 (MiDiscardTransitionPteEx.c)
 *     MiMakeTransitionHeatBatch @ 0x140651CD4 (MiMakeTransitionHeatBatch.c)
 *     MiIdealClusterPage @ 0x140667EB0 (MiIdealClusterPage.c)
 */

__int64 __fastcall MiHandleTransitionFault(
        unsigned __int64 *a1,
        ULONG_PTR BugCheckParameter2,
        __int64 a3,
        _QWORD *a4,
        unsigned __int64 a5,
        int a6,
        __int64 **a7)
{
  __int64 **v7; // r15
  __int64 v8; // rbx
  _QWORD *v9; // r14
  __int64 v10; // r10
  void *BugCheckParameter4; // rdi
  unsigned __int64 v13; // rdx
  __int16 v14; // cx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 **v17; // r12
  unsigned __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 **v21; // r13
  unsigned __int64 v22; // rdx
  __int64 v23; // r12
  __int64 v24; // r12
  __int64 v25; // rbx
  __int64 v26; // rdx
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // r8
  __int64 v29; // rax
  ULONG_PTR v31; // r9
  __int64 TransitionHeatBatch; // rax
  __int64 v33; // rdx
  __int64 **Address; // rax
  __int64 v35; // rdx
  __int64 **v36; // rax
  __int64 v37; // rdx
  int v38; // eax
  __int64 **v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 *v43; // rbx
  int v44; // [rsp+88h] [rbp+10h]
  __int64 v46; // [rsp+98h] [rbp+20h] BYREF

  v44 = BugCheckParameter2;
  v7 = a7;
  v8 = a3;
  v9 = (_QWORD *)a5;
  v10 = a4[5];
  BugCheckParameter4 = a4;
  LOBYTE(v46) = 0;
  *a7 = 0LL;
  *v9 = 0LL;
  if ( v10 >= 0 )
  {
    v31 = a4[1];
    if ( BugCheckParameter2 != (v31 | 0x8000000000000000uLL) )
      KeBugCheckEx(0x1Au, 0x888AuLL, BugCheckParameter2, v31, (ULONG_PTR)BugCheckParameter4);
  }
  v13 = *((_QWORD *)BugCheckParameter4 + 2);
  v14 = v13;
  v15 = v13 >> 11;
  v16 = v13 >> 3;
  v17 = 0LL;
  a7 = 0LL;
  v18 = *a1;
  v19 = 1LL;
  if ( (v14 & 0x400) != 0 )
    LOBYTE(v16) = v15;
  a5 = *a1;
  if ( (v16 & 1) != 0 )
  {
    if ( v18 <= 0x7FFFFFFEFFFFLL && v10 >= 0 )
    {
      MiLockVadTree(1LL);
      Address = MiLocateAddress(a5);
      LOBYTE(v35) = 17;
      a7 = Address;
      v17 = Address;
      MiUnlockVadTree(1LL, v35);
    }
    TransitionHeatBatch = MiMakeTransitionHeatBatch(BugCheckParameter4, v17, 0LL);
    a1[14] = TransitionHeatBatch;
    if ( TransitionHeatBatch )
      goto LABEL_54;
    v18 = a5;
  }
  v20 = *((_QWORD *)BugCheckParameter4 + 5);
  v21 = v17;
  if ( v20 >= 0
    || (v22 = *((_QWORD *)BugCheckParameter4 + 2), (v22 & 0x400) == 0)
    || (((unsigned __int64)v20 >> 60) & 7) == 3 )
  {
LABEL_16:
    if ( (MiUnlinkPageFromListEx((ULONG_PTR)BugCheckParameter4, 0LL) & 3) == 0 )
    {
      v26 = *((_QWORD *)BugCheckParameter4 + 5);
      if ( (v26 & 0x20000000000000LL) != 0 )
      {
LABEL_24:
        v29 = *((_QWORD *)BugCheckParameter4 + 3);
        ++*((_WORD *)BugCheckParameter4 + 16);
        *((_QWORD *)BugCheckParameter4 + 3) = v29 & 0xC000000000000000uLL | 1;
        *((_BYTE *)BugCheckParameter4 + 34) = *((_BYTE *)BugCheckParameter4 + 34) & 0xF8 | 6;
        return 0LL;
      }
      v27 = a5;
      if ( a5 > 0x7FFFFFFEFFFFLL || *((_WORD *)BugCheckParameter4 + 16) )
        goto LABEL_22;
      v28 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28];
      if ( v26 >= 0 )
      {
        if ( !*(_QWORD *)(v28 + 408) )
          goto LABEL_22;
      }
      else if ( (*((_DWORD *)BugCheckParameter4 + 4) & 0x400LL) != 0 || !*(_QWORD *)(v28 + 416) )
      {
        goto LABEL_22;
      }
      if ( v17
        || (MiLockVadTree(1LL), v39 = MiLocateAddress(v27), LOBYTE(v40) = 17, v17 = v39, MiUnlockVadTree(1LL, v40), v17) )
      {
        if ( MiVadPageSizes[(*((_DWORD *)v17 + 12) >> 19) & 3] == 16 )
        {
          if ( *((__int64 *)BugCheckParameter4 + 5) < 0 )
          {
            if ( ((_DWORD)v17[6] & 0x200000) != 0 )
              goto LABEL_68;
LABEL_63:
            v41 = MiIdealClusterPage((int)a1, (int)v17, v44, a6, BugCheckParameter4, v8, (__int64)&v46);
            v19 = v41;
            if ( v41 )
            {
              if ( BugCheckParameter4 != (void *)v41 )
              {
                BugCheckParameter4 = (void *)v41;
                *v9 = v41;
              }
            }
            else
            {
              _InterlockedAnd64((volatile signed __int64 *)BugCheckParameter4 + 3, 0x7FFFFFFFFFFFFFFFuLL);
              if ( v8 )
              {
                LOBYTE(v42) = 17;
                MiUnlockProtoPoolPage(v8, v42);
              }
            }
            goto LABEL_68;
          }
          if ( ((_DWORD)v17[6] & 0x200000) != 0 )
            goto LABEL_63;
        }
      }
LABEL_68:
      if ( (_BYTE)v46 )
      {
LABEL_23:
        if ( !v19 )
          goto LABEL_70;
        goto LABEL_24;
      }
      if ( !v19 )
      {
LABEL_70:
        v43 = *v7;
        if ( *v7 )
        {
          if ( *((int *)v43 + 44) > 1 )
            KeSetEvent((PRKEVENT)(v43 + 7), 0, 0);
          MiFreeInPageSupportBlock((PSLIST_ENTRY)v43);
          *v7 = 0LL;
        }
        return 3221226548LL;
      }
LABEL_22:
      v19 = MiMigratePfn(a1, BugCheckParameter4, v8, v7);
      *v9 = v19;
      BugCheckParameter4 = (void *)v19;
      goto LABEL_23;
    }
    MiDiscardTransitionPteEx(BugCheckParameter4, 0LL);
LABEL_54:
    _InterlockedAnd64((volatile signed __int64 *)BugCheckParameter4 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    if ( v8 )
    {
      LOBYTE(v33) = 17;
      MiUnlockProtoPoolPage(v8, v33);
    }
    return 3221226548LL;
  }
  v23 = *((_QWORD *)BugCheckParameter4 + 2);
  if ( qword_140C657C0 && (v22 & 0x10) == 0 )
    v23 = ~qword_140C657C0 & v22;
  v24 = v23 >> 16;
  if ( (*(_DWORD *)(*(_QWORD *)v24 + 56LL) & 0x20) == 0 )
  {
LABEL_15:
    v17 = a7;
    goto LABEL_16;
  }
  v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v24 + 96LL) + 40LL);
  if ( !v25 || (v25 & 0xFFFFFFFFFFFFFFF8uLL) == 8 || (v25 & 3) == 2 )
  {
LABEL_14:
    v8 = a3;
    goto LABEL_15;
  }
  if ( v18 >= 0xFFFF800000000000uLL )
  {
    v22 >>= 5;
    if ( (((v22 & 2) != 0) & _bittest((const signed __int32 *)&MiFlags, 0xFu)) == 0 )
      goto LABEL_14;
LABEL_44:
    if ( !v21 )
      goto LABEL_50;
    goto LABEL_45;
  }
  if ( !a7 )
  {
    MiLockVadTree(1LL);
    v36 = MiLocateAddress(a5);
    LOBYTE(v37) = 17;
    v21 = v36;
    MiUnlockVadTree(1LL, v37);
    goto LABEL_44;
  }
LABEL_45:
  v38 = *((_DWORD *)v21 + 12);
  if ( (v38 & 0x70) == 0x20
    && ((v38 & 0xF80) == 0x80
     || ((_DWORD)v21[8] & 0x8000000) != 0 && (v25 & 4) == 0
     || (MiFlags & 0x400) != 0 && (*(_BYTE *)(v24 + 34) & 2) != 0) )
  {
    goto LABEL_14;
  }
LABEL_50:
  _InterlockedAnd64((volatile signed __int64 *)BugCheckParameter4 + 3, 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    LOBYTE(v22) = 17;
    MiUnlockProtoPoolPage(a3, v22);
  }
  return 3221226536LL;
}
