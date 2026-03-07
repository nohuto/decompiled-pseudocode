_BOOL8 __fastcall FilterKeys(struct tagKE *a1, __int64 a2, int a3)
{
  char v4; // di
  int v5; // esi
  unsigned int v6; // r15d
  __int64 v8; // rcx
  __int128 v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // rdx

  v4 = *((_BYTE *)a1 + 2);
  v5 = *((_WORD *)a1 + 1) & 0x8000;
  v6 = a2;
  if ( v4 == -95 )
  {
    if ( (*((_WORD *)a1 + 1) & 0x8000) != 0 )
    {
      a2 = gtmridFKActivation;
      if ( gtmridFKActivation )
      {
        ((void (*)(void))ApiSetEditionKillAccessibilityTimer)();
        gtmridFKActivation = 0LL;
      }
      gFilterKeysState = 0;
    }
    else if ( gPhysModifierState == 2 && (dword_1C02D159C & 4) != 0 && !gtmridFKActivation && gFilterKeysState != 8 )
    {
      gFilterKeysState = 1;
      gtmridFKActivation = ApiSetEditionSetAccessibilityTimer(0LL, 4000LL, FKActivationTimer);
    }
  }
  else
  {
    a2 = gtmridFKActivation;
    if ( gtmridFKActivation )
    {
      gFilterKeysState = 0;
      ((void (*)(void))ApiSetEditionKillAccessibilityTimer)();
      gtmridFKActivation = 0LL;
    }
  }
  if ( (dword_1C02D159C & 1) == 0 )
    return 1LL;
  if ( !v5 )
  {
    if ( v4 != gLastVkDown )
    {
      gLastVkDown = v4;
      if ( gBounceVk )
      {
        if ( v4 == gBounceVk )
        {
          gdwPUDFlags |= 0x400u;
          return 0LL;
        }
        if ( gtmridFKResponse )
        {
          ApiSetEditionKillAccessibilityTimer(a1, gtmridFKResponse);
          gtmridFKResponse = 0LL;
        }
        gBounceVk = 0;
      }
      gdwPUDFlags &= ~0x400u;
      if ( (dword_1C02D159C & 0x40) != 0 )
        ApiSetEditionPostRitSound(4LL, a2, 0LL);
      if ( gtmridFKAcceptanceDelay )
      {
        ApiSetEditionKillAccessibilityTimer(a1, gtmridFKAcceptanceDelay);
        gtmridFKAcceptanceDelay = 0LL;
      }
      if ( gtmridFKResponse )
      {
        ApiSetEditionKillAccessibilityTimer(a1, gtmridFKResponse);
        gtmridFKResponse = 0LL;
      }
      v10 = *(_OWORD *)a1;
      gFKExtraInformation = v6;
      gFKNextProcIndex = a3;
      gFKKeyEvent = v10;
      xmmword_1C02D81B0 = *((_OWORD *)a1 + 1);
      if ( !Value )
      {
        v12 = dword_1C02D15A8;
        if ( dword_1C02D15A8 )
        {
          if ( dword_1C02D15A4 )
            v12 = dword_1C02D15A4;
          gtmridFKResponse = ApiSetEditionSetAccessibilityTimer(0LL, v12, xxxFKRepeatRateTimer);
        }
        return 1LL;
      }
      v11 = ApiSetEditionSetAccessibilityTimer(0LL, Value, xxxFKAcceptanceDelayTimer);
      gdwPUDFlags &= ~0x800u;
      gtmridFKAcceptanceDelay = v11;
    }
    return 0LL;
  }
  if ( v4 == gLastVkDown )
  {
    ApiSetEditionKillAccessibilityTimer(a1, gtmridFKResponse);
    gtmridFKResponse = 0LL;
    gLastVkDown = 0;
    if ( gtmridFKAcceptanceDelay )
    {
      ApiSetEditionKillAccessibilityTimer(v8, gtmridFKAcceptanceDelay);
      gtmridFKAcceptanceDelay = 0LL;
      if ( (gdwPUDFlags & 0x800) == 0 )
        return 0LL;
      gdwPUDFlags &= ~0x800u;
    }
    if ( !dword_1C02D15AC )
      return 1LL;
    gBounceVk = v4;
    gtmridFKResponse = ApiSetEditionSetAccessibilityTimer(0LL, dword_1C02D15AC, FKBounceKeyTimer);
    return (gdwPUDFlags & 0x400) == 0;
  }
  return 1LL;
}
