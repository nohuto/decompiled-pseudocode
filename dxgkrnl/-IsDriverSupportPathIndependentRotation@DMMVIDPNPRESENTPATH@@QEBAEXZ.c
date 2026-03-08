/*
 * XREFs of ?IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C01A08A4
 * Callers:
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0007ED8 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00087FC (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01A0140 (-UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PE.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DMMVIDPNPRESENTPATH::IsDriverSupportPathIndependentRotation(DMMVIDPNPRESENTPATH *this)
{
  __int64 v1; // rdi
  char v2; // bl
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rax

  v1 = *((_QWORD *)this + 11);
  v2 = 0;
  if ( !*(_QWORD *)(v1 + 40) )
    WdLogSingleEntry0(1LL);
  v3 = *(_QWORD *)(v1 + 40);
  if ( !*(_QWORD *)(v3 + 72) )
    WdLogSingleEntry0(1LL);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 72) + 48LL);
  if ( !*(_QWORD *)(v4 + 8) )
    WdLogSingleEntry0(1LL);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 16LL);
  if ( !v5 )
    WdLogSingleEntry0(1LL);
  v6 = *(_QWORD *)(v5 + 2920);
  if ( *(_BYTE *)(v6 + 289) && *(_BYTE *)(v6 + 290)
    || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 216) + 64LL) + 40LL) + 28LL) >= 0x4003u )
  {
    return 1;
  }
  return v2;
}
