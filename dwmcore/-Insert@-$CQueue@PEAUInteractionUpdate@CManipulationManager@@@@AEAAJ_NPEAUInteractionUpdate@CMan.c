__int64 __fastcall CQueue<CManipulationManager::InteractionUpdate *>::Insert(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // ecx
  _QWORD *v6; // rax
  unsigned int v7; // ecx
  _QWORD *v8; // rcx

  v4 = 0;
  EnterCriticalSection(&CriticalSection);
  if ( byte_1803E2F54 )
  {
    v4 = -2147023781;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147023781, 0x97u, 0LL);
  }
  else
  {
    v6 = operator new(0x18uLL);
    if ( v6 )
    {
      *(_OWORD *)v6 = 0LL;
      v6[2] = a3;
      v8 = (_QWORD *)qword_1803E2F48;
      if ( *(__int64 **)qword_1803E2F48 != &CManipulationManager::s_InteractionUpdateQueue )
        __fastfail(3u);
      *v6 = &CManipulationManager::s_InteractionUpdateQueue;
      v6[1] = v8;
      *v8 = v6;
      ++dword_1803E2F50;
      qword_1803E2F48 = (__int64)v6;
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x9Cu, 0LL);
    }
  }
  LeaveCriticalSection(&CriticalSection);
  return v4;
}
