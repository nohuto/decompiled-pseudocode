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
