/*
 * XREFs of ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800B2368
 * Callers:
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180003460 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800036E0 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000ADB8 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180016130 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180034854 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800B1F80 (-_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 */

__int64 __fastcall CSlide::_SlideWindowVertically(
        CSlide *this,
        struct CWindowData *a2,
        const struct tagRECT *a3,
        char a4,
        struct CAnimationComponent **a5)
{
  __int64 v5; // rax
  __int64 v7; // rdx
  int v11; // eax
  int v12; // eax
  CBaseObject *v13; // rbx
  int v14; // edi
  LONG top; // r11d
  LONG bottom; // r8d
  __m128i v17; // xmm0
  signed int v18; // ecx
  int v19; // r11d
  __int32 v20; // eax
  int v21; // edx
  int v22; // r8d
  bool v23; // cc
  struct tagRECT *p_rc; // rcx
  int v25; // eax
  struct tagRECT *v26; // rcx
  struct tagRECT *v27; // rax
  CBaseObject *v29; // [rsp+50h] [rbp-21h] BYREF
  struct tagRECT v30; // [rsp+60h] [rbp-11h] BYREF
  struct tagRECT rc; // [rsp+70h] [rbp-1h] BYREF

  v5 = *(_QWORD *)this;
  v7 = *((unsigned int *)a2 + 154);
  v29 = 0LL;
  v11 = (*(__int64 (__fastcall **)(CSlide *, __int64))(v5 + 112))(this, v7);
  v12 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v11, 0LL, 0LL, 0xFFFFFFFF, 1, &v29);
  v13 = v29;
  v14 = v12;
  if ( v12 >= 0 )
  {
    top = a3->top;
    bottom = a3->bottom;
    v30 = *(struct tagRECT *)((char *)v29 + 88);
    rc = v30;
    v17 = _mm_srli_si128((__m128i)v30, 8);
    v18 = abs32(top - v30.top);
    v19 = top - v17.m128i_i32[1];
    v20 = bottom - v17.m128i_i32[1];
    v21 = (bottom - v17.m128i_i32[1]) >> 31;
    v22 = bottom - v30.top;
    v23 = (v21 ^ v20) - v21 < v18;
    p_rc = &v30;
    if ( !v23 )
      v22 = v19;
    if ( !a4 )
      p_rc = &rc;
    OffsetRect(p_rc, 0, v22);
    v25 = *((_DWORD *)a2 + 154);
    if ( (v25 & 0x1000000) != 0 )
      v30 = *(struct tagRECT *)((char *)a2 + 636);
    if ( (v25 & 0x800000) != 0 )
      rc = *(struct tagRECT *)((char *)a2 + 668);
    CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v13 + 5), &v30);
    v26 = (struct tagRECT *)*((_QWORD *)v13 + 5);
    v26[54] = rc;
    CVisual::SetDirtyFlags((CVisual *)&v26->right, 4096);
    v27 = &v30;
    if ( a4 )
      v27 = &rc;
    *(struct tagRECT *)((char *)v13 + 88) = *v27;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v12, 0x18Au);
  }
  if ( v14 < 0 && v13 )
    CStoryboard::_RemoveAnimationComponent(this, (struct CVisual **)v13);
  if ( a5 )
  {
    if ( v14 < 0 )
    {
      *a5 = 0LL;
    }
    else
    {
      *a5 = v13;
      if ( !v13 )
        return (unsigned int)v14;
      _InterlockedIncrement((volatile signed __int32 *)v13 + 2);
      v13 = v29;
    }
  }
  if ( v13 )
    CBaseObject::Release(v13);
  return (unsigned int)v14;
}
