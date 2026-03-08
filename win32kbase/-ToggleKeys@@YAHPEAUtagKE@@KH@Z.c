/*
 * XREFs of ?ToggleKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01E46D0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C0240100 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionPostRitSound @ 0x1C0241DC8 (ApiSetEditionPostRitSound.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C0242AAC (ApiSetEditionSetAccessibilityTimer.c)
 */

__int64 __fastcall ToggleKeys(struct tagKE *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  int v4; // r15d
  int v5; // edi
  unsigned int v6; // r12d
  char v8; // si
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx

  v3 = *((unsigned __int8 *)a1 + 2);
  v4 = a3;
  v5 = *((_WORD *)a1 + 1) & 0x8000;
  v6 = a2;
  v8 = *((_BYTE *)a1 + 2);
  v9 = (unsigned int)(v3 - 20);
  if ( (_DWORD)v3 == 20 )
    goto LABEL_16;
  v9 = (unsigned int)(v3 - 144);
  if ( (_DWORD)v3 == 144 )
    goto LABEL_8;
  if ( (_DWORD)v3 == 145 )
  {
LABEL_16:
    if ( (dword_1C02D155C & 1) != 0 && !v5 )
    {
      v10 = SGDGetUserSessionState(a1, a2, a3, v9);
      v13 = v8 & 3;
      v14 = (unsigned int)(1 << (2 * v13));
      if ( ((unsigned __int8)v14 & *(_BYTE *)((v3 >> 2) + v10 + 13992)) == 0 )
      {
        v15 = SGDGetUserSessionState((unsigned int)(2 * v13), v14, v11, v12);
        v16 = (unsigned int)(1 << (2 * v13 + 1));
        v17 = 3LL;
        if ( ((unsigned __int8)v16 & *(_BYTE *)(v15 + (v3 >> 2) + 13992)) != 0 )
          v17 = 2LL;
        ApiSetEditionPostRitSound(v17, v16, 0LL);
      }
    }
    return 1LL;
  }
  if ( (_WORD)v3 != *(_WORD *)(SGDGetUserSessionState(a1, a2, a3, v9) + 13768) )
  {
    if ( (_WORD)v3 != *(_WORD *)(SGDGetUserSessionState(a1, a2, a3, v9) + 13770) )
    {
      if ( gtmridToggleKeys )
        ApiSetEditionKillAccessibilityTimer(a1, gtmridToggleKeys);
      return 1LL;
    }
    goto LABEL_16;
  }
LABEL_8:
  if ( ((unsigned __int8)gLockBits | (unsigned __int8)(gLatchBits | gPhysModifierState)) != 17
    || (dword_1C02D1574 & 4) == 0 )
  {
    if ( v5 )
    {
      ApiSetEditionKillAccessibilityTimer(a1, gtmridToggleKeys);
      gtmridToggleKeys = 0LL;
      gTKExtraInformation = 0;
      gTKScanCode = 0;
    }
    else if ( !gtmridToggleKeys && (dword_1C02D155C & 4) != 0 )
    {
      gTKScanCode = *(_BYTE *)a1;
      gTKExtraInformation = v6;
      gTKNextProcIndex = v4;
      gtmridToggleKeys = ApiSetEditionSetAccessibilityTimer(0LL, 5000LL, xxxToggleKeysTimer);
    }
    if ( (dword_1C02D1574 & 1) == 0 )
      goto LABEL_16;
  }
  return 1LL;
}
