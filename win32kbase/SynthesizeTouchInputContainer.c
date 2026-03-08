/*
 * XREFs of SynthesizeTouchInputContainer @ 0x1C022370C
 * Callers:
 *     ?OnTouchSynthesizeNotification@CHidInput@@EEAAJXZ @ 0x1C0212070 (-OnTouchSynthesizeNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1C0004188 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C007A1CC (HMValidateHandleNoSecure.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C01FF048 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?CreateInjectionDevice@@YAHXZ @ 0x1C0223278 (-CreateInjectionDevice@@YAHXZ.c)
 */

char __fastcall SynthesizeTouchInputContainer(struct RIMCOMPLETEFRAME *a1)
{
  int InjectionDevice; // eax
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rax

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
    v6 = 0LL;
    v7 = (_QWORD *)*((_QWORD *)a1 + 29);
    *((_QWORD *)a1 + 4) = TouchExtensibility::ghInjectionDevice;
    *((_DWORD *)a1 + 48) = 1;
    if ( *((_DWORD *)a1 + 6) )
    {
      v7 += 4;
      do
      {
        v6 = (unsigned int)(v6 + 1);
        *v7 = *((_QWORD *)a1 + 4);
        v7 += 24;
      }
      while ( (unsigned int)v6 < *((_DWORD *)a1 + 6) );
    }
    v8 = SGDGetUserSessionState(v7, v6, v4, v5);
    CTouchProcessor::ProcessInjectedInput(
      *(struct _KTHREAD ***)(v8 + 3424),
      (__int64)TouchExtensibility::ghInjectionDevice,
      a1,
      0,
      0,
      0);
    LOBYTE(InjectionDevice) = 1;
  }
  return InjectionDevice;
}
