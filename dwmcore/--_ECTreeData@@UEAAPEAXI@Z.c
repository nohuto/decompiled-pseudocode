/*
 * XREFs of ??_ECTreeData@@UEAAPEAXI@Z @ 0x18020D180
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTreeData@@UEAA@XZ @ 0x18009B6A4 (--1CTreeData@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CTreeData *__fastcall CTreeData::`vector deleting destructor'(CTreeData *this, char a2)
{
  CTreeData::~CTreeData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
