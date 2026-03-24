/*
 * XREFs of ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x180050800
 * Callers:
 *     ?GetConstantBuffer@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@PEAPEAUID3D11Buffer@@@Z @ 0x18005199C (-GetConstantBuffer@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@PEAPEAUID3D11Buffer@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800426C0 (--3@YAXPEAX_K@Z.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x18004F084 (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x180050B04 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAAEAUFragmentStackEntry@CFragmentIterator@@$$QEAU23@@Z @ 0x180050C28 (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800C8CE0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?Map@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x1800D5CA4 (-Map@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z.c)
 *     memcpy_0 @ 0x1800F400B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderingTechnique::UpdateConstantBuffers(CRenderingTechnique *this, __int64 a2, unsigned int a3)
{
  char v3; // si
  __int64 v5; // rax
  void *pData; // rcx
  __int64 v7; // rdx
  unsigned int *v8; // rbx
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v12; // r13d
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 v15; // rcx
  CD3DDevice *v16; // r15
  struct ID3D11Resource *v17; // rdx
  int v18; // eax
  unsigned int v19; // ecx
  _OWORD *v20; // r14
  __int64 v21; // rax
  void *v22; // rcx
  unsigned int *v23; // r15
  __int64 v24; // rax
  unsigned int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned int v28; // ebx
  const void *v29; // rax
  unsigned int i; // r8d
  int v31; // eax
  __int64 v32; // rcx
  unsigned int v33; // [rsp+20h] [rbp-58h]
  __int64 v34; // [rsp+30h] [rbp-48h] BYREF
  int v35; // [rsp+38h] [rbp-40h]
  D3D11_MAPPED_SUBRESOURCE v36; // [rsp+40h] [rbp-38h] BYREF
  __int64 v37; // [rsp+50h] [rbp-28h]
  void *v38[2]; // [rsp+58h] [rbp-20h] BYREF
  __int64 v39; // [rsp+68h] [rbp-10h]
  unsigned __int64 v40; // [rsp+C0h] [rbp+48h] BYREF
  void *v41; // [rsp+C8h] [rbp+50h] BYREF
  CD3DDevice *v42; // [rsp+D0h] [rbp+58h]
  struct ID3D11Resource *v43; // [rsp+D8h] [rbp+60h]

  v3 = *((_BYTE *)this + 252);
  if ( !v3 )
  {
    v5 = *((_QWORD *)this + 1);
    v37 = 0LL;
    v35 = 0;
    v36 = 0LL;
    v34 = v5;
    std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(&v36, &v34);
LABEL_3:
    CFragmentIterator::FindFirst((CFragmentIterator *)&v36);
    pData = v36.pData;
    v7 = *(_QWORD *)&v36.RowPitch;
    while ( (v7 - (__int64)pData) >> 4 )
    {
      v8 = *(unsigned int **)(v7 - 16);
      if ( v8[5] )
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v8 + 80LL))(*(_QWORD *)v8, v8[4]);
        pData = v36.pData;
        if ( v8[6] != v9 )
        {
          v3 = 1;
          break;
        }
        v7 = *(_QWORD *)&v36.RowPitch;
      }
      v7 -= 16LL;
      *(_QWORD *)&v36.RowPitch = v7;
      if ( (v7 - (__int64)pData) >> 4 )
      {
        ++*(_DWORD *)(v7 - 8);
        goto LABEL_3;
      }
    }
    if ( pData )
    {
      v41 = pData;
      v40 = (v37 - (_QWORD)pData) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v40 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v41, &v40);
        pData = v41;
      }
      operator delete(pData);
    }
    if ( !v3 )
      goto LABEL_16;
  }
  v12 = 0;
  v13 = (__int64)(*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) >> 3;
  if ( (_DWORD)v13 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      v15 = *(_QWORD *)(v14 + *((_QWORD *)this + 4));
      v16 = *(CD3DDevice **)(*(_QWORD *)(v15 + 16) + 80LL);
      v17 = *(struct ID3D11Resource **)(v15 + 112);
      v42 = v16;
      v43 = v17;
      v18 = CD3DDevice::Map(v16, v17, a3, D3D11_MAP_WRITE_DISCARD, v33, &v36);
      v10 = v18;
      if ( v18 < 0 )
        break;
      v20 = v36.pData;
      if ( *((_DWORD *)this + 14) )
      {
        v21 = *((_QWORD *)this + 1);
        v39 = 0LL;
        v35 = 0;
        *(_OWORD *)v38 = 0LL;
        v34 = v21;
        std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(
          v38,
          &v34);
        CFragmentIterator::FindFirst((CFragmentIterator *)v38);
        while ( 1 )
        {
          v22 = v38[0];
          if ( !(((char *)v38[1] - (char *)v38[0]) >> 4) )
            break;
          v23 = (unsigned int *)*((_QWORD *)v38[1] - 2);
          v24 = v23[5];
          if ( (_DWORD)v24 )
          {
            v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v23 + 80LL))(*(_QWORD *)v23, v23[4]);
            v26 = *(_QWORD *)v23;
            v27 = v23[4];
            v28 = v23[5];
            v23[6] = v25;
            v29 = (const void *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 72LL))(v26, v27);
            memcpy_0(v20, v29, v28);
            v24 = v23[5];
          }
          if ( (v24 & 0xF) != 0 )
            v24 = (unsigned int)v24 - (v24 & 0xF) + 16;
          v20 = (_OWORD *)((char *)v20 + v24);
          CFragmentIterator::MoveNext((CFragmentIterator *)v38);
        }
        if ( v38[0] )
        {
          v41 = v38[0];
          v40 = (v39 - (unsigned __int64)v38[0]) & 0xFFFFFFFFFFFFFFF0uLL;
          if ( v40 >= 0x1000 )
          {
            std::_Adjust_manually_vector_aligned(&v41, &v40);
            v22 = v41;
          }
          operator delete(v22);
        }
        v16 = v42;
      }
      if ( *((_DWORD *)this + 62) )
      {
        for ( i = 0; i < *((_DWORD *)this + 15); ++i )
        {
          v31 = *((_DWORD *)this + 61);
          if ( _bittest(&v31, i) )
          {
            v32 = 44LL * i;
            *v20 = *(_OWORD *)((char *)this + v32 + 80);
            v20[1] = *(_OWORD *)((char *)this + v32 + 96);
            v20 += 2;
          }
        }
      }
      (*(void (__fastcall **)(_QWORD *, struct ID3D11Resource *, _QWORD))(**((_QWORD **)v16 + 75) + 120LL))(
        *((_QWORD **)v16 + 75),
        v43,
        0LL);
      ++v12;
      v14 += 8LL;
      if ( v12 >= (unsigned int)v13 )
        goto LABEL_16;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x1E9u, 0LL);
  }
  else
  {
LABEL_16:
    *((_BYTE *)this + 252) = 0;
    return 0;
  }
  return v10;
}
