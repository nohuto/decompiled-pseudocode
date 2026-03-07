__int64 __fastcall CExcludeVisualReference::Create(struct CVisual *a1, struct CWeakResourceReference ***a2)
{
  char *v4; // rax
  __int64 v5; // rcx
  struct CWeakResourceReference **v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  unsigned int v11; // edx

  *a2 = 0LL;
  v4 = (char *)DefaultHeap::Alloc(0x18uLL);
  v6 = (struct CWeakResourceReference **)v4;
  if ( v4 )
  {
    *(_WORD *)(v4 + 21) = 0;
    v4[23] = 0;
    *(_QWORD *)v4 = &CExcludeVisualReference::`vftable';
    *((_QWORD *)v4 + 1) = 0LL;
    *((_DWORD *)v4 + 4) = 0;
    v4[20] = 0;
    wil::com_ptr_t<CWeakReference<CVisual>,wil::err_returncode_policy>::reset((__int64 *)v4 + 1);
    v7 = CWeakReference<CVisual>::Create(a1, v6 + 1);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x17u, 0LL);
      CExcludeVisualReference::`scalar deleting destructor'((CExcludeVisualReference *)v6, v11);
    }
    else
    {
      *a2 = v6;
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x15u, 0LL);
  }
  return v9;
}
