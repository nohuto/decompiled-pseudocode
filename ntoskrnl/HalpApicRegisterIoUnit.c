/*
 * XREFs of HalpApicRegisterIoUnit @ 0x1403A8208
 * Callers:
 *     HalpApicDiscover @ 0x140375E78 (HalpApicDiscover.c)
 * Callees:
 *     HalpInterruptRegisterController @ 0x140373AE4 (HalpInterruptRegisterController.c)
 *     HalRegisterPermanentAddressUsage @ 0x14037C950 (HalRegisterPermanentAddressUsage.c)
 *     HalpApicGetCpuInfo @ 0x1403A84A4 (HalpApicGetCpuInfo.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

NTSTATUS __fastcall HalpApicRegisterIoUnit(LARGE_INTEGER PhysicalAddress, int a2, int a3)
{
  int v6; // ebx
  NTSTATUS result; // eax
  __int128 v8; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v9; // [rsp+30h] [rbp-D0h]
  __int128 v10; // [rsp+40h] [rbp-C0h]
  _QWORD v11[36]; // [rsp+50h] [rbp-B0h] BYREF
  char v12; // [rsp+180h] [rbp+80h] BYREF
  char v13; // [rsp+188h] [rbp+88h] BYREF
  char v14; // [rsp+190h] [rbp+90h] BYREF
  char v15; // [rsp+198h] [rbp+98h] BYREF

  v14 = 0;
  v12 = 0;
  v15 = 0;
  v13 = 0;
  memset(v11, 0, 0x100uLL);
  v6 = HIDWORD(v11[29]);
  v8 = 0LL;
  v11[27] = &v8;
  v9 = 0LL;
  v11[0] = 0x10000000001LL;
  v10 = 0LL;
  v11[28] = 0x200000030LL;
  LODWORD(v11[29]) = a2;
  if ( HalpApicX2Mode )
  {
    v11[15] = HalpApicConvertId;
    HIDWORD(v11[30]) = 16;
    LODWORD(v11[31]) = 0xFFFF;
    if ( !HalpApicGuestX2Mode )
      v6 = HIDWORD(v11[29]) | 0x100;
    if ( (unsigned __int8)HalpApicGetCpuInfo(
                            &v14,
                            &v15,
                            &v12,
                            &v13,
                            v8,
                            *((_QWORD *)&v8 + 1),
                            v9,
                            *((_QWORD *)&v9 + 1),
                            v10,
                            *((_QWORD *)&v10 + 1),
                            v11[0]) )
    {
      if ( v13 == 2 )
      {
        if ( v12 != 47 || v14 != 6 )
          goto LABEL_7;
        LODWORD(v11[31]) = 255;
      }
      if ( v13 == 1 )
      {
        HalpApicDirectedEndOfInterruptModeEnabled = 1;
        v6 |= 0x400u;
        v11[22] = HalpApicDirectedEndOfInterrupt;
      }
    }
  }
  else
  {
    HIDWORD(v11[30]) = 4;
    v11[7] = HalpApicSetLogicalId;
    v6 = HIDWORD(v11[29]) | 4;
    LODWORD(v11[31]) = 15;
  }
LABEL_7:
  HIDWORD(v11[31]) = 96;
  v11[1] = HalpApicInitializeLocalUnit;
  HIDWORD(v11[29]) = v6 | 0xFB;
  v11[18] = HalpApicDeinitializeLocalUnit;
  LODWORD(v11[30]) = 15;
  v11[2] = HalpApicInitializeIoUnit;
  *(LARGE_INTEGER *)&v8 = PhysicalAddress;
  v11[3] = HalpApicSetPriority;
  v11[4] = HalpApicGetLocalUnitError;
  v11[5] = HalpApicClearLocalUnitError;
  v11[9] = HalpApicWriteEndOfInterrupt;
  v11[10] = HalpApicEndOfInterrupt;
  v11[11] = HalpApicSetLineState;
  v11[12] = HalpApicRequestInterrupt;
  v11[13] = HalpApicStartProcessor;
  v11[14] = HalpApicGenerateMessage;
  v11[16] = HalpApicSaveLocalInterrupts;
  v11[17] = HalpApicReplayLocalInterrupts;
  v11[20] = HalpApicQueryAndGetSource;
  DWORD2(v8) = a2;
  HIDWORD(v9) = a3;
  result = HalRegisterPermanentAddressUsage(PhysicalAddress, 0x400u);
  if ( result >= 0 )
    return HalpInterruptRegisterController((__int64)v11);
  return result;
}
