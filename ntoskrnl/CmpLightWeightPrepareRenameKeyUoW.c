__int64 __fastcall CmpLightWeightPrepareRenameKeyUoW(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r15
  ULONG_PTR v4; // rdi
  unsigned int *v5; // rsi
  int v6; // eax
  int Cell; // ebx
  ULONG_PTR v8; // r12
  ULONG_PTR v9; // rcx
  bool v10; // zf
  __int64 v11; // rax
  ULONG_PTR v12; // r13
  ULONG_PTR v13; // rdx
  __int64 CellPaged; // rax
  unsigned int *v15; // r13
  __int64 v16; // r12
  _WORD *v17; // rax
  unsigned int v18; // r15d
  __int64 v19; // rax
  unsigned __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v24; // [rsp+40h] [rbp-29h] BYREF
  __int64 v25; // [rsp+48h] [rbp-21h] BYREF
  _WORD *v26; // [rsp+50h] [rbp-19h] BYREF
  __int128 v27; // [rsp+58h] [rbp-11h] BYREF
  _OWORD v28[5]; // [rsp+68h] [rbp-1h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int *v30; // [rsp+D8h] [rbp+6Fh] BYREF
  ULONG_PTR v31; // [rsp+E0h] [rbp+77h]
  ULONG_PTR v32; // [rsp+E8h] [rbp+7Fh]

  v24 = 0xFFFFFFFFLL;
  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(int *)(a1 + 72);
  v25 = 0xFFFFFFFFLL;
  v27 = 0LL;
  v4 = *(_QWORD *)(v2 + 32);
  LODWORD(BugCheckParameter4) = -1;
  v28[0] = 0LL;
  v26 = 0LL;
  CmpInitializeDelayDerefContext(&v27);
  v5 = *(unsigned int **)(*(_QWORD *)(a1 + 80) + 104LL);
  v30 = v5;
  if ( v5 )
  {
    ++*v5;
  }
  else
  {
    v6 = CmpLightWeightCreateModificationData(a1, &v30);
    v5 = v30;
    Cell = v6;
    if ( v6 < 0 )
      goto LABEL_39;
  }
  CmpReferenceKeyControlBlock(*(_QWORD *)(a1 + 48));
  v8 = *(_QWORD *)(a1 + 48);
  v9 = *(_QWORD *)(a1 + 88);
  v32 = v8;
  CmpReferenceKeyControlBlock(v9);
  v10 = (*(_BYTE *)(v4 + 140) & 1) == 0;
  v11 = *(_QWORD *)(a1 + 48);
  v12 = *(_QWORD *)(a1 + 88);
  v31 = v12;
  v13 = *(unsigned int *)(*(_QWORD *)(v11 + 72) + 40LL);
  if ( v10 )
    CellPaged = HvpGetCellPaged(v4, v13, (unsigned int *)&v24);
  else
    CellPaged = HvpGetCellFlat(v4, v13, &v24);
  if ( CellPaged )
  {
    Cell = HvpMarkCellDirty(v4, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL), 1);
    if ( Cell < 0
      || (Cell = HvpMarkCellDirty(v4, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL), 1), Cell < 0)
      || (Cell = HvpMarkCellDirty(v4, *(unsigned int *)(*(_QWORD *)(a1 + 88) + 40LL), 1), Cell < 0) )
    {
LABEL_26:
      if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v4, &v24);
      else
        HvpReleaseCellPaged(v4, (unsigned int *)&v24);
      goto LABEL_35;
    }
    Cell = CmpCopyCell(v4, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL), v4, v3, (int *)&BugCheckParameter4);
    if ( Cell >= 0 )
    {
      v15 = &v5[v3];
      v16 = v3;
      if ( v15[3] != -1 )
        goto LABEL_19;
      LODWORD(v30) = *(_DWORD *)(v4 + 220);
      Cell = HvAllocateCell(v4, 12, (unsigned int)v3, v15 + 3, (__int64)&v26, (__int64)&v25);
      if ( Cell >= 0 )
      {
        v17 = v26;
        *v26 = (unsigned int)v30 < 5 ? 26220 : 26732;
        v17[1] = 0;
        v5[v3 + 1] = 0;
        if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v4, &v25);
        else
          HvpReleaseCellPaged(v4, (unsigned int *)&v25);
LABEL_19:
        v18 = BugCheckParameter4;
        Cell = CmpAddSubKeyToList(v4, v15 + 3, BugCheckParameter4);
        if ( Cell >= 0 )
        {
          ++v5[v16 + 1];
          v19 = *(_QWORD *)(a1 + 88);
          v20 = (unsigned __int64)*(unsigned int *)(v19 + 40) >> 31;
          if ( CmpRemoveSubKeyFromList(v4, (int *)&v5[v20 + 3], *(_DWORD *)(v19 + 40)) )
          {
            --v5[v20 + 1];
            v21 = CmpMarkAllChildrenDirty(v4, v18);
            v8 = v32;
            Cell = v21;
            if ( v21 >= 0 )
            {
              Cell = CmpPrepareToInvalidateAllHigherLayerKcbs(v32, 1, (__int64)v28);
              if ( Cell >= 0 )
              {
                v12 = v31;
                Cell = CmpPrepareToInvalidateAllHigherLayerKcbs(v31, 1, (__int64)v28);
                if ( Cell >= 0 )
                {
                  BugCheckParameter4 = 0x800000001LL;
                  CmpEnumerateAllHigherLayerKcbs(
                    v8,
                    (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanUpHigherLayerKcbCachesPreCallback,
                    (unsigned int (__fastcall *)(ULONG_PTR, __int64, __int64))CmpInvalidateAllHigherLayerKcbsPostCallback,
                    (__int64)&v27,
                    (__int64)&BugCheckParameter4,
                    1,
                    1);
                  BugCheckParameter4 = 0x800000001LL;
                  CmpEnumerateAllHigherLayerKcbs(
                    v12,
                    (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanUpHigherLayerKcbCachesPreCallback,
                    (unsigned int (__fastcall *)(ULONG_PTR, __int64, __int64))CmpInvalidateAllHigherLayerKcbsPostCallback,
                    (__int64)&v27,
                    (__int64)&BugCheckParameter4,
                    1,
                    1);
                  v22 = *(_QWORD *)(a1 + 48);
                  *(_QWORD *)(a1 + 104) = v5;
                  Cell = 0;
                  v5 = 0LL;
                  v12 = 0LL;
                  v8 = 0LL;
                  *(_DWORD *)(a1 + 96) = *(_DWORD *)(v22 + 40);
                  *(_DWORD *)(v22 + 40) = v18;
                  v18 = -1;
                }
                goto LABEL_24;
              }
            }
            goto LABEL_23;
          }
          Cell = -1073741670;
        }
        v8 = v32;
LABEL_23:
        v12 = v31;
        goto LABEL_24;
      }
      v8 = v32;
      v12 = v31;
    }
    v18 = BugCheckParameter4;
LABEL_24:
    if ( v18 != -1 )
      CmpFreeKeyByCell(v4, v18, 0);
    goto LABEL_26;
  }
  Cell = -1073741670;
LABEL_35:
  if ( v12 )
    CmpDereferenceKeyControlBlockWithLock(v12, (__int64)&v27, 0);
  if ( v8 )
    CmpDereferenceKeyControlBlockWithLock(v8, (__int64)&v27, 0);
LABEL_39:
  if ( v5 )
    CmpLightWeightCleanupModifyKeyDataUoW(v4, v5);
  CmpCleanupRollbackPacket((__int64)v28);
  CmpDrainDelayDerefContext((_QWORD **)&v27);
  return (unsigned int)Cell;
}
