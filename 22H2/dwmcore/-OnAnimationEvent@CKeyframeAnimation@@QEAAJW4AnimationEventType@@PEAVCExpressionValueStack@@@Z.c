/*
 * XREFs of ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x1800BD5D4
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180056390 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180057590 (-Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800BD3F8 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x1800BD4B4 (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800BC8E8 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?IsWaiting@CKeyframeAnimation@@QEBA_NXZ @ 0x1800BD668 (-IsWaiting@CKeyframeAnimation@@QEBA_NXZ.c)
 *     ?NotifyAnimationStopped@CBaseExpression@@IEAAJXZ @ 0x1800BD830 (-NotifyAnimationStopped@CBaseExpression@@IEAAJXZ.c)
 *     ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z @ 0x1800BD934 (-SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyAnimationStarted@CBaseExpression@@IEAAXXZ @ 0x1800EC654 (-NotifyAnimationStarted@CBaseExpression@@IEAAXXZ.c)
 */

__int64 __fastcall CKeyframeAnimation::OnAnimationEvent(__int64 a1, int a2, struct CExpressionValueStack *a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  CKeyframeAnimation *v8; // rcx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  unsigned int v13; // [rsp+20h] [rbp-18h]

  if ( (*(_BYTE *)(a1 + 580) & 0x20) == 0 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 2;
        if ( !v7 )
        {
          if ( *(_DWORD *)(a1 + 288) != 4 )
            CBaseExpression::NotifyAnimationStarted((CBaseExpression *)a1);
          if ( CKeyframeAnimation::IsWaiting((CKeyframeAnimation *)a1) )
            return 0;
          v9 = CKeyframeAnimation::SampleExpressionsAndStartingValue(v8, a3);
          v11 = v9;
          if ( v9 >= 0 )
            return 0;
          v13 = 1900;
LABEL_19:
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, v13, 0LL);
          return v11;
        }
        if ( v7 != 28 )
        {
          v11 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x776u, 0LL);
          return v11;
        }
      }
      else
      {
        v9 = CBaseExpression::NotifyAnimationStopped((CBaseExpression *)a1);
        v11 = v9;
        if ( v9 < 0 )
        {
          v13 = 1883;
          goto LABEL_19;
        }
      }
    }
    else
    {
      v9 = CBaseExpression::NotifyAnimationCompleted((CBaseExpression *)a1);
      v11 = v9;
      if ( v9 < 0 )
      {
        v13 = 1879;
        goto LABEL_19;
      }
    }
  }
  return 0;
}
