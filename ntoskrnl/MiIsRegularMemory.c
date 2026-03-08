/*
 * XREFs of MiIsRegularMemory @ 0x140B4FF44
 * Callers:
 *     MxMovePageTables @ 0x140B4F948 (MxMovePageTables.c)
 *     MxMarkValidMappings @ 0x140B4FB8C (MxMarkValidMappings.c)
 *     MxCreatePfnsForPtes @ 0x140B4FD40 (MxCreatePfnsForPtes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsRegularMemory(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rcx

  result = MxPfnMemoryDescriptorCache;
  if ( MxPfnMemoryDescriptorCache )
  {
    v5 = *(_QWORD *)(MxPfnMemoryDescriptorCache + 32);
    if ( a2 >= v5 && a2 < v5 + *(_QWORD *)(MxPfnMemoryDescriptorCache + 40) )
      return result;
  }
  if ( MxNonPfnMemoryDescriptorCache )
  {
    v6 = *(_QWORD *)(MxNonPfnMemoryDescriptorCache + 32);
    if ( a2 >= v6 && a2 < *(_QWORD *)(MxNonPfnMemoryDescriptorCache + 40) + v6 )
      return 0LL;
  }
  v7 = *(_QWORD *)(a1 + 352);
  if ( (*(_BYTE *)(a1 + 360) & 1) != 0 && v7 )
    v7 ^= a1 + 352;
  v8 = 0LL;
  while ( v7 )
  {
    v9 = *(_QWORD *)(v7 + 32);
    if ( a2 < v9 )
      goto LABEL_16;
    if ( a2 < *(_QWORD *)(v7 + 40) + v9 )
    {
      v8 = v7;
LABEL_16:
      v10 = *(_QWORD *)v7;
      goto LABEL_17;
    }
    v10 = *(_QWORD *)(v7 + 8);
LABEL_17:
    if ( (*(_BYTE *)(a1 + 360) & 1) != 0 && v10 )
      v7 ^= v10;
    else
      v7 = v10;
  }
  if ( v8 )
  {
    v11 = *(_DWORD *)(v8 + 24) & 0x1FFFFFFF;
    if ( (unsigned int)v11 > 0x2A || (v12 = 0x5C5C0C00048LL, !_bittest64(&v12, v11)) )
    {
      MxPfnMemoryDescriptorCache = v8;
      return v8;
    }
    MxNonPfnMemoryDescriptorCache = v8;
  }
  return 0LL;
}
