/*
 * XREFs of ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x1801AD860
 * Callers:
 *     ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x18019949C (-CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180065C00 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8944 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ??$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z @ 0x180199354 (--$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W46MilCompositingMode@@W46MilBitmapInterpolationMode@@_N7PEAUD2D_VECTOR_4F@@PEAPEAV1@@Z @ 0x1801F7340 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMa.c)
 */

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
  int v15; // ebx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // r9d
  __int64 v19; // rcx
  unsigned int v20; // r8d
  __int64 v21; // rdx
  int v22; // eax
  unsigned int v23; // r9d
  __int64 v24; // rdx
  int v25; // eax
  unsigned int v26; // r8d
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rdx
  int v31; // eax
  unsigned int v33; // [rsp+20h] [rbp-E0h]
  __int128 v34; // [rsp+70h] [rbp-90h]
  __int128 v35; // [rsp+70h] [rbp-90h]
  __int128 v36; // [rsp+70h] [rbp-90h]
  __int128 v37; // [rsp+70h] [rbp-90h]
  __int64 v38; // [rsp+80h] [rbp-80h] BYREF
  __int128 v39; // [rsp+88h] [rbp-78h] BYREF
  __int128 v40; // [rsp+98h] [rbp-68h] BYREF
  __int128 v41; // [rsp+A8h] [rbp-58h] BYREF
  int v42; // [rsp+B8h] [rbp-48h]
  _QWORD v43[2]; // [rsp+C0h] [rbp-40h] BYREF
  int v44; // [rsp+D0h] [rbp-30h]
  __int64 v45; // [rsp+D4h] [rbp-2Ch]
  _BYTE v46[80]; // [rsp+E0h] [rbp-20h] BYREF

  v12 = 0LL;
  v38 = 0LL;
  v15 = 0;
  if ( !*(_QWORD *)(a1 + 248) && !a10 )
    goto LABEL_41;
  v42 = 1;
  v43[0] = v46;
  v43[1] = v46;
  v44 = 4;
  v45 = 4LL;
  v40 = 0LL;
  v39 = _xmm;
  if ( a10 )
  {
    v40 = *(_OWORD *)(a1 + 164);
  }
  else
  {
    v16 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a1 + 248LL))(a1, &v40);
    v15 = v16;
    if ( v16 < 0 )
    {
      v33 = 5708;
LABEL_6:
      v18 = v16;
LABEL_48:
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v18, v33, 0LL);
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v43);
      goto LABEL_49;
    }
  }
  (*(void (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)a1 + 320LL))(a1, &v40, &v40);
  *((_QWORD *)&v34 + 1) = 0x3F80000000000000LL;
  *(_QWORD *)&v34 = v40;
  v20 = HIDWORD(v45) + 1;
  v41 = v34;
  if ( (unsigned int)(HIDWORD(v45) + 1) >= HIDWORD(v45) )
  {
    if ( v20 <= (unsigned int)v45 )
    {
      v17 = v43[0];
      v21 = 5LL * HIDWORD(v45);
      *(_OWORD *)(v43[0] + 4 * v21) = v34;
      *(_DWORD *)(v17 + 4 * v21 + 16) = v42;
      HIDWORD(v45) = v20;
      goto LABEL_16;
    }
    v22 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v43, 20, 1, &v41);
    v15 = v22;
    if ( v22 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v22, 0xC0u, 0LL);
  }
  else
  {
    v15 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  if ( v15 < 0 )
  {
    v33 = 5719;
    goto LABEL_47;
  }
  v20 = HIDWORD(v45);
LABEL_16:
  v23 = v20 + 1;
  *((_QWORD *)&v35 + 1) = 0x3F80000000000000LL;
  *(_QWORD *)&v35 = __PAIR64__(DWORD1(v40), DWORD2(v40));
  v41 = v35;
  if ( v20 + 1 >= v20 )
  {
    if ( v23 <= (unsigned int)v45 )
    {
      v17 = v43[0];
      v24 = 5LL * v20;
      *(_OWORD *)(v43[0] + 4 * v24) = v35;
      *(_DWORD *)(v17 + 4 * v24 + 16) = v42;
      HIDWORD(v45) = v20 + 1;
      goto LABEL_24;
    }
    v25 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v43, 20, 1, &v41);
    v15 = v25;
    if ( v25 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v25, 0xC0u, 0LL);
  }
  else
  {
    v15 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  if ( v15 < 0 )
  {
    v33 = 5721;
    goto LABEL_47;
  }
  v23 = HIDWORD(v45);
LABEL_24:
  v26 = v23 + 1;
  *((_QWORD *)&v36 + 1) = 0x3F80000000000000LL;
  *(_QWORD *)&v36 = *((_QWORD *)&v40 + 1);
  v41 = v36;
  if ( v23 + 1 >= v23 )
  {
    if ( v26 <= (unsigned int)v45 )
    {
      v17 = v43[0];
      v27 = 5LL * v23;
      *(_OWORD *)(v43[0] + 4 * v27) = v36;
      *(_DWORD *)(v17 + 4 * v27 + 16) = v42;
      HIDWORD(v45) = v23 + 1;
      goto LABEL_32;
    }
    v28 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v43, 20, 1, &v41);
    v15 = v28;
    if ( v28 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v28, 0xC0u, 0LL);
  }
  else
  {
    v15 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  if ( v15 < 0 )
  {
    v33 = 5723;
    goto LABEL_47;
  }
  v26 = HIDWORD(v45);
LABEL_32:
  *((_QWORD *)&v37 + 1) = 0x3F80000000000000LL;
  *(_QWORD *)&v37 = __PAIR64__(HIDWORD(v40), v40);
  v41 = v37;
  if ( v26 + 1 < v26 )
  {
    v15 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_38:
    if ( v15 >= 0 )
      goto LABEL_39;
    v33 = 5725;
LABEL_47:
    v18 = v15;
    goto LABEL_48;
  }
  if ( v26 + 1 > (unsigned int)v45 )
  {
    v31 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v43, 20, 1, &v41);
    v15 = v31;
    if ( v31 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v31, 0xC0u, 0LL);
    goto LABEL_38;
  }
  v29 = v43[0];
  v30 = 5LL * v26;
  *(_OWORD *)(v43[0] + 4 * v30) = v37;
  *(_DWORD *)(v29 + 4 * v30 + 16) = v42;
  HIDWORD(v45) = v26 + 1;
LABEL_39:
  v16 = CPolygon::Create(
          (unsigned int)v43,
          a1,
          *(_QWORD *)(a1 + 248),
          a2,
          LODWORD(a3),
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          (__int64)&v39,
          (__int64)&v38);
  v15 = v16;
  if ( v16 < 0 )
  {
    v33 = 5740;
    goto LABEL_6;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v43);
  v12 = v38;
LABEL_41:
  *a11 = v12;
  v38 = 0LL;
LABEL_49:
  ReleaseInterface<CPolygon>(&v38);
  return (unsigned int)v15;
}
