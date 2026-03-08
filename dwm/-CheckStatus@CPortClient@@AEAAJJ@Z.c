/*
 * XREFs of ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x140002778
 * Callers:
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x1400025CC (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z @ 0x140003A18 (-SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z.c)
 *     ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z @ 0x140003AB4 (-SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPortClient::CheckStatus(CPortClient *this, unsigned int a2)
{
  if ( a2 == -1073741769 || a2 == -1073741229 )
    _InterlockedCompareExchange((volatile signed __int32 *)this + 2, 1, 0);
  return a2;
}
