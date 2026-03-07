__int64 __fastcall CSceneMesh::OnSceneFrameTick(CSceneMesh *this, struct ISpectreRenderer *a2)
{
  CSceneMesh *v3; // rbx
  __int64 v4; // rdx
  int v5; // r9d
  unsigned int v6; // ebx
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // eax
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  __int64 (__fastcall *v23)(struct ISpectreRenderer *, __int64 *); // rbx
  int v24; // eax
  unsigned int v26; // [rsp+28h] [rbp-49h]
  _QWORD v27[2]; // [rsp+38h] [rbp-39h] BYREF
  char v28; // [rsp+48h] [rbp-29h]
  _BYTE v29[24]; // [rsp+50h] [rbp-21h] BYREF
  unsigned int v30; // [rsp+68h] [rbp-9h] BYREF
  __int64 v31; // [rsp+70h] [rbp-1h]
  __int128 v32; // [rsp+78h] [rbp+7h]
  __int128 v33; // [rsp+88h] [rbp+17h]
  __int64 v34; // [rsp+98h] [rbp+27h]
  int v35; // [rsp+A0h] [rbp+2Fh]
  __int128 v36; // [rsp+A8h] [rbp+37h]
  int v37; // [rsp+B8h] [rbp+47h]
  __int64 v38; // [rsp+D8h] [rbp+67h] BYREF

  v3 = this;
  if ( !*((_BYTE *)this + 16) )
    return 0;
  v4 = *((_QWORD *)this - 6);
  v27[0] = (char *)this - 152;
  v27[1] = &v38;
  v38 = 0LL;
  v28 = 1;
  if ( !v4 )
  {
LABEL_59:
    lambda_a6cadc748e29644dcd3cf84dc08806d7_::operator()(v27);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v38);
    return 0;
  }
  if ( *((_DWORD *)this - 20) == 6 )
  {
    v34 = 0LL;
    v32 = 0LL;
    v33 = 0LL;
    v36 = 0LL;
    v35 = 0;
    v37 = 4;
    v7 = lambda_05398b4549421d065ab404e0dbeea144_::operator()((__int64)this, v4, 6);
    v8 = *((_QWORD *)v3 - 6);
    v30 = v7;
    v31 = *(_QWORD *)(CSharedSectionWrapper::GetSharedSectionData(v8, v29) + 8);
    this = (CSceneMesh *)*((_QWORD *)v3 - 7);
    if ( this )
    {
      if ( *((_DWORD *)v3 - 21) == 57 )
      {
        v9 = *(_QWORD *)(CSharedSectionWrapper::GetSharedSectionData(this, v29) + 8);
        *(_QWORD *)&v36 = v9;
      }
      else
      {
        if ( *((_DWORD *)v3 - 21) != 42 )
        {
          v26 = 109;
          goto LABEL_5;
        }
        v9 = *(_QWORD *)(CSharedSectionWrapper::GetSharedSectionData(this, v29) + 8);
        *((_QWORD *)&v36 + 1) = v9;
      }
      v35 = lambda_05398b4549421d065ab404e0dbeea144_::operator()(v9, *((_QWORD *)v3 - 7), *((_DWORD *)v3 - 21));
    }
    v10 = *((_QWORD *)v3 - 5);
    if ( v10 )
    {
      if ( *((_DWORD *)v3 - 19) != 6 )
      {
        v26 = 118;
        goto LABEL_5;
      }
      v11 = lambda_05398b4549421d065ab404e0dbeea144_::operator()((__int64)this, v10, 6);
      if ( v30 > v11 )
      {
        v26 = 121;
        goto LABEL_5;
      }
      this = *(CSceneMesh **)(CSharedSectionWrapper::GetSharedSectionData(*((_QWORD *)v3 - 5), v29) + 8);
      *(_QWORD *)&v32 = this;
    }
    v12 = *((_QWORD *)v3 - 1);
    if ( v12 )
    {
      if ( *((_DWORD *)v3 - 15) != 2 )
      {
        v26 = 129;
        goto LABEL_5;
      }
      v13 = lambda_05398b4549421d065ab404e0dbeea144_::operator()((__int64)this, v12, 2);
      if ( v30 > v13 )
      {
        v26 = 132;
        goto LABEL_5;
      }
      this = *(CSceneMesh **)(CSharedSectionWrapper::GetSharedSectionData(*((_QWORD *)v3 - 1), v29) + 8);
      *((_QWORD *)&v32 + 1) = this;
    }
    v14 = *((_QWORD *)v3 - 2);
    if ( v14 )
    {
      if ( *((_DWORD *)v3 - 16) != 42 )
      {
        v26 = 140;
        goto LABEL_5;
      }
      v15 = lambda_05398b4549421d065ab404e0dbeea144_::operator()((__int64)this, v14, 42);
      if ( v30 > v15 )
      {
        v26 = 143;
        goto LABEL_5;
      }
      this = *(CSceneMesh **)(CSharedSectionWrapper::GetSharedSectionData(*((_QWORD *)v3 - 2), v29) + 8);
      *(_QWORD *)&v33 = this;
    }
    v16 = *((_QWORD *)v3 - 4);
    if ( v16 )
    {
      if ( *((_DWORD *)v3 - 18) != 16 )
      {
        v26 = 151;
        goto LABEL_5;
      }
      v17 = lambda_05398b4549421d065ab404e0dbeea144_::operator()((__int64)this, v16, 16);
      if ( v30 > v17 )
      {
        v26 = 154;
        goto LABEL_5;
      }
      this = *(CSceneMesh **)(CSharedSectionWrapper::GetSharedSectionData(*((_QWORD *)v3 - 4), v29) + 8);
      *((_QWORD *)&v33 + 1) = this;
    }
    v18 = *((_QWORD *)v3 - 3);
    if ( v18 )
    {
      if ( *((_DWORD *)v3 - 17) != 16 )
      {
        v26 = 162;
        goto LABEL_5;
      }
      v19 = lambda_05398b4549421d065ab404e0dbeea144_::operator()((__int64)this, v18, 16);
      if ( v30 > v19 )
      {
        v26 = 165;
        goto LABEL_5;
      }
      v34 = *(_QWORD *)(CSharedSectionWrapper::GetSharedSectionData(*((_QWORD *)v3 - 3), v29) + 8);
    }
    this = (CSceneMesh *)*((unsigned int *)v3 - 22);
    if ( !(_DWORD)this )
    {
      v26 = 175;
      goto LABEL_5;
    }
    v20 = (_DWORD)this - 1;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          if ( v22 == 2 )
            v37 = 5;
        }
        else
        {
          v37 = 3;
        }
      }
      else
      {
        v37 = 2;
      }
    }
    else
    {
      v37 = 1;
    }
    v23 = *(__int64 (__fastcall **)(struct ISpectreRenderer *, __int64 *))(*(_QWORD *)a2 + 72LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v38);
    v24 = v23(a2, &v38);
    v6 = v24;
    if ( v24 < 0 )
    {
      v26 = 202;
      goto LABEL_58;
    }
    v24 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v38 + 24LL))(v38, &v30);
    v6 = v24;
    if ( v24 < 0 )
    {
      v26 = 203;
LABEL_58:
      v5 = v24;
      goto LABEL_6;
    }
    goto LABEL_59;
  }
  v26 = 86;
LABEL_5:
  v5 = -2147024809;
  v6 = -2147024809;
LABEL_6:
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v5, v26, 0LL);
  lambda_a6cadc748e29644dcd3cf84dc08806d7_::operator()(v27);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v38);
  return v6;
}
