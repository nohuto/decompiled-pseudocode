/*
 * XREFs of MiSelectEngine @ 0x1402B4AF8
 * Callers:
 *     MiZeroInParallel @ 0x140242EB8 (MiZeroInParallel.c)
 *     MiCreatePageChains @ 0x1402B4A2C (MiCreatePageChains.c)
 *     MiHugePageOperation @ 0x14061E158 (MiHugePageOperation.c)
 *     MiZeroHugeRangeCore @ 0x140A2B20C (MiZeroHugeRangeCore.c)
 *     MiAllocatePartitionPhysicalPages @ 0x140A416B8 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSelectEngine(int a1, int a2, _DWORD *a3, unsigned int *a4)
{
  __int64 v4; // r10
  __int64 v6; // rax
  unsigned int *v9; // r11
  unsigned int *v10; // rdi
  unsigned int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned int *v15; // r10
  unsigned __int16 *v16; // r8
  unsigned int v17; // edx
  __int64 result; // rax
  unsigned int v19; // ecx

  v4 = (unsigned __int16)KeNumberNodes;
  v6 = qword_140C65718;
  *a3 = a1;
  v9 = (unsigned int *)(v6 + 4LL * (unsigned int)(v4 * a1));
  v10 = &v9[v4];
  if ( v9 < v10 )
  {
    while ( 2 )
    {
      v11 = 0;
      v12 = *v9;
      v13 = *(_QWORD *)(376 * v12 + qword_140C65720 + 368);
      v14 = 0LL;
      v15 = (unsigned int *)(v13 + 108);
      v16 = (unsigned __int16 *)(v13 + 16);
      do
      {
        if ( !a2 || v14 )
        {
          v17 = *v16;
          if ( (_WORD)v17 )
          {
            v19 = *v15;
            *a3 = v12;
            result = v11;
            if ( !v19 )
              v19 = 1;
            if ( v17 <= v19 )
              v19 = v17;
            *a4 = v19;
            return result;
          }
        }
        ++v11;
        ++v14;
        ++v16;
        v15 += 24;
      }
      while ( v14 < 3 );
      if ( ++v9 < v10 )
        continue;
      break;
    }
  }
  *a4 = 1;
  return 2LL;
}
