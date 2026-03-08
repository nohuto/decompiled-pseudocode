/*
 * XREFs of ??_GCFlipExBuffer@@MEAAPEAXI@Z @ 0x1C000BA50
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C000BAE4 (--1CFlipExBuffer@@MEAA@XZ.c)
 */

CFlipExBuffer *__fastcall CFlipExBuffer::`scalar deleting destructor'(CFlipExBuffer *P, char a2)
{
  CFlipExBuffer::~CFlipExBuffer(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
