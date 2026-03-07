__int64 __fastcall CGlobalComposition::Create(
        struct CTransport *a1,
        struct ICompositorScheduler *a2,
        struct CConnection *a3,
        struct CDebugFrameCounter *a4,
        struct CComposition **a5)
{
  CComposition *v9; // rax
  __int64 v10; // rcx
  struct CComposition *v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi

  v9 = (CComposition *)DefaultHeap::AllocClear(0x568uLL);
  v11 = v9;
  if ( v9 )
  {
    CComposition::CComposition(v9, a1, a2, a3, a4);
    g_pComposition = v11;
    *(_QWORD *)v11 = &CGlobalComposition::`vftable';
    *((_QWORD *)v11 + 170) = 0LL;
    *((_QWORD *)v11 + 171) = 0LL;
    *((_QWORD *)v11 + 172) = 0LL;
    v12 = CComposition::Initialize(v11);
    v14 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x38u, 0LL);
      CMILRefCountBaseT<IMILRefCount>::InternalRelease(v11);
    }
    else
    {
      *a5 = v11;
    }
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x34u, 0LL);
  }
  return v14;
}
