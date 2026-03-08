/*
 * XREFs of ?EnsureChainingConfigUpdated@CScrollPositionKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_K@Z @ 0x180262710
 * Callers:
 *     <none>
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180016188 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800C1468 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180213E20 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x18022DD74 (-BoundaryFromValue@CInteractionTracker@@QEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Boundary@@@Z @ 0x18026BED8 (-UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Bound.c)
 */

void __fastcall CScrollPositionKeyframeAnimation::EnsureChainingConfigUpdated(
        CScrollPositionKeyframeAnimation *this,
        struct CExpressionValueStack *a2)
{
  __int64 v3; // rax
  CExpressionValue *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // r11
  unsigned int v7; // r10d
  unsigned int v8; // ebx
  __int64 v9; // [rsp+20h] [rbp-68h]
  _BYTE v10[88]; // [rsp+30h] [rbp-58h] BYREF

  v3 = (unsigned int)(*((_DWORD *)a2 + 4) - 1);
  if ( (unsigned int)v3 < *((_DWORD *)a2 + 12) )
  {
    v5 = (_QWORD *)(*((_QWORD *)a2 + 3) + 80 * v3);
  }
  else
  {
    v4 = CExpressionValue::CExpressionValue((CExpressionValue *)v10);
    v5 = &CExpressionValueStack::s_emptyValue;
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v4);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v10);
  }
  v9 = *v5;
  CInteractionTracker::BoundaryFromValue(*((_QWORD *)this + 73), COERCE_FLOAT(*v5), 0);
  v8 = CInteractionTracker::BoundaryFromValue(v6, *((float *)&v9 + 1), 1u);
  CScrollKeyframeAnimation::UpdateChainingConfigIfBoundaryStateChanges(this, 0LL, v7);
  CScrollKeyframeAnimation::UpdateChainingConfigIfBoundaryStateChanges(this, 1LL, v8);
}
