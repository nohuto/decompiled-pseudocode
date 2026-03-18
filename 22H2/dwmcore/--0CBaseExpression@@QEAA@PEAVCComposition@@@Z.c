/*
 * XREFs of ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x18009A180
 * Callers:
 *     ??0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180098414 (--0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CExpression@@QEAA@PEAVCComposition@@@Z @ 0x1800E8E38 (--0CExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CNaturalAnimation@@QEAA@PEAVCComposition@@@Z @ 0x1801C1194 (--0CNaturalAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CConditionalExpression@@QEAA@PEAVCComposition@@@Z @ 0x18022754C (--0CConditionalExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CInjectionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18022F058 (--0CInjectionAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CScrollAnimation@@QEAA@PEAVCComposition@@@Z @ 0x1802648CC (--0CScrollAnimation@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1801100E8 (memset_0.c)
 */

CBaseExpression *__fastcall CBaseExpression::CBaseExpression(CBaseExpression *this, struct CComposition *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CBaseExpression::`vftable';
  memset_0((char *)this + 72, 0, 0x40uLL);
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 18;
  *((_BYTE *)this + 148) = 0;
  *((_BYTE *)this + 216) |= 1u;
  *((_QWORD *)this + 20) = -1LL;
  *((_QWORD *)this + 21) = -1LL;
  *((_QWORD *)this + 28) = -1LL;
  *((_DWORD *)this + 66) = 0;
  *((_QWORD *)this + 30) = (char *)this + 272;
  *((_QWORD *)this + 31) = (char *)this + 272;
  *((_DWORD *)this + 64) = 2;
  *((_DWORD *)this + 65) = 2;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = &CSparseStorage::s_defaultEmptyAllocatedStorage;
  return this;
}
