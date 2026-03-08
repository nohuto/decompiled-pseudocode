/*
 * XREFs of ?SetMatrix3x2Value@DataSourceProxy@@MEAAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801E0560
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetProperty@UD2D_MATRIX_3X2_F@@@DataSourcePropertySet@@QEAAJIPEBUD2D_MATRIX_3X2_F@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801DECC0 (--$SetProperty@UD2D_MATRIX_3X2_F@@@DataSourcePropertySet@@QEAAJIPEBUD2D_MATRIX_3X2_F@@W4DCOMPOSI.c)
 *     ?CheckAndReportError@DataSourceProxy@@AEAAJJ@Z @ 0x1801DF6BC (-CheckAndReportError@DataSourceProxy@@AEAAJJ@Z.c)
 *     ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z @ 0x1801DFD5C (-InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z.c)
 */

__int64 __fastcall DataSourceProxy::SetMatrix3x2Value(DataSourceProxy *this, int a2, const struct D2D_MATRIX_3X2_F *a3)
{
  int v5; // eax

  v5 = DataSourcePropertySet::SetProperty<D2D_MATRIX_3X2_F>((__int64)this + 64, a2, (__int64)a3);
  if ( (int)DataSourceProxy::CheckAndReportError(this, v5) >= 0 )
    DataSourceProxy::InvalidateReadersAnimationSources(this, a2);
  return 0LL;
}
