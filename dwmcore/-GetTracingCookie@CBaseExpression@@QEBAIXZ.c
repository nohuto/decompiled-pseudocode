/*
 * XREFs of ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800E197C
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053D90 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x1800BCC10 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BD330 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800D27C0 (-SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x1800E0B74 (-ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO.c)
 *     ?ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTRACINGCOOKIE@@@Z @ 0x1800E1920 (-ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_.c)
 *     ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x180228D04 (-LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z.c)
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180238A9C (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z @ 0x180238FF0 (-EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z.c)
 *     ?InitializeForces@CNaturalAnimation@@AEAAXXZ @ 0x1802398F8 (-InitializeForces@CNaturalAnimation@@AEAAXXZ.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x18023BA18 (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 *     ?StartAsTriggeredAnimation@CBaseExpression@@UEAAJXZ @ 0x18023C290 (-StartAsTriggeredAnimation@CBaseExpression@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseExpression::GetTracingCookie(CBaseExpression *this)
{
  __int64 v1; // rcx
  _DWORD *i; // rcx

  v1 = *((_QWORD *)this + 41);
  if ( (*(_DWORD *)(v1 + 4) & 0x40000000) == 0 )
    return 0LL;
  for ( i = (_DWORD *)(v1 + 12); (*i & 0x7F000000) != 0x2000000; i = (_DWORD *)((char *)i + (*i & 0xFFFFFF) + 4) )
    ;
  return (unsigned int)i[1];
}
