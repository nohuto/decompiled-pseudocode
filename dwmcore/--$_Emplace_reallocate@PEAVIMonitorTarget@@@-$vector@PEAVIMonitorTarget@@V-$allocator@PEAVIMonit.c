/*
 * XREFs of ??$_Emplace_reallocate@PEAVIMonitorTarget@@@?$vector@PEAVIMonitorTarget@@V?$allocator@PEAVIMonitorTarget@@@std@@@std@@QEAAPEAPEAVIMonitorTarget@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x18020C730
 * Callers:
 *     ?GetIntersectingMonitorTargets@CDesktopTree@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$vector@PEAVIMonitorTarget@@V?$allocator@PEAVIMonitorTarget@@@std@@@std@@@Z @ 0x18020CA64 (-GetIntersectingMonitorTargets@CDesktopTree@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800B9880 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     ?_Change_array@?$vector@PEAVIMonitorTarget@@V?$allocator@PEAVIMonitorTarget@@@std@@@std@@AEAAXQEAPEAVIMonitorTarget@@_K1@Z @ 0x18020CC8C (-_Change_array@-$vector@PEAVIMonitorTarget@@V-$allocator@PEAVIMonitorTarget@@@std@@@std@@AEAAXQE.c)
 */

char *__fastcall std::vector<IMonitorTarget *>::_Emplace_reallocate<IMonitorTarget *>(
        const void **a1,
        _BYTE *a2,
        _QWORD *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  char *v13; // rsi
  char *v14; // r14
  void *v15; // rcx
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  size_t v18; // r8

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (a2 - (_BYTE *)*a1) >> 3;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = &v13[8 * v5];
  *(_QWORD *)v14 = *a3;
  v15 = v13;
  v16 = a1[1];
  v17 = *a1;
  if ( a2 == v16 )
  {
    v18 = v16 - v17;
  }
  else
  {
    memmove_0(v13, v17, a2 - (_BYTE *)*a1);
    v15 = v14 + 8;
    v18 = (_BYTE *)a1[1] - a2;
    v17 = a2;
  }
  memmove_0(v15, v17, v18);
  std::vector<IMonitorTarget *>::_Change_array(a1, v13, v9, v3);
  return v14;
}
