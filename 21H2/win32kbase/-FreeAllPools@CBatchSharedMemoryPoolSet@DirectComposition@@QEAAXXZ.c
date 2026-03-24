/*
 * XREFs of ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x1C0059AE8
 * Callers:
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0056700 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C0059B6C (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C005EDC8 (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CBatchSharedMemoryPoolSet::FreeAllPools(
        DirectComposition::CBatchSharedMemoryPool **this)
{
  DirectComposition::CBatchSharedMemoryPoolSet *v2; // rbx
  DirectComposition::CBatchSharedMemoryPoolSet *v3; // rax
  DirectComposition::CBatchSharedMemoryPoolSet **v4; // rcx
  void *v5; // rcx

  while ( 1 )
  {
    v2 = *this;
    if ( *this == (DirectComposition::CBatchSharedMemoryPool *)this )
      break;
    DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView(*this);
    if ( v2 )
    {
      v3 = *(DirectComposition::CBatchSharedMemoryPoolSet **)v2;
      if ( *(DirectComposition::CBatchSharedMemoryPoolSet **)(*(_QWORD *)v2 + 8LL) != v2
        || (v4 = (DirectComposition::CBatchSharedMemoryPoolSet **)*((_QWORD *)v2 + 1), *v4 != v2) )
      {
        __fastfail(3u);
      }
      *v4 = v3;
      *((_QWORD *)v3 + 1) = v4;
      MmUnmapViewInSessionSpace(*((PVOID *)v2 + 7));
      v5 = (void *)*((_QWORD *)v2 + 3);
      if ( v5 )
        ObfDereferenceObject(v5);
      Win32FreePool((__int64)v2);
    }
  }
}
