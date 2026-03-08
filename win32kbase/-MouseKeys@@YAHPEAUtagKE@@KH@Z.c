/*
 * XREFs of ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01E4460
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C0240100 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionPostAccessibilityShortcutNotification @ 0x1C02416C0 (ApiSetEditionPostAccessibilityShortcutNotification.c)
 *     ApiSetEditionPostRitSound @ 0x1C0241DC8 (ApiSetEditionPostRitSound.c)
 */

__int64 __fastcall MouseKeys(struct tagKE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v4; // di
  int v5; // r15d
  int v6; // r13d
  __int64 v7; // rdx
  __int16 v9; // bp
  unsigned int v10; // ebx
  int v11; // r14d
  __int64 i; // rsi
  int v13; // eax

  v4 = *((unsigned __int8 *)a1 + 2);
  v5 = (unsigned __int8)gLockBits | (unsigned __int8)gLatchBits | (unsigned __int8)gPhysModifierState;
  v6 = *((_WORD *)a1 + 1) & 0x8000;
  if ( (dword_1C02D1574 & 1) == 0 )
  {
    if ( (dword_1C02D1574 & 4) != 0
      && v4 == *(_WORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 13768)
      && !v6
      && v5 == 17 )
    {
      gMKPreviousVk = v4;
      if ( (dword_1C02D1574 & 0x10) != 0 )
        ApiSetEditionPostRitSound(0LL, v7, 0LL);
      ApiSetEditionPostAccessibilityShortcutNotification(3LL);
      return 0LL;
    }
    return 1LL;
  }
  v9 = *((unsigned __int8 *)a1 + 2);
  v10 = 0;
  v11 = 0;
  for ( i = 0LL; i < 32; i += 2LL )
  {
    a1 = *(struct tagKE **)(SGDGetUserSessionState(a1, a2, a3, a4) + 13872);
    if ( v9 == *(_WORD *)((char *)a1 + i) )
      break;
    ++v11;
  }
  if ( v11 == 16 || !gbMKMouseMode && v4 != *(_WORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 13768) )
    return 1LL;
  if ( (_BYTE)v4 == 46 )
  {
    LOBYTE(a1) = (v5 & 0x30) != 0;
    if ( ((unsigned __int8)a1 & ((v5 & 0xC) != 0)) != 0 )
      return 1LL;
  }
  if ( v6 )
  {
    if ( gMKPreviousVk == (_BYTE)v4 )
    {
      a2 = gtmridMKMoveCursor;
      if ( gtmridMKMoveCursor )
      {
        ApiSetEditionKillAccessibilityTimer(a1, gtmridMKMoveCursor);
        gtmridMKMoveCursor = 0LL;
      }
      gdwPUDFlags &= ~0x2000u;
      gMKPreviousVk = 0;
    }
    LOBYTE(v10) = v4 == *(_WORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 13768);
    return v10;
  }
  else
  {
    if ( gMKPreviousVk == (_BYTE)v4 )
      v13 = gdwPUDFlags | 0x2000;
    else
      v13 = gdwPUDFlags & 0xFFFFDFFF;
    gdwPUDFlags = v13;
    if ( (v13 & 0x2000) == 0 && gtmridMKMoveCursor )
    {
      ApiSetEditionKillAccessibilityTimer(0x2000LL, gtmridMKMoveCursor);
      gtmridMKMoveCursor = 0LL;
    }
    gMKPreviousVk = v4;
    return off_1C0281C80[v11](word_1C02A4BE0[v11]);
  }
}
