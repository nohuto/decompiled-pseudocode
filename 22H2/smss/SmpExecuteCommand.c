/*
 * XREFs of SmpExecuteCommand @ 0x140004568
 * Callers:
 *     SmpStartCsr @ 0x140002100 (SmpStartCsr.c)
 *     SmscpLoadSubSystemsForMuSession @ 0x140004090 (SmscpLoadSubSystemsForMuSession.c)
 *     SmscpExecuteInitialCommand @ 0x1400042A0 (SmscpExecuteInitialCommand.c)
 *     SmpLoadDataFromRegistry @ 0x140009604 (SmpLoadDataFromRegistry.c)
 *     SmpLoadDeferredSubsystem @ 0x140017200 (SmpLoadDeferredSubsystem.c)
 * Callees:
 *     SmscpLoadSubSystem @ 0x14000440C (SmscpLoadSubSystem.c)
 *     SmpParseCommandLine @ 0x1400046C0 (SmpParseCommandLine.c)
 *     SmpExecuteImage @ 0x140004D5C (SmpExecuteImage.c)
 *     SmpInvokeAutoChk @ 0x1400057D4 (SmpInvokeAutoChk.c)
 *     SmpLoadSubSystem @ 0x1400172BC (SmpLoadSubSystem.c)
 */

__int64 __fastcall SmpExecuteCommand(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        PRTL_USER_PROCESS_PARAMETERS ProcessParameters)
{
  int v6; // esi
  __int64 result; // rax
  struct _UNICODE_STRING *v8; // rdi
  int v9; // r9d
  unsigned int v10; // ebx
  unsigned int SubSystem; // eax
  struct _UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING Source; // [rsp+50h] [rbp-20h] BYREF
  struct _UNICODE_STRING v14; // [rsp+60h] [rbp-10h] BYREF
  int v15; // [rsp+A8h] [rbp+38h] BYREF

  v15 = a4;
  v6 = a1;
  if ( (a4 & 1) != 0 )
    return 0LL;
  v8 = &v14;
  if ( (a4 & 0x400) != 0 )
    v8 = 0LL;
  result = SmpParseCommandLine(a1, &v15, &UnicodeString, v8);
  v10 = result;
  if ( (int)result >= 0 )
  {
    if ( (v15 & 4) != 0 )
    {
      if ( !SmpSoftBoot || SmpBugcheckRecovery )
      {
        SubSystem = SmpInvokeAutoChk((int)&UnicodeString, (int)v8, &Source);
LABEL_17:
        v10 = SubSystem;
      }
    }
    else
    {
      if ( (v15 & 8) != 0 )
      {
        if ( SmpPrimarySmss )
          SubSystem = SmpLoadSubSystem((int)&UnicodeString, (int)v8, v6, (int)&Source, v15);
        else
          SubSystem = SmscpLoadSubSystem((int)&UnicodeString, (int)v8, v6, a2, v15);
        goto LABEL_17;
      }
      if ( (v15 & 0x10) == 0 )
      {
        SubSystem = SmpExecuteImage((int)&UnicodeString, (int)v8, v6, v9, 0LL, v15, ProcessParameters);
        goto LABEL_17;
      }
      v10 = -1073741772;
    }
    RtlFreeUnicodeString(&UnicodeString);
    RtlFreeUnicodeString(&Source);
    if ( v8 )
      RtlFreeUnicodeString(&v14);
    return v10;
  }
  return result;
}
