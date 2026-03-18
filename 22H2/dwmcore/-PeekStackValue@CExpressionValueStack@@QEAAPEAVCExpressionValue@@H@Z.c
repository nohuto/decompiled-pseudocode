/*
 * XREFs of ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x180107AB0
 * Callers:
 *     ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180227F3C (-GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?Update@CNaturalAnimationScalarForceAdapater@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x1802776A0 (-Update@CNaturalAnimationScalarForceAdapater@@UEAAMMPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180016278 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800C1EC4 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18021737C (--1CExpressionValue@@QEAA@XZ.c)
 */

struct CExpressionValue *__fastcall CExpressionValueStack::PeekStackValue(CExpressionValueStack *this, int a2)
{
  __int64 v2; // r8
  CExpressionValue *v3; // rax
  _BYTE v5[88]; // [rsp+20h] [rbp-58h] BYREF

  v2 = (unsigned int)(*((_DWORD *)this + 4) + a2 - 1);
  if ( (unsigned int)v2 < *((_DWORD *)this + 12) )
    return (struct CExpressionValue *)(*((_QWORD *)this + 3) + 80 * v2);
  v3 = CExpressionValue::CExpressionValue((CExpressionValue *)v5);
  CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v3);
  CExpressionValue::~CExpressionValue((CExpressionValue *)v5);
  return (struct CExpressionValue *)&CExpressionValueStack::s_emptyValue;
}
