__int64 __fastcall DxgkGetIndirectDisplayRenderAdapterByHandle(unsigned int a1, _QWORD *a2, _QWORD *a3)
{
  struct DXGADAPTER *v6; // rbx
  unsigned int v7; // ebx
  struct DXGADAPTER *v8; // rdi
  ADAPTER_DISPLAY *v9; // rcx
  __int64 v10; // rbx
  bool v11; // zf
  struct DXGADAPTER *v13[2]; // [rsp+58h] [rbp+7h] BYREF
  _BYTE v14[16]; // [rsp+68h] [rbp+17h] BYREF
  DXGADAPTER *v15[2]; // [rsp+78h] [rbp+27h] BYREF
  _BYTE v16[8]; // [rsp+88h] [rbp+37h] BYREF
  struct DXGADAPTER *v17; // [rsp+90h] [rbp+3Fh]
  char v18; // [rsp+98h] [rbp+47h]

  v13[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByHandle(v13, a1);
  v6 = v13[0];
  if ( !v13[0] )
  {
    WdLogSingleEntry2(3LL, a1, -1073741811LL);
LABEL_5:
    v7 = -1073741585;
    goto LABEL_17;
  }
  if ( (*((_DWORD *)v13[0] + 109) & 0x100) == 0 )
  {
    WdLogSingleEntry2(2LL, v13[0], -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter (0x%I64x) is not a indirect display adapter, returning 0x%I64x.",
      (__int64)v6,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_5;
  }
  v17 = v13[0];
  v18 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v16);
  v8 = v13[0];
  if ( *((_DWORD *)v6 + 50) != 1 || *((_BYTE *)v13[0] + 2833) )
  {
    v7 = -1073741130;
    WdLogSingleEntry2(3LL, v13[0], -1073741130LL);
  }
  else
  {
    v9 = (ADAPTER_DISPLAY *)*((_QWORD *)v13[0] + 365);
    v15[0] = 0LL;
    ADAPTER_DISPLAY::GetPairedRenderAdapter(v9, v15, 0LL);
    if ( v15[0] )
      *a2 = *(_QWORD *)((char *)v15[0] + 404);
    else
      *a2 = 0LL;
    v10 = *((_QWORD *)v8 + 365);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (struct DXGFASTMUTEX *const)(v10 + 200), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
    v11 = v14[8] == 0;
    *a3 = *(_QWORD *)(v10 + 280);
    if ( !v11 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
    v7 = 0;
    DXGADAPTER_REFERENCE::Assign(v15, 0LL);
  }
  if ( v18 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v16);
LABEL_17:
  DXGADAPTER_REFERENCE::Assign(v13, 0LL);
  return v7;
}
