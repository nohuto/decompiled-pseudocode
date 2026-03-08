/*
 * XREFs of ?SetBooleanValue@DataSourceProxy@@MEAAJI_N@Z @ 0x1801E04A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetProperty@_N@DataSourcePropertySet@@QEAAJIPEB_NW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801DEF3C (--$SetProperty@_N@DataSourcePropertySet@@QEAAJIPEB_NW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?CheckAndReportError@DataSourceProxy@@AEAAJJ@Z @ 0x1801DF6BC (-CheckAndReportError@DataSourceProxy@@AEAAJJ@Z.c)
 *     ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z @ 0x1801DFD5C (-InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z.c)
 */

__int64 __fastcall DataSourceProxy::SetBooleanValue(DataSourceProxy *this, int a2, char a3)
{
  int v5; // eax
  char v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  v5 = DataSourcePropertySet::SetProperty<bool>((__int64)this + 64, a2, &v7);
  if ( (int)DataSourceProxy::CheckAndReportError(this, v5) >= 0 )
    DataSourceProxy::InvalidateReadersAnimationSources(this, a2);
  return 0LL;
}
