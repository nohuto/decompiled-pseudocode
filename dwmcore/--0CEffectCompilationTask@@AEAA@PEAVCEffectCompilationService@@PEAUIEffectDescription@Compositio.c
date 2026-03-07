CEffectCompilationTask *__fastcall CEffectCompilationTask::CEffectCompilationTask(
        CEffectCompilationTask *this,
        struct CEffectCompilationService *a2,
        struct Windows::UI::Composition::IEffectDescription *a3)
{
  CEffectCompilationTask *result; // rax

  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = &CEffectCompilationTask::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = a3;
  if ( a3 )
    (**(void (__fastcall ***)(struct Windows::UI::Composition::IEffectDescription *))a3)(a3);
  *((_QWORD *)this + 9) = 0LL;
  result = this;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_BYTE *)this + 92) = 0;
  return result;
}
