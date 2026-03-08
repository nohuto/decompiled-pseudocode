/*
 * XREFs of ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180057DA8
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053D90 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x180055954 (-ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValu.c)
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x180055D38 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800561C0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x1800985D4 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x1800BCC10 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x1800BD2D0 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@PEAV2@@Z @ 0x1800E9BBC (-MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@PEAV2@@Z.c)
 *     ?AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack@@@Z @ 0x1802241FC (-AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack.c)
 *     ?EnsureInertiaModifierProcessed@CScrollPositionKeyframeAnimation@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x1802627D0 (-EnsureInertiaModifierProcessed@CScrollPositionKeyframeAnimation@@MEAAJPEAVCExpressionValueStack.c)
 *     ?EnsureInertiaModifierProcessed@CScrollScaleKeyframeAnimation@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x180262CE0 (-EnsureInertiaModifierProcessed@CScrollScaleKeyframeAnimation@@MEAAJPEAVCExpressionValueStack@@_.c)
 *     ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x180263F00 (-GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CExpressionValue::CopyFrom(CExpressionValue *this, const struct CExpressionValue *a2)
{
  int v2; // r8d
  int v3; // r8d
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  __int64 v11; // rdx

  v2 = *((_DWORD *)a2 + 18);
  if ( v2 > 52 )
  {
    v6 = v2 - 69;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v9 = v7 - 1;
        if ( v9 )
        {
          v10 = v9 - 33;
          if ( !v10 )
          {
            *((_DWORD *)this + 18) = 104;
            *(_OWORD *)this = *(_OWORD *)a2;
            *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
            goto LABEL_11;
          }
          if ( v10 == 161 )
          {
            *((_DWORD *)this + 18) = 265;
            *(_OWORD *)this = *(_OWORD *)a2;
            *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
            *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
            *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
            goto LABEL_11;
          }
          return;
        }
        *((_DWORD *)this + 18) = 71;
      }
      else
      {
        *((_DWORD *)this + 18) = 70;
      }
    }
    else
    {
      *((_DWORD *)this + 18) = 69;
    }
    *(_OWORD *)this = *(_OWORD *)a2;
    goto LABEL_11;
  }
  if ( v2 == 52 )
  {
    *((_DWORD *)this + 18) = 52;
    *(_QWORD *)this = *(_QWORD *)a2;
    *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
    goto LABEL_11;
  }
  v3 = v2 - 11;
  if ( !v3 )
  {
    v11 = *((_QWORD *)a2 + 8);
    *((_DWORD *)this + 18) = 11;
    *((_BYTE *)this + 76) = 1;
    Microsoft::WRL::ComPtr<CPathData>::operator=((char *)this + 64, v11);
    return;
  }
  v4 = v3 - 6;
  if ( !v4 )
  {
    *(_BYTE *)this = *(_BYTE *)a2;
    *((_DWORD *)this + 18) = 17;
    goto LABEL_11;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    *(_DWORD *)this = *(_DWORD *)a2;
    *((_DWORD *)this + 18) = 18;
LABEL_11:
    *((_BYTE *)this + 76) = 1;
    return;
  }
  v8 = v5 - 17;
  if ( !v8 )
  {
    *((_DWORD *)this + 18) = 35;
    *(_QWORD *)this = *(_QWORD *)a2;
    goto LABEL_11;
  }
  if ( v8 == 7 )
  {
    *((_DWORD *)this + 18) = 42;
    *(_DWORD *)this = *(_DWORD *)a2;
    goto LABEL_11;
  }
}
