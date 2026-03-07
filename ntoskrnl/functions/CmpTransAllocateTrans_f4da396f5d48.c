__int64 __fastcall CmpTransAllocateTrans(__int64 a1, __int128 *a2, __int64 a3, __int64 a4)
{
  __int64 Pool2; // rax
  __int64 v9; // rdx
  int v10; // eax
  __int128 v11; // xmm0

  Pool2 = ExAllocatePool2(256LL, 184LL, 1918127427LL);
  v9 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 56) = a1;
    *(_DWORD *)(Pool2 + 48) = 8;
    *(_QWORD *)(Pool2 + 104) = CLFS_LSN_INVALID_EXT;
    *(_QWORD *)(Pool2 + 64) = a3;
    v10 = *(_DWORD *)(Pool2 + 48);
    if ( (a1 & 1) != 0 )
      v10 = 136;
    *(_DWORD *)(v9 + 48) = v10;
    if ( a2 )
    {
      v11 = *a2;
    }
    else
    {
      if ( (a1 & 1) != 0 )
      {
LABEL_9:
        *(_QWORD *)(v9 + 8) = v9;
        *(_QWORD *)(v9 + 24) = v9 + 16;
        *(_QWORD *)(v9 + 16) = v9 + 16;
        *(_QWORD *)(v9 + 40) = v9 + 32;
        *(_QWORD *)(v9 + 32) = v9 + 32;
        *(_QWORD *)v9 = v9;
        CmpBindHiveToTrans(a4, v9);
        return v9;
      }
      v11 = *(_OWORD *)((a1 & 0xFFFFFFFFFFFFFFFEuLL) + 176);
    }
    *(_OWORD *)(v9 + 88) = v11;
    goto LABEL_9;
  }
  return v9;
}
