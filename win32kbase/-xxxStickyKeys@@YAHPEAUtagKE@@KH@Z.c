_BOOL8 __fastcall xxxStickyKeys(struct tagKE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v4; // si
  __int64 v6; // r15
  __int64 v7; // rcx
  int v8; // esi
  signed int v9; // r14d
  char v10; // bp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rdx
  int v36; // ecx
  __int64 v37; // rdx
  char v38; // di
  char v39; // si
  char v40; // bp
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  bool v50; // zf

  v4 = *((_WORD *)a1 + 1);
  v6 = (unsigned int)a2;
  v7 = (unsigned __int8)gCurrentModifierBit;
  v8 = v4 & 0x8000;
  v9 = a3;
  v10 = 0;
  if ( !gCurrentModifierBit )
  {
    *(_BYTE *)(SGDGetUserSessionState(0LL, a2, a3, a4) + 13832) = 0;
    *(_BYTE *)(SGDGetUserSessionState(v47, v46, v48, v49) + 13833) = 0;
    if ( (dword_1C02D1594 & 1) != 0 )
    {
      if ( !gPhysModifierState || v8 )
      {
        if ( (unsigned int)AccessProceduresStream(a1, v6, v9) )
          xxxProcessKeyEvent((unsigned __int8 *)a1, v6, 0, 0, 0LL, 0LL);
        xxxUpdateModifierState((unsigned __int8)gLockBits, v9);
        v50 = gLatchBits == 0;
        gLatchBits = 0;
        if ( !v50 )
          ApiSetEditionPostAccessibilitySettingChangedEvent(1LL);
        return 0LL;
      }
      xxxTwoKeysDown(v9);
    }
    return 1LL;
  }
  if ( !v8 && ((unsigned __int8)gCurrentModifierBit & (unsigned __int8)gPrevModifierState) != 0 )
  {
    gPrevModifierState = gPhysModifierState;
    return 1LL;
  }
  LOBYTE(a2) = gPhysModifierState;
  gPrevModifierState = gPhysModifierState;
  if ( *((_BYTE *)a1 + 2) != 0xA0
    || (v7 = ~(unsigned __int8)gCurrentModifierBit,
        ((unsigned __int8)~gCurrentModifierBit & (unsigned __int8)gPhysModifierState) != 0) )
  {
    *(_BYTE *)(SGDGetUserSessionState(v7, a2, a3, a4) + 13832) = 0;
  }
  else
  {
    SGDGetUserSessionState(v7, a2, a3, a4);
    v16 = SGDGetUserSessionState(v13, v12, v14, v15);
    ++*(_BYTE *)(v16 + 13832);
  }
  if ( *((_BYTE *)a1 + 2) != 0xA1
    || (v18 = ~(unsigned __int8)gCurrentModifierBit,
        ((unsigned __int8)~gCurrentModifierBit & (unsigned __int8)gPhysModifierState) != 0) )
  {
    *(_BYTE *)(SGDGetUserSessionState(v18, v17, v19, v20) + 13833) = 0;
  }
  else
  {
    SGDGetUserSessionState(v18, v17, v19, v20);
    v25 = SGDGetUserSessionState(v22, v21, v23, v24);
    ++*(_BYTE *)(v25 + 13833);
  }
  if ( *(_BYTE *)(SGDGetUserSessionState(v27, v26, v28, v29) + 13832) == 10
    || *(_BYTE *)(SGDGetUserSessionState(v31, v30, v32, v33) + 13833) == 10 )
  {
    if ( (dword_1C02D1594 & 4) != 0 )
    {
      if ( (dword_1C02D1594 & 1) != 0 )
      {
        xxxTurnOffStickyKeys();
        if ( (dword_1C02D1594 & 0x10) != 0 )
          ApiSetEditionPostRitSound(1LL, v30, 0LL);
      }
      else
      {
        if ( (dword_1C02D1594 & 0x10) != 0 )
          ApiSetEditionPostRitSound(0LL, v30, 0LL);
        ApiSetEditionPostAccessibilityShortcutNotification(1LL);
      }
    }
    *(_BYTE *)(SGDGetUserSessionState(v31, v30, v32, v33) + 13832) = 0;
    *(_BYTE *)(SGDGetUserSessionState(v43, v42, v44, v45) + 13833) = 0;
    return 1LL;
  }
  if ( (dword_1C02D1594 & 1) == 0 )
    return 1LL;
  if ( !v8 )
  {
    v34 = (unsigned __int8)gCurrentModifierBit;
    if ( gPhysModifierState == gCurrentModifierBit )
    {
      switch ( *((_WORD *)a1 + 1) )
      {
        case 0x5B:
        case 0x5C:
          v10 = -64;
          break;
        case 0xA0:
        case 0xA1:
          v10 = 3;
          break;
        case 0xA2:
        case 0xA3:
          v10 = 12;
          break;
        default:
          if ( (unsigned int)*((unsigned __int16 *)a1 + 1) - 164 <= 1 )
            v10 = 48;
          break;
      }
      v38 = gLockBits;
      v39 = gLatchBits;
      if ( ((unsigned __int8)gLockBits & (unsigned __int8)v10) != 0 )
      {
        v40 = ~v10;
        v38 = v40 & gLockBits;
        v39 = v40 & gLatchBits;
        xxxUpdateModifierState(
          (unsigned __int8)gCurrentModifierBit | (unsigned __int8)(v40 & gLockBits) | (unsigned __int8)(v40 & gLatchBits),
          v9);
      }
      else
      {
        if ( ((unsigned __int8)gCurrentModifierBit & (unsigned __int8)gLockBits) == 0 )
          v39 = gCurrentModifierBit ^ gLatchBits;
        if ( (dword_1C02D1594 & 0x80u) != 0
          && ((unsigned __int8)(gLockBits | gLatchBits) & (unsigned __int8)gCurrentModifierBit) != 0 )
        {
          v38 = gCurrentModifierBit ^ gLockBits;
        }
      }
      if ( gLatchBits != v39 || (v41 = 0, gLockBits != v38) )
        v41 = 1;
      gLatchBits = v39;
      gLockBits = v38;
      if ( v41 )
        ApiSetEditionPostAccessibilitySettingChangedEvent(1LL);
      if ( (dword_1C02D1594 & 0x40) != 0 )
      {
        if ( ((unsigned __int8)gLockBits & (unsigned __int8)gCurrentModifierBit) == 0 )
          ApiSetEditionPostRitSound(2LL, v34, 0LL);
        if ( ((unsigned __int8)(gLatchBits | gLockBits) & (unsigned __int8)gCurrentModifierBit) != 0 )
          ApiSetEditionPostRitSound(3LL, v34, 0LL);
      }
      return ((unsigned __int8)gLatchBits & (unsigned __int8)gCurrentModifierBit) != 0;
    }
    if ( (unsigned int)xxxTwoKeysDown(v9) )
    {
      if ( gLockBits || (v36 = 0, gLatchBits != gPhysModifierState) )
        v36 = 1;
      gLatchBits = gPhysModifierState;
      gLockBits = 0;
      if ( v36 )
        ApiSetEditionPostAccessibilitySettingChangedEvent(1LL);
      if ( (dword_1C02D1594 & 0x40) != 0 )
      {
        ApiSetEditionPostRitSound(2LL, v35, 0LL);
        ApiSetEditionPostRitSound(3LL, v37, 0LL);
      }
      return 0LL;
    }
    return 1LL;
  }
  return ((unsigned __int8)(gLatchBits | gLockBits) & (unsigned __int8)gCurrentModifierBit) == 0;
}
