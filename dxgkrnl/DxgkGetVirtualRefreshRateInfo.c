__int64 __fastcall DxgkGetVirtualRefreshRateInfo(struct _LUID a1, unsigned int a2, _DWORD *a3)
{
  __int64 v3; // r14
  DWORD LowPart; // ebx
  DXGADAPTER *v6; // rsi
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // r15
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  __int64 v13; // rdx
  unsigned int v14; // r14d
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rcx
  __int64 HighPart; // rdi
  const wchar_t *v18; // r9
  __int64 v19; // rbx
  __int64 v20; // [rsp+28h] [rbp-58h]
  __int64 v21; // [rsp+30h] [rbp-50h]
  DXGADAPTER *v22; // [rsp+50h] [rbp-30h] BYREF
  char v23[8]; // [rsp+60h] [rbp-20h] BYREF
  DXGADAPTER *v24; // [rsp+68h] [rbp-18h]
  char v25; // [rsp+70h] [rbp-10h]
  struct _LUID v26; // [rsp+B0h] [rbp+30h] BYREF
  char v27; // [rsp+C8h] [rbp+48h] BYREF

  v26 = a1;
  v3 = a2;
  LowPart = a1.LowPart;
  v22 = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)&v22, &v26);
  v6 = v22;
  if ( !v22 )
  {
    HighPart = v26.HighPart;
    v14 = -1073741811;
    WdLogSingleEntry3(2LL, v26.HighPart, LowPart, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkGetVirtualRefreshRateInfo function, returning 0x%I64x.",
      HighPart,
      LowPart,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_12;
  }
  v7 = *((_QWORD *)v22 + 365);
  if ( !v7 )
  {
    v14 = -1073741811;
    WdLogSingleEntry2(2LL, v22, -1073741811LL);
    v18 = L"Caller specified adapter 0x%I64x is not a display adapter in DxgkGetVirtualRefreshRateInfo function, returning 0x%I64x.";
    v21 = 0LL;
    v20 = -1073741811LL;
LABEL_22:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v18, (__int64)v6, v20, v21, 0LL, 0LL);
    goto LABEL_12;
  }
  if ( (unsigned int)v3 >= *(_DWORD *)(v7 + 96) )
  {
    v19 = v3;
    v14 = -1073741811;
    WdLogSingleEntry3(2LL, v22, v19, -1073741811LL);
    v18 = L"Adapter 0x%I64x does not have caller specified VidPn source Id 0x%I64x in DxgkGetVirtualRefreshRateInfo functi"
           "on, returning 0x%I64x.";
    v21 = -1073741811LL;
    v20 = v19;
    goto LABEL_22;
  }
  v27 = 0;
  v8 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v27, 0);
  v9 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry1(2LL, v8);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
      v9,
      0LL,
      0LL,
      0LL,
      0LL);
    v14 = v9;
  }
  else
  {
    v24 = v6;
    v25 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
    v12 = 1;
    if ( *((_DWORD *)v6 + 50) == 1 )
    {
      v6 = v22;
      if ( ADAPTER_DISPLAY::GetSessionViewOwner(*((ADAPTER_DISPLAY **)v22 + 365), (unsigned int)v3, v10, v11) )
      {
        DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v6 + 365), v3);
        if ( *((_DWORD *)DisplayModeInfo + 14) == -2 && *((_DWORD *)DisplayModeInfo + 15) == -2 )
        {
          a3[6] = 1;
          a3[5] = 64;
          a3[7] = 64;
          a3[8] = 1;
        }
        else
        {
          a3[5] = *((_DWORD *)DisplayModeInfo + 16);
          a3[6] = *((_DWORD *)DisplayModeInfo + 17);
          a3[7] = *((_DWORD *)DisplayModeInfo + 14);
          a3[8] = *((_DWORD *)DisplayModeInfo + 15);
          v12 = *((_DWORD *)DisplayModeInfo + 18);
        }
        a3[9] = v12;
        v14 = 0;
      }
      else
      {
        v13 = (unsigned int)v3;
        v14 = -1073741811;
        WdLogSingleEntry3(3LL, v13, v6, -1073741811LL);
      }
    }
    else
    {
      v6 = v22;
      v14 = -1073741130;
      WdLogSingleEntry2(3LL, v22, -1073741130LL);
    }
    if ( v25 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
  }
  if ( v27 )
    DxgkReleaseSessionModeChangeLock();
LABEL_12:
  if ( v6 )
    DXGADAPTER::ReleaseReference(v6);
  return v14;
}
