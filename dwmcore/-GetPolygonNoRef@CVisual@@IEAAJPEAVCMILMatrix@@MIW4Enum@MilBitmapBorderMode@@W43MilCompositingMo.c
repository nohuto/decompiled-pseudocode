__int64 __fastcall CVisual::GetPolygonNoRef(
        __int64 a1,
        int a2,
        float a3,
        int a4,
        int a5,
        int a6,
        int a7,
        char a8,
        char a9,
        char a10,
        __int64 *a11)
{
  __int64 v12; // rax
  unsigned int v15; // ebx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // r8d
  int v20; // edi
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // eax
  int v24; // r9d
  unsigned int v25; // r9d
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // eax
  unsigned int v29; // r8d
  __int64 v30; // rcx
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rcx
  unsigned int v38; // [rsp+20h] [rbp-E0h]
  __int128 v39; // [rsp+70h] [rbp-90h]
  __int128 v40; // [rsp+70h] [rbp-90h]
  __int128 v41; // [rsp+70h] [rbp-90h]
  __int128 v42; // [rsp+70h] [rbp-90h]
  __int64 v43; // [rsp+80h] [rbp-80h] BYREF
  __int128 v44; // [rsp+88h] [rbp-78h] BYREF
  __int128 v45; // [rsp+98h] [rbp-68h] BYREF
  __int128 v46; // [rsp+A8h] [rbp-58h] BYREF
  int v47; // [rsp+B8h] [rbp-48h]
  _QWORD v48[2]; // [rsp+C0h] [rbp-40h] BYREF
  int v49; // [rsp+D0h] [rbp-30h]
  __int64 v50; // [rsp+D4h] [rbp-2Ch]
  _BYTE v51[80]; // [rsp+E0h] [rbp-20h] BYREF

  v12 = 0LL;
  v43 = 0LL;
  v15 = 0;
  if ( *(_QWORD *)(a1 + 256) || a10 )
  {
    v47 = 1;
    v48[0] = v51;
    v48[1] = v51;
    v49 = 4;
    v50 = 4LL;
    v45 = 0LL;
    v44 = _xmm;
    if ( a10 )
    {
      v45 = *(_OWORD *)(a1 + 172);
    }
    else
    {
      v16 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a1 + 224LL))(a1, &v45);
      v15 = v16;
      if ( v16 < 0 )
      {
        v38 = 5869;
LABEL_43:
        v24 = v16;
        goto LABEL_44;
      }
    }
    (*(void (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)a1 + 304LL))(a1, &v45, &v45);
    *((_QWORD *)&v39 + 1) = 0x3F80000000000000LL;
    *(_QWORD *)&v39 = v45;
    v19 = HIDWORD(v50) + 1;
    v46 = v39;
    if ( (unsigned int)(HIDWORD(v50) + 1) < HIDWORD(v50) )
    {
      v15 = -2147024362;
      v20 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_13:
      v38 = 5880;
LABEL_14:
      v24 = v20;
LABEL_44:
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v24, v38, 0LL);
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v48);
      goto LABEL_45;
    }
    if ( v19 > (unsigned int)v50 )
    {
      v23 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v48, 20, 1, &v46);
      v20 = v23;
      v15 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v23, 0xC0u, 0LL);
        goto LABEL_13;
      }
      v19 = HIDWORD(v50);
    }
    else
    {
      v21 = v48[0];
      v22 = 5LL * HIDWORD(v50);
      *(_OWORD *)(v48[0] + 4 * v22) = v39;
      *(_DWORD *)(v21 + 4 * v22 + 16) = v47;
      HIDWORD(v50) = v19;
    }
    v25 = v19 + 1;
    *((_QWORD *)&v40 + 1) = 0x3F80000000000000LL;
    *(_QWORD *)&v40 = __PAIR64__(DWORD1(v45), DWORD2(v45));
    v46 = v40;
    if ( v19 + 1 < v19 )
    {
      v15 = -2147024362;
      v20 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_22:
      v38 = 5882;
      goto LABEL_14;
    }
    if ( v25 > (unsigned int)v50 )
    {
      v28 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v48, 20, 1, &v46);
      v20 = v28;
      v15 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v28, 0xC0u, 0LL);
        goto LABEL_22;
      }
      v25 = HIDWORD(v50);
    }
    else
    {
      v26 = v48[0];
      v27 = 5LL * v19;
      *(_OWORD *)(v48[0] + 4 * v27) = v40;
      *(_DWORD *)(v26 + 4 * v27 + 16) = v47;
      HIDWORD(v50) = v19 + 1;
    }
    v29 = v25 + 1;
    *((_QWORD *)&v41 + 1) = 0x3F80000000000000LL;
    *(_QWORD *)&v41 = *((_QWORD *)&v45 + 1);
    v46 = v41;
    if ( v25 + 1 < v25 )
    {
      v15 = -2147024362;
      v20 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_30:
      v38 = 5884;
      goto LABEL_14;
    }
    if ( v29 > (unsigned int)v50 )
    {
      v32 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v48, 20, 1, &v46);
      v20 = v32;
      v15 = v32;
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v32, 0xC0u, 0LL);
        goto LABEL_30;
      }
      v29 = HIDWORD(v50);
    }
    else
    {
      v30 = v48[0];
      v31 = 5LL * v25;
      *(_OWORD *)(v48[0] + 4 * v31) = v41;
      *(_DWORD *)(v30 + 4 * v31 + 16) = v47;
      HIDWORD(v50) = v25 + 1;
    }
    *((_QWORD *)&v42 + 1) = 0x3F80000000000000LL;
    *(_QWORD *)&v42 = __PAIR64__(HIDWORD(v45), v45);
    v46 = v42;
    if ( v29 + 1 < v29 )
    {
      v15 = -2147024362;
      v20 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_41:
      v38 = 5886;
      goto LABEL_14;
    }
    if ( v29 + 1 > (unsigned int)v50 )
    {
      v35 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v48, 20, 1, &v46);
      v20 = v35;
      v15 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0xC0u, 0LL);
        goto LABEL_41;
      }
    }
    else
    {
      v33 = v48[0];
      v34 = 5LL * v29;
      *(_OWORD *)(v48[0] + 4 * v34) = v42;
      *(_DWORD *)(v33 + 4 * v34 + 16) = v47;
      HIDWORD(v50) = v29 + 1;
    }
    v16 = CPolygon::Create(
            (unsigned int)v48,
            a1,
            *(_QWORD *)(a1 + 256),
            a2,
            LODWORD(a3),
            a4,
            a5,
            a6,
            a7,
            a8,
            a9,
            (__int64)&v44,
            (__int64)&v43);
    v15 = v16;
    if ( v16 < 0 )
    {
      v38 = 5901;
      goto LABEL_43;
    }
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v48);
    v12 = v43;
  }
  *a11 = v12;
  v43 = 0LL;
LABEL_45:
  ReleaseInterface<CPolygon>(&v43);
  return v15;
}
