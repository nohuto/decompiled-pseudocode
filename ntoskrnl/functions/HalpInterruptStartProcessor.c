__int64 __fastcall HalpInterruptStartProcessor(unsigned int a1, int a2, char a3, const void *a4)
{
  unsigned int v4; // edi
  int NextProcessorLocalId; // ecx
  char started; // bp
  _BYTE *v10; // r15
  unsigned int v11; // ebx
  unsigned int v12; // edi
  bool v13; // si
  char v14; // r8
  __int64 v15; // rdx
  int v16; // eax
  __int16 v18; // [rsp+60h] [rbp-8h]
  int v19; // [rsp+78h] [rbp+10h] BYREF

  v19 = a2;
  v4 = 0;
  if ( HalpInterruptProcessorCap && HalpInterruptProcessorsStarted >= (unsigned int)HalpInterruptProcessorCap )
    return 2LL;
  NextProcessorLocalId = HalpInterruptGetNextProcessorLocalId(a3, &v19);
  if ( HalpHiberInProgress || (a3 & 2) != 0 )
  {
    HalpInterruptProcessorRestarting = 1;
    if ( NextProcessorLocalId == -1073740024 )
      goto LABEL_6;
  }
  else
  {
    HalpInterruptProcessorRestarting = 0;
  }
  if ( NextProcessorLocalId >= 0 )
  {
LABEL_6:
    HalpInterruptProcessorHidden = (a3 & 4) != 0;
    started = HalpHvVpStartEnabled();
    v10 = HalpInterruptGlobalStartupBlock;
    v11 = HalpInterruptGlobalStartupCodePhysical;
    if ( !HalpTiledMemoryMapActive || (a3 & 3) == 0 || (int)HalpMmUpdateTiledMemoryMapTargetStub() >= 0 )
    {
      v12 = v19;
      if ( a1 == -1 || (int)HalpSetProcessorStateByNtIndex(a1, v19) >= 0 )
      {
        v13 = 0;
        if ( !started )
        {
          _disable();
          v13 = (v18 & 0x200) != 0;
        }
        v14 = HalpInterruptProcessorHidden;
        v10[4] = 0;
        if ( (int)HalpInterruptSetProcessorStartContext(a1, a4, v14) >= 0 )
        {
          if ( started )
          {
            v16 = HalpHvStartProcessor(v12, v15, (__int64)v10);
          }
          else
          {
            v16 = -1073741823;
            if ( !*(_QWORD *)(HalpInterruptController + 128) )
              goto LABEL_31;
            v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, _QWORD))(HalpInterruptController + 128))(
                    *(_QWORD *)(HalpInterruptController + 16),
                    v12,
                    v10,
                    v11);
          }
          if ( v16 >= 0 )
          {
            v4 = HalpInterruptWaitForProcessorStartUp(v10 + 4, started);
            if ( v4 != 4 )
              HalpInterruptSetProblemEx(
                HalpInterruptController,
                14,
                0,
                (__int64)"minkernel\\hals\\lib\\interrupts\\common\\start.c",
                0x564u);
            goto LABEL_19;
          }
LABEL_31:
          v4 = 2;
          HalpInterruptSetProblemEx(
            HalpInterruptController,
            13,
            v16,
            (__int64)"minkernel\\hals\\lib\\interrupts\\common\\start.c",
            0x56Au);
LABEL_19:
          if ( !started && v13 )
            _enable();
          goto LABEL_22;
        }
      }
      v4 = 2;
    }
LABEL_22:
    HalpInterruptProcessorHidden = 0;
    return v4;
  }
  return 2LL;
}
