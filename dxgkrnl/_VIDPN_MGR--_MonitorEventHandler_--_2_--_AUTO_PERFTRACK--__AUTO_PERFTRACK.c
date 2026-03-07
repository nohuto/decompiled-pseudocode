int __fastcall VIDPN_MGR::_MonitorEventHandler_::_2_::_AUTO_PERFTRACK::__AUTO_PERFTRACK(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    if ( !*(_DWORD *)a1 )
    {
      v3 = *(_QWORD *)(a1 + 8) - 1LL;
      if ( (v3 & 0xFFFFFFFFFFFFFFFDuLL) == 0
        && *(_DWORD *)(a1 + 16) == 1
        && (Microsoft_Windows_DxgKrnlEnableBits & 4) != 0 )
      {
        LODWORD(v3) = McTemplateK0q_EtwWriteTransfer(
                        a1,
                        &Dxgk_PerfTrack_DMM_Hotplug_Monitor_Set_VideoMode_Cancel,
                        a3,
                        *(_DWORD *)(a1 + 20));
      }
    }
  }
  return v3;
}
