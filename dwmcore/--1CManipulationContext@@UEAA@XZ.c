void __fastcall CManipulationContext::~CManipulationContext(CManipulationContext *this)
{
  __int64 v2; // rcx
  _DWORD *v3; // rdi
  int i; // esi
  void *v5; // rcx
  _DWORD *v6; // rdi
  int j; // esi
  void *v8; // rcx
  __int64 v9; // rcx

  *(_QWORD *)this = &CManipulationContext::`vftable'{for `IManipulationContext'};
  *((_QWORD *)this + 1) = &CManipulationContext::`vftable'{for `CMILRefCountBaseT<IMILRefCount>'};
  v2 = *((_QWORD *)this + 17);
  if ( v2 )
  {
    *((_QWORD *)this + 17) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)this + 14);
  v3 = (_DWORD *)((char *)this + 96);
  if ( *((_QWORD *)this + 10) )
  {
    for ( i = 0; i < *v3; ++i )
      TargetingInfo::`scalar deleting destructor'((TargetingInfo *)(*((_QWORD *)this + 11) + 16LL * i));
    operator delete(*((void **)this + 10));
    *((_QWORD *)this + 10) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 11);
  if ( v5 )
  {
    operator delete(v5);
    *((_QWORD *)this + 11) = 0LL;
  }
  *v3 = 0;
  v6 = (_DWORD *)((char *)this + 72);
  if ( *((_QWORD *)this + 7) )
  {
    for ( j = 0; j < *v6; ++j )
      Microsoft::WRL::ComPtr<CInteraction>::`scalar deleting destructor'(*((_QWORD *)this + 8) + 8LL * j);
    operator delete(*((void **)this + 7));
    *((_QWORD *)this + 7) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 8);
  if ( v8 )
  {
    operator delete(v8);
    *((_QWORD *)this + 8) = 0LL;
  }
  *v6 = 0;
  v9 = *((_QWORD *)this + 6);
  if ( v9 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
}
