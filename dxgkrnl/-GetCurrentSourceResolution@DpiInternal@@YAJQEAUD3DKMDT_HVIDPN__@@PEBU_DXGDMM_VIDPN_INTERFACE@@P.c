__int64 __fastcall DpiInternal::GetCurrentSourceResolution(
        DpiInternal *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        const struct _DXGDMM_VIDPN_INTERFACE *a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a4)
{
  __int64 (__fastcall *v4)(DpiInternal *, __int64, __int64 *, __int64 *); // rax
  __int64 v7; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v13; // rdi
  const wchar_t *v14; // r9
  __int64 v15; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v16[8]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v17; // [rsp+60h] [rbp-20h]
  void (__fastcall *v18)(__int64, __int64); // [rsp+68h] [rbp-18h]
  __int64 v19; // [rsp+70h] [rbp-10h]
  int v20; // [rsp+78h] [rbp-8h]
  __int64 v21; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v22; // [rsp+C0h] [rbp+40h] BYREF

  v4 = (__int64 (__fastcall *)(DpiInternal *, __int64, __int64 *, __int64 *))*((_QWORD *)a2 + 1);
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0;
  v7 = *(unsigned int *)a3;
  v16[0] = 0;
  v15 = 0LL;
  v22 = 0LL;
  v9 = v4(this, v7, &v22, &v15);
  v10 = v9;
  if ( v9 < 0 )
  {
    v13 = v9;
    WdLogSingleEntry1(2LL, v9);
    v14 = L"Failed call to DXGDMM_VIDPN_INTERFACE::pfnAcquireSourceModeSet. (status = 0x%I64x)";
  }
  else
  {
    DXGDMM::AutoRelease<D3DKMDT_HVIDPNSOURCEMODESET__ *,long (*)(D3DKMDT_HVIDPN__ *,D3DKMDT_HVIDPNSOURCEMODESET__ *),D3DKMDT_HVIDPN__ *>::Own(
      (__int64)v16,
      v22,
      *((_QWORD *)a2 + 2),
      (__int64)this);
    v21 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v15 + 24))(v22, &v21);
    v10 = v11;
    if ( v11 >= 0 )
    {
      if ( *(_DWORD *)(v21 + 4) == 1 || (unsigned int)(*(_DWORD *)(v21 + 4) - 3) < 2 )
      {
        if ( *(_DWORD *)(v21 + 8) && *(_DWORD *)(v21 + 12) )
        {
          *(_QWORD *)&a4->VidPnSourceId = *(_QWORD *)(v21 + 8);
LABEL_7:
          (*(void (__fastcall **)(__int64))(v15 + 32))(v22);
          goto LABEL_8;
        }
        WdLogSingleEntry1(1LL, v21);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"Invalid mode from call to DXGDMM_VIDPN_INTERFACE::pfnAcquirePinnedModeInfo. (pPinnedVidPnSourceModeInfo = 0x%I64x)",
          v21,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        WdLogSingleEntry1(2LL, *(int *)(v21 + 4));
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed call to determine source resolution due to invalid type. (Type = 0x%I64x)",
          *(int *)(v21 + 4),
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v10 = -1073741823;
      goto LABEL_7;
    }
    v13 = v11;
    WdLogSingleEntry1(2LL, v11);
    v14 = L"Failed call to DXGDMM_VIDPN_INTERFACE::pfnAcquirePinnedModeInfo. (status = 0x%I64x)";
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v14, v13, 0LL, 0LL, 0LL, 0LL);
LABEL_8:
  if ( v16[0] )
    v18(v19, v17);
  return v10;
}
