int __fastcall DifpLwSPProcessPrePoolAlloc(int a1, unsigned __int64 a2)
{
  __int128 *v2; // rax
  unsigned int v3; // r8d
  unsigned int v4; // edi
  ULONG Number; // ebx

  LODWORD(v2) = DifpLwSPAllowedSPPages;
  v3 = 0;
  v4 = DifiPluginControlSparseness;
  if ( LwSPAllocatedSpecialPools < (unsigned __int64)DifpLwSPAllowedSPPages && a2 <= 0xFE0 )
  {
    LODWORD(v2) = DifpPoolTagsSize - 1;
    if ( (unsigned int)(DifpPoolTagsSize - 1) <= 9 )
    {
      v2 = &DifpPoolTags;
      while ( *(_DWORD *)v2 != a1 )
      {
        ++v3;
        v2 = (__int128 *)((char *)v2 + 4);
        if ( v3 >= DifpPoolTagsSize )
          return (int)v2;
      }
    }
    if ( DifiPluginControlSparseness == 1
      || (Number = VfRandomGetNumber(1u, DifiPluginControlSparseness),
          LODWORD(v2) = VfRandomGetNumber(1u, v4),
          Number == (_DWORD)v2) )
    {
      DifpSpecialPoolEnabled = 1;
    }
  }
  return (int)v2;
}
