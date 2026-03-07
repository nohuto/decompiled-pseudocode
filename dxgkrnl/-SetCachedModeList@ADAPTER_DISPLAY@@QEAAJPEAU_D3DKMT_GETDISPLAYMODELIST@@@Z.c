__int64 __fastcall ADAPTER_DISPLAY::SetCachedModeList(PERESOURCE **this, struct _D3DKMT_GETDISPLAYMODELIST *a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rbp
  struct _LUID Luid; // [rsp+70h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 6429LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 6429LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 6431LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pInputDisplayModeList != NULL", 6431LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a2->VidPnSourceId >= *((_DWORD *)this + 24) )
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
  else if ( *((_BYTE *)this + 292) )
  {
    Luid = 0LL;
    v4 = ZwAllocateLocallyUniqueId(&Luid);
    v5 = v4;
    if ( v4 < 0 )
    {
      WdLogSingleEntry1(6LL, v4);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate LUID for mode cache, returning 0x%I64x",
        v5,
        0LL,
        0LL,
        0LL,
        0LL);
      BYTE4(this[16][500 * a2->VidPnSourceId + 139]) = 0;
    }
    else
    {
      operator delete(this[16][500 * a2->VidPnSourceId + 138]);
      this[16][500 * a2->VidPnSourceId + 138] = (PERESOURCE)a2->pModeList;
      LODWORD(this[16][500 * a2->VidPnSourceId + 139]) = a2->ModeCount;
      BYTE4(this[16][500 * a2->VidPnSourceId + 139]) = 1;
      *(PERESOURCE *)((char *)&this[16][500 * a2->VidPnSourceId + 140] + 4) = (PERESOURCE)Luid;
    }
    return (unsigned int)v5;
  }
  else
  {
    return 3221226021LL;
  }
}
