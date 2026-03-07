__int64 __fastcall CPolygon::Create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char a10,
        char a11,
        _OWORD *a12,
        _QWORD *a13)
{
  bool v14; // cf
  unsigned int v18; // edi
  int v19; // r9d
  char *v20; // rax
  void (__fastcall ***v21)(_QWORD); // rdx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rax
  int v25; // ecx
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  __int128 v28; // xmm3
  int v29; // xmm0_4
  int v30; // ecx
  __int64 v31; // rcx
  __int64 v32; // rcx
  unsigned int v34; // [rsp+20h] [rbp-20h]
  struct D2D_VECTOR_4F v35; // [rsp+30h] [rbp-10h] BYREF
  __int64 v36; // [rsp+70h] [rbp+30h] BYREF

  v14 = *(_DWORD *)(a1 + 24) < 3u;
  v36 = 0LL;
  if ( v14 )
  {
    v18 = -2147024809;
    v34 = 27;
LABEL_3:
    v19 = v18;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v19, v34, 0LL);
    goto LABEL_18;
  }
  v20 = (char *)DefaultHeap::AllocClear(0x110uLL);
  v21 = (void (__fastcall ***)(_QWORD))v20;
  if ( v20 )
  {
    *((_DWORD *)v20 + 2) = 0;
    *(_QWORD *)v20 = &CPolygon::`vftable';
    *((_QWORD *)v20 + 2) = v20 + 48;
    *((_QWORD *)v20 + 3) = v20 + 48;
    *((_DWORD *)v20 + 8) = 4;
    *(_QWORD *)(v20 + 36) = 4LL;
    *((_DWORD *)v20 + 52) = 0;
    *((_QWORD *)v20 + 32) = 0LL;
    ++dword_1803E2B0C;
  }
  else
  {
    v21 = 0LL;
  }
  if ( !*Microsoft::WRL::ComPtr<CPolygon>::operator=(&v36, v21) )
  {
    v18 = -2147024882;
    v34 = 30;
    goto LABEL_3;
  }
  v22 = v36 + 16;
  *(_DWORD *)(v36 + 40) = 0;
  DynArrayImpl<0>::ShrinkToSize(v22, 0x14u);
  v23 = DynArrayImpl<0>::AddMultipleAndSet(v36 + 16, 20, *(_DWORD *)(a1 + 24), *(_QWORD *)a1);
  v18 = v23;
  if ( v23 < 0 )
  {
    v19 = v23;
    v34 = 33;
    goto LABEL_17;
  }
  *(_QWORD *)(v36 + 216) = a2;
  v24 = v36;
  v25 = *(_DWORD *)(a4 + 64);
  v26 = *(_OWORD *)(a4 + 16);
  v27 = *(_OWORD *)(a4 + 32);
  v28 = *(_OWORD *)(a4 + 48);
  *(_OWORD *)(v36 + 144) = *(_OWORD *)a4;
  v29 = a5;
  *(_OWORD *)(v24 + 160) = v26;
  *(_OWORD *)(v24 + 176) = v27;
  *(_OWORD *)(v24 + 192) = v28;
  *(_DWORD *)(v24 + 208) = v25;
  v30 = a6;
  *(_DWORD *)(v36 + 224) = v29;
  *(_DWORD *)(v36 + 264) = v30;
  *(_DWORD *)(v36 + 236) = a7;
  *(_DWORD *)(v36 + 228) = a8;
  *(_DWORD *)(v36 + 232) = a9;
  *(_BYTE *)(v36 + 240) = a10;
  *(_BYTE *)(v36 + 241) = a11;
  *(_QWORD *)(v36 + 248) = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  if ( a12 )
    *(_OWORD *)(v36 + 128) = *a12;
  else
    *(__m128i *)(v36 + 128) = _mm_loadu_si128((const __m128i *)D2DVectorHelper::CalculatePlane(
                                                                 &v35,
                                                                 *(struct D2D_VECTOR_4F **)(v36 + 16),
                                                                 (const struct D2D_VECTOR_4F *)(*(_QWORD *)(v36 + 16)
                                                                                              + 20LL),
                                                                 (const struct D2D_VECTOR_4F *)(*(_QWORD *)(v36 + 16)
                                                                                              + 40LL)));
  v31 = v36;
  v36 = 0LL;
  *a13 = v31;
LABEL_18:
  v32 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 8LL))(v32);
  }
  return v18;
}
