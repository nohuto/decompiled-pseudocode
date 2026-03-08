/*
 * XREFs of ?IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C01F8050
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173EE4 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C017F2A0 (-NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C01F83FC (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DMMVIDEOPRESENTTARGET::IsTargetForceable(DMMVIDEOPRESENTTARGET *this)
{
  char v1; // di
  __int64 v3; // rsi
  __int64 v4; // rax
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx

  v1 = 0;
  if ( !*((_QWORD *)this + 5) )
    WdLogSingleEntry0(1LL);
  v3 = *(_QWORD *)(*((_QWORD *)this + 5) + 88LL);
  if ( !*(_QWORD *)(v3 + 8) )
    WdLogSingleEntry0(1LL);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 16LL);
  if ( *(_DWORD *)(v4 + 412) == 21299 && *(int *)(*(_QWORD *)(*(_QWORD *)(v4 + 2920) + 16LL) + 2820LL) < 1105 )
    return 0;
  if ( *((_DWORD *)this + 32) != -1 )
    return 1;
  v5 = *((_DWORD *)this + 102);
  if ( v5 != -1 )
    return v5 == 1;
  v6 = *((_DWORD *)this + 20);
  if ( !v6 )
    return 1;
  v7 = v6 - 1;
  if ( !v7 )
    return 1;
  v8 = v7 - 1;
  if ( !v8 )
    return 1;
  v9 = v8 - 1;
  if ( !v9 || v9 == 11 )
    return 1;
  return v1;
}
