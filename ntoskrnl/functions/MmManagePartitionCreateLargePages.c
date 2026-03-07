__int64 __fastcall MmManagePartitionCreateLargePages(__int64 *a1, __int64 a2, KPROCESSOR_MODE a3)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  unsigned int LargestPageIndex; // eax
  unsigned int v9; // ecx
  unsigned int v10; // r8d
  __int64 *v11; // rax
  bool v12; // zf
  unsigned __int64 v13; // r9

  v5 = 0;
  if ( SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a3) )
  {
    if ( !*(_DWORD *)a2 && *(_DWORD *)(a2 + 4) < (unsigned int)(unsigned __int16)KeNumberNodes )
    {
      v6 = *(_QWORD *)(a2 + 8);
      if ( (v6 & 0xFFF) == 0 )
      {
        v7 = v6 >> 12;
        LargestPageIndex = MiGetLargestPageIndex();
        v10 = LargestPageIndex;
        if ( LargestPageIndex >= 3 )
        {
LABEL_11:
          v12 = v10 == 3;
        }
        else
        {
          v11 = &MiLargePageSizes[LargestPageIndex];
          while ( *v11 != v7 )
          {
            ++v10;
            ++v11;
            if ( v10 >= 3 )
              goto LABEL_11;
          }
          v12 = v10 == 0;
        }
        if ( v12 )
          return (unsigned int)-1073741637;
        v13 = *(_QWORD *)(a2 + 16);
        if ( v13 && v13 < 0xFFFFFFFFFFFFFFFFuLL / v7 )
        {
          *(_QWORD *)(a2 + 24) = MiRebuildLargePage(*a1, v9, v10, v7 * v13, 1) / v7;
          return v5;
        }
      }
    }
    return (unsigned int)-1073741811;
  }
  else
  {
    return (unsigned int)-1073741727;
  }
}
