/*
 * XREFs of ??_ECConditionalExpression@@UEAAPEAXI@Z @ 0x1802241B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CConditionalExpression@@UEAA@XZ @ 0x18022404C (--1CConditionalExpression@@UEAA@XZ.c)
 */

CConditionalExpression *__fastcall CConditionalExpression::`vector deleting destructor'(
        CConditionalExpression *this,
        char a2)
{
  CConditionalExpression::~CConditionalExpression(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
