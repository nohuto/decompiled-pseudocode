__int64 __fastcall MmManagePartitionInitialAddMemory(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 *v4; // rdi
  __int64 v5; // r14
  int v7; // ebp
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 result; // rax
  __int64 *v14; // [rsp+50h] [rbp+8h] BYREF
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = 0LL;
  v4 = 0LL;
  v5 = *a1;
  v7 = *(_DWORD *)a2;
  v14 = 0LL;
  if ( a4 )
  {
    v9 = -1073741727;
    goto LABEL_14;
  }
  if ( (v7 & 0xFFFFFF80) != 0 )
  {
LABEL_4:
    v9 = -1073741811;
    goto LABEL_14;
  }
  if ( (v7 & 0x10) != 0 )
  {
    if ( (v7 & 0xFFFFFFEF) != 0 )
      goto LABEL_4;
    LOBYTE(v10) = MiValidateSpecialPurposeMemoryAttributes((_QWORD *)(a2 + 16));
    if ( !v10 )
      goto LABEL_4;
    v12 = MiAddSpecialPurposeMemoryPrepare(v5, v11, &v14, &v15);
    v4 = v14;
    v9 = v12;
    if ( v12 < 0 )
      goto LABEL_14;
    v5 = *v14;
    *(_DWORD *)a2 = 1;
  }
  else if ( (v7 & 7) == 0 )
  {
    goto LABEL_4;
  }
  if ( !*(_DWORD *)(a2 + 4) )
    goto LABEL_4;
  v9 = MiHotAddPartitionMemory(v5, (unsigned __int64 *)(a3 + 48), (int *)a2);
  if ( (*(_DWORD *)(v5 + 4) & 0x80u) != 0 )
    MiAddSpecialPurposeMemoryComplete(v4, &v15, v9);
LABEL_14:
  MiAddSpecialPurposeMemoryCleanup(v4, &v15);
  result = v9;
  *(_DWORD *)a2 = v7;
  return result;
}
