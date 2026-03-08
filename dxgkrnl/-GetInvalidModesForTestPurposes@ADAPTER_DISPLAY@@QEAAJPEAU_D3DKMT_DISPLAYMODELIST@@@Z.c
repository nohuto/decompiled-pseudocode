/*
 * XREFs of ?GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z @ 0x1C02B8B58
 * Callers:
 *     DxgkEscape @ 0x1C01A3EE0 (DxgkEscape.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 */

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
