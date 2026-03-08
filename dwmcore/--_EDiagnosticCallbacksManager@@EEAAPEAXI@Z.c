/*
 * XREFs of ??_EDiagnosticCallbacksManager@@EEAAPEAXI@Z @ 0x1801B5ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1DiagnosticCallbacksManager@@EEAA@XZ @ 0x1801B5C4C (--1DiagnosticCallbacksManager@@EEAA@XZ.c)
 */

DiagnosticCallbacksManager *__fastcall DiagnosticCallbacksManager::`vector deleting destructor'(
        DiagnosticCallbacksManager *this,
        char a2)
{
  DiagnosticCallbacksManager::~DiagnosticCallbacksManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
