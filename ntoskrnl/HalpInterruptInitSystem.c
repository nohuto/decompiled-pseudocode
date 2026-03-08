/*
 * XREFs of HalpInterruptInitSystem @ 0x140A86CD0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x14028EADC (HalpInterruptModel.c)
 *     HalpInterruptInitializeGlobals @ 0x140303100 (HalpInterruptInitializeGlobals.c)
 *     HalpInterruptEnableNmi @ 0x140378254 (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403789F8 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInitializeInterruptsPn @ 0x140379DFC (HalpInitializeInterruptsPn.c)
 *     HalpInterruptInitPowerManagement @ 0x1403930CC (HalpInterruptInitPowerManagement.c)
 *     HalpInterruptBuildGlobalStartupStub @ 0x1403A3BE0 (HalpInterruptBuildGlobalStartupStub.c)
 *     HalpInitializeInterruptsBspLate @ 0x1403A9F1C (HalpInitializeInterruptsBspLate.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     HalpInterruptInitDiscard @ 0x140B7107C (HalpInterruptInitDiscard.c)
 *     HalpPreAllocateKInterrupts @ 0x140B7228C (HalpPreAllocateKInterrupts.c)
 */

__int64 __fastcall HalpInterruptInitSystem(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v4; // ebx
  __int64 result; // rax

  v4 = 0;
  if ( (int)a1 <= 16 )
  {
    if ( (_DWORD)a1 == 16 )
    {
      HalpInterruptRegistrationAllowed = 0;
    }
    else if ( (_DWORD)a1 )
    {
      switch ( (_DWORD)a1 )
      {
        case 4:
          HalpInitializeInterruptsPn(a1, a2, a3, a4);
          break;
        case 7:
          HalpInterruptInitializeGlobals();
          break;
        case 9:
          HalpInterruptInitDiscard(a3);
          break;
        case 0xB:
          _enable();
          break;
      }
    }
    else
    {
      off_140C01BA0[0] = (__int64 (__fastcall *)())HaliAddInterruptRemapping;
      off_140C01BA8[0] = (__int64 (__fastcall *)())HaliRemoveInterruptRemapping;
      off_140C01BD8[0] = (__int64 (__fastcall *)())HalpInterruptGetIdentifiers;
      off_140C01C18[0] = (__int64 (__fastcall *)())xHalQueryProcessorRestartEntryPoint;
      off_140C01C78[0] = (__int64 (__fastcall *)())HalpInterruptSetDestination;
      off_140C01D48[0] = (__int64 (__fastcall *)())HalpConnectThermalInterrupt;
      off_140C01D88[0] = (__int64 (__fastcall *)())HalpPreprocessNmi;
    }
    return v4;
  }
  if ( (_DWORD)a1 == 19 )
    goto LABEL_17;
  if ( (_DWORD)a1 != 17 )
  {
    if ( (_DWORD)a1 == 21 )
    {
      if ( HalpInterruptLastProblem && HalpInterruptLastProblem != 14 )
        KeBugCheckEx(
          0x5Cu,
          0x203uLL,
          *(int *)(HalpInterruptController + 240),
          HalpInterruptController,
          HalpInterruptLastProblem);
    }
    else if ( (_DWORD)a1 == 29 )
    {
      return (unsigned int)HalpInterruptInitPowerManagement();
    }
    return v4;
  }
  HalpPreAllocateKInterrupts();
  HalpInitializeInterruptsBspLate();
  result = HalpInterruptBuildGlobalStartupStub();
  v4 = result;
  if ( (int)result >= 0 )
  {
LABEL_17:
    if ( (unsigned int)HalpInterruptModel() == 1 )
      HalpInterruptEnableNmi();
    if ( (HalpFeatureBits & 1) != 0 )
      HalpInterruptEnablePerformanceEvents(0LL);
    return v4;
  }
  return result;
}
