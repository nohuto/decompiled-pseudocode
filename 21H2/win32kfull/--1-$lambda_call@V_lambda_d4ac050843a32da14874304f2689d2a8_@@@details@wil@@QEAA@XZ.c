/*
 * XREFs of ??1?$lambda_call@V_lambda_d4ac050843a32da14874304f2689d2a8_@@@details@wil@@QEAA@XZ @ 0x1C015DA6C
 * Callers:
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C00419B4 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C01147B0 (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     GreGetRandomRgn @ 0x1C014B3A0 (GreGetRandomRgn.c)
 * Callees:
 *     ?ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ @ 0x1C015DB44 (-ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ.c)
 */

void __fastcall wil::details::lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>::~lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>(
        _BYTE *a1)
{
  if ( a1[8] )
  {
    a1[8] = 0;
    GreInnermostPushLockMSRC85333::ReleaseLock((GreInnermostPushLockMSRC85333 *)(*(_QWORD *)a1 + 1112LL));
  }
}
