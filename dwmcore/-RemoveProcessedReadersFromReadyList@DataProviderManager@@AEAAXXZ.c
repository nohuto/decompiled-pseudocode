/*
 * XREFs of ?RemoveProcessedReadersFromReadyList@DataProviderManager@@AEAAXXZ @ 0x1800FFA80
 * Callers:
 *     ?RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x1800FF72C (-RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataP.c)
 *     ?CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataSourceProxy@@@Z @ 0x1801B489C (-CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataS.c)
 * Callees:
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     ?_Reallocate_exactly@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAX_K@Z @ 0x1801B4F9C (-_Reallocate_exactly@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@.c)
 *     ?_Tidy@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ @ 0x1801B5014 (-_Tidy@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall DataProviderManager::RemoveProcessedReadersFromReadyList(DataProviderManager *this)
{
  char *v1; // rdx
  _QWORD *v2; // rsi
  char *i; // rdi
  __int64 v5; // rdx
  char *j; // rax
  size_t v7; // rbx

  v1 = (char *)*((_QWORD *)this + 14);
  v2 = (_QWORD *)((char *)this + 104);
  for ( i = (char *)*((_QWORD *)this + 13); i != v1 && (*(_BYTE *)(*(_QWORD *)i + 80LL) & 2) != 0; i += 8 )
    ;
  if ( i != v1 )
  {
    for ( j = i + 8; j != v1; j += 8 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)j + 80LL) & 2) != 0 )
      {
        *(_QWORD *)i = *(_QWORD *)j;
        i += 8;
      }
    }
    if ( i != v1 )
    {
      v7 = *((_QWORD *)this + 14) - (_QWORD)v1;
      memmove_0(i, v1, v7);
      *((_QWORD *)this + 14) = &i[v7];
    }
  }
  v5 = v2[1];
  if ( v5 != v2[2] )
  {
    if ( *v2 == v5 )
      std::vector<CDataSourceReader *>::_Tidy(v2);
    else
      std::vector<CDataSourceReader *>::_Reallocate_exactly(v2, (v5 - *v2) >> 3);
  }
}
