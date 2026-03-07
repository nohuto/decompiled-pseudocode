__int64 __fastcall CRenderingTechnique::UpdateConstantBuffers(CRenderingTechnique *this, __int64 a2, unsigned int a3)
{
  char v3; // si
  __int64 v5; // rax
  void *pData; // rcx
  __int64 v7; // rdx
  unsigned int *v8; // rdi
  int v9; // eax
  unsigned __int64 v10; // rdx
  unsigned int v11; // edi
  unsigned int v13; // r13d
  __int64 v14; // rsi
  __int64 v15; // r12
  __int64 v16; // rcx
  CD3DDevice *v17; // r14
  struct ID3D11Resource *v18; // rdx
  int v19; // eax
  unsigned int v20; // ecx
  _OWORD *v21; // rdi
  __int64 v22; // rax
  unsigned int *v23; // r14
  unsigned int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned int i; // r8d
  int v28; // eax
  __int64 v29; // rcx
  unsigned int v30; // [rsp+20h] [rbp-50h]
  __int128 v31; // [rsp+30h] [rbp-40h] BYREF
  struct D3D11_MAPPED_SUBRESOURCE v32; // [rsp+40h] [rbp-30h] BYREF
  __int64 v33; // [rsp+50h] [rbp-20h]
  __int128 v34; // [rsp+58h] [rbp-18h] BYREF
  __int64 v35; // [rsp+68h] [rbp-8h]
  unsigned __int64 v36; // [rsp+B0h] [rbp+40h] BYREF
  void *v37; // [rsp+B8h] [rbp+48h] BYREF

  v3 = *((_BYTE *)this + 280);
  if ( !v3 )
  {
    v5 = *((_QWORD *)this + 1);
    v33 = 0LL;
    DWORD2(v31) = 0;
    *(_QWORD *)&v31 = v5;
    v32 = 0LL;
    std::vector<CFragmentIterator::FragmentStackEntry>::_Emplace_reallocate<CFragmentIterator::FragmentStackEntry>(
      &v32,
      0LL,
      &v31);
LABEL_3:
    CFragmentIterator::FindFirst((CFragmentIterator *)&v32);
    pData = v32.pData;
    v7 = *(_QWORD *)&v32.RowPitch;
    while ( (v7 - (__int64)pData) >> 4 )
    {
      v8 = *(unsigned int **)(v7 - 16);
      if ( v8[5] )
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v8 + 80LL))(*(_QWORD *)v8, v8[4]);
        pData = v32.pData;
        if ( v8[6] != v9 )
        {
          v3 = 1;
          break;
        }
        v7 = *(_QWORD *)&v32.RowPitch;
      }
      v7 -= 16LL;
      *(_QWORD *)&v32.RowPitch = v7;
      if ( (v7 - (__int64)pData) >> 4 )
      {
        ++*(_DWORD *)(v7 - 8);
        goto LABEL_3;
      }
    }
    if ( pData )
    {
      v37 = pData;
      v10 = (v33 - (_QWORD)pData) & 0xFFFFFFFFFFFFFFF0uLL;
      v36 = v10;
      if ( v10 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v37, &v36);
        v10 = v36;
        pData = v37;
      }
      operator delete(pData, v10);
    }
    if ( !v3 )
      goto LABEL_16;
  }
  v13 = 0;
  v14 = (__int64)(*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) >> 3;
  if ( (_DWORD)v14 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      v16 = *(_QWORD *)(v15 + *((_QWORD *)this + 4));
      v17 = *(CD3DDevice **)(*(_QWORD *)(v16 + 24) + 80LL);
      v18 = *(struct ID3D11Resource **)(v16 + 96);
      v36 = (unsigned __int64)v17;
      v37 = v18;
      v19 = CD3DDevice::Map(v17, v18, a3, D3D11_MAP_WRITE_DISCARD, v30, &v32);
      v11 = v19;
      if ( v19 < 0 )
        break;
      v21 = v32.pData;
      if ( *((_DWORD *)this + 18) )
      {
        v22 = *((_QWORD *)this + 1);
        v35 = 0LL;
        DWORD2(v31) = 0;
        v34 = 0LL;
        *(_QWORD *)&v31 = v22;
        std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(
          (__int64)&v34,
          &v31);
        CFragmentIterator::FindFirst((CFragmentIterator *)&v34);
        while ( (__int64)(*((_QWORD *)&v34 + 1) - v34) >> 4 )
        {
          v23 = *(unsigned int **)(*((_QWORD *)&v34 + 1) - 16LL);
          if ( v23[5] )
          {
            v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v23 + 80LL))(*(_QWORD *)v23, v23[4]);
            v25 = *(_QWORD *)v23;
            v23[6] = v24;
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _OWORD *))(*(_QWORD *)v25 + 72LL))(
              v25,
              v23[4],
              v23[5],
              v21);
          }
          v26 = v23[5];
          if ( (v23[5] & 0xF) != 0 )
            v26 = (unsigned int)v26 - (v23[5] & 0xF) + 16;
          v21 = (_OWORD *)((char *)v21 + v26);
          CFragmentIterator::MoveNext((CFragmentIterator *)&v34);
        }
        if ( (_QWORD)v34 )
          std::_Deallocate<16,0>(v34, (v35 - v34) & 0xFFFFFFFFFFFFFFF0uLL);
        v17 = (CD3DDevice *)v36;
      }
      if ( *((_DWORD *)this + 66) )
      {
        for ( i = 0; i < *((_DWORD *)this + 19); ++i )
        {
          v28 = *((_DWORD *)this + 65);
          if ( _bittest(&v28, i) )
          {
            v29 = 44LL * i;
            *v21 = *(_OWORD *)((char *)this + v29 + 96);
            v21[1] = *(_OWORD *)((char *)this + v29 + 112);
            v21 += 2;
          }
        }
      }
      (*(void (__fastcall **)(_QWORD *, void *, _QWORD))(**((_QWORD **)v17 + 70) + 120LL))(
        *((_QWORD **)v17 + 70),
        v37,
        0LL);
      ++v13;
      v15 += 8LL;
      if ( v13 >= (unsigned int)v14 )
        goto LABEL_16;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x279u, 0LL);
  }
  else
  {
LABEL_16:
    *((_BYTE *)this + 280) = 0;
    return 0;
  }
  return v11;
}
