/*
 * XREFs of ?CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z @ 0x1800AA314
 * Callers:
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@HW4StagedBackgroundPolicy@1@@Z @ 0x1800520B4 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180028EA0 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?Create@CAccent@@SAJPEAPEAV1@@Z @ 0x18002CA7C (-Create@CAccent@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 */

__int64 __fastcall CTransitionVisualController::CreateBackground(const struct tagRECT *a1, struct CAccent **a2)
{
  int v4; // eax
  volatile signed __int32 *v5; // rbx
  int v6; // edi
  CBaseObject *v8; // [rsp+30h] [rbp-38h] BYREF
  __m128i v9; // [rsp+38h] [rbp-30h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  v4 = CAccent::Create(&v8);
  v5 = (volatile signed __int32 *)v8;
  v6 = v4;
  if ( v4 >= 0 )
  {
    v9.m128i_i32[2] = CAccent::s_clrCurrentAccentBackground;
    v9.m128i_i32[0] = 1;
    CAccent::UpdateAccentPolicy(v8, a1, &v9, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v4,
      0x1CBu);
  }
  if ( v6 >= 0 )
  {
    *a2 = (struct CAccent *)v5;
    if ( !v5 )
      return (unsigned int)v6;
    _InterlockedIncrement(v5 + 2);
    v5 = (volatile signed __int32 *)v8;
  }
  if ( v5 )
    CBaseObject::Release((CBaseObject *)v5);
  return (unsigned int)v6;
}
