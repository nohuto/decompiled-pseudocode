__int64 __fastcall CmEnumerateValueKey(
        _QWORD *a1,
        unsigned int a2,
        unsigned int a3,
        _DWORD *a4,
        unsigned int a5,
        unsigned int *a6)
{
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  int KeyValueData; // esi
  __int64 v16; // rax
  ULONG_PTR v17; // rcx
  __int64 CellFlat; // rax
  ULONG_PTR v19; // rcx
  unsigned int v20; // esi
  __int64 v21; // rdi
  __int64 CellPaged; // rax
  __int64 v23; // rbp
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v31; // r13
  __int64 v32; // [rsp+40h] [rbp-88h] BYREF
  __int64 v33; // [rsp+48h] [rbp-80h] BYREF
  __int64 v34; // [rsp+50h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-70h] BYREF

  v33 = 0LL;
  v32 = 0LL;
  v34 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v9 = a2;
  HvpGetCellContextReinitialize(&v33);
  HvpGetCellContextReinitialize(&v32);
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistry(v11, v10, v12, v13);
  v14 = a1[1];
  if ( *(_WORD *)(v14 + 66) )
  {
    KeyValueData = CmEnumerateValueFromLayeredKey(a1, (unsigned int)v9, a3, a4, a5, a6);
    goto LABEL_18;
  }
  CmpLockKcbShared(a1[1]);
  KeyValueData = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( KeyValueData >= 0 )
  {
    if ( !a1[7] && !a1[8] )
      goto LABEL_5;
    KeyValueData = CmpTransSearchAddTransFromKeyBody(a1, &v34);
    if ( KeyValueData >= 0 )
    {
      v31 = v34;
      KeyValueData = CmpPerformKeyBodyDeletionCheck(a1, v34);
      if ( KeyValueData >= 0 )
      {
        if ( v31 )
        {
          v16 = 280LL;
          if ( v31 == *(_QWORD *)(v14 + 288) )
          {
LABEL_6:
            if ( (unsigned int)v9 >= *(_DWORD *)(v16 + v14) )
            {
              KeyValueData = -2147483622;
            }
            else
            {
              v17 = *(_QWORD *)(v14 + 32);
              if ( (*(_BYTE *)(v17 + 140) & 1) != 0 )
                CellFlat = HvpGetCellFlat(v17, *(unsigned int *)(v16 + v14 + 4));
              else
                CellFlat = HvpGetCellPaged(v17);
              v19 = *(_QWORD *)(v14 + 32);
              v20 = *(_DWORD *)(CellFlat + 4 * v9);
              v21 = CellFlat;
              if ( (*(_BYTE *)(v19 + 140) & 1) != 0 )
                CellPaged = HvpGetCellFlat(v19, *(unsigned int *)(CellFlat + 4 * v9));
              else
                CellPaged = HvpGetCellPaged(v19);
              v23 = CellPaged;
              KeyValueData = CmpQueryKeyValueData(v14, v20, CellPaged, a3, a4, a5, a6);
              if ( v23 )
              {
                v24 = *(_QWORD *)(v14 + 32);
                if ( (*(_BYTE *)(v24 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(v24, &v32);
                else
                  HvpReleaseCellPaged(v24, &v32);
              }
              if ( v21 )
              {
                v25 = *(_QWORD *)(v14 + 32);
                if ( (*(_BYTE *)(v25 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(v25, &v33);
                else
                  HvpReleaseCellPaged(v25, &v33);
              }
            }
            goto LABEL_17;
          }
        }
LABEL_5:
        v16 = 96LL;
        goto LABEL_6;
      }
    }
  }
LABEL_17:
  CmpUnlockKcb(v14);
LABEL_18:
  CmpUnlockRegistry(v27, v26, v28, v29);
  CmpDetachFromRegistryProcess(&ApcState);
  return (unsigned int)KeyValueData;
}
