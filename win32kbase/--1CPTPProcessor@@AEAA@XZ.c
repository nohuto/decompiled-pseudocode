void __fastcall CPTPProcessor::~CPTPProcessor(CPTPProcessor *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CPTPProcessor::`vftable'{for `CTouchProcessor'};
  *((_QWORD *)this + 20) = &CPTPProcessor::`vftable'{for `IPTPEngineClient'};
  v2 = *((_QWORD *)this + 68);
  if ( v2 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 32LL))(v2, 1LL);
  *((_DWORD *)this + 129) &= ~4u;
  CInputDest::SetEmpty((CPTPProcessor *)((char *)this + 392));
  CInputDest::SetEmpty((CPTPProcessor *)((char *)this + 392));
  CTouchProcessor::~CTouchProcessor((PVOID *)this);
}
