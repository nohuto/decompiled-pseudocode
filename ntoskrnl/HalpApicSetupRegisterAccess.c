/*
 * XREFs of HalpApicSetupRegisterAccess @ 0x14037301C
 * Callers:
 *     HalpApicInitializeLocalUnit @ 0x140372980 (HalpApicInitializeLocalUnit.c)
 *     HalpApicDiscover @ 0x140375E78 (HalpApicDiscover.c)
 *     HalpApicHvUpdateCallback @ 0x1405186D0 (HalpApicHvUpdateCallback.c)
 * Callees:
 *     HalSocRequestConfigurationData @ 0x1403731C8 (HalSocRequestConfigurationData.c)
 *     HalSocRequestApi @ 0x1403737EC (HalSocRequestApi.c)
 *     HalpIsXboxNanovisorPresent @ 0x140373A1C (HalpIsXboxNanovisorPresent.c)
 */

__int64 HalpApicSetupRegisterAccess()
{
  bool v0; // bl
  char IsXboxNanovisorPresent; // al
  __int64 v2; // rdx
  char v3; // r10
  int v4; // ecx
  __int64 v5; // rdx
  void *v6; // r14
  void *v7; // r15
  unsigned __int64 (__fastcall *v8)(unsigned int, unsigned int); // rsi
  void (*v9)(); // r12
  __int64 (__fastcall *v10)(); // rdi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 result; // rax
  _BYTE v17[8]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v18; // [rsp+38h] [rbp-20h] BYREF
  char v19; // [rsp+A0h] [rbp+48h] BYREF
  char v20; // [rsp+A8h] [rbp+50h] BYREF
  char v21; // [rsp+B0h] [rbp+58h] BYREF
  char v22; // [rsp+B8h] [rbp+60h] BYREF

  v0 = 0;
  v17[0] = 0;
  v20 = 0;
  v21 = 0;
  v18 = 0LL;
  v19 = 0;
  v22 = 0;
  IsXboxNanovisorPresent = HalpIsXboxNanovisorPresent();
  v4 = 27;
  if ( IsXboxNanovisorPresent )
    goto LABEL_6;
  HalSocRequestConfigurationData(4LL, v2, &v20);
  HalSocRequestConfigurationData(6LL, v5, &v21);
  v4 = 27;
  v3 = v20;
  if ( (__readmsr(0x1Bu) & 0x400) != 0 )
    v3 = 1;
  if ( v21 || v3 )
  {
LABEL_6:
    HalpApicUsingMsrs = 1;
    v6 = HalpApicX2ReadRegister;
    v7 = HalpApicX2WriteRegister;
    v8 = HalpApicX2WriteCommand;
    v9 = xHalTimerWatchdogStop;
    v10 = HalpApicX2EndOfInterrupt;
    if ( v3 )
    {
      v11 = __readmsr(0x1Bu);
      if ( (v11 & 0x400) == 0 )
      {
        __writemsr(0x1Bu, v11 | 0x400);
        if ( !HalpApicX2Mode )
          HalpApicRestoreNonX2ModeOnReset = 1;
      }
      v12 = __readmsr(0x1Bu);
      if ( (v12 & 0x400) != 0 )
      {
        HalpApicX2Mode = 1;
LABEL_12:
        HalSocRequestConfigurationData(7LL, (unsigned __int64)HIDWORD(v12) << 32, &v19);
        HalSocRequestConfigurationData(9LL, v13, &v22);
        if ( v19 )
        {
          if ( !v22 )
          {
            HalSocRequestConfigurationData(5LL, v14, v17);
            if ( !v17[0] )
              HalpApicGuestX2Mode = 1;
          }
        }
        goto LABEL_13;
      }
      if ( !HalpApicX2Mode )
        goto LABEL_12;
      return 3221225858LL;
    }
    if ( HalpApicX2Mode )
      return 3221225858LL;
  }
  else
  {
    if ( HalpApicX2Mode )
      return 3221225858LL;
    HalpApicUsingMsrs = 0;
    v6 = HalpApic1ReadRegister;
    v7 = HalpApic1WriteRegister;
    v8 = (unsigned __int64 (__fastcall *)(unsigned int, unsigned int))HalpApic1WriteIcr;
    v9 = (void (*)())HalpApic1WaitForIcr;
    v10 = HalpApic1EndOfInterrupt;
  }
LABEL_13:
  HalSocRequestApi(v4, (int)HalpApicHvUpdateCallback, 5, 16, &v18);
  if ( (_QWORD)v18 )
    v10 = (__int64 (__fastcall *)())v18;
  if ( *((_QWORD *)&v18 + 1) )
    v8 = (unsigned __int64 (__fastcall *)(unsigned int, unsigned int))*((_QWORD *)&v18 + 1);
  if ( !HalpApicX2Mode && !HalpApicUsingMsrs )
  {
    HalSocRequestConfigurationData(7LL, v15, &v19);
    v0 = v19 == 0;
  }
  HalpApicValidateSelfIpi = v0;
  result = 0LL;
  HalpApicRead = (__int64)v6;
  HalpApicWrite = (__int64)v7;
  HalpApicWriteCommand = (__int64)v8;
  HalpApicWaitForCommand = (__int64)v9;
  HalpApicEndOfInterrupt = (__int64)v10;
  return result;
}
