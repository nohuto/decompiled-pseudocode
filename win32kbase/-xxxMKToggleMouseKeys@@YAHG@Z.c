_BOOL8 __fastcall xxxMKToggleMouseKeys(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  BOOL v4; // esi
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int16 v16; // bx

  v4 = 1;
  if ( (gdwPUDFlags & 0x2000) == 0 )
  {
    if ( ((unsigned __int8)gLockBits | (unsigned __int8)(gLatchBits | gPhysModifierState)) == 17 )
    {
      if ( (dword_1C02D1574 & 4) != 0 )
      {
        v4 = gbMKMouseMode != 0;
        TurnOffMouseKeys();
      }
    }
    else
    {
      v5 = SGDGetUserSessionState(a1, a2, a3, a4);
      v10 = (unsigned __int64)*(unsigned __int8 *)(SGDGetUserSessionState(v7, v6, v8, v9) + 13768) >> 2;
      v15 = (unsigned int)(1 << (2 * (*(_WORD *)(SGDGetUserSessionState(v12, v11, v13, v14) + 13768) & 3) + 1));
      if ( (((unsigned int)dword_1C02D1574 >> 7) & 1) == (((unsigned __int8)v15 & *(_BYTE *)(v5 + v10 + 13992)) != 0) )
      {
        gbMKMouseMode = 1;
        ApiSetEditionPostRitSound(3LL, v15, 0LL);
      }
      else
      {
        gbMKMouseMode = 0;
        ApiSetEditionPostRitSound(2LL, v15, 0LL);
        v16 = gwMKCurrentButton;
        gwMKCurrentButton = 3;
        xxxMKButtonSetState(1);
        gwMKCurrentButton = v16;
      }
      ApiSetEditionPostAccessibilitySettingChangedEvent(3LL);
    }
  }
  return v4;
}
