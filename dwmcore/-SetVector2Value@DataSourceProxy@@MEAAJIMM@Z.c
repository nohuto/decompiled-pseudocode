/*
 * XREFs of ?SetVector2Value@DataSourceProxy@@MEAAJIMM@Z @ 0x1801E06F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetProperty@UD2DVector2@@@DataSourcePropertySet@@QEAAJIPEBUD2DVector2@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801DE8F8 (--$SetProperty@UD2DVector2@@@DataSourcePropertySet@@QEAAJIPEBUD2DVector2@@W4DCOMPOSITION_EXPRESS.c)
 *     ?CheckAndReportError@DataSourceProxy@@AEAAJJ@Z @ 0x1801DF6BC (-CheckAndReportError@DataSourceProxy@@AEAAJJ@Z.c)
 *     ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z @ 0x1801DFD5C (-InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z.c)
 */

__int64 __fastcall DataSourceProxy::SetVector2Value(DataSourceProxy *this, int a2, float a3, float a4)
{
  int v6; // eax
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = __PAIR64__(LODWORD(a4), LODWORD(a3));
  v6 = DataSourcePropertySet::SetProperty<D2DVector2>((__int64)this + 64, a2, (__int64 *)&v8);
  if ( (int)DataSourceProxy::CheckAndReportError(this, v6) >= 0 )
    DataSourceProxy::InvalidateReadersAnimationSources(this, a2);
  return 0LL;
}
