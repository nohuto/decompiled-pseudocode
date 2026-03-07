__int64 __fastcall CKeyframeAnimation::SampleStartingValue(CKeyframeAnimation *this)
{
  __int64 v2; // rbx
  struct CResource *v3; // rax
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  __int64 v13; // rcx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  unsigned int v17; // [rsp+28h] [rbp-19h]
  __int128 v18; // [rsp+38h] [rbp-9h] BYREF
  __int128 v19; // [rsp+48h] [rbp+7h]
  __int128 v20; // [rsp+58h] [rbp+17h]
  __int128 v21; // [rsp+68h] [rbp+27h]
  __int64 v22; // [rsp+78h] [rbp+37h] BYREF
  int v23; // [rsp+80h] [rbp+3Fh]
  char v24; // [rsp+84h] [rbp+43h]

  memset_0(&v18, 0, 0x40uLL);
  v2 = *((_QWORD *)this + 48);
  v22 = 0LL;
  v23 = 18;
  v24 = 0;
  if ( *(_DWORD *)v2 )
    goto LABEL_10;
  v3 = CBaseExpression::ResolveTargetNoRef(this);
  v4 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, __int128 *))(*(_QWORD *)v3 + 136LL))(
         v3,
         *((unsigned int *)this + 48),
         &v18);
  v6 = v4;
  if ( v4 < 0 )
  {
    v17 = 2035;
    goto LABEL_32;
  }
  v7 = *((_QWORD *)this + 25);
  if ( v7 )
  {
    if ( *(_BYTE *)(v7 + 4) )
    {
      v4 = CExpressionValue::ApplyMaskToValue((CExpressionValue *)&v18, (struct SubchannelMaskInfo *)v7);
      v6 = v4;
      if ( v4 < 0 )
      {
        v17 = 2049;
LABEL_32:
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, v17, 0LL);
        goto LABEL_11;
      }
    }
  }
  v8 = *((_DWORD *)this + 38);
  *(_DWORD *)v2 = v8;
  if ( v8 == 52 )
  {
    *(_QWORD *)(v2 + 8) = v18;
    *(_DWORD *)(v2 + 16) = DWORD2(v18);
    goto LABEL_10;
  }
  if ( v8 > 52 )
  {
    v14 = v8 - 69;
    if ( !v14 || (v15 = v14 - 1) == 0 || (v16 = v15 - 1) == 0 )
    {
      *(_OWORD *)(v2 + 8) = v18;
      goto LABEL_10;
    }
    v13 = (unsigned int)(v16 - 33);
    if ( !(_DWORD)v13 )
    {
      *(_OWORD *)(v2 + 8) = v18;
      *(_QWORD *)(v2 + 24) = v19;
      goto LABEL_10;
    }
    if ( (_DWORD)v13 == 161 )
    {
      *(_OWORD *)(v2 + 8) = v18;
      *(_OWORD *)(v2 + 24) = v19;
      *(_OWORD *)(v2 + 40) = v20;
      *(_OWORD *)(v2 + 56) = v21;
      goto LABEL_10;
    }
    goto LABEL_29;
  }
  v9 = v8 - 11;
  if ( !v9 )
  {
    wil::com_ptr_t<CPathData,wil::err_returncode_policy>::operator=((char *)this + 456, v22);
    goto LABEL_10;
  }
  v10 = v9 - 6;
  if ( !v10 )
  {
    *(_BYTE *)(v2 + 8) = v18;
    goto LABEL_10;
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    v13 = (unsigned int)(v11 - 17);
    if ( !(_DWORD)v13 )
    {
      *(_QWORD *)(v2 + 8) = v18;
      goto LABEL_10;
    }
    if ( (_DWORD)v13 == 7 )
    {
      *(_DWORD *)(v2 + 8) = v18;
      goto LABEL_10;
    }
LABEL_29:
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024809, 0x83Eu, 0LL);
    goto LABEL_11;
  }
  *(_DWORD *)(v2 + 8) = v18;
LABEL_10:
  v6 = 0;
LABEL_11:
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v22);
  return v6;
}
