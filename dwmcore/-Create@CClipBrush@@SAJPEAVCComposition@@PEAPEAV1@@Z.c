__int64 __fastcall CClipBrush::Create(struct CComposition *a1, struct CClipBrush **a2)
{
  CClipBrush *v4; // rax
  __int64 v5; // rcx
  CClipBrush *v6; // rax
  struct CClipBrush *v7; // rdi
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  CClipBrush *v12; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = (CClipBrush *)DefaultHeap::AllocClear(0x98uLL);
  if ( !v4 )
  {
    v12 = 0LL;
    goto LABEL_7;
  }
  v6 = CClipBrush::CClipBrush(v4, a1);
  v12 = v6;
  v7 = v6;
  if ( !v6 )
  {
LABEL_7:
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x15u, 0LL);
    goto LABEL_8;
  }
  (*(void (__fastcall **)(CClipBrush *))(*(_QWORD *)v6 + 8LL))(v6);
  v8 = (*(__int64 (__fastcall **)(struct CClipBrush *))(*(_QWORD *)v7 + 48LL))(v7);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x17u, 0LL);
  }
  else
  {
    v12 = 0LL;
    *a2 = v7;
  }
LABEL_8:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v12);
  return v10;
}
