/*
 * XREFs of ?SetColorValue@DataSourceProxy@@MEAAJIMMMM@Z @ 0x1801E04F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetProperty@U_D3DCOLORVALUE@@@DataSourcePropertySet@@QEAAJIPEBU_D3DCOLORVALUE@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801DEE00 (--$SetProperty@U_D3DCOLORVALUE@@@DataSourcePropertySet@@QEAAJIPEBU_D3DCOLORVALUE@@W4DCOMPOSITION.c)
 *     ?CheckAndReportError@DataSourceProxy@@AEAAJJ@Z @ 0x1801DF6BC (-CheckAndReportError@DataSourceProxy@@AEAAJJ@Z.c)
 *     ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z @ 0x1801DFD5C (-InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z.c)
 */

__int64 __fastcall DataSourceProxy::SetColorValue(
        DataSourceProxy *this,
        int a2,
        float a3,
        float a4,
        unsigned int a5,
        float a6)
{
  int v8; // eax
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  *((float *)&v10 + 3) = a6;
  *(float *)&v10 = a3;
  *(_QWORD *)((char *)&v10 + 4) = __PAIR64__(a5, LODWORD(a4));
  v8 = DataSourcePropertySet::SetProperty<_D3DCOLORVALUE>((__int64)this + 64, a2, &v10);
  if ( (int)DataSourceProxy::CheckAndReportError(this, v8) >= 0 )
    DataSourceProxy::InvalidateReadersAnimationSources(this, a2);
  return 0LL;
}
