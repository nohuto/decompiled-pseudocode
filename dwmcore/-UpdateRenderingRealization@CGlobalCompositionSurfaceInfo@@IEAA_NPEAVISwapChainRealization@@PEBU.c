bool __fastcall CGlobalCompositionSurfaceInfo::UpdateRenderingRealization(
        CGlobalCompositionSurfaceInfo *this,
        struct ISwapChainRealization *a2,
        const struct CSM_BUFFER_ATTRIBUTES *a3,
        HRGN a4,
        const struct ScrollOptimization *a5)
{
  bool v8; // r15
  char v9; // si
  char v10; // r12
  bool v11; // r13
  bool v12; // zf
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // dl
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int128 *v21; // rax
  __int64 v22; // rdx
  __int128 v23; // xmm0
  __int64 v24; // rax
  __int64 (__fastcall ***v25)(_QWORD, _BYTE *); // rcx
  __int64 v26; // rax
  __int64 *v27; // rcx
  __int64 v28; // rax
  char *v29; // rcx
  int v30; // r14d
  __int128 v31; // xmm0
  __int64 v32; // rax
  char *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // r14
  unsigned __int64 v37; // r13
  HRGN v38; // rbx
  char v40; // [rsp+30h] [rbp-D0h]
  bool v41; // [rsp+31h] [rbp-CFh]
  int v42; // [rsp+34h] [rbp-CCh]
  int v43; // [rsp+38h] [rbp-C8h]
  int v44; // [rsp+3Ch] [rbp-C4h]
  int v45; // [rsp+40h] [rbp-C0h]
  HRGN v46; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v47; // [rsp+58h] [rbp-A8h]
  struct ScrollOptimization *v48; // [rsp+68h] [rbp-98h]
  float v49[20]; // [rsp+70h] [rbp-90h] BYREF
  float v50[20]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v51; // [rsp+110h] [rbp+10h] BYREF
  __int128 v52; // [rsp+120h] [rbp+20h] BYREF
  __int128 v53; // [rsp+130h] [rbp+30h] BYREF
  __int128 v54; // [rsp+140h] [rbp+40h] BYREF
  __int128 v55; // [rsp+150h] [rbp+50h] BYREF
  __int128 v56; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v57[16]; // [rsp+170h] [rbp+70h] BYREF
  int *v58; // [rsp+180h] [rbp+80h] BYREF
  int v59; // [rsp+188h] [rbp+88h] BYREF

  v46 = a4;
  v48 = a5;
  v41 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( !a3 || (v40 = 1, (*((_DWORD *)a3 + 34) & 0x400) == 0) )
    v40 = 0;
  v12 = *((_BYTE *)this + 96) == 0;
  v59 = 0;
  v58 = &v59;
  if ( !v12 )
  {
    v8 = 1;
    v9 = 1;
    v10 = 1;
    if ( CGlobalCompositionSurfaceInfo::IsSwapChain(this) && a2 && a3 )
      (*(void (__fastcall **)(struct ISwapChainRealization *, const struct CSM_BUFFER_ATTRIBUTES *))(*(_QWORD *)a2 + 136LL))(
        a2,
        a3);
    goto LABEL_9;
  }
  if ( !CGlobalCompositionSurfaceInfo::IsSwapChain(this) )
  {
LABEL_9:
    v16 = v40;
    goto LABEL_10;
  }
  v51 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v55 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  CMILMatrix::SetToIdentity((CMILMatrix *)v50);
  CMILMatrix::SetToIdentity((CMILMatrix *)v49);
  v43 = 0;
  v18 = 0LL;
  v45 = 0;
  v42 = 0;
  v44 = 0;
  v19 = *((_QWORD *)this + 26);
  v53 = 0LL;
  v54 = 0LL;
  v56 = 0LL;
  v52 = 0LL;
  if ( v19 )
  {
    v20 = v19 + 8 + *(int *)(*(_QWORD *)(v19 + 8) + 16LL);
    (*(void (__fastcall **)(__int64, float *, __int128 *))(*(_QWORD *)v20 + 8LL))(v20, v50, &v51);
    v43 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 26) + 16LL))(*((_QWORD *)this + 26));
    v21 = (__int128 *)(*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 26) + 24LL))(
                        *((_QWORD *)this + 26),
                        &v53);
    v22 = *((_QWORD *)this + 26);
    v23 = *v21;
    v24 = *(_QWORD *)(v22 + 8);
    v53 = v23;
    v25 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(v22 + 8 + *(int *)(v24 + 12));
    v26 = (**v25)(v25, v57);
    v27 = (__int64 *)*((_QWORD *)this + 26);
    *(_QWORD *)&v23 = *(_QWORD *)v26;
    v44 = *(_DWORD *)(v26 + 8);
    v28 = *v27;
    v47 = v23;
    (*(void (__fastcall **)(__int64 *, __int128 *))(v28 + 160))(v27, &v56);
    v18 = 0LL;
    v42 = DWORD1(v23);
  }
  if ( a2 )
  {
    if ( a3 )
      (*(void (__fastcall **)(struct ISwapChainRealization *, const struct CSM_BUFFER_ATTRIBUTES *))(*(_QWORD *)a2 + 136LL))(
        a2,
        a3);
    v29 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 16LL) + 8;
    (*(void (__fastcall **)(char *, float *, __int128 *))(*(_QWORD *)v29 + 8LL))(v29, v49, &v55);
    v30 = (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a2 + 16LL))(a2);
    v31 = *(_OWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, __int128 *))(*(_QWORD *)a2 + 24LL))(
                       a2,
                       &v54);
    v32 = *((_QWORD *)a2 + 1);
    v54 = v31;
    v33 = (char *)a2 + *(int *)(v32 + 12) + 8;
    v34 = (**(__int64 (__fastcall ***)(char *, _BYTE *))v33)(v33, v57);
    *(_QWORD *)&v31 = *(_QWORD *)v34;
    v45 = *(_DWORD *)(v34 + 8);
    v35 = *(_QWORD *)a2;
    v47 = v31;
    (*(void (__fastcall **)(struct ISwapChainRealization *, __int128 *))(v35 + 160))(a2, &v52);
    v18 = DWORD1(v31);
  }
  else
  {
    v30 = 0;
  }
  if ( (unsigned __int8)operator!=(&v51, &v55, v18)
    || !CMILMatrix::IsEqualTo<0>(v50, v49)
    || (v51 = v52, v52 = v56, (unsigned __int8)operator!=(&v52, &v51, v14)) )
  {
    v9 = 1;
  }
  v16 = v40;
  if ( v40
    || v42 != (_DWORD)v14
    || v43 != v30
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v53 - *(float *)&v54) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v53 + 1) - *((float *)&v54 + 1)) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v53 + 2) - *((float *)&v54 + 2)) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v53 + 3) - *((float *)&v54 + 3)) & _xmm) > 0.0000011920929
    || v44 != v45 )
  {
    v10 = 1;
  }
