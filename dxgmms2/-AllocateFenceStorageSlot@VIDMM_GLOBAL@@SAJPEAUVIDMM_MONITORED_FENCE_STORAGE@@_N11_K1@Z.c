__int64 __fastcall VIDMM_GLOBAL::AllocateFenceStorageSlot(
        struct VIDMM_MONITORED_FENCE_STORAGE *a1,
        char a2,
        char a3,
        char a4,
        unsigned __int64 a5,
        bool a6)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  KSPIN_LOCK *v13; // rcx
  __int64 result; // rax
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rcx

  if ( !DXGPROCESS::GetCurrent() )
  {
    v11 = 0LL;
LABEL_6:
    v12 = 0LL;
    v10 = 0LL;
    goto LABEL_7;
  }
  v10 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
  if ( v10 )
    v10 = *(_QWORD *)(v10 + 8);
  v11 = v10;
  if ( !v10 || (*(_DWORD *)(*(_QWORD *)(v10 + 32) + 424LL) & 0x100) == 0 )
    goto LABEL_6;
  v12 = v10;
  if ( a2 )
    a3 = 1;
LABEL_7:
  if ( !a4 && !a2 && !a3 && v11 )
  {
    v13 = *(KSPIN_LOCK **)(v11 + 40);
LABEL_12:
    if ( !*((_BYTE *)v13 + 64) )
    {
      LODWORD(result) = VIDMM_PROCESS_FENCE_STORAGE::AllocateFenceStorageSlot(v13, a1);
      goto LABEL_14;
    }
    goto LABEL_21;
  }
  if ( v12 && a2 && !a3 )
  {
    v16 = *(_QWORD *)(v11 + 32);
    v17 = *(_DWORD *)(v16 + 424);
    if ( (v17 & 0x100) != 0 )
      v18 = *(_QWORD *)(v16 + 608);
    else
      v18 = v16 & -(__int64)((v17 & 0x80u) != 0);
    v19 = *(_QWORD *)(v18 + 64);
    if ( v19 )
      v19 = *(_QWORD *)(v19 + 8);
    v13 = *(KSPIN_LOCK **)(v19 + 40);
    *((_BYTE *)v13 + 64) = 1;
    goto LABEL_21;
  }
  v13 = (KSPIN_LOCK *)VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage;
  if ( !a2 && !a3 )
    goto LABEL_12;
LABEL_21:
  LODWORD(result) = VIDMM_PROCESS_FENCE_STORAGE::AllocateSharedFenceStorageSlot(
                      v13,
                      a1,
                      (struct VIDMM_PROCESS *)(v10 & -(__int64)(a3 != 0)));
LABEL_14:
  if ( (int)result >= 0 )
  {
    v15 = (_QWORD *)*((_QWORD *)a1 + 1);
    *((_QWORD *)a1 + 4) = a5;
    if ( a6 )
      *v15 = a5;
    else
      *(_DWORD *)v15 = a5;
  }
  return (unsigned int)result;
}
