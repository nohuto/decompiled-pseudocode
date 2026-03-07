__int64 __fastcall CManipulationContext::Initialize(CManipulationContext *this, bool a2, int a3)
{
  char v6; // al
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  CInteractionRoot *v10; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 26) = 0;
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)this + 14);
  *((_DWORD *)this + 30) = 0;
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)this + 16);
  v6 = *((_BYTE *)this + 28) & 0xFE;
  *((_DWORD *)this + 8) = a3;
  *((_BYTE *)this + 28) = a2 | v6;
  v7 = DefaultHeap::AllocClear(0x568uLL);
  v8 = v7;
  if ( !v7 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  memset_0(v7, 0, 0x568uLL);
  *v8 = &CInteractionRoot::`vftable';
  CInteractionProcessor::CInteractionProcessor((CInteractionProcessor *)(v8 + 3));
  if ( *((_QWORD **)this + 17) != v8 )
  {
    (*(void (__fastcall **)(_QWORD *))*v8)(v8);
    v9 = *((_QWORD *)this + 17);
    *((_QWORD *)this + 17) = v8;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  }
  v10 = (CInteractionRoot *)*((_QWORD *)this + 17);
  if ( v10 )
    return CInteractionRoot::Initialize(v10, this, a2);
  else
    return 2147942414LL;
}
