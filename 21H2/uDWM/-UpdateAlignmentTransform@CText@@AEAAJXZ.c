/*
 * XREFs of ?UpdateAlignmentTransform@CText@@AEAAJXZ @ 0x18004306C
 * Callers:
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x1800171C4 (-ValidateResources@CText@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CMatrixTransformProxy@@QEAAJAEBU_MilMatrix3x2D@@@Z @ 0x180043100 (-Update@CMatrixTransformProxy@@QEAAJAEBU_MilMatrix3x2D@@@Z.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 */

__int64 __fastcall CText::UpdateAlignmentTransform(CText *this)
{
  CMatrixTransformProxy *v1; // r8
  unsigned int v2; // ebx
  int v3; // eax
  int v4; // eax
  struct _MilMatrix3x2D v6; // [rsp+30h] [rbp-48h] BYREF

  v1 = (CMatrixTransformProxy *)*((_QWORD *)this + 49);
  v2 = 0;
  if ( v1 )
  {
    v3 = (*((_DWORD *)this + 31) - *((_DWORD *)this + 101)) / 2;
    *(_OWORD *)&v6.S_11 = _xmm;
    v6.DX = 0.0;
    *(_OWORD *)&v6.S_21 = _xmm;
    v6.DY = (double)v3;
    v4 = CMatrixTransformProxy::Update(v1, &v6);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x1E9u);
  }
  return v2;
}
