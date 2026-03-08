/*
 * XREFs of ??_GCDrawListEntryBatch@@EEAAPEAXI@Z @ 0x1802074D8
 * Callers:
 *     ??_ECDrawListEntryBatch@@G7EAAPEAXI@Z @ 0x180119950 (--_ECDrawListEntryBatch@@G7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ??1CDrawListEntryBatch@@EEAA@XZ @ 0x180207474 (--1CDrawListEntryBatch@@EEAA@XZ.c)
 */

CDrawListEntryBatch *__fastcall CDrawListEntryBatch::`scalar deleting destructor'(CDrawListEntryBatch *this, char a2)
{
  CDrawListEntryBatch::~CDrawListEntryBatch(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