LABEL_10:
  if ( *((struct ISwapChainRealization **)this + 26) != a2 )
  {
    v17 = *((_QWORD *)this + 14);
    if ( v17 )
      *(_BYTE *)(v17 + 152) = 0;
    v12 = *((_QWORD *)this + 26) == 0LL;
    v8 = 1;
    *((_QWORD *)this + 26) = a2;
    if ( !v12 != (a2 != 0LL) )
      v9 = 1;
  }
  if ( v16 && CGlobalCompositionSurfaceInfo::IsSwapChain(this) )
    CGlobalCompositionSurfaceInfo::CBindInfo::EnsureHDRMetaData((CGlobalCompositionSurfaceInfo *)((char *)this + 104));
  if ( *((_QWORD *)this + 26) )
  {
    v11 = CGlobalCompositionSurfaceInfo::DirtyRenderingRealization(this, v8, v46, v48, (struct CRegion *)&v58);
    v41 = v11;
  }
  else
  {
    v8 = 1;
    v9 = 1;
    v10 = 1;
  }
  if ( !*((_BYTE *)this + 96) )
  {
    *((_BYTE *)this + 96) = 1;
    if ( v8 || v9 || v10 || v11 )
    {
      v36 = (__int64)(*((_QWORD *)this + 9) - *((_QWORD *)this + 8)) >> 3;
      if ( v36 )
      {
        v37 = (unsigned __int64)&v58 & -(__int64)v11;
        do
        {
          v38 = *(HRGN *)(*((_QWORD *)this + 8) + 8 * v36 - 8);
          v46 = v38;
          if ( v38 )
            (*(void (__fastcall **)(HRGN))(*(_QWORD *)v38 + 8LL))(v38);
          LOBYTE(v15) = v10;
          LOBYTE(v14) = v9;
          LOBYTE(v13) = v8;
          (*(void (__fastcall **)(HRGN, __int64, __int64, __int64, unsigned __int64))(*(_QWORD *)v38 + 24LL))(
            v38,
            v13,
            v14,
            v15,
            v37);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v46);
          --v36;
        }
        while ( v36 );
      }
    }
    *((_QWORD *)this + 20) = *((_QWORD *)this + 19);
    *((_BYTE *)this + 96) = 0;
    if ( v41 )
      CRegion::GetRectangles(&v58);
  }
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v58);
  return v8;
}
