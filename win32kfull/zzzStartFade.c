/*
 * XREFs of zzzStartFade @ 0x1C01BE6C0
 * Callers:
 *     xxxTooltipWndProc @ 0x1C00FA000 (xxxTooltipWndProc.c)
 *     zzzStartSonar @ 0x1C01BE79C (zzzStartSonar.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0218A2C (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C0006384 (_SetSystemTimer.c)
 *     zzzShowFade @ 0x1C01BE658 (zzzShowFade.c)
 */

__int64 zzzStartFade()
{
  GreSetDCOwnerEx(*(_QWORD *)&gfade[2], 0LL, 0LL, 1LL);
  GreSetBitmapOwner(*(_QWORD *)&gfade[4], 0LL);
  zzzShowFade();
  gfade[11] = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
            - (40 * gfade[10] + 255) / 0xFF;
  return SetSystemTimer(gTermIO[1], 65526, (gfade[12] & 0x80u) != 0 ? 50 : 10, (int)xxxSystemTimerProc, 1);
}
