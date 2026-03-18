/*
 * XREFs of SynthesizeTouchInputContainer @ 0x1C01F2634
 * Callers:
 *     ?OnTouchSynthesizeNotification@CHidInput@@EEAAJXZ @ 0x1C01E2860 (-OnTouchSynthesizeNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1C00043A4 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0033980 (HMValidateHandleNoSecure.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C01D14C4 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?CreateInjectionDevice@@YAHXZ @ 0x1C01F2030 (-CreateInjectionDevice@@YAHXZ.c)
 */

char __fastcall SynthesizeTouchInputContainer(_QWORD *a1)
{
  int InjectionDevice; // eax
  __int64 v3; // rax
  CTouchProcessor *v4; // rcx
  unsigned int v5; // r8d
  CTouchProcessor **v6; // rdx

  if ( TouchExtensibility::ghInjectionDevice )
  {
    if ( !HMValidateHandleNoSecure((int)TouchExtensibility::hDeviceUser, 19) )
      TouchExtensibility::ghInjectionDevice = 0LL;
    if ( TouchExtensibility::ghInjectionDevice )
      goto LABEL_6;
  }
  InjectionDevice = CreateInjectionDevice();
  if ( InjectionDevice )
  {
LABEL_6:
    v3 = HMValidateHandleNoSecure((int)TouchExtensibility::hDeviceUser, 19);
    InputTraceLogging::RIM::InjectInput(v3);
    v5 = 0;
    v6 = (CTouchProcessor **)a1[29];
    a1[4] = TouchExtensibility::ghInjectionDevice;
    *((_DWORD *)a1 + 48) = 1;
    if ( *((_DWORD *)a1 + 6) )
    {
      v6 += 4;
      do
      {
        v4 = (CTouchProcessor *)a1[4];
        ++v5;
        *v6 = v4;
        v6 += 24;
      }
      while ( v5 < *((_DWORD *)a1 + 6) );
    }
    CTouchProcessor::ProcessInjectedInput(v4, v6, (struct RIMCOMPLETEFRAME *)a1, 0, 0, 0);
    LOBYTE(InjectionDevice) = 1;
  }
  return InjectionDevice;
}
