/*
 * XREFs of MiTerminateWsle @ 0x1402B7440
 * Callers:
 *     MiDecommitPages @ 0x1402B4EB0 (MiDecommitPages.c)
 *     MiRemoveSystemImagePage @ 0x14031AD48 (MiRemoveSystemImagePage.c)
 *     MiDeleteEmptyPageTable @ 0x1403F4060 (MiDeleteEmptyPageTable.c)
 * Callees:
 *     MiEvictPageTableLock @ 0x14028CCA0 (MiEvictPageTableLock.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1402B73B0 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiRemoveWsle @ 0x1402B9670 (MiRemoveWsle.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiCountWslesInPageTable @ 0x1402DAFF0 (MiCountWslesInPageTable.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiUnlockWsle @ 0x140338C2C (MiUnlockWsle.c)
 *     MiGetWsleContents @ 0x140339D50 (MiGetWsleContents.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiTerminateWsle(__int64 a1, unsigned __int64 a2, char a3, int *a4)
{
  int v4; // edi
  int v6; // r14d
  BOOL v7; // r15d
  int v8; // esi
  __int64 *v9; // r13
  unsigned __int64 v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // rdx
  _KPROCESS *Process; // rcx
  __int64 v14; // r9
  __int64 v15; // r8
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  _BYTE *v19; // r9
  unsigned __int8 WsleContents; // bl
  __int64 v21; // r12
  unsigned __int64 v23; // rdx
  struct _LIST_ENTRY *v24; // rax
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  struct _LIST_ENTRY *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  _KPROCESS *v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  struct _LIST_ENTRY *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  unsigned __int64 *v45; // rbx
  char v46; // cl
  int v47; // r8d
  unsigned __int64 v50; // [rsp+40h] [rbp-78h] BYREF
  int *v51; // [rsp+48h] [rbp-70h]
  _DWORD v52[8]; // [rsp+50h] [rbp-68h] BYREF

  v4 = 1;
  v51 = a4;
  v6 = 10;
  v7 = 1;
  v8 = 0;
  v9 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v10 = *v9;
  v11 = MiPteInShadowRange(v9, a2);
  v15 = v11;
  if ( v11
    && (unsigned int)MiPteHasShadow(Process, v12, v11, v14)
    && (v10 & 1) != 0
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    Flink = Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v17 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)(unsigned int)v9 >> 3) & 0x1FF));
      v18 = v10 | 0x20;
      Process = (_KPROCESS *)(unsigned __int8)v17;
      LOBYTE(Process) = v17 & 0x20;
      if ( (v17 & 0x20) == 0 )
        v18 = v10;
      v10 = v18;
      if ( (v17 & 0x42) != 0 )
        v10 = v18 | 0x42;
    }
  }
  v19 = (_BYTE *)(48 * ((v10 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v4 = 0;
    WsleContents = (*v19 >> 1) & 7;
LABEL_14:
    v21 = a1;
    goto LABEL_15;
  }
  v23 = *v9;
  v6 = 10 - ((a3 & 2) != 0);
  if ( (_DWORD)v15
    && (unsigned int)MiPteHasShadow(Process, v23, v15, v19)
    && (v23 & 1) != 0
    && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
  {
    v24 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v24 )
    {
      v25 = v23 | 0x20;
      v26 = *((_QWORD *)&v24->Flink + (((unsigned __int64)(unsigned int)v9 >> 3) & 0x1FF));
      if ( (v26 & 0x20) == 0 )
        v25 = v23;
      v23 = v25;
      if ( (v26 & 0x42) != 0 )
        v23 = v25 | 0x42;
    }
  }
  WsleContents = HIBYTE(v23) & 0xF | (16 * ((v23 >> 60) & 7));
  v7 = MI_PFN_IS_PROTO(v19) == 0;
  if ( (WsleContents & 0xF) != 8 )
    goto LABEL_14;
  v21 = a1;
  MiUnlockWsle(a1, a2, v19);
  WsleContents = MiGetWsleContents(v27, a2);
LABEL_15:
  if ( (a3 & 3) == 0 )
  {
    if ( v4 )
    {
      if ( MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(v9, ZeroPte, v15, (__int64)v19) )
        v8 = 1;
    }
    else
    {
      if ( !(unsigned int)MiEvictPageTableLock(v21, (unsigned __int64)v9, ZeroPte, 0) )
      {
        *v51 = 0;
        return 0LL;
      }
      v8 = 1;
    }
  }
  MiRemoveWsle(v21, a2, 1, WsleContents, v6, v7);
  if ( v4 )
  {
    v29 = (a2 >> 18) & 0x3FFFFFF8;
    v30 = (unsigned int)(v29 + 0x40000000);
    v31 = *(_QWORD *)(v29 - 0x904C0000000LL);
    if ( (unsigned int)MiPteInShadowRange(v29 - 0x904C0000000LL, v28)
      && (unsigned int)MiPteHasShadow(v33, v32, v34, v35)
      && (v31 & 1) != 0
      && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
    {
      v36 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v36 )
      {
        v32 = v31 | 0x20;
        v37 = *((_QWORD *)&v36->Flink + ((v30 >> 3) & 0x1FF));
        if ( (v37 & 0x20) == 0 )
          v32 = v31;
        v31 = v32;
        if ( (v37 & 0x42) != 0 )
          v31 = v32 | 0x42;
      }
    }
    v50 = v31;
    if ( (unsigned int)MiPteInShadowRange(&v50, v32)
      && (unsigned int)MiPteHasShadow(v39, v38, v40, v41)
      && (v31 & 1) != 0
      && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
    {
      v39 = KeGetCurrentThread()->ApcState.Process;
      v42 = v39[1].ProcessListEntry.Flink;
      if ( v42 )
      {
        v43 = *((_QWORD *)&v42->Flink + (((unsigned __int64)&v50 >> 3) & 0x1FF));
        v44 = v31 | 0x20;
        v39 = (_KPROCESS *)(unsigned __int8)v43;
        LOBYTE(v39) = v43 & 0x20;
        if ( (v43 & 0x20) == 0 )
          v44 = v31;
        v31 = v44;
        if ( (v43 & 0x42) != 0 )
          v31 = v44 | 0x42;
      }
    }
    v45 = (unsigned __int64 *)(48 * ((v31 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    if ( ((*(_DWORD *)v45 >> 4) & 0x3FF) == 0 )
    {
      MiCountWslesInPageTable(v39, a2, v52);
      v46 = 8;
      while ( 1 )
      {
        v47 = v52[(unsigned __int8)--v46];
        if ( v47 )
          break;
        if ( !v46 )
          goto LABEL_61;
      }
      *v45 = *v45 & 0xFFFFFFFFFFFE000FuLL | (16 * (v47 & 0x3FF | ((unsigned __int64)(v46 & 7) << 10)));
    }
  }
LABEL_61:
  *v51 = v8;
  return 1LL;
}
