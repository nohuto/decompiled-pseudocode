/*
 * XREFs of rimProcessPointerDeviceButtonContact @ 0x1C017C51C
 * Callers:
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0179364 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01795E8 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMAddToActiveDevices @ 0x1C015B7FC (RIMAddToActiveDevices.c)
 *     RIMGetPointerInputType @ 0x1C015E558 (RIMGetPointerInputType.c)
 *     rimExtractButtonPageButtonUsages @ 0x1C0179E64 (rimExtractButtonPageButtonUsages.c)
 *     RIMCmActivateButtonContact @ 0x1C017F878 (RIMCmActivateButtonContact.c)
 *     RIMCmGetButtonContact @ 0x1C01802CC (RIMCmGetButtonContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C0180324 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C0180370 (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C01803C4 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 */

_UNKNOWN **__fastcall rimProcessPointerDeviceButtonContact(
        LARGE_INTEGER *a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        int a5)
{
  __int64 v6; // rdi
  struct _HIDP_PREPARSED_DATA *v10; // r12
  int v11; // edx
  __int64 ButtonContact; // rbx
  int v13; // edx
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rax
  _UNKNOWN **result; // rax
  int v18; // [rsp+78h] [rbp+10h] BYREF

  v6 = *(_QWORD *)(a2 + 480);
  v10 = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 464) + 16LL);
  ButtonContact = RIMCmGetButtonContact(v6);
  v18 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v11, 1, 32, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
  }
  if ( *(_DWORD *)(v6 + 24) != 7 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 653);
  if ( !ButtonContact )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 654);
  if ( rimExtractButtonPageButtonUsages(v6, v10, a3, a4, &v18) >= 0 )
  {
    v14 = *(_DWORD *)(ButtonContact + 32);
    if ( (v18 & 4) != 0 )
    {
      if ( !__CFSHR__(*(_DWORD *)(ButtonContact + 32), 2) )
      {
        RIMCmActivateButtonContact(v6);
        if ( *(_DWORD *)(v6 + 952) == 1 )
          RIMAddToActiveDevices(a1, v6);
      }
      v14 = *(_DWORD *)(ButtonContact + 32);
    }
    else if ( __CFSHR__(*(_DWORD *)(ButtonContact + 32), 2) )
    {
      *(_DWORD *)(ButtonContact + 2340) |= 4u;
    }
    if ( (v14 & 2) != 0
      && (!(unsigned int)RIMCmIsContactSuppressed(ButtonContact)
       || (unsigned int)RIMCmIsContactDeliveringPointerData(ButtonContact)
       || (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(ButtonContact)) )
    {
      v15 = a5;
      *(_DWORD *)(ButtonContact + 44) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      *(_DWORD *)(ButtonContact + 2392) = v15;
      *(_DWORD *)(ButtonContact + 2408) = RIMGetPointerInputType(v6);
      *(_DWORD *)(ButtonContact + 2420) = v18;
      *(_DWORD *)(ButtonContact + 2472) = *(_DWORD *)(v6 + 788);
      *(_QWORD *)(ButtonContact + 2488) = *(_QWORD *)(v6 + 816);
      if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
        v16 = *(_QWORD *)(a2 + 24);
      else
        v16 = *(_QWORD *)(a2 + 16);
      *(_DWORD *)(ButtonContact + 2340) |= 1u;
      *(_QWORD *)(ButtonContact + 2424) = v16;
    }
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 4;
    return (_UNKNOWN **)WPP_RECORDER_SF_(
                          (_DWORD)gRimLog,
                          v13,
                          1,
                          33,
                          (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
  }
  return result;
}
