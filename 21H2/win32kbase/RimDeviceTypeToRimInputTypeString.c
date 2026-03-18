/*
 * XREFs of RimDeviceTypeToRimInputTypeString @ 0x1C004DC2C
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0003B78 (rimProcessDeviceBufferAndStartRead.c)
 *     RIMStartDeviceSpecificRead @ 0x1C004AF3C (RIMStartDeviceSpecificRead.c)
 *     RIMOpenDevWorker @ 0x1C004B0E0 (RIMOpenDevWorker.c)
 *     ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x1C004B44C (-ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z.c)
 *     rimInputApc @ 0x1C00C06F0 (rimInputApc.c)
 *     RIMLogDeviceHealthTelemetry @ 0x1C018509C (RIMLogDeviceHealthTelemetry.c)
 *     RIMDeliverConfigRequest @ 0x1C018AB6C (RIMDeliverConfigRequest.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0190190 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0196000 (RIMVirtCreatePointerDeviceInfo.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall RimDeviceTypeToRimInputTypeString(__int64 a1, int a2)
{
  const wchar_t *result; // rax
  int v3; // edx
  int v4; // edx
  int v5; // ecx

  if ( !a2 )
    return L"RIM_INPUT_TYPE_MOUSE";
  v3 = a2 - 1;
  if ( !v3 )
    return L"RIM_INPUT_TYPE_KEYBOARD";
  v4 = v3 - 1;
  if ( !v4 )
  {
    if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
    {
      if ( *(_BYTE *)(a1 + 48) != 3 )
        return L"RIM_INPUT_TYPE_HID_GEN";
    }
    else
    {
      v5 = *(_DWORD *)(*(_QWORD *)(a1 + 472) + 24LL);
      if ( v5 == 7 )
        return L"RIM_INPUT_TYPE_HID_PTP";
      if ( (unsigned int)(v5 - 5) <= 1 )
        return L"RIM_INPUT_TYPE_HID_PEN";
      if ( (unsigned int)(v5 - 1) <= 3 )
        return L"RIM_INPUT_TYPE_HID_TCH";
    }
    return &word_1C0251294;
  }
  if ( v4 != 1 )
    return &word_1C0251294;
  result = L"RIM_INPUT_TYPE_PTP_CONFIG";
  if ( (*(_DWORD *)(a1 + 184) & 0x1000) == 0 )
    return L"RIM_INPUT_TYPE_TCH_CONFIG";
  return result;
}
