__int64 __fastcall ADAPTER_DISPLAY::GetInvalidModesForTestPurposes(
        ADAPTER_DISPLAY *this,
        struct _D3DKMT_DISPLAYMODELIST *a2)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 VidPnSourceId; // rax
  __int64 v7; // r9
  __int64 v8; // rax
  _BYTE v10[24]; // [rsp+50h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (ADAPTER_DISPLAY *)((char *)this + 296), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v4 = *((_QWORD *)this + 43);
  if ( v4 )
  {
    VidPnSourceId = a2->VidPnSourceId;
    if ( (unsigned int)VidPnSourceId < *((_DWORD *)this + 24) )
    {
      v7 = 3 * VidPnSourceId;
      v8 = *(unsigned int *)(v4 + 24 * VidPnSourceId + 16);
      if ( a2->ModeCount >= (unsigned int)v8 )
      {
        memmove(a2->pModeList, *(const void **)(v4 + 8 * v7 + 8), 44 * v8);
        a2->ModeCount = *(_DWORD *)(*((_QWORD *)this + 43) + 24LL * a2->VidPnSourceId + 16);
        v5 = 0;
      }
      else
      {
        a2->ModeCount = v8;
        v5 = 1075707914;
      }
    }
    else
    {
      v5 = -1073741811;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 8720LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Trying to get invalid display mode list but haven't activated it yet.",
      8720LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v5 = -1073741709;
  }
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
  return v5;
}
