__int64 __fastcall CD3DDevice::GenerateShaders(CD3DDevice *this)
{
  bool v2; // r15
  unsigned int v3; // ecx
  char v4; // r10
  char v5; // al
  char v6; // r8
  unsigned int v7; // edx
  unsigned int v8; // r9d
  __int64 v9; // rbx
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  unsigned int v15; // eax
  unsigned int v16; // esi
  unsigned int v17; // r14d
  int CommonOrCubeMapRenderingShader; // eax
  CCommonRenderingShaderCache *v19; // rcx
  unsigned int v20; // r14d
  signed int v21; // eax
  unsigned int v22; // esi
  __int64 v23; // r13
  unsigned int v24; // eax
  __int128 v25; // xmm0
  __int64 v26; // r15
  size_t v27; // rax
  size_t v28; // rax
  __int64 v29; // rbx
  gsl::details *v30; // rcx
  gsl::details *v31; // rcx
  __int64 v32; // rbx
  _OWORD *v33; // r12
  __int64 *v34; // r15
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  int v39; // ebx
  int v40; // esi
  int v41; // r14d
  __int64 *v42; // r12
  char *v43; // r15
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 (__fastcall *v46)(__int64 *, char *, char *); // r13
  __int64 v47; // rcx
  __int64 v48; // rdx
  int v49; // ebx
  int v50; // esi
  int v51; // r14d
  __int64 *v52; // r12
  char *v53; // r15
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 (__fastcall *v56)(__int64 *, __int16 *, char *); // r13
  __int64 v57; // rcx
  __int64 v58; // rdx
  int v59; // r14d
  int v60; // esi
  int v61; // r15d
  __int64 *v62; // r12
  char *v63; // rbx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 (__fastcall *v66)(__int64 *, char *, char *); // r13
  unsigned int v67; // ecx
  CSurfaceShaderComposer *v68; // rdi
  unsigned int v70; // [rsp+28h] [rbp-E0h]
  bool v71; // [rsp+48h] [rbp-C0h]
  unsigned int v72[4]; // [rsp+50h] [rbp-B8h] BYREF
  struct ID3D11PixelShader *v73; // [rsp+60h] [rbp-A8h] BYREF
  int v74; // [rsp+68h] [rbp-A0h]
  __int128 v75; // [rsp+70h] [rbp-98h] BYREF
  void *Src_8[2]; // [rsp+80h] [rbp-88h] BYREF
  int v77; // [rsp+90h] [rbp-78h]
  const char *v78; // [rsp+98h] [rbp-70h]
  int v79; // [rsp+A0h] [rbp-68h]
  int v80; // [rsp+A8h] [rbp-60h]
  int v81; // [rsp+ACh] [rbp-5Ch]
  __int128 v82; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v83[3]; // [rsp+C0h] [rbp-48h] BYREF
  _OWORD v84[26]; // [rsp+D8h] [rbp-30h] BYREF

  v74 = *((_DWORD *)this + 146);
  v2 = v74 >= 37632;
  v3 = 0;
  v4 = 0;
  v71 = v74 >= 37632;
  v5 = 0;
  v72[0] = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  do
  {
    if ( (v4 & 0x10) == 0 || (v5 = v6, v7 = v8, *((_DWORD *)this + 233)) )
    {
      if ( (unsigned __int8)v2 >= (unsigned __int8)((v5 & 4) != 0) )
      {
        v82 = *((_OWORD *)&unk_1802D4910 + v7);
        v9 = v82;
        if ( (_QWORD)v82 )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
            McTemplateU0q_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_D3DSHADER_CREATE_Start,
              0LL);
          v10 = (__int64 *)*((_QWORD *)this + 69);
          v11 = *v10;
          v73 = 0LL;
          v12 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, _QWORD, struct ID3D11PixelShader **))(v11 + 96))(
                  v10,
                  *((_QWORD *)&v82 + 1),
                  v9,
                  0LL,
                  &v73);
          v14 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1C5u, 0LL);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v73);
            return v14;
          }
          CMap<unsigned int,wil::com_ptr_t<ID3D11VertexShader,wil::err_returncode_policy>,CMapEqualHelper<unsigned int,wil::com_ptr_t<ID3D11VertexShader,wil::err_returncode_policy>>>::Add(
            (char *)this + 1512,
            v72,
            &v73);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
            McTemplateU0q_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_D3DSHADER_CREATE_Stop,
              0LL);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v73);
          v3 = v72[0];
        }
      }
    }
    v72[0] = ++v3;
    v5 = v3;
    v4 = v3;
    v6 = v3;
    v7 = v3;
    v8 = v3;
  }
  while ( v3 < 0x20 );
  v15 = 0;
  v16 = 0;
  v17 = 0;
  do
  {
    v80 = -1;
    Src_8[1] = (void *)"NoOp";
    v77 = 0;
    v79 = 0;
    Src_8[0] = (void *)v15;
    v78 = "NoOp";
    v81 = 0;
    CommonOrCubeMapRenderingShader = CCommonRenderingShaderCache::GetCommonOrCubeMapRenderingShader(
                                       0LL,
                                       this,
                                       (const struct CommonRenderingShaderDesc *)Src_8,
                                       0,
                                       v72,
                                       &v73);
    v14 = CommonOrCubeMapRenderingShader;
    if ( CommonOrCubeMapRenderingShader < 0 )
    {
      v70 = 473;
      goto LABEL_64;
    }
    if ( ((__int64)Src_8[0] & 1) != 0 )
    {
      LODWORD(Src_8[0]) |= 4u;
      CommonOrCubeMapRenderingShader = CCommonRenderingShaderCache::GetCommonOrCubeMapRenderingShader(
                                         v19,
                                         this,
                                         (const struct CommonRenderingShaderDesc *)Src_8,
                                         0,
                                         v72,
                                         &v73);
      v14 = CommonOrCubeMapRenderingShader;
      v16 = v17;
      if ( CommonOrCubeMapRenderingShader < 0 )
      {
        v70 = 483;
LABEL_64:
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v19, 0LL, 0, CommonOrCubeMapRenderingShader, v70, 0LL);
        return v14;
      }
    }
    v15 = v16 + 1;
    v16 = v15;
    v17 = v15;
  }
  while ( v15 < 4 );
  v20 = 0;
  v21 = 0;
  while ( 2 )
  {
    v22 = 0;
    v23 = v21;
    do
    {
      v72[0] = 0x10000;
      LOBYTE(v72[0]) = (unsigned __int64)(v23 - 2) <= 1;
      v72[1] = ((v23 - 1) & 0xFFFFFFFFFFFFFFFDuLL) != 0 ? 2 : 4;
      HIBYTE(v72[0]) = v22 != 0;
      v24 = VertexShaderDesc::ResolveKey((VertexShaderDesc *)v72);
      if ( (unsigned __int8)v2 >= (unsigned __int8)((v24 & 4) != 0) )
      {
        v25 = *((_OWORD *)&unk_1802D4910 + v24);
        v73 = (struct ID3D11PixelShader *)*((_QWORD *)&unk_1802D4910 + 2 * v24);
        *(_OWORD *)Src_8 = v25;
        if ( v73 )
        {
          v75 = *((_OWORD *)&unk_1802D4C50 + v23);
          *(_OWORD *)v72 = *((_OWORD *)&unk_1802D4B10 + (int)v22);
          v26 = *(_QWORD *)v72;
          if ( *(_QWORD *)v72 )
          {
            v27 = gsl::span<D3D11_INPUT_ELEMENT_DESC const,-1>::size_bytes(&v75);
            memcpy_0(v84, *((const void **)&v75 + 1), v27);
            v28 = gsl::span<D3D11_INPUT_ELEMENT_DESC const,-1>::size_bytes(v72);
            v29 = v75;
            memcpy_0(&v84[2 * v75], *(const void **)&v72[2], v28);
            gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v83, v29 + v26);
            if ( v83[0] == -1 )
            {
              gsl::details::terminate(v30);
              JUMPOUT(0x18002662ELL);
            }
            v32 = *(_QWORD *)gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v82, v83[0]);
            if ( v32 == -1 )
            {
              gsl::details::terminate(v31);
              __debugbreak();
            }
            v33 = v84;
          }
          else
          {
            v33 = (_OWORD *)*((_QWORD *)&v75 + 1);
            LODWORD(v32) = v75;
          }
          *(_QWORD *)v72 = *((_QWORD *)this + 69);
          v34 = (__int64 *)((char *)this + 32 * v22 + 8 * v20 + 1544);
          v35 = *v34;
          v36 = **(_QWORD **)v72;
          *v34 = 0LL;
          *(_QWORD *)&v75 = *(_QWORD *)(v36 + 88);
          if ( v35 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
          CommonOrCubeMapRenderingShader = ((__int64 (__fastcall *)(_QWORD, _OWORD *, _QWORD, void *, struct ID3D11PixelShader *, char *))v75)(
                                             *(_QWORD *)v72,
                                             v33,
                                             (unsigned int)v32,
                                             Src_8[1],
                                             v73,
                                             (char *)this + 32 * v22 + 8 * v20 + 1544);
          v14 = CommonOrCubeMapRenderingShader;
          if ( CommonOrCubeMapRenderingShader < 0 )
          {
            v70 = 529;
            goto LABEL_64;
          }
          v2 = v71;
        }
      }
      ++v22;
    }
    while ( v22 < 2 );
    v21 = ++v20;
    if ( v20 < 4 )
      continue;
    break;
  }
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  do
  {
    v42 = (__int64 *)*((_QWORD *)this + 69);
    v43 = (char *)this + 8 * v37;
    v44 = *((_QWORD *)v43 + 205);
    v45 = *v42;
    *((_QWORD *)v43 + 205) = 0LL;
    v46 = *(__int64 (__fastcall **)(__int64 *, char *, char *))(v45 + 160);
    if ( v44 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v44 + 16LL))(v44, v38);
      LODWORD(v38) = v39;
      v40 = v41;
    }
    CommonOrCubeMapRenderingShader = v46(v42, &byte_18037FDA0[264 * (int)v38], v43 + 1640);
    v14 = CommonOrCubeMapRenderingShader;
    if ( CommonOrCubeMapRenderingShader < 0 )
    {
      v70 = 538;
      goto LABEL_64;
    }
    v37 = (unsigned int)(v40 + 1);
    v38 = (unsigned int)v37;
    v39 = ++v40;
    v41 = v37;
  }
  while ( (unsigned int)v37 < 0x18 );
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  do
  {
    v52 = (__int64 *)*((_QWORD *)this + 69);
    v53 = (char *)this + 8 * v47;
    v54 = *((_QWORD *)v53 + 277);
    v55 = *v52;
    *((_QWORD *)v53 + 277) = 0LL;
    v56 = *(__int64 (__fastcall **)(__int64 *, __int16 *, char *))(v55 + 176);
    if ( v54 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v54 + 16LL))(v54, v48);
      LODWORD(v48) = v49;
      v50 = v51;
    }
    CommonOrCubeMapRenderingShader = v56(v52, &_ImageBase[20 * (int)v48 + 1966196], v53 + 2216);
    v14 = CommonOrCubeMapRenderingShader;
    if ( CommonOrCubeMapRenderingShader < 0 )
    {
      v70 = 544;
      goto LABEL_64;
    }
    v47 = (unsigned int)(v50 + 1);
    v48 = (unsigned int)v47;
    v49 = ++v50;
    v51 = v47;
  }
  while ( !(_DWORD)v47 );
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  do
  {
    v62 = (__int64 *)*((_QWORD *)this + 69);
    v63 = (char *)this + 8 * v57;
    v64 = *((_QWORD *)v63 + 278);
    v65 = *v62;
    *((_QWORD *)v63 + 278) = 0LL;
    v66 = *(__int64 (__fastcall **)(__int64 *, char *, char *))(v65 + 168);
    if ( v64 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v64 + 16LL))(v64, v58);
      LODWORD(v58) = v59;
      v60 = v61;
    }
    CommonOrCubeMapRenderingShader = v66(v62, &byte_18037FCD0[52 * (int)v58], v63 + 2224);
    v14 = CommonOrCubeMapRenderingShader;
    if ( CommonOrCubeMapRenderingShader < 0 )
    {
      v70 = 550;
      goto LABEL_64;
    }
    v57 = (unsigned int)(v60 + 1);
    v58 = (unsigned int)v57;
    v59 = ++v60;
    v61 = v57;
  }
  while ( (unsigned int)v57 < 4 );
  if ( v74 >= 37632 )
  {
    *(_OWORD *)Src_8 = (unsigned __int64)this + 1536;
    LOBYTE(v77) = 1;
    v14 = CSurfaceShaderComposer::Create(this, (struct CSurfaceShaderComposer **)&Src_8[1]);
    if ( (_BYTE)v77 )
    {
      v68 = *(CSurfaceShaderComposer **)Src_8[0];
      *(_QWORD *)Src_8[0] = Src_8[1];
      if ( v68 )
      {
        CSurfaceShaderComposer::~CSurfaceShaderComposer(v68);
        operator delete(v68, 0x70uLL);
      }
    }
    if ( (v14 & 0x80000000) != 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, v14, 0x22Du, 0LL);
  }
  return v14;
}
