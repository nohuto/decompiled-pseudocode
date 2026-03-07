__int64 __fastcall DxgkWin32kSetPointerShape(
        struct _LUID *a1,
        struct _DXGKARG_SETPOINTERPOSITION *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3,
        int a4)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  struct DXGADAPTER *v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // ebx
  unsigned int Value; // eax
  const wchar_t *v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  int v18; // [rsp+50h] [rbp-48h] BYREF
  __int64 v19; // [rsp+58h] [rbp-40h]
  char v20; // [rsp+60h] [rbp-38h]
  unsigned __int64 v21; // [rsp+B0h] [rbp+18h] BYREF

  v18 = -1;
  v19 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v20 = 1;
    v18 = 2129;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2129);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v18, 2129);
  if ( !a3 )
    goto LABEL_20;
  Global = DXGGLOBAL::GetGlobal();
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v21);
  v10 = v9;
  if ( v9 )
  {
    v11 = *((_QWORD *)v9 + 365);
    if ( v11 )
    {
      if ( a2->VidPnSourceId >= *(_DWORD *)(v11 + 96) )
      {
        WdLogSingleEntry1(2LL, a2->VidPnSourceId);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"VidPn source id (0x%I64x) is invalid",
          a2->VidPnSourceId,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_12;
      }
      Value = a2->Flags.Value;
      if ( Value >= 4 || (Value & 2) != 0 )
      {
        WdLogSingleEntry3(2LL, a1->HighPart, a1->LowPart, a2->VidPnSourceId);
        v14 = L"Invalid DXGKARG_SETPOINTERPOSITION passed in DxgkWin32kSetPointerShape function: Adapter LUID: (0x%I64x%08"
               "I64x) VidpnSourceId: (0x%I64x).";
      }
      else
      {
        if ( (Value & 1) != 0 )
        {
          v12 = DxgkSetPointerShape(v10, a2, a3, a3->Width, a3->Height, a4, 1, 1);
          DXGADAPTER::ReleaseReference(v10);
          goto LABEL_21;
        }
        WdLogSingleEntry3(2LL, a1->HighPart, a1->LowPart, a2->VidPnSourceId);
        v14 = L"Cannot send shape if cursor is not visible: Adapter LUID: (0x%I64x%08I64x) VidpnSourceId: (0x%I64x).";
      }
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v14, a1->HighPart, a1->LowPart, a2->VidPnSourceId, 0LL, 0LL);
    }
    else
    {
      WdLogSingleEntry2(2LL, a1->HighPart, a1->LowPart);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Adapter LUID (0x%I64x%08I64x) passed to DxgkWin32kSetPointerShape is not a display adapter",
        a1->HighPart,
        a1->LowPart,
        0LL,
        0LL,
        0LL);
    }
LABEL_20:
    v12 = -1073741811;
    goto LABEL_21;
  }
  WdLogSingleEntry2(2LL, a1->HighPart, a1->LowPart);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkWin32kSetPointerShape function.",
    a1->HighPart,
    a1->LowPart,
    0LL,
    0LL,
    0LL);
LABEL_12:
  v12 = -1071774937;
LABEL_21:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( v20 )
  {
    LOBYTE(v15) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v18);
  }
  return v12;
}
