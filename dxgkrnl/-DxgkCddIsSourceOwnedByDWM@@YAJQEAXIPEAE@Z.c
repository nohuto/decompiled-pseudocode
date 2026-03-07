__int64 __fastcall DxgkCddIsSourceOwnedByDWM(DXGADAPTER *a1, unsigned int a2, bool *a3)
{
  __int64 v4; // rdi
  ADAPTER_DISPLAY *v6; // rcx
  unsigned int v7; // esi
  const wchar_t *v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rbp
  __int64 v12; // rdi
  _BYTE v13[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGADAPTER *v14; // [rsp+58h] [rbp-20h]
  char v15; // [rsp+60h] [rbp-18h]

  v4 = a2;
  v14 = a1;
  v15 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
  if ( *((_DWORD *)a1 + 50) != 1 )
  {
    v7 = -1073741130;
    WdLogSingleEntry2(2LL, a1, -1073741130LL);
    v9 = L"Adapter 0x%I64x has been stopped, returning 0x%I64x.";
    v10 = -1073741130LL;
LABEL_11:
    v11 = v10;
    v12 = 0LL;
    goto LABEL_12;
  }
  v6 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 365);
  if ( !v6 )
  {
    v10 = -1073741811LL;
    WdLogSingleEntry2(2LL, a1, -1073741811LL);
    v9 = L"Adapter 0x%I64x is not a display adapter, returning 0x%I64x.";
    v7 = -1073741811;
    goto LABEL_11;
  }
  if ( *((_DWORD *)v6 + 24) > (unsigned int)v4 )
  {
    *a3 = (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v6, v4) == 1;
    v7 = 0;
    goto LABEL_7;
  }
  v11 = v4;
  v12 = -1073741811LL;
  WdLogSingleEntry3(2LL, a1, v11, -1073741811LL);
  v9 = L"Adapter 0x%I64x does not have VidPn source 0x%I64x, returning 0x%I64x.";
  v7 = -1073741811;
LABEL_12:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, (__int64)a1, v11, v12, 0LL, 0LL);
LABEL_7:
  if ( v15 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
  return v7;
}
