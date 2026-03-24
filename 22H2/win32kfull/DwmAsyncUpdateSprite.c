/*
 * XREFs of DwmAsyncUpdateSprite @ 0x1C0012AC0
 * Callers:
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C00147EC (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C00907A0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     GreHintSpriteShape @ 0x1C00BD828 (GreHintSpriteShape.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00EA26C (GreTransferSpriteStateToDwmState.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C026D214 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 *     GreProtectSpriteContent @ 0x1C026F888 (GreProtectSpriteContent.c)
 *     GreWindowResizeStarted @ 0x1C02700B0 (GreWindowResizeStarted.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall DwmAsyncUpdateSprite(
        PVOID Object,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int128 *a6,
        unsigned int a7,
        unsigned int a8,
        int a9,
        int a10,
        __int64 a11)
{
  unsigned int v14; // r15d
  __int64 v15; // r8
  int v16; // eax
  __int128 v17; // xmm0
  __int64 v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  unsigned int v27; // r8d
  _OWORD *v28; // rdx
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  bool v36; // cc
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  int v41; // eax
  _QWORD v43[30]; // [rsp+30h] [rbp-D0h] BYREF

  v14 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(v43, 0, 0xECuLL);
    LODWORD(v43[0]) = 15466692;
    WORD2(v43[0]) = 0x8000;
    v43[26] = a3;
    LODWORD(v43[5]) = 1073741830;
    *(_QWORD *)((char *)&v43[5] + 4) = a2;
    HIDWORD(v43[6]) = a4 & 0xFFFFFEFF;
    if ( a5 )
    {
      v16 = *(_DWORD *)(a5 + 8);
      *(_QWORD *)((char *)&v43[24] + 4) = *(_QWORD *)a5;
      HIDWORD(v43[25]) = v16;
    }
    if ( a6 )
    {
      v17 = *a6;
      v18 = *((_QWORD *)a6 + 16);
      v19 = a6[1];
      LODWORD(v43[7]) = 1;
      *(_OWORD *)((char *)&v43[7] + 4) = v17;
      v20 = a6[2];
      *(_OWORD *)((char *)&v43[9] + 4) = v19;
      v21 = a6[3];
      *(_OWORD *)((char *)&v43[11] + 4) = v20;
      v22 = a6[4];
      *(_OWORD *)((char *)&v43[13] + 4) = v21;
      v23 = a6[5];
      *(_OWORD *)((char *)&v43[15] + 4) = v22;
      v24 = a6[6];
      *(_OWORD *)((char *)&v43[17] + 4) = v23;
      v25 = a6[7];
      *(_OWORD *)((char *)&v43[19] + 4) = v24;
      *(_OWORD *)((char *)&v43[21] + 4) = v25;
      *(_QWORD *)((char *)&v43[23] + 4) = v18;
    }
    v43[27] = __PAIR64__(a8, a7);
    LODWORD(v43[28]) = a9;
    *(_QWORD *)((char *)&v43[28] + 4) = a11;
    if ( a10 && (v15 = g_cDelayedUpdateSpriteNotifications, g_cDelayedUpdateSpriteNotifications < 0x14) )
    {
      v28 = (_OWORD *)((char *)&g_rgDelayedUpdateSpriteNotifications + 196 * g_cDelayedUpdateSpriteNotifications++);
      v27 = g_cDelayedUpdateSpriteNotifications;
      v29 = *(_OWORD *)&v43[7];
      *v28 = *(_OWORD *)&v43[5];
      v30 = *(_OWORD *)&v43[9];
      v28[1] = v29;
      v31 = *(_OWORD *)&v43[11];
      v28[2] = v30;
      v32 = *(_OWORD *)&v43[13];
      v28[3] = v31;
      v33 = *(_OWORD *)&v43[15];
      v28[4] = v32;
      v34 = *(_OWORD *)&v43[17];
      v28[5] = v33;
      v35 = *(_OWORD *)&v43[19];
      v28[6] = v34;
      v28 += 8;
      v36 = v27 <= g_cMaximumSeenDelayedUpdateSpriteNotifications;
      v37 = *(_OWORD *)&v43[21];
      *(v28 - 1) = v35;
      v38 = *(_OWORD *)&v43[23];
      *v28 = v37;
      v39 = *(_OWORD *)&v43[25];
      v28[1] = v38;
      v40 = *(_OWORD *)&v43[27];
      v41 = v43[29];
      v28[2] = v39;
      v28[3] = v40;
      *((_DWORD *)v28 + 16) = v41;
      if ( !v36 )
        g_cMaximumSeenDelayedUpdateSpriteNotifications = v27;
    }
    else
    {
      EtwUpdateEvent(a2, 1073741830LL, v15, 128LL);
      v14 = LpcRequestPort(Object, v43);
    }
    ObfDereferenceObject(Object);
  }
  return v14;
}
