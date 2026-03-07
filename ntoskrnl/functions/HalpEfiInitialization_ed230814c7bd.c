__int64 __fastcall HalpEfiInitialization(__int64 a1)
{
  int v2; // eax
  int v3; // eax
  int v4; // edi
  __int64 *v5; // rcx
  __int64 v6; // rax

  v2 = *(_DWORD *)(a1 + 264) & 1;
  if ( v2 )
  {
    HalFirmwareInformationBlock = *(_OWORD *)(a1 + 264);
    xmmword_140C61C10 = *(_OWORD *)(a1 + 280);
    xmmword_140C61C20 = *(_OWORD *)(a1 + 296);
    xmmword_140C61C30 = *(_OWORD *)(a1 + 312);
  }
  HalFirmwareTypeEfi = v2;
  if ( !(_BYTE)v2 )
    return 0LL;
  HalpEfiTimeCalls = 0;
  HalpEfiTimeWrites = 0;
  HalpEfiVariableCalls = 0;
  HalpEfiVariableWrites = 0;
  v3 = *(_DWORD *)(a1 + 292);
  v4 = *(_DWORD *)(a1 + 288);
  HalEfiSetVirtualAddressMapStatus = v4;
  HalEfiMissedMappingsCount = v3;
  if ( v3 || !*(_QWORD *)(a1 + 280) )
  {
    v4 = -1073741823;
LABEL_12:
    KeBugCheckEx(0x5Cu, 0x5000uLL, v4, 0LL, 0LL);
  }
  if ( v4 < 0 )
    goto LABEL_12;
  v5 = *(__int64 **)(a1 + 280);
  HalEfiRuntimeServicesBlock[0] = *v5;
  qword_140E01878 = v5[1];
  qword_140E01880 = v5[10];
  qword_140E01888 = v5[6];
  qword_140E01890 = v5[7];
  qword_140E01898 = v5[8];
  qword_140E018A0 = v5[11];
  qword_140E018A8 = v5[12];
  v6 = v5[13];
  HalpEfiRuntimeCallbackRecord.State = 0;
  qword_140E018B0 = v6;
  KeRegisterBugCheckReasonCallback(
    &HalpEfiRuntimeCallbackRecord,
    (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HalpEfiBugCheckAddPagesCallback,
    KbCallbackAddPages,
    (PUCHAR)"HalEfiRuntime");
  if ( (*(_DWORD *)(a1 + 264) & 2) != 0 )
    HalEfiRuntimeServicesTable = (__int64 *)HalpIumEfiWrapperTable;
  return (unsigned int)v4;
}
