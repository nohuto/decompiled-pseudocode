/*
 * XREFs of ?SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B960C
 * Callers:
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800B9A70 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180004E40 (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x180014F58 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180016F14 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     ?GetPillarBoxColor@CImmersiveState@@SAXPEAU_D3DCOLORVALUE@@@Z @ 0x1800B90F4 (-GetPillarBoxColor@CImmersiveState@@SAXPEAU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CIconicAnimatedVisual::SetupInstructions(CIconicAnimatedVisual *this)
{
  int *v1; // rbx
  CBaseObject *v3; // rdi
  float v4; // xmm1_4
  __m128i v5; // xmm0
  float v6; // xmm1_4
  int v7; // eax
  unsigned int v8; // ebx
  CBaseObject *v9; // rdx
  __int128 v10; // xmm1
  int v11; // eax
  int v12; // eax
  int v13; // eax
  CBaseObject *v15; // [rsp+30h] [rbp-40h] BYREF
  CBaseObject *v16; // [rsp+38h] [rbp-38h] BYREF
  struct _D3DCOLORVALUE v17; // [rsp+40h] [rbp-30h] BYREF
  __int128 v18; // [rsp+50h] [rbp-20h]

  v15 = 0LL;
  v1 = (int *)((char *)this + 368);
  v3 = 0LL;
  v16 = 0LL;
  if ( IsRectEmpty((const RECT *)this + 23) )
    goto LABEL_6;
  CImmersiveState::GetPillarBoxColor(&v17);
  v4 = (float)*((int *)this + 94);
  *(float *)&v18 = (float)*v1;
  v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 93));
  *((float *)&v18 + 2) = v4;
  v6 = (float)*((int *)this + 95);
  DWORD1(v18) = _mm_cvtepi32_ps(v5).m128_u32[0];
  *((float *)&v18 + 3) = v6;
  v7 = CSolidRectangleInstruction::Create(&v16);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xC0u);
    v3 = v16;
    goto LABEL_12;
  }
  v3 = v16;
  v9 = v16;
  v10 = *(__int128 *)&v17.r;
  *((_OWORD *)v16 + 2) = v18;
  *((_OWORD *)v9 + 1) = v10;
  v11 = CRenderDataVisual::AddInstruction(this, v9);
  v8 = v11;
  if ( v11 >= 0 )
  {
LABEL_6:
    v12 = CDrawGeometryInstruction::Create(
            *((struct CBaseLegacyMilBrushProxy **)this + 38),
            *((struct CBaseGeometryProxy **)this + 43),
            &v15);
    v8 = v12;
    if ( v12 >= 0 )
    {
      v13 = CRenderDataVisual::AddInstruction(this, v15);
      v8 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0xCAu);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0xC9u);
    }
    if ( v15 )
      CBaseObject::Release(v15);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xC3u);
  }
LABEL_12:
  if ( v3 )
    CBaseObject::Release(v3);
  return v8;
}
