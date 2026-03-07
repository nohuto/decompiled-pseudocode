__int64 __fastcall CSpriteVectorShape::ProcessSetStrokeDashArray(
        CSpriteVectorShape *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SPRITEVECTORSHAPE_SETSTROKEDASHARRAY *a3,
        char *a4,
        unsigned int a5)
{
  unsigned int v5; // eax
  unsigned int v6; // esi
  __int64 *v9; // r14
  unsigned __int64 v10; // rbx
  gsl::details *v11; // rcx
  _BYTE *v12; // r8
  __int64 v13; // rcx
  char *v15; // [rsp+30h] [rbp-58h] BYREF
  char *v16; // [rsp+38h] [rbp-50h]
  char *v17; // [rsp+40h] [rbp-48h]
  _QWORD v18[4]; // [rsp+50h] [rbp-38h] BYREF
  struct CResourceTable *v19; // [rsp+98h] [rbp+10h] BYREF

  v19 = a2;
  v5 = *((_DWORD *)a3 + 3);
  v6 = 0;
  if ( v5 != a5 || (a5 & 3) != 0 )
  {
    v6 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0xCAu, 0LL);
  }
  else
  {
    v9 = (__int64 *)((char *)this + 160);
    v10 = (unsigned __int64)v5 >> 2;
    if ( !*((_BYTE *)a3 + 8) )
    {
      *((_QWORD *)this + 21) = *((_QWORD *)this + 20);
      std::vector<float>::reserve((_QWORD *)this + 20, v10);
    }
    gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v15, v10);
    if ( v15 == (char *)-1LL || !a4 && v15 )
    {
      gsl::details::terminate(v11);
      __debugbreak();
    }
    v12 = (_BYTE *)*((_QWORD *)this + 21);
    v16 = &a4[4 * (_QWORD)v15];
    v17 = v16;
    v18[1] = v16;
    v15 = a4;
    v18[0] = a4;
    v18[2] = a4;
    std::vector<float>::insert<gsl::details::span_iterator<float const>,0>(v9, &v19, v12, (__int64)v18, (__int64)&v15);
    v13 = *((_QWORD *)this + 17);
    if ( v13 )
    {
      *((_QWORD *)this + 17) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    CResource::NotifyOnChanged((__int64)this, 6u, 0LL);
  }
  return v6;
}
