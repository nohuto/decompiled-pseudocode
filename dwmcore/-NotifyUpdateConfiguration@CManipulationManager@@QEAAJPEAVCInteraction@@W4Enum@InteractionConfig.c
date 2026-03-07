__int64 __fastcall CManipulationManager::NotifyUpdateConfiguration(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        void *Src,
        unsigned int Size)
{
  void *v7; // rsi
  _QWORD *v11; // rax
  unsigned int v12; // ecx
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  void *v17; // rax
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // edi
  unsigned int v23; // edx

  v7 = 0LL;
  v11 = operator new(0x48uLL);
  v13 = v11;
  if ( !v11 )
  {
    v21 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x2DFu, 0LL);
    return v21;
  }
  memset_0(v11, 0, 0x48uLL);
  *(_DWORD *)v13 = 7;
  v14 = v13[1];
  if ( v14 )
  {
    v13[1] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  Microsoft::WRL::ComPtr<CInteraction>::operator=(v13 + 2, a2);
  v13[7] = 0LL;
  *((_DWORD *)v13 + 12) = a5;
  *((_DWORD *)v13 + 10) = a3;
  *((_DWORD *)v13 + 11) = a4;
  if ( Size )
  {
    v17 = operator new(Size);
    v7 = v17;
    if ( !v17 )
    {
      v21 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024882, 0x2ECu, 0LL);
      goto LABEL_11;
    }
    memcpy_0(v17, Src, Size);
    v13[7] = v7;
  }
  v19 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v16, v15, v13);
  v21 = v19;
  if ( v19 >= 0 )
    return v21;
  MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x2F8u, 0LL);
LABEL_11:
  CManipulationManager::InteractionUpdate::`scalar deleting destructor'(
    (CManipulationManager::InteractionUpdate *)v13,
    v23);
  if ( v7 )
    operator delete(v7);
  return v21;
}
