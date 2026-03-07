__int64 __fastcall CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Insert(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  _QWORD *v9; // rax

  v4 = 0;
  EnterCriticalSection(&stru_1803E2F98);
  if ( byte_1803E2F94 )
  {
    v4 = -2147023781;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147023781, 0x97u, 0LL);
  }
  else
  {
    v6 = operator new(0x18uLL);
    v8 = v6;
    if ( v6 )
    {
      *v6 = 0LL;
      v6[1] = 0LL;
      v6[2] = 0LL;
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 (__fastcall ****)(_QWORD))v6 + 2, a3);
      v9 = (_QWORD *)qword_1803E2F88;
      if ( *(__int64 **)qword_1803E2F88 != &CManipulationManager::s_InputQueue )
        __fastfail(3u);
      *v8 = &CManipulationManager::s_InputQueue;
      v8[1] = v9;
      *v9 = v8;
      ++dword_1803E2F90;
      qword_1803E2F88 = (__int64)v8;
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x9Cu, 0LL);
    }
  }
  LeaveCriticalSection(&stru_1803E2F98);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(a3);
  return v4;
}
