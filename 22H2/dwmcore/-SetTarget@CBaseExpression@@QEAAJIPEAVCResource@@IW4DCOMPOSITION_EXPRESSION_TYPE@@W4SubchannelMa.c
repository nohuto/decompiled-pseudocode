/*
 * XREFs of ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18009B1C8
 * Callers:
 *     ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x18009B4B4 (-ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTARG.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x180239F08 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1802650D0 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034880 (--2@YAPEAX_K@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x1800987C4 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?Create@?$CWeakReference@VCResource@@@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x180099ABC (-Create@-$CWeakReference@VCResource@@@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18009B0F0 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18009B3CC (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseExpression::SetTarget(
        __int64 a1,
        int a2,
        struct CResource *a3,
        int a4,
        unsigned int a5,
        int a6,
        unsigned __int8 a7,
        __int64 a8)
{
  unsigned int v8; // ebp
  struct CWeakResourceReference *v9; // rsi
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ebx
  struct CWeakResourceReference *v17; // rcx
  char v18; // al
  __int64 v19; // rcx
  int v20; // eax
  int v21; // eax
  void *v22; // rcx
  _BYTE *v24; // rax
  int v25; // eax
  unsigned int v26; // ecx
  int v27; // eax
  unsigned int v28; // ecx
  int v29; // r9d
  _DWORD *v30; // rax
  _DWORD *v31; // rdx
  int v32; // eax
  unsigned int v33; // [rsp+20h] [rbp-38h]
  struct CWeakResourceReference *v34; // [rsp+70h] [rbp+18h] BYREF

  v8 = a7;
  v9 = 0LL;
  v34 = 0LL;
  if ( !a3 )
  {
    if ( (*(_BYTE *)(a1 + 216) & 2) != 0 )
    {
      v27 = CBaseExpression::NotifyAnimationStateChanged(a1, 8);
      v16 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x87u, 0LL);
        return v16;
      }
    }
    else
    {
      v25 = CBaseExpression::NotifyAnimationStateChanged(a1, 16);
      v16 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x8Bu, 0LL);
        return v16;
      }
    }
  }
  CBaseExpression::EnsureExpressionIsUnregistered((CBaseExpression *)a1);
  if ( a3 )
  {
    v14 = CWeakReference<CResource>::Create(a3, &v34);
    v16 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x93u, 0LL);
      v9 = v34;
      goto LABEL_19;
    }
    v9 = v34;
  }
  v17 = *(struct CWeakResourceReference **)(a1 + 184);
  if ( v17 )
  {
    (*(void (__fastcall **)(struct CWeakResourceReference *))(*(_QWORD *)v17 + 8LL))(v17);
    *(_QWORD *)(a1 + 184) = 0LL;
    v17 = 0LL;
  }
  if ( v9 && *((_QWORD *)v9 + 2) )
  {
    *(_QWORD *)(a1 + 184) = v9;
    v17 = v9;
    v9 = 0LL;
  }
  v18 = *(_BYTE *)(a1 + 216);
  v19 = -(__int64)v17;
  *(_DWORD *)(a1 + 192) = a4;
  LOBYTE(v19) = v18 & 0xFD | (v19 != 0 ? 2 : 0);
  v20 = *(_DWORD *)(a1 + 176);
  *(_BYTE *)(a1 + 216) = v19;
  if ( v20 )
  {
    if ( v20 != a2 )
    {
      v16 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024809, 0x2D8u, 0LL);
      v33 = 161;
      goto LABEL_36;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 176) = a2;
  }
  v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 296LL))(a1, a5);
  v16 = v21;
  if ( v21 < 0 )
  {
    v33 = 162;
LABEL_47:
    v29 = v21;
    goto LABEL_48;
  }
  v22 = *(void **)(a1 + 200);
  if ( v22 )
  {
    operator delete(v22, 8uLL);
    *(_QWORD *)(a1 + 200) = 0LL;
  }
  if ( !(_BYTE)v8 )
  {
LABEL_16:
    if ( (*(_BYTE *)(a1 + 232) & 0x10) != 0
      || (v21 = CBaseExpression::TryRegisterWithExpressionManager((CBaseExpression *)a1), v16 = v21, v21 >= 0) )
    {
      v16 = 0;
      goto LABEL_19;
    }
    v33 = 189;
    goto LABEL_47;
  }
  if ( a6 == 1 )
  {
    v24 = operator new(0xCuLL);
    if ( v24 )
    {
      *(_DWORD *)v24 = 1;
      v24[4] = (unsigned __int8)v8 < 5u ? v8 : 0;
      v24[8] = a8;
    }
    *(_QWORD *)(a1 + 200) = v24;
    goto LABEL_16;
  }
  if ( a6 == 2 )
  {
    v30 = operator new(0x10uLL);
    v31 = v30;
    if ( v30 )
    {
      *v30 = 2;
      if ( (unsigned __int8)v8 > 0x10u || (v32 = 65631, !_bittest(&v32, v8)) )
        LOBYTE(v8) = 0;
      *((_QWORD *)v31 + 1) = a8;
      *((_BYTE *)v31 + 4) = v8;
    }
    else
    {
      v31 = 0LL;
    }
    *(_QWORD *)(a1 + 200) = v31;
    goto LABEL_16;
  }
  v16 = -2147467259;
  v33 = 183;
LABEL_36:
  v29 = v16;
LABEL_48:
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v22, 0LL, 0, v29, v33, 0LL);
LABEL_19:
  if ( v9 )
    (*(void (__fastcall **)(struct CWeakResourceReference *))(*(_QWORD *)v9 + 8LL))(v9);
  return v16;
}
