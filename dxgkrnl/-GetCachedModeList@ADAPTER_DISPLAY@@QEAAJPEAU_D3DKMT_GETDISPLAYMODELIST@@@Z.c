__int64 __fastcall ADAPTER_DISPLAY::GetCachedModeList(ADAPTER_DISPLAY *this, struct _D3DKMT_GETDISPLAYMODELIST *a2)
{
  __int64 VidPnSourceId; // rax
  __int64 v5; // rdx
  __int64 result; // rax

  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 6386LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pOutputDisplayModeList != NULL", 6386LL, 0LL, 0LL, 0LL, 0LL);
  }
  VidPnSourceId = a2->VidPnSourceId;
  if ( (unsigned int)VidPnSourceId >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry2(2LL, a2->VidPnSourceId, *((unsigned int *)this + 24));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified invalid VidPN source ID 0x%I64x (only %I64d are supported)",
      a2->VidPnSourceId,
      *((unsigned int *)this + 24),
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  else if ( *((_BYTE *)this + 292) && *(_BYTE *)(4000 * VidPnSourceId + *((_QWORD *)this + 16) + 1116) )
  {
    WdLogSingleEntry1(4LL, 6402LL);
    v5 = 4000LL * a2->VidPnSourceId;
    a2->pModeList = *(D3DKMT_DISPLAYMODE **)(v5 + *((_QWORD *)this + 16) + 1104);
    result = 0LL;
    a2->ModeCount = *(_DWORD *)(v5 + *((_QWORD *)this + 16) + 1112);
  }
  else
  {
    return 3221226021LL;
  }
  return result;
}
