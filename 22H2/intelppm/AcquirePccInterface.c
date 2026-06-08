/*
 * XREFs of AcquirePccInterface @ 0x1C00237F8
 * Callers:
 *     InitAcpiLegacyPcc @ 0x1C0022ACC (InitAcpiLegacyPcc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00047F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004AC0 (memset.c)
 *     ValidatePccHeader @ 0x1C0030350 (ValidatePccHeader.c)
 *     GetPccInternalInterfaceInfo @ 0x1C00326B4 (GetPccInternalInterfaceInfo.c)
 */

__int64 __fastcall AcquirePccInterface(__int64 a1)
{
  __int64 v2; // rax
  int PccInternalInterfaceInfo; // ebx

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001C3E8,
    0LL);
  if ( qword_1C001C8E0 )
  {
    PccInternalInterfaceInfo = 0;
  }
  else
  {
    dword_1C001C8B8 = -1;
    v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    PccInternalInterfaceInfo = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, void *, __int16, __int16, _QWORD))(WdfFunctions_01015 + 1048))(
                                 WdfDriverGlobals,
                                 v2,
                                 &GUID_PCC_INTERFACE_STANDARD,
                                 &unk_1C001C898,
                                 128,
                                 1,
                                 0LL);
    if ( PccInternalInterfaceInfo >= 0 )
    {
      PccInternalInterfaceInfo = ValidatePccHeader(qword_1C001C8E0);
      if ( PccInternalInterfaceInfo < 0 )
        goto LABEL_9;
      if ( dword_1C001C82C == 1 )
        PccInternalInterfaceInfo = GetPccInternalInterfaceInfo(a1);
      if ( PccInternalInterfaceInfo < 0 )
      {
LABEL_9:
        ((void (__fastcall *)(__int64))qword_1C001C8B0)(qword_1C001C8A0);
        memset(&unk_1C001C898, 0, 0x80uLL);
      }
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001C3E8);
  return (unsigned int)PccInternalInterfaceInfo;
}
