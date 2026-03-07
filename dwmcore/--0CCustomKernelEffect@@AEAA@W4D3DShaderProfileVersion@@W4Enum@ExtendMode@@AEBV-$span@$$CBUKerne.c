__int64 __fastcall CCustomKernelEffect::CCustomKernelEffect(__int64 a1, char a2, __int64 a3, __int64 *a4)
{
  __int64 *v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  void *v11; // rax
  __int64 v12; // rax
  __int128 v13; // [rsp+30h] [rbp-58h] BYREF
  __int64 v14; // [rsp+40h] [rbp-48h] BYREF
  __int64 v15; // [rsp+48h] [rbp-40h]
  __int64 v16; // [rsp+50h] [rbp-38h]
  _QWORD v17[5]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v18; // [rsp+90h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 8) = 0;
  v4 = (__int64 *)(a1 + 32);
  *(_BYTE *)(a1 + 25) = 3;
  *(_QWORD *)a1 = &CCustomKernelEffect::`vftable'{for `CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance>'};
  *(_QWORD *)(a1 + 16) = &CCustomKernelEffect::`vftable'{for `Windows::UI::Composition::ICompiledEffect'};
  *(_BYTE *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = a1 + 56;
  *(_QWORD *)(a1 + 40) = a1 + 56;
  *(_QWORD *)(a1 + 48) = a1 + 184;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  v6 = *a4;
  v14 = a4[1];
  v17[0] = v14;
  v17[2] = v14;
  v18 = *(_QWORD *)(a1 + 40);
  v15 = v14 + 12 * v6;
  v16 = v15;
  v17[1] = v15;
  detail::vector_facade<CCustomKernelEffect::ConstantBufferRow,detail::buffer_impl<CCustomKernelEffect::ConstantBufferRow,8,1,detail::liberal_expansion_policy>>::insert<gsl::details::span_iterator<KernelTap const>,void>(
    a1 + 32,
    (unsigned int)&v13,
    (unsigned int)&v18,
    (unsigned int)v17,
    (__int64)&v14);
  v7 = *v4;
  if ( (unsigned __int64)((v4[1] - *v4) >> 4) <= 8 )
  {
    if ( *(_BYTE *)(a1 + 24) < 2u )
    {
      *(_QWORD *)(a1 + 200) = 37531LL;
      v11 = &unk_18036BBB0;
    }
    else
    {
      *(_QWORD *)(a1 + 200) = 88768LL;
      v11 = &unk_18033AF80;
    }
    *(_QWORD *)(a1 + 208) = v11;
    v8 = a1 + 240;
    *(_OWORD *)(a1 + 240) = xmmword_1803C00D0;
    v12 = *(_QWORD *)(a1 + 40) - v7;
    *(_BYTE *)(a1 + 257) = 0;
    *(_BYTE *)(a1 + 256) = (v12 >> 4) + 48;
  }
  else
  {
    *(_QWORD *)(a1 + 200) = 88768LL;
    v8 = a1 + 240;
    *(_QWORD *)(a1 + 208) = &unk_18033AF80;
    strcpy((char *)(a1 + 240), "SymmetricKernelMax");
  }
  *(_QWORD *)(a1 + 224) = v8;
  *((_QWORD *)&v13 + 1) = &CCustomKernelEffect::k_shaderLinkingArguments;
  *(_BYTE *)(a1 + 216) = *(_BYTE *)(a1 + 24);
  *(_QWORD *)&v13 = 3LL;
  *(_OWORD *)(a1 + 184) = v13;
  v9 = (v4[1] - *v4) >> 4;
  if ( v9 > 8 )
    LODWORD(v9) = 128;
  *(_DWORD *)(a1 + 232) = 16 * v9;
  *(_WORD *)(a1 + 236) = 512;
  return a1;
}
