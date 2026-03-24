/*
 * XREFs of PopInitSIdle @ 0x14078C9A8
 * Callers:
 *     PopDispatchFullWake @ 0x14077A090 (PopDispatchFullWake.c)
 *     PopBatteryApplyCompositeState @ 0x14077FB1C (PopBatteryApplyCompositeState.c)
 *     PopSleepPowerSettingCallback @ 0x14079C460 (PopSleepPowerSettingCallback.c)
 *     PopApplyPolicy @ 0x14079CC2C (PopApplyPolicy.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409918D8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopResetIdleTime @ 0x140329C20 (PopResetIdleTime.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140407830 (RtlCompareMemory.c)
 *     memset @ 0x140413800 (memset.c)
 *     PopIsDozeSupported @ 0x1406F4118 (PopIsDozeSupported.c)
 *     PopFilterCapabilities @ 0x1406F4274 (PopFilterCapabilities.c)
 *     PopTraceSystemIdleTimeoutInitialization @ 0x14078CB78 (PopTraceSystemIdleTimeoutInitialization.c)
 *     PopUpdateSystemIdleContext @ 0x1408F12F4 (PopUpdateSystemIdleContext.c)
 */

__int64 __fastcall PopInitSIdle(unsigned int a1)
{
  char v2; // bl
  int v3; // edi
  int v4; // r9d
  int v5; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // r9
  char v11; // [rsp+20h] [rbp-99h]
  _DWORD v12[44]; // [rsp+40h] [rbp-79h] BYREF

  memset(&v12[20], 0, 0x60uLL);
  memset(v12, 0, 0x4CuLL);
  if ( PopPlatformAoAc )
    return PopUpdateSystemIdleContext(a1);
  v2 = 1;
  v12[23] = -1;
  v12[26] = 1;
  v3 = 5;
  v12[27] = *((_DWORD *)PopPolicy + 14);
  v12[28] = 2;
  if ( (PopFullWake & 3) == 0 && dword_140C23360 && (PopSimulate & 0x1000000) == 0 )
  {
    v3 = 4;
    if ( (unsigned int)(qword_140C23A44 - 2) <= 1 )
    {
      v12[28] = HIDWORD(qword_140C23A44);
      v12[25] = qword_140C23A44;
    }
    else
    {
      v12[25] = 2;
      v12[28] = 4;
    }
    v12[27] = 0;
    v12[23] = dword_140C23360;
    goto LABEL_5;
  }
  PopFilterCapabilities(&PopCapabilities, (__int64)v12);
  if ( !*((_DWORD *)PopPolicy + 15) )
  {
    if ( !*((_DWORD *)PopPolicy + 22) )
      goto LABEL_5;
    goto LABEL_32;
  }
  if ( LOBYTE(v12[5]) )
  {
    v12[25] = 2;
    v3 = 1;
    v9 = *((_DWORD *)PopPolicy + 15);
    v12[28] = 1;
  }
  else
  {
    if ( !*(_WORD *)((char *)v12 + 3) && !BYTE1(v12[1]) )
    {
LABEL_32:
      if ( !PopIsDozeSupported((__int64)v12) || !*(_DWORD *)(v10 + 88) )
        goto LABEL_5;
      v3 = 3;
      v12[25] = 3;
      v9 = *(_DWORD *)(v10 + 88);
      v12[28] = 5;
      goto LABEL_35;
    }
    v12[25] = 2;
    v3 = 2;
    v9 = *((_DWORD *)PopPolicy + 15);
    v12[28] = 4;
  }
LABEL_35:
  v12[23] = v9;
LABEL_5:
  if ( RtlCompareMemory(&qword_140C23974, &v12[25], 0xCuLL) == 12
    && (v4 = dword_140C23980, dword_140C23980 == v12[28])
    && (v5 = dword_140C2396C, dword_140C2396C == v12[23]) )
  {
    v2 = 0;
  }
  else
  {
    PopResetIdleTime();
    v4 = v12[28];
    v5 = v12[23];
    dword_140C2397C = v12[27];
    qword_140C23974 = *(_QWORD *)&v12[25];
    byte_140C23994 = 1;
    dword_140C23980 = v12[28];
    dword_140C2396C = v12[23];
    if ( dword_140C002E0 )
      v7 = dword_140C23984 | 1;
    else
      v7 = dword_140C23984 & 0xFFFFFFFE;
    dword_140C23984 = v7;
    if ( !byte_140C233F4 )
    {
      if ( dword_140C00300 )
        v8 = v7 | 2;
      else
        v8 = v7 & 0xFFFFFFFD;
      dword_140C23984 = v8;
    }
  }
  v11 = v5;
  LOBYTE(v5) = v2;
  return PopTraceSystemIdleTimeoutInitialization(v5, v3, qword_140C23974, v4, v11, SBYTE4(qword_140C23974), a1);
}
