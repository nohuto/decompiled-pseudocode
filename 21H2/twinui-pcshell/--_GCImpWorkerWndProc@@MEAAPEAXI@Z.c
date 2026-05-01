/*
 * XREFs of ??_GCImpWorkerWndProc@@MEAAPEAXI@Z @ 0x1800D57F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906D4 (--3@YAXPEAX@Z.c)
 *     ??1CImpWorkerWndProc@@MEAA@XZ @ 0x1800D5788 (--1CImpWorkerWndProc@@MEAA@XZ.c)
 */

CImpWorkerWndProc *__fastcall CImpWorkerWndProc::`scalar deleting destructor'(CImpWorkerWndProc *this, char a2)
{
  CImpWorkerWndProc::~CImpWorkerWndProc(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
