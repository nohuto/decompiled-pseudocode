/*
 * XREFs of ?GatherKeyboardDeviceSummaryInfo@CKeyboardProcessor@@QEAAXPEAUDEVICEINFO@@PEAK@Z @ 0x1C00C4A28
 * Callers:
 *     ?GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH111@Z @ 0x1C004A5F0 (-GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH111@Z.c)
 * Callees:
 *     wcsncmp @ 0x1C00D6268 (wcsncmp.c)
 */

void __fastcall CKeyboardProcessor::GatherKeyboardDeviceSummaryInfo(
        CKeyboardProcessor *this,
        struct DEVICEINFO *a2,
        unsigned int *a3)
{
  const wchar_t *v3; // rcx
  char v6; // cl
  unsigned __int16 v7; // cx

  v3 = (const wchar_t *)*((_QWORD *)a2 + 27);
  if ( !v3 || wcsncmp(v3, L"\\??\\Root#RDP", 0xCuLL) )
  {
    v6 = *((_BYTE *)a2 + 456);
    if ( (unsigned __int8)(v6 - 7) <= 1u || v6 == 4 && *((_BYTE *)a2 + 457) != 0xFF )
    {
      v7 = WORD2(gKeyboardInfo);
      gKeyboardInfo = *(_OWORD *)((char *)a2 + 456);
      qword_1C0294190 = *((_QWORD *)a2 + 59);
      dword_1C0294198 = *((_DWORD *)a2 + 120);
      if ( v7 > WORD2(gKeyboardInfo) )
        WORD2(gKeyboardInfo) = v7;
    }
  }
  ++*a3;
}
