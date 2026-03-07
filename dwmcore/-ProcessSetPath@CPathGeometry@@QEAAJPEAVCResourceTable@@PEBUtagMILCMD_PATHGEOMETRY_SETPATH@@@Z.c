__int64 __fastcall CPathGeometry::ProcessSetPath(
        CPathGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PATHGEOMETRY_SETPATH *a3)
{
  unsigned int v5; // ebx
  CSharedSectionBase *Resource; // rsi
  unsigned int v7; // ecx
  void *v8; // rbp
  LPVOID v9; // rsi
  gsl::details *v10; // rcx
  const struct CPathData *v11; // rax
  unsigned int v13; // [rsp+20h] [rbp-28h]
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0;
  Resource = (CSharedSectionBase *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0xA9u);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((char *)this + 144);
  if ( Resource )
  {
    v8 = CSharedSectionBase::ResolveAllocation(Resource, *((unsigned int *)a3 + 3), *((unsigned int *)a3 + 4));
    if ( v8 )
    {
      v9 = DefaultHeap::Alloc(0x50uLL);
      if ( v9 )
      {
        gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v14, *((unsigned int *)a3 + 4));
        v14[1] = v8;
        if ( v14[0] == -1LL )
        {
          gsl::details::terminate(v10);
          JUMPOUT(0x1800AB45CLL);
        }
        v11 = (const struct CPathData *)CPathData::CPathData(v9, g_DeviceManager, v14);
        if ( v11 )
        {
          CPathGeometry::SetPath(this, v11);
          return v5;
        }
      }
      v13 = 30;
    }
    else
    {
      v13 = 25;
    }
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, v13, 0LL);
  }
  return v5;
}
