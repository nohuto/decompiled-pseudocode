/*
 * XREFs of ??1?$lambda_call@V_lambda_d4ac050843a32da14874304f2689d2a8_@@@details@wil@@QEAA@XZ @ 0x1C016AE88
 * Callers:
 *     GreGetRandomRgn @ 0x1C0042BB0 (GreGetRandomRgn.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C00B29E0 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C012FE50 (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C010B1D8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

void __fastcall wil::details::lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>::~lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>(
        _BYTE *a1)
{
  if ( a1[8] )
  {
    a1[8] = 0;
    CPushLock::ReleaseLock((CPushLock *)(*(_QWORD *)a1 + 1112LL));
  }
}
