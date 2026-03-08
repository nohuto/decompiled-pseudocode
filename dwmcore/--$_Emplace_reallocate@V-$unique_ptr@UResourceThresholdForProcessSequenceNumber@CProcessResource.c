/*
 * XREFs of ??$_Emplace_reallocate@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@?$vector@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@V?$allocator@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800E6644
 * Callers:
 *     ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXPEAUHighResourceUsageReport@1@@Z @ 0x1800E62AC (-ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXPEAUHighResourceUsageRe.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800B9880 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@V?$allocator@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@2@_K1@Z @ 0x1800E6848 (-_Change_array@-$vector@V-$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourc.c)
 */

char *__fastcall std::vector<std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>>::_Emplace_reallocate<std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>>(
        char **a1,
        char *a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rdi
  __int64 v5; // rbp
  char *v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r10
  _QWORD *v16; // rdx
  char *v17; // r15
  char *v18; // r8
  char *v19; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  char *v23; // r9
  signed __int64 v24; // rdx
  __int64 v25; // rcx

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (a2 - *a1) >> 3;
  v6 = a2;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (a1[2] - *a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = *a3;
  *a3 = 0LL;
  v15 = v13;
  v16 = (_QWORD *)v13;
  v17 = (char *)(v13 + 8 * v5);
  *(_QWORD *)v17 = v14;
  v18 = a1[1];
  v19 = *a1;
  if ( v6 == v18 )
  {
    while ( v19 != v18 )
    {
      v21 = *(_QWORD *)v19;
      *(_QWORD *)v19 = 0LL;
      v19 += 8;
      *v16++ = v21;
    }
  }
  else
  {
    while ( v19 != v6 )
    {
      v22 = *(_QWORD *)v19;
      *(_QWORD *)v19 = 0LL;
      v19 += 8;
      *v16++ = v22;
    }
    v23 = a1[1];
    if ( v6 != v23 )
    {
      v24 = v17 - v6;
      do
      {
        v25 = *(_QWORD *)v6;
        *(_QWORD *)v6 = 0LL;
        *(_QWORD *)&v6[v24 + 8] = v25;
        v6 += 8;
      }
      while ( v6 != v23 );
    }
  }
  std::vector<std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>>::_Change_array(
    a1,
    v15,
    v9,
    v3);
  return v17;
}
