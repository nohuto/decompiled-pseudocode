__int64 __fastcall MmManagePartitionMoveMemory(__int64 *a1, __int64 *a2, __int64 a3, KPROCESSOR_MODE a4)
{
  __int64 v4; // r15
  __int64 *v5; // r14
  unsigned __int64 v6; // rdx
  __int64 v8; // rbp
  __int64 result; // rax
  unsigned int v10; // ebx
  unsigned __int16 IdealNodeNumberThread; // ax
  int v12; // edi
  int v13; // r8d
  bool v14; // zf
  bool v15; // zf
  bool v16; // zf
  int v17; // edx
  unsigned int PartitionPhysicalPages; // eax
  unsigned int v19; // esi
  __int64 *v20; // [rsp+60h] [rbp+8h] BYREF
  __int64 v21; // [rsp+68h] [rbp+10h] BYREF

  v4 = *a2;
  v5 = 0LL;
  v6 = *(_QWORD *)a3;
  v21 = 0LL;
  v8 = *a1;
  v20 = 0LL;
  if ( !v6 )
    return 0LL;
  v10 = *(_DWORD *)(a3 + 8);
  if ( v10 == -1 )
  {
    IdealNodeNumberThread = KeGetIdealNodeNumberThread((__int64)KeGetCurrentThread());
    v5 = v20;
    v10 = IdealNodeNumberThread;
  }
  else if ( v10 >= (unsigned __int16)KeNumberNodes )
  {
    return 3221225485LL;
  }
  v12 = *(_DWORD *)(a3 + 12);
  if ( (v12 & 0xFFFFF000) != 0 )
    return 3221225485LL;
  if ( (v12 & 0x400) != 0 )
  {
    if ( v4 != v8 || v6 != 0x40000 || (*(_DWORD *)(a3 + 12) & 0xA00) == 0x800 )
      return 3221225485LL;
  }
  else if ( (v12 & 0x800) != 0 )
  {
    return 3221225485LL;
  }
  v13 = *(_DWORD *)(a3 + 12) & 0x200;
  if ( (v12 & 0x200) != 0 )
  {
    if ( (v12 & 0x100) == 0 || (v12 & 0xFFFFF0F6) != 0 )
      return 3221225485LL;
    v14 = (v12 & 0x408) == 1032;
  }
  else
  {
    if ( (v12 & 0x400) == 0 )
      goto LABEL_22;
    if ( (v12 & 0xFFFFFA7E) != 0 )
      return 3221225485LL;
    v14 = (v12 & 0x180) == 0;
  }
  if ( v14 )
    return 3221225485LL;
LABEL_22:
  if ( (v12 & 0x12) != 0 )
  {
    v15 = (v12 & 0x1E0) == 0;
LABEL_24:
    if ( !v15 )
      return 3221225485LL;
    v16 = (v6 & 0x1FF) == 0;
    goto LABEL_31;
  }
  if ( (v12 & 0x60) != 0 )
  {
    v15 = (v12 & 0x180) == 0;
    goto LABEL_24;
  }
  if ( (v12 & 0x180) == 0 )
    goto LABEL_32;
  if ( !(unsigned int)MiHugePagesSupported() )
    return 3221225659LL;
  v16 = (*(_QWORD *)&v17 & 0x3FFFFLL) == 0;
LABEL_31:
  if ( !v16 )
    return 3221225485LL;
LABEL_32:
  if ( (v12 & 8) != 0 )
  {
    if ( (unsigned __int16 *)v8 == MiSystemPartition && ((unsigned __int16 *)v4 != MiSystemPartition || v13) )
    {
      if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a4) )
        return 3221225569LL;
      goto LABEL_38;
    }
    return 3221225485LL;
  }
LABEL_38:
  if ( (*(_DWORD *)(v8 + 4) & 0x80u) != 0 )
    return 3221225659LL;
  if ( (*(_DWORD *)(v4 + 4) & 0x80u) == 0 )
    goto LABEL_43;
  if ( (v12 & 0xFFFFFE08) != 0 )
    return 3221225659LL;
  result = MiAddSpecialPurposeMemoryPrepare(v8, v4 + 16960, &v20, &v21);
  if ( (int)result < 0 )
    return result;
  v5 = v20;
  v8 = *v20;
  do
  {
LABEL_43:
    PartitionPhysicalPages = MiAllocatePartitionPhysicalPages((unsigned __int16 *)v4, v8, *(_QWORD *)a3, v10, v12, 0);
    v19 = PartitionPhysicalPages;
  }
  while ( PartitionPhysicalPages == -1073740023 );
  if ( (*(_DWORD *)(v8 + 4) & 0x80u) != 0 )
  {
    MiAddSpecialPurposeMemoryComplete(v5, &v21, PartitionPhysicalPages);
    MiAddSpecialPurposeMemoryCleanup(v5, &v21);
  }
  return v19;
}
