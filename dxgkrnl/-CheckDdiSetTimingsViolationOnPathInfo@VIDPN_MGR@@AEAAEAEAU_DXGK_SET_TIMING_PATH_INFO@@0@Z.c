unsigned __int8 __fastcall VIDPN_MGR::CheckDdiSetTimingsViolationOnPathInfo(
        VIDPN_MGR *this,
        struct _DXGK_SET_TIMING_PATH_INFO *a2,
        struct _DXGK_SET_TIMING_PATH_INFO *a3)
{
  int v6; // ecx
  __int64 VidPnTargetId; // rdx

  if ( !*((_QWORD *)this + 1) )
    WdLogSingleEntry0(1LL);
  if ( !DXGADAPTER::UsingSetTimingsFromVidPn(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL)) )
    return 1;
  if ( *(_QWORD *)&a2->VidPnTargetId != *(_QWORD *)&a3->VidPnTargetId
    || a2->SelectedWireFormat.Value != a3->SelectedWireFormat.Value
    || a2->InputFlags != a3->InputFlags )
  {
    VidPnTargetId = a2->VidPnTargetId;
    goto LABEL_21;
  }
  if ( a3->OutputFlags >= 2 || *((_DWORD *)&a3->TargetState + 2) >= 0x10000000u || a3->Reserved )
    WdLogSingleEntry1(1LL, a3->VidPnTargetId);
  if ( !a3->TargetState.ConnectionChangeId )
  {
    VidPnTargetId = a3->VidPnTargetId;
LABEL_21:
    WdLogSingleEntry1(1LL, VidPnTargetId);
    return 0;
  }
  v6 = *((_DWORD *)&a3->TargetState + 2) & 0xF000000;
  if ( (v6 == 234881024 || ((v6 - 201326592) & 0xFEFFFFFF) == 0) && ((*(_BYTE *)&a2->Input & 3) != 3 || v6 == 234881024) )
    return 1;
  WdLogSingleEntry2(1LL, HIBYTE(*((_DWORD *)&a3->TargetState + 2)) & 0xF, a3->VidPnTargetId);
  return 0;
}
