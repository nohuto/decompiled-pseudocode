CCheckMPOCache *__fastcall CCheckMPOCache::CCheckMPOCache(
        CCheckMPOCache *this,
        const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a2)
{
  _QWORD *v2; // rdi
  unsigned int v5; // r8d
  char v6; // r9
  __int64 v7; // rsi
  __int128 v8; // xmm1
  __int64 v9; // rdx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  CCheckMPOCache::PlaneInfo *v17; // rax
  _OWORD v19[9]; // [rsp+20h] [rbp-98h] BYREF

  v2 = (_QWORD *)((char *)this + 8);
  *(_QWORD *)this = &CCheckMPOCache::`vftable';
  *((_QWORD *)this + 1) = (char *)this + 32;
  *((_QWORD *)this + 2) = (char *)this + 32;
  *((_QWORD *)this + 3) = (char *)this + 992;
  *((_QWORD *)this + 124) = GetCurrentFrameId();
  *((_BYTE *)this + 1000) = v6;
  if ( v5 )
  {
    v7 = v5;
    do
    {
      v8 = *((_OWORD *)a2 + 1);
      v9 = v2[1] - *v2;
      v19[0] = *(_OWORD *)a2;
      v10 = *((_OWORD *)a2 + 2);
      v19[1] = v8;
      v11 = *((_OWORD *)a2 + 3);
      v19[2] = v10;
      v12 = *((_OWORD *)a2 + 4);
      v19[3] = v11;
      v13 = *((_OWORD *)a2 + 5);
      v19[4] = v12;
      v14 = *((_OWORD *)a2 + 6);
      v19[5] = v13;
      v15 = *((_OWORD *)a2 + 7);
      v19[6] = v14;
      v16 = *((_OWORD *)a2 + 8);
      v19[7] = v15;
      v19[8] = v16;
      v17 = (CCheckMPOCache::PlaneInfo *)detail::vector_facade<CCheckMPOCache::PlaneInfo,detail::buffer_impl<CCheckMPOCache::PlaneInfo,6,1,detail::liberal_expansion_policy>>::reserve_region(
                                           v2,
                                           0xCCCCCCCCCCCCCCCDuLL * (v9 >> 5));
      CCheckMPOCache::PlaneInfo::PlaneInfo(v17, (const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *)v19);
      a2 = (const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *)((char *)a2 + 144);
      --v7;
    }
    while ( v7 );
  }
  return this;
}
