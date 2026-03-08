/*
 * XREFs of ?IsDriverCustomScalingSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C01A07DC
 * Callers:
 *     ?IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C000237C (-IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C000890C (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C00152EC (-SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     ?UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01A0140 (-UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PE.c)
 * Callees:
 *     <none>
 */

bool __fastcall DMMVIDPNPRESENTPATH::IsDriverCustomScalingSupported(DMMVIDPNPRESENTPATH *this)
{
  __int64 v1; // rbx
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // rbx

  v1 = *((_QWORD *)this + 11);
  if ( !*(_QWORD *)(v1 + 40) )
    WdLogSingleEntry0(1LL);
  v2 = *(_QWORD *)(v1 + 40);
  if ( !*(_QWORD *)(v2 + 72) )
    WdLogSingleEntry0(1LL);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 72) + 48LL);
  if ( !*(_QWORD *)(v3 + 8) )
    WdLogSingleEntry0(1LL);
  v4 = *(_QWORD *)(v3 + 8);
  if ( !v4 )
    WdLogSingleEntry0(1LL);
  return *(_DWORD *)(*(_QWORD *)(v4 + 16) + 2820LL) >= 1105;
}
