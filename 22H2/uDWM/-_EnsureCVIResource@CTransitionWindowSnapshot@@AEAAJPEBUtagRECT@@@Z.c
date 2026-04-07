/*
 * XREFs of ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x18000B114
 * Callers:
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x180003190 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z @ 0x180047F10 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCCachedVisualImageProxy@@@Z @ 0x18000B8DC (-GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18000BE34 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ @ 0x18000BF24 (-_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ.c)
 *     ?Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCSizeResourceProxy@@PEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x1800101D8 (-Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCS.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x180026730 (--$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ?Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z @ 0x18002ABA4 (-Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180084FF8 (McGenEventWrite_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::_EnsureCVIResource(
        CTransitionWindowSnapshot *this,
        const struct tagRECT *a2)
{
  __int64 i; // rax
  float v5; // xmm1_4
  CBaseObject **v6; // rsi
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // ecx
  float v13; // xmm1_4
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  CCachedVisualImageProxy *v17; // rcx
  int v18; // eax
  int v19; // r8d
  int v20; // eax
  unsigned int v22; // eax
  __m128i v23; // xmm0
  int v24; // eax
  float v25; // xmm0_4
  __int64 v26; // rcx
  CBaseObject *v27; // rcx
  struct tagRECT v28; // [rsp+40h] [rbp-30h] BYREF
  float v29[4]; // [rsp+50h] [rbp-20h] BYREF

  for ( i = 0LL; i < 4; ++i )
    v29[i] = (float)*(&a2->left + i);
  v5 = *((float *)this + 88);
  v28 = 0LL;
  if ( v5 != 1.0 )
  {
    v22 = 0;
    if ( a2->bottom - a2->top >= 0 )
      v22 = a2->bottom - a2->top;
    v23 = _mm_cvtsi32_si128(v22);
    v24 = 0;
    LODWORD(v25) = _mm_cvtepi32_ps(v23).m128_u32[0];
    if ( a2->right - a2->left >= 0 )
      v24 = a2->right - a2->left;
    v26 = *((_QWORD *)this + 39);
    *(double *)&v28.right = (float)(v25 * v5);
    *(double *)&v28.left = (float)((float)v24 * v5);
    CVisual::SetInterpolationMode(v26, 1LL);
  }
  v6 = (CBaseObject **)((char *)this + 288);
  if ( !*((_QWORD *)this + 36) )
  {
    v7 = 0;
    if ( a2->bottom - a2->top >= 0 )
      v7 = a2->bottom - a2->top;
    v8 = 0;
    if ( a2->right - a2->left >= 0 )
      v8 = a2->right - a2->left;
    if ( (int)CDesktopManager::GetCVIFromCache(v8, v7, (struct CCachedVisualImageProxy **)this + 36) < 0 )
    {
      v9 = CCompositor::CreateProxy<CCachedVisualImageProxy>(
             *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
             (char *)this + 288);
      v10 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x109u);
LABEL_30:
        if ( *v6 )
        {
          CBaseObject::Release(*v6);
          *v6 = 0LL;
        }
        v27 = (CBaseObject *)*((_QWORD *)this + 37);
        if ( v27 )
        {
          CBaseObject::Release(v27);
          *((_QWORD *)this + 37) = 0LL;
        }
        return v10;
      }
    }
  }
  v11 = CCachedVisualImageProxy::Update(*v6, v29, &v28, 0LL, 0LL);
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x113u);
    goto LABEL_30;
  }
  v12 = a2->right - a2->left;
  v13 = *((float *)this + 88);
  v28.left = -32000;
  v28.top = -32000;
  v14 = 0;
  if ( v12 >= 0 )
    v14 = v12;
  v15 = a2->bottom - a2->top;
  v28.right = (int)(float)((float)v14 * v13) - 32000;
  v16 = 0;
  if ( v15 >= 0 )
    v16 = v15;
  v17 = *v6;
  v28.bottom = (int)(float)((float)v16 * v13) - 32000;
  v18 = CCachedVisualImageProxy::Snapshot(v17, &v28);
  v10 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x122u);
    goto LABEL_30;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmTransitionCVISnapshot_Info,
      v19,
      1,
      (__int64)v29);
  v20 = CTransitionWindowSnapshot::_EnsureBrushForCVI(this);
  v10 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x127u);
    goto LABEL_30;
  }
  return v10;
}
