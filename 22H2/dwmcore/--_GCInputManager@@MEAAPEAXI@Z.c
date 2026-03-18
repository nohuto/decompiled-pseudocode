/*
 * XREFs of ??_GCInputManager@@MEAAPEAXI@Z @ 0x1801A2CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 *     ??1CInputManager@@MEAA@XZ @ 0x1801A2BC8 (--1CInputManager@@MEAA@XZ.c)
 */

CInputManager *__fastcall CInputManager::`scalar deleting destructor'(CInputManager *this, char a2)
{
  CInputManager::~CInputManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
