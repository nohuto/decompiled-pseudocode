__int64 __fastcall DxgkHandleVideoParameters(__int64 a1, unsigned int a2, char *Source1)
{
  __int64 v4; // r15
  __int64 v5; // rsi
  struct DXGPROCESS *Current; // rax
  int v8; // r14d
  int v9; // ebx
  unsigned int v10; // edi
  __int64 v11; // rbx
  const wchar_t *v12; // r9
  __int64 v13; // r14
  int v14; // eax
  unsigned __int8 v15; // r12
  int v16; // eax
  int CurrentTvStandard; // eax
  __int64 v18; // rdx
  unsigned int v19; // r8d
  int CopyProtection; // eax
  unsigned __int8 v21[4]; // [rsp+50h] [rbp-B0h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT v22; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v23; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v24[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v25[144]; // [rsp+70h] [rbp-90h] BYREF

  v4 = a2;
  v5 = a1;
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (struct DXGPROCESS *)((char *)Current + 376), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  v8 = 1;
  if ( !v5 )
  {
    WdLogSingleEntry1(1LL, 65LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDxgAdapter != NULL", 65LL, 0LL, 0LL, 0LL, 0LL);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v25, (struct DXGADAPTER *const)v5, 0LL);
  v9 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v25, 0LL);
  if ( !DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)v5) )
  {
    v10 = -1073741637;
    WdLogSingleEntry2(2LL, v5, -1073741637LL);
    v11 = v5;
    v12 = L"DxgkHandleVideoParameters is called on a render only or display only adapter 0x%I64x, returning 0x%I64x.";
    v5 = -1073741637LL;
LABEL_11:
    v13 = 0LL;
    goto LABEL_12;
  }
  if ( (unsigned int)v4 < *(_DWORD *)(*(_QWORD *)(v5 + 2920) + 96LL) )
  {
    if ( RtlCompareMemory(Source1, &GUID_VIDEO_PARAMETERS, 0x10uLL) != 16 )
    {
      v11 = -1073741811LL;
      WdLogSingleEntry1(2LL, -1073741811LL);
      v12 = L"Specified GUID does not match VIDEOPARAMETERS GUID, returning 0x%I64x.";
      v10 = -1073741811;
      v5 = 0LL;
      goto LABEL_11;
    }
    v23 = 0;
    v21[0] = 0;
    DmmIsSourcePresentedOnClientVidPnAnalogTvOut((void *const)v5, v4, v21, &v23);
    v14 = *((_DWORD *)Source1 + 5);
    v15 = v21[0];
    if ( v14 == 1 )
    {
      *(_QWORD *)(Source1 + 28) = 0LL;
      *(_QWORD *)(Source1 + 36) = 0LL;
      *(_QWORD *)(Source1 + 44) = 0LL;
      v9 = 0;
      *(_QWORD *)(Source1 + 52) = 0LL;
      *(_QWORD *)(Source1 + 60) = 0LL;
      *(_QWORD *)(Source1 + 68) = 0LL;
      *(_QWORD *)(Source1 + 76) = 0LL;
      *(_QWORD *)(Source1 + 84) = 0LL;
      *(_QWORD *)(Source1 + 92) = 0LL;
      memset(Source1 + 100, 0, 0x100uLL);
      *((_DWORD *)Source1 + 6) = 3;
      if ( v15 == 1 )
      {
        v22 = 0;
        DmmGetPathContentFromClientVidPnSource((void *const)v5, v4, (enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT *)&v22);
        v16 = (v22 == 2) + 1;
      }
      else
      {
        v16 = 1;
      }
      *((_DWORD *)Source1 + 7) = v16;
      *((_DWORD *)Source1 + 9) = 3;
      if ( v15 == 1 )
        CurrentTvStandard = GetCurrentTvStandard((struct DXGADAPTER *)v5, v23);
      else
        CurrentTvStandard = 0x8000;
      *((_DWORD *)Source1 + 8) = CurrentTvStandard;
      *((_DWORD *)Source1 + 10) = CurrentTvStandard | 0x8000;
      if ( v15 == 1 )
      {
        v22 = 0;
        DmmGetMacrovisonSupportFromClientVidPnSource((void *const)v5, v4, &v22);
        if ( (*(_BYTE *)&v22 & 4) == 0 && (*(_BYTE *)&v22 & 2) == 0 )
          v8 = 0;
        *((_DWORD *)Source1 + 20) = v8;
        if ( !v8 )
          goto LABEL_46;
      }
      else
      {
        *((_DWORD *)Source1 + 20) = 1;
      }
      *((_DWORD *)Source1 + 6) |= 0x100u;
      *((_DWORD *)Source1 + 22) = 196799;
LABEL_46:
      v10 = v9;
      goto LABEL_47;
    }
    if ( v14 != 2 )
      goto LABEL_46;
    v9 = 0;
    if ( (*((_DWORD *)Source1 + 6) & 0x100) != 0 )
    {
      switch ( *((_DWORD *)Source1 + 21) )
      {
        case 1:
          v18 = *((unsigned int *)Source1 + 24);
          if ( (unsigned int)(v18 - 1) > 2 || *((_DWORD *)Source1 + 20) != 1 )
            goto LABEL_36;
          CopyProtection = ADAPTER_DISPLAY::CreateCopyProtection(
                             *(DXGADAPTER ***)(v5 + 2920),
                             v4,
                             v18,
                             (unsigned int *)Source1 + 23);
          break;
        case 2:
          CopyProtection = ADAPTER_DISPLAY::DestroyCopyProtection(
                             *(DXGADAPTER ***)(v5 + 2920),
                             v4,
                             *((_DWORD *)Source1 + 23));
          break;
        case 4:
          v19 = *((_DWORD *)Source1 + 24);
          if ( v19 > 3 )
          {
            v18 = v19;
            goto LABEL_36;
          }
          CopyProtection = ADAPTER_DISPLAY::UpdateCopyProtection(
                             *(DXGADAPTER ***)(v5 + 2920),
                             v4,
                             v19,
                             *((_DWORD *)Source1 + 23));
          break;
        default:
          v18 = *((unsigned int *)Source1 + 21);
LABEL_36:
          v9 = -1073741811;
          WdLogSingleEntry2(3LL, v18, -1073741811LL);
          goto LABEL_46;
      }
      v9 = CopyProtection;
      if ( CopyProtection < 0 )
        goto LABEL_46;
    }
    if ( v15 == 1 && (*((_DWORD *)Source1 + 6) & 1) != 0 )
      DmmUpdateContentOnAllClientVidPnPathsFromSource(
        (void *const)v5,
        v4,
        (enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT)((*((_DWORD *)Source1 + 7) == 2) + 1));
    goto LABEL_46;
  }
  v13 = -1071774975LL;
  v11 = v4;
  WdLogSingleEntry3(2LL, v4, v5, -1071774975LL);
  v12 = L"Caller specified VidPn source 0x%I64x is not valid on  adapter 0x%I64x, returning 0x%I64x.";
  v10 = -1071774975;
LABEL_12:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v12, v11, v5, v13, 0LL, 0LL);
LABEL_47:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v25);
  if ( v24[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
  return v10;
}
