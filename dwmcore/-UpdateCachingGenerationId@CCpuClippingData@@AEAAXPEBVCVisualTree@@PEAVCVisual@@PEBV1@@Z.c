void __fastcall CCpuClippingData::UpdateCachingGenerationId(
        CCpuClippingData *this,
        const struct CVisualTree *a2,
        struct CVisual *a3,
        const struct CCpuClippingData *a4)
{
  __int64 v4; // r10
  bool v6; // r11
  char v7; // r8
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  char *v10; // rbx
  unsigned __int64 v11; // rax
  bool v12; // zf

  v4 = *((_QWORD *)a2 + 588);
  *((_QWORD *)this + 2) = v4;
  v6 = a4 && *((_DWORD *)a4 + 14);
  *((_DWORD *)this + 14) = 0;
  v7 = 0;
  v8 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 6) = a3;
  v9 = *((_QWORD *)this + 1);
  if ( v8 < v9 )
  {
    *((_QWORD *)this + 3) = v9;
    v7 = 1;
    v8 = v9;
  }
  if ( *((_DWORD *)this + 8) == 1 )
  {
    *((_QWORD *)this + 6) = *((_QWORD *)a4 + 6);
    v11 = *((_QWORD *)a4 + 3);
    if ( v8 < v11 )
    {
      *((_QWORD *)this + 3) = v11;
      v7 = 1;
    }
    if ( v6 )
    {
      v12 = *((_BYTE *)this + 73) == 0;
      *((_DWORD *)this + 14) = *((_DWORD *)a4 + 14);
      if ( !v12 )
      {
        *((_QWORD *)this + 3) = v4;
        v7 = 1;
      }
    }
  }
  else if ( *((_DWORD *)this + 8) != 2 )
  {
    v10 = (char *)this + 64;
LABEL_16:
    if ( *(_QWORD *)v10 )
    {
      CShapePtr::Release((CShapePtr *)(*(_QWORD *)v10 + 96LL));
      wil::com_ptr_t<CWeakReference<CVisual>,wil::err_returncode_policy>::reset(*(_QWORD *)v10 + 120LL);
    }
    return;
  }
  if ( *((_BYTE *)this + 74) )
  {
    *((_QWORD *)this + 3) = v4;
    v7 = 1;
  }
  v10 = (char *)this + 64;
  if ( v6 || *(_QWORD *)v10 )
  {
    if ( *((_BYTE *)this + 75) )
      *((_QWORD *)this + 3) = v4;
    if ( *(_QWORD *)v10 )
      ++*((_DWORD *)this + 14);
  }
  if ( v7 )
    goto LABEL_16;
}
