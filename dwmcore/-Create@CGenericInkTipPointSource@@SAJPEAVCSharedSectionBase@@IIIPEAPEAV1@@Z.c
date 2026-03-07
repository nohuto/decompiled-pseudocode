__int64 __fastcall CGenericInkTipPointSource::Create(
        struct CSharedSectionBase *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        struct CGenericInkTipPointSource **a5)
{
  char *v9; // rax
  CGenericInkTipPointSource *v10; // rdi
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // r9
  __int64 v14; // rdx
  volatile signed __int32 *v16; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v9 = (char *)DefaultHeap::Alloc(0x28uLL);
  v10 = (CGenericInkTipPointSource *)v9;
  if ( !v9 )
  {
    v16 = 0LL;
    v12 = -2147024882;
    v13 = 2147942414LL;
    v14 = 14LL;
    goto LABEL_6;
  }
  *((_DWORD *)v9 + 3) = 0;
  *((_QWORD *)v9 + 4) = 0LL;
  *((_DWORD *)v9 + 2) = 0;
  *((_QWORD *)v9 + 2) = 0LL;
  *((_QWORD *)v9 + 3) = 0LL;
  *(_QWORD *)v9 = &CGenericInkTipPointSource::`vftable';
  v16 = (volatile signed __int32 *)v9;
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v9 + 8));
  v11 = CGenericInkTipPointSource::Initialize(v10, a1, a2, a3, a4);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = (unsigned int)v11;
    v14 = 20LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericinktippointsource.cpp",
      (const char *)v13);
    goto LABEL_7;
  }
  v16 = 0LL;
  v12 = 0;
  *a5 = v10;
LABEL_7:
  Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease(&v16);
  return v12;
}
