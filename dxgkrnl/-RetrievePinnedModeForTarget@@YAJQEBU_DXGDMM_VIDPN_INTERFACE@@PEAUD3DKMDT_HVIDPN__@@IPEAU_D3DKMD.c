__int64 __fastcall RetrievePinnedModeForTarget(
        const struct _DXGDMM_VIDPN_INTERFACE *const a1,
        struct D3DKMDT_HVIDPN__ *a2,
        unsigned int a3,
        struct _D3DKMDT_VIDPN_TARGET_MODE *a4,
        struct _D3DDDI_RATIONAL *a5,
        unsigned int *a6)
{
  __int64 (__fastcall *v6)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *); // rax
  __int64 v8; // rdi
  int v11; // eax
  __int64 v12; // r14
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rdi
  _OWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v21; // [rsp+50h] [rbp-19h] BYREF
  _OWORD *v22; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v23[8]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v24; // [rsp+68h] [rbp-1h]
  void (__fastcall *v25)(__int64, __int64); // [rsp+70h] [rbp+7h]
  __int64 v26; // [rsp+78h] [rbp+Fh]
  int v27; // [rsp+80h] [rbp+17h]
  __int64 v28; // [rsp+C0h] [rbp+57h] BYREF

  v6 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))*((_QWORD *)a1 + 3);
  v8 = a3;
  v28 = 0LL;
  v21 = 0LL;
  v11 = v6(a2, a3, &v28, &v21);
  v12 = v11;
  if ( v11 < 0 )
  {
    WdLogSingleEntry3(2LL, v8, a2, v11);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire target mode set of target 0x%I64x in VidPN 0x%I64x (status = 0x%I64x)",
      v8,
      (__int64)a2,
      v12,
      0LL,
      0LL);
    return (unsigned int)v12;
  }
  else
  {
    v13 = *((_QWORD *)a1 + 4);
    v24 = 0LL;
    v25 = 0LL;
    v26 = 0LL;
    v27 = 0;
    v23[0] = 0;
    DXGDMM::AutoRelease<D3DKMDT_HVIDPNTARGETMODESET__ *,long (*)(D3DKMDT_HVIDPN__ *,D3DKMDT_HVIDPNTARGETMODESET__ *),D3DKMDT_HVIDPN__ *>::Own(
      (__int64)v23,
      v28,
      v13,
      (__int64)a2);
    v22 = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64, _OWORD **, struct _D3DDDI_RATIONAL *, unsigned int *))(v21 + 24))(
            v28,
            &v22,
            a5,
            a6);
    v15 = v24;
    v16 = v14;
    if ( v14 < 0 || v14 == 1075708679 )
    {
      WdLogSingleEntry2(2LL, v24, v14);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire info of mode pinned in VidPN target mode set 0x%I64x (status = 0x%I64x)",
        v15,
        v16,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      v17 = v22;
      v18 = v21;
      v19 = v28;
      *(_OWORD *)&a4->Id = *v22;
      *(_OWORD *)&a4->VideoSignalInfo.TotalSize.cy = v17[1];
      *(_OWORD *)&a4->VideoSignalInfo.VSyncFreq.Denominator = v17[2];
      *(_OWORD *)&a4->VideoSignalInfo.PixelRate = v17[3];
      *(_OWORD *)&a4->WireFormatAndPreference.0 = v17[4];
      (*(void (__fastcall **)(__int64))(v18 + 32))(v19);
    }
    if ( v23[0] )
      v25(v26, v15);
    return (unsigned int)v16;
  }
}
