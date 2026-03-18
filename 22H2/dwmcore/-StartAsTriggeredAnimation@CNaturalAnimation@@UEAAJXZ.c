/*
 * XREFs of ?StartAsTriggeredAnimation@CNaturalAnimation@@UEAAJXZ @ 0x18023E440
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveExpressionToBeRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x1802170E0 (-RemoveExpressionToBeRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?ClearState@CNaturalAnimation@@AEAAXXZ @ 0x18023C618 (-ClearState@CNaturalAnimation@@AEAAXXZ.c)
 *     ?StartAsTriggeredAnimation@CBaseExpression@@UEAAJXZ @ 0x18023F970 (-StartAsTriggeredAnimation@CBaseExpression@@UEAAJXZ.c)
 */

__int64 __fastcall CNaturalAnimation::StartAsTriggeredAnimation(CNaturalAnimation *this)
{
  int started; // eax
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 v5; // rcx

  started = CBaseExpression::StartAsTriggeredAnimation(this);
  v4 = started;
  if ( started < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, started, 0x3A9u, 0LL);
  }
  else
  {
    v5 = *((_QWORD *)this + 2);
    *((_BYTE *)this + 216) |= 1u;
    CExpressionManager::RemoveExpressionToBeRemoved(*(CExpressionManager **)(v5 + 424), this);
    CNaturalAnimation::ClearState(this);
  }
  return v4;
}
