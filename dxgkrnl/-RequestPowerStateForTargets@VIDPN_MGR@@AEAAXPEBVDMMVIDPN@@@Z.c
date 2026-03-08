/*
 * XREFs of ?RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z @ 0x1C01DD134
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173EE4 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C0003074 (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 */

void __fastcall VIDPN_MGR::RequestPowerStateForTargets(VIDPN_MGR *this, const struct DMMVIDPN *a2)
{
  const struct DMMVIDPN *v2; // r8
  char *v3; // rbx
  char *v5; // rbp
  DMMVIDEOPRESENTTARGET *v6; // rsi
  char *v7; // rax

  v2 = (const struct DMMVIDPN *)*((_QWORD *)a2 + 15);
  v3 = 0LL;
  if ( v2 != (const struct DMMVIDPN *)((char *)a2 + 120) )
    v3 = (char *)v2 - 8;
  if ( v3 )
  {
    v5 = (char *)a2 + 120;
    do
    {
      v6 = *(DMMVIDEOPRESENTTARGET **)(*((_QWORD *)v3 + 12) + 96LL);
      if ( !*((_QWORD *)this + 1) )
        WdLogSingleEntry0(1LL);
      DMMVIDEOPRESENTTARGET::SetPowerState(v6, *(struct DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL), 1u);
      v7 = (char *)*((_QWORD *)v3 + 1);
      v3 = v7 - 8;
      if ( v7 == v5 )
        v3 = 0LL;
    }
    while ( v3 );
  }
}
