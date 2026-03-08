/*
 * XREFs of zzzAnimateFade @ 0x1C01BE518
 * Callers:
 *     xxxSystemTimerProc @ 0x1C0005A50 (xxxSystemTimerProc.c)
 *     zzzStartSonar @ 0x1C01BE79C (zzzStartSonar.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01BD6A4 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C01BDC84 (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     StopFade @ 0x1C01BDEF0 (StopFade.c)
 */

__int64 zzzAnimateFade()
{
  unsigned int v0; // r9d
  unsigned int v1; // ecx
  unsigned int v2; // edi
  unsigned int v3; // eax
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  bool v7; // zf
  __int64 result; // rax
  __int64 v9; // rcx
  char v10; // [rsp+40h] [rbp+8h] BYREF
  struct _BLENDFUNCTION v11; // [rsp+48h] [rbp+10h] BYREF

  v0 = gfade[10];
  v1 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - gfade[11];
  if ( v1 > v0 )
    return StopFade();
  v2 = gfade[12] & 1;
  if ( v2 )
    v3 = 255 * v1;
  else
    v3 = 255 * (v0 - v1);
  *(_WORD *)&v11.BlendOp = 0;
  v11.AlphaFormat = 0;
  v4 = v3 / v0;
  v11.SourceConstantAlpha = v3 / v0;
  if ( (gfade[12] & 0x80u) == 0 )
  {
    zzzUpdateFade(0LL, 0LL, 0LL, 0LL, &v11);
  }
  else
  {
    DrawSonar(*(HDC *)&gfade[2]);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v10);
    zzzUpdateFade((struct tagPOINT *)&gfade[6], (struct tagSIZE *)&gfade[8], *(HDC *)&gfade[2], gZero, 0LL);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v10);
    v6 = SGDGetUserSessionState(v5);
    *(_DWORD *)(v6 + 15964) -= 20;
  }
  if ( v2 )
    v7 = (_BYTE)v4 == 0xFF;
  else
    v7 = (_BYTE)v4 == 0;
  if ( v7
    || (result = *(_QWORD *)gfade, v9 = gfade[12], (v9 & 0x80u) != 0LL)
    && (result = SGDGetUserSessionState(v9), *(int *)(result + 15964) < 0) )
  {
    gfade[12] |= 2u;
    return StopFade();
  }
  return result;
}
