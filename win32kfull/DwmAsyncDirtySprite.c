/*
 * XREFs of DwmAsyncDirtySprite @ 0x1C001F148
 * Callers:
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C001E500 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1C004EEA0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C0268C70 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x1C0028164 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall DwmAsyncDirtySprite(PVOID Object, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-48h] BYREF
  __int16 v11; // [rsp+24h] [rbp-44h]
  int v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+4Ch] [rbp-1Ch]
  __int64 v14; // [rsp+50h] [rbp-18h]
  __int64 v15; // [rsp+58h] [rbp-10h]

  v8 = -1073741823;
  IncrementDWMWindowUniqueness();
  if ( Object )
  {
    memset_0(&v10, 0, 0x40uLL);
    v10 = 4194328;
    v11 = 0x8000;
    v15 = a5;
    v12 = 1073741828;
    v14 = a2;
    v13 = a4;
    EtwUpdateEvent(a2, 1073741828LL);
    v8 = LpcRequestPort(Object, &v10);
    ObfDereferenceObject(Object);
  }
  return v8;
}
