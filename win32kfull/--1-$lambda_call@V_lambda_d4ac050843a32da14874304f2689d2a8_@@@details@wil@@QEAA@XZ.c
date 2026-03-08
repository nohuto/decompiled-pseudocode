/*
 * XREFs of ??1?$lambda_call@V_lambda_d4ac050843a32da14874304f2689d2a8_@@@details@wil@@QEAA@XZ @ 0x1C012F82C
 * Callers:
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C001D0C8 (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     ?bSaveRegion@@YAHAEAVXDCOBJ@@J@Z @ 0x1C0050094 (-bSaveRegion@@YAHAEAVXDCOBJ@@J@Z.c)
 *     GreGetRandomRgn @ 0x1C0125C40 (GreGetRandomRgn.c)
 * Callees:
 *     ?ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ @ 0x1C012F8E8 (-ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ.c)
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
