/*
 * XREFs of ??_ECExpressionManager@@EEAAPEAXI@Z @ 0x180216DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CExpressionManager@@EEAA@XZ @ 0x180216BBC (--1CExpressionManager@@EEAA@XZ.c)
 */

CExpressionManager *__fastcall CExpressionManager::`vector deleting destructor'(CExpressionManager *this, char a2)
{
  CExpressionManager::~CExpressionManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
