/*
 * XREFs of MiCreateHugeIoRanges @ 0x140B61968
 * Callers:
 *     MiInitNucleus @ 0x140B36878 (MiInitNucleus.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     MiAddPartitionHugeRange @ 0x14061CDC4 (MiAddPartitionHugeRange.c)
 *     MiInitializeHugePfnDatabase @ 0x14061E908 (MiInitializeHugePfnDatabase.c)
 */

unsigned __int64 __fastcall MiCreateHugeIoRanges(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rbx
  unsigned __int64 *v3; // rcx
  int v4; // edi
  __int64 v5; // rcx
  ULONG_PTR v6; // r8

  result = *(_QWORD *)(a1 + 360);
  if ( (result & 1) != 0 )
  {
    if ( result == 1 )
      return result;
    v2 = result ^ ((a1 + 352) | 1);
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 360);
  }
  while ( v2 )
  {
    v4 = *(_DWORD *)(v2 + 24);
    if ( (unsigned int)(v4 - 38) <= 1 )
    {
      v6 = *(_QWORD *)(v2 + 32);
      if ( !v6 || (v6 & 0x3FFFF) != 0 || (*(_DWORD *)(v2 + 40) & 0x3FFFF) != 0 )
        KeBugCheckEx(0x1Au, 0x30000000uLL, v6, *(_QWORD *)(v2 + 40), *(int *)(v2 + 24));
      if ( (unsigned int)MiInitializeHugePfnDatabase()
        && (int)MiAddPartitionHugeRange(
                  (__int64)MiSystemPartition,
                  v2,
                  (unsigned int)(*(_DWORD *)(v2 + 24) != 38) + 1,
                  0) >= 0 )
      {
        if ( v4 == 38 )
        {
          *(_DWORD *)(v2 + 24) = 24;
        }
        else if ( v4 == 39 )
        {
          *(_DWORD *)(v2 + 24) = 2;
        }
      }
    }
    result = *(_QWORD *)(v2 + 8);
    v5 = v2;
    if ( result )
    {
      v3 = *(unsigned __int64 **)result;
      v2 = *(_QWORD *)(v2 + 8);
      if ( *(_QWORD *)result )
      {
        do
        {
          result = *v3;
          v2 = (__int64)v3;
          v3 = (unsigned __int64 *)result;
        }
        while ( result );
      }
    }
    else
    {
      while ( 1 )
      {
        v2 = *(_QWORD *)(v2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v2 || *(_QWORD *)v2 == v5 )
          break;
        v5 = v2;
      }
    }
  }
  return result;
}
