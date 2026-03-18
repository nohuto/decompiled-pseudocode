/*
 * XREFs of zzzAnimateFade @ 0x1C01E2D24
 * Callers:
 *     xxxSystemTimerProc @ 0x1C010B7C0 (xxxSystemTimerProc.c)
 *     zzzStartSonar @ 0x1C01E2F90 (zzzStartSonar.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01E1D94 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C01E22D4 (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     StopFade @ 0x1C01E26E0 (StopFade.c)
 */

__int64 zzzAnimateFade()
{
  unsigned int v0; // r9d
  unsigned int v1; // ecx
  int v2; // edi
  unsigned int v3; // eax
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  bool v7; // zf
  __int64 result; // rax
  char v9; // [rsp+40h] [rbp+8h] BYREF
  struct _BLENDFUNCTION v10; // [rsp+48h] [rbp+10h] BYREF

  v0 = gfade[5];
  v1 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - HIDWORD(gfade[5]);
  if ( v1 > v0 )
    return StopFade();
  v2 = gfade[6] & 1;
  if ( v2 )
    v3 = 255 * v1;
  else
    v3 = 255 * (v0 - v1);
  *(_WORD *)&v10.BlendOp = 0;
  v10.AlphaFormat = 0;
  v4 = v3 / v0;
  v10.SourceConstantAlpha = v3 / v0;
  if ( (LODWORD(gfade[6]) & 0x80u) == 0 )
  {
    zzzUpdateFade(0LL, 0LL, 0LL, 0LL, &v10);
  }
  else
  {
    DrawSonar((HDC)gfade[1]);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v9);
    zzzUpdateFade((struct tagPOINT *)&gfade[3], (struct tagSIZE *)&gfade[4], (HDC)gfade[1], gZero, 0LL);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v9, v5, v6);
    giSonarRadius -= 20;
  }
  if ( v2 )
    v7 = (_BYTE)v4 == 0xFF;
  else
    v7 = (_BYTE)v4 == 0;
  if ( v7 || (result = gfade[0], (LODWORD(gfade[6]) & 0x80u) != 0) && giSonarRadius < 0 )
  {
    LODWORD(gfade[6]) |= 2u;
    return StopFade();
  }
  return result;
}
