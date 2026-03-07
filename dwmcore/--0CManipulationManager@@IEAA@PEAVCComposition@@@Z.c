CManipulationManager *__fastcall CManipulationManager::CManipulationManager(
        CManipulationManager *this,
        struct CComposition *a2)
{
  char *v3; // rcx
  CManipulationManager *result; // rax

  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = &CManipulationManager::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  v3 = (char *)this + 80;
  *((_DWORD *)v3 + 4) = 0;
  v3[20] = 0;
  *((_QWORD *)v3 + 1) = v3;
  *(_QWORD *)v3 = v3;
  InitializeCriticalSection((LPCRITICAL_SECTION)(v3 + 24));
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 54) = 0;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  QpcTimeConverter::QpcTimeConverter((CManipulationManager *)((char *)this + 280));
  result = this;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  return result;
}
