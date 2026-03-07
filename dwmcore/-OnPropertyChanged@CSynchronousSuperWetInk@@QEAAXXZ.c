void __fastcall CSynchronousSuperWetInk::OnPropertyChanged(CSynchronousSuperWetInk *this)
{
  struct CGenericInkTipPointSource **v1; // rax
  unsigned int v3; // r9d
  unsigned int v4; // edx
  unsigned int v5; // r8d
  struct CSharedSectionBase *v6; // rcx
  unsigned int v7; // esi
  unsigned int v8; // eax
  unsigned int v9; // edx
  CSharedSectionBase *v10; // rcx
  unsigned int v11; // r8d
  gsl::details *v12; // r14
  bool v13; // si
  void *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  gsl::details *v17[2]; // [rsp+30h] [rbp-30h] BYREF
  void **v18; // [rsp+40h] [rbp-20h]
  volatile __int32 **v19; // [rsp+48h] [rbp-18h] BYREF
  char v20; // [rsp+50h] [rbp-10h]

  v1 = (struct CGenericInkTipPointSource **)((char *)this + 88);
  if ( !*((_QWORD *)this + 11) )
  {
    v3 = *((_DWORD *)this + 38);
    if ( v3 )
    {
      v4 = *((_DWORD *)this + 36);
      if ( v4 )
      {
        v5 = *((_DWORD *)this + 37);
        if ( v5 )
        {
          v6 = (struct CSharedSectionBase *)*((_QWORD *)this + 24);
          if ( v6 )
            CGenericInkTipPointSource::Create(v6, v4, v5, v3, v1);
        }
      }
    }
  }
  if ( *((_QWORD *)this + 26) )
    goto LABEL_20;
  v7 = *((_DWORD *)this + 41);
  if ( !v7 )
    goto LABEL_20;
  v8 = *((_DWORD *)this + 39);
  if ( !v8 )
    goto LABEL_20;
  v9 = *((_DWORD *)this + 40);
  if ( !v9 )
    goto LABEL_20;
  v10 = (CSharedSectionBase *)*((_QWORD *)this + 25);
  if ( !v10 )
    goto LABEL_20;
  v12 = (gsl::details *)CSharedSectionBase::ResolveAllocation(v10, v8, v9);
  if ( v12 )
  {
    v19 = 0LL;
    v18 = (void **)((char *)this + 216);
    v20 = 1;
    gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v17, v11);
    if ( v17[0] == (gsl::details *)-1LL )
    {
      gsl::details::terminate((gsl::details *)0xFFFFFFFFFFFFFFFFLL);
      __debugbreak();
    }
    v17[1] = v12;
    v13 = (int)CSharedCircularQueue::Create((unsigned int *)v17, v7, &v19, 0) < 0;
    if ( v20 )
    {
      v14 = *v18;
      *v18 = v19;
      if ( v14 )
        operator delete(v14);
    }
    if ( !v13 )
    {
      Microsoft::WRL::ComPtr<CSharedSectionBase>::operator=((__int64 *)this + 26, *((_QWORD *)this + 25));
LABEL_20:
      if ( CSynchronousSuperWetInk::IsSuperWetCompatible(this) )
      {
        CResource::NotifyOnChanged(v15, 0, 0LL);
        std::vector<unsigned char>::reserve(
          (_QWORD *)this + 33,
          (unsigned int)(*(_DWORD *)(*((_QWORD *)this + 27) + 8LL) * *(_DWORD *)(*((_QWORD *)this + 27) + 12LL)));
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
          McTemplateU0pp_EventWriteTransfer(
            v16,
            &EVTDESC_SYNCHRONOUSSUPERWETINK_SUCCESSFULLY_REGISTERED,
            this,
            *((_QWORD *)this + 23));
      }
    }
  }
}
