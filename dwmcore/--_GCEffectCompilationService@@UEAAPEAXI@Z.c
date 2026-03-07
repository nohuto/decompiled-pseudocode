CEffectCompilationService *__fastcall CEffectCompilationService::`scalar deleting destructor'(
        CEffectCompilationService *this,
        char a2)
{
  CEffectCompilationService::~CEffectCompilationService(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
