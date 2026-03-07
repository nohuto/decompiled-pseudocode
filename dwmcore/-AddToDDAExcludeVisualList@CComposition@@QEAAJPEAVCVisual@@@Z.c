__int64 __fastcall CComposition::AddToDDAExcludeVisualList(CComposition *this, struct CVisual *a2)
{
  CResource **v2; // rbx
  CVisualGroup *v4; // rcx
  _DWORD *v6; // rax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx

  v2 = (CResource **)((char *)this + 1008);
  v4 = (CVisualGroup *)*((_QWORD *)this + 126);
  if ( v4 )
    goto LABEL_6;
  v6 = DefaultHeap::AllocClear(0x58uLL);
  if ( v6 )
  {
    v6[2] = 0;
    *((_QWORD *)v6 + 2) = this;
    *((_QWORD *)v6 + 3) = 0LL;
    *((_QWORD *)v6 + 5) = 0LL;
    v6[8] = 0;
    *(_QWORD *)v6 = &CVisualGroup::`vftable';
    *((_QWORD *)v6 + 8) = 0LL;
    *((_QWORD *)v6 + 9) = 0LL;
    *((_QWORD *)v6 + 10) = 0LL;
  }
  wil::com_ptr_t<CVisualGroup,wil::err_returncode_policy>::operator=(v2, (__int64)v6);
  v4 = *v2;
  if ( *v2 )
  {
LABEL_6:
    v8 = CVisualGroup::AddVisual(v4, a2);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xB04u, 0LL);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2147024882, 0xB01u, 0LL);
  }
  return v7;
}
