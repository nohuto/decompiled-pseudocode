unsigned __int64 __fastcall MmBuildLargePages(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rsi
  unsigned int LargestPageIndex; // eax
  unsigned int v5; // ebx
  __int64 *v6; // rcx
  void ***v7; // rax
  void ***v8; // rdi
  char v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0;
  v2 = 0LL;
  if ( a2 < (unsigned __int16)KeNumberNodes )
  {
    LargestPageIndex = MiGetLargestPageIndex();
    v5 = LargestPageIndex;
    if ( LargestPageIndex >= 3 )
    {
LABEL_6:
      if ( v5 == 3 )
        return v2;
    }
    else
    {
      v6 = &MiLargePageSizes[LargestPageIndex];
      while ( *v6 != 512 )
      {
        ++v5;
        ++v6;
        if ( v5 >= 3 )
          goto LABEL_6;
      }
    }
    v7 = MiPartitionObjectToPartition((void **)0xFFFFFFFFFFFFFFFFLL, 0, &v10);
    v8 = v7;
    if ( v7 )
      v2 = MiRebuildLargePage((__int64)v7, a2, v5, 0x200uLL, 1) >> 9;
    if ( v10 )
      PsDereferencePartition((__int64)v8[25]);
  }
  return v2;
}
