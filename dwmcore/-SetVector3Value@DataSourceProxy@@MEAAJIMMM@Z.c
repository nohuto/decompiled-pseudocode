/*
 * XREFs of ?SetVector3Value@DataSourceProxy@@MEAAJIMMM@Z @ 0x1801E0750
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetProperty@UD2DVector3@@@DataSourcePropertySet@@QEAAJIPEBUD2DVector3@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801DEA44 (--$SetProperty@UD2DVector3@@@DataSourcePropertySet@@QEAAJIPEBUD2DVector3@@W4DCOMPOSITION_EXPRESS.c)
 *     ?CheckAndReportError@DataSourceProxy@@AEAAJJ@Z @ 0x1801DF6BC (-CheckAndReportError@DataSourceProxy@@AEAAJJ@Z.c)
 *     ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z @ 0x1801DFD5C (-InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z.c)
 */

__int64 __fastcall DataSourceProxy::SetVector3Value(DataSourceProxy *this, int a2, float a3, float a4, float a5)
{
  int v7; // eax
  unsigned __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  float v10; // [rsp+28h] [rbp-10h]

  v10 = a5;
  v9 = __PAIR64__(LODWORD(a4), LODWORD(a3));
  v7 = DataSourcePropertySet::SetProperty<D2DVector3>((__int64)this + 64, a2, &v9);
  if ( (int)DataSourceProxy::CheckAndReportError(this, v7) >= 0 )
    DataSourceProxy::InvalidateReadersAnimationSources(this, a2);
  return 0LL;
}
