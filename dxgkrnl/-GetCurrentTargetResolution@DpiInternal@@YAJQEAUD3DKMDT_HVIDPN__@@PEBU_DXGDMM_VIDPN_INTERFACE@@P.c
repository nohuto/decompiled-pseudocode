__int64 __fastcall DpiInternal::GetCurrentTargetResolution(
        DpiInternal *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        const struct _DXGDMM_VIDPN_INTERFACE *a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a4,
        struct _D3DKMDT_2DREGION *a5)
{
  __int64 (__fastcall *v5)(DpiInternal *, __int64, __int64 *, __int64 *); // rax
  __int64 v8; // rdx
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v15; // rdi
  const wchar_t *v16; // r9
  __int64 v17; // [rsp+50h] [rbp-11h] BYREF
  __int64 v18; // [rsp+58h] [rbp-9h] BYREF
  __int64 v19; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v20[8]; // [rsp+68h] [rbp+7h] BYREF
  __int64 v21; // [rsp+70h] [rbp+Fh]
  void (__fastcall *v22)(__int64, __int64); // [rsp+78h] [rbp+17h]
  __int64 v23; // [rsp+80h] [rbp+1Fh]
  int v24; // [rsp+88h] [rbp+27h]
  int v25; // [rsp+C8h] [rbp+67h] BYREF
  __int64 v26; // [rsp+D0h] [rbp+6Fh] BYREF

  v5 = (__int64 (__fastcall *)(DpiInternal *, __int64, __int64 *, __int64 *))*((_QWORD *)a2 + 3);
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0;
  v8 = *((unsigned int *)a3 + 1);
  v20[0] = 0;
  v17 = 0LL;
  v26 = 0LL;
  v10 = v5(this, v8, &v26, &v17);
  v11 = v10;
  if ( v10 < 0 )
  {
    v15 = v10;
    WdLogSingleEntry1(2LL, v10);
    v16 = L"Failed call to DXGDMM_VIDPN_INTERFACE::pfnAcquireTargetModeSet. (status = 0x%I64x)";
  }
  else
  {
    DXGDMM::AutoRelease<D3DKMDT_HVIDPNTARGETMODESET__ *,long (*)(D3DKMDT_HVIDPN__ *,D3DKMDT_HVIDPNTARGETMODESET__ *),D3DKMDT_HVIDPN__ *>::Own(
      (__int64)v20,
      v26,
      *((_QWORD *)a2 + 4),
      (__int64)this);
    v18 = 0LL;
    v19 = 0LL;
    v25 = 0;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, int *))(v17 + 24))(v26, &v18, &v19, &v25);
    v11 = v12;
    if ( v12 >= 0 && v12 != 1075708679 )
    {
      v13 = v18;
      *(_QWORD *)&a4->VidPnSourceId = *(_QWORD *)(v18 + 20);
      LOBYTE(a5->cx) = (unsigned int)(((int)(*(_DWORD *)(v13 + 56) << 29) >> 29) - 2) <= 1;
      (*(void (__fastcall **)(__int64))(v17 + 32))(v26);
      goto LABEL_5;
    }
    v15 = v12;
    WdLogSingleEntry1(2LL, v12);
    v16 = L"Failed call to DXGDMM_VIDPN_INTERFACE::pfnAcquirePinnedModeInfo. (status = 0x%I64x)";
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v16, v15, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
  if ( v20[0] )
    v22(v23, v21);
  return v11;
}
