__int64 __fastcall PopCalculateCsSummary(__int64 a1, int a2)
{
  __int64 InterruptTimePrecise; // rsi
  unsigned __int64 v5; // r14
  unsigned int EnergyDrainFromDischage; // eax
  __int64 v7; // rax
  int v8; // r13d
  int v9; // ecx
  __int64 v10; // rax
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // r11
  __int64 v16; // rsi
  unsigned __int64 v17; // rsi
  unsigned int v18; // r11d
  int v19; // edx
  __int128 v20; // xmm0
  char v21; // al
  char v22; // cl
  char v23; // al
  int v24; // r10d
  __int64 v25; // r11
  __int64 v26; // r9
  char v27; // al
  char v28; // cl
  int v29; // r8d
  KIRQL v30; // al
  unsigned __int64 v31; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v35; // zf
  int v36; // [rsp+20h] [rbp-99h]
  int v37; // [rsp+24h] [rbp-95h]
  char v38; // [rsp+28h] [rbp-91h]
  __int64 v39; // [rsp+30h] [rbp-89h] BYREF
  __int64 v40; // [rsp+38h] [rbp-81h] BYREF
  unsigned __int64 v41; // [rsp+40h] [rbp-79h]
  LARGE_INTEGER v42; // [rsp+48h] [rbp-71h] BYREF
  __int64 v43; // [rsp+50h] [rbp-69h]
  __int64 v44; // [rsp+58h] [rbp-61h]
  unsigned __int64 v45; // [rsp+60h] [rbp-59h]
  unsigned __int64 v46; // [rsp+68h] [rbp-51h]
  unsigned __int64 v47; // [rsp+70h] [rbp-49h]
  __int64 v48; // [rsp+78h] [rbp-41h]
  __int128 v49; // [rsp+80h] [rbp-39h] BYREF
  __int128 v50; // [rsp+90h] [rbp-29h] BYREF
  __int128 v51; // [rsp+A0h] [rbp-19h]
  _OWORD v52[6]; // [rsp+B0h] [rbp-9h] BYREF
  int v53; // [rsp+120h] [rbp+67h] BYREF
  int v54; // [rsp+128h] [rbp+6Fh] BYREF
  int v55; // [rsp+130h] [rbp+77h]
  int v56; // [rsp+138h] [rbp+7Fh]

  *(_QWORD *)&v49 = 0LL;
  DWORD2(v49) = 0;
  v42.QuadPart = 0LL;
  memset(v52, 0, 32);
  LOBYTE(v41) = 0;
  v50 = 0LL;
  v51 = 0LL;
  PopCalculateIdleInformation((__int64)&v50);
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v42);
  v5 = (InterruptTimePrecise - qword_140CF7888) / 0xAuLL;
  PopCurrentPowerState(v52);
  if ( v5 )
  {
    EnergyDrainFromDischage = PopBatteryGetEnergyDrainFromDischage((unsigned int)PopCsConsumption, HIDWORD(v52[0]));
    v55 = PopBatteryCapacityToRate(EnergyDrainFromDischage, v5);
  }
  else
  {
    v55 = 0;
  }
  v7 = PopMeasureEnergyChange(&v49, &CsSessionEnergyCounter);
  v8 = HIDWORD(xmmword_140C3CB94);
  if ( HIDWORD(xmmword_140C3CB94) )
    LODWORD(v7) = (unsigned int)(100 * xmmword_140C3CBA4) / HIDWORD(xmmword_140C3CB94);
  else
    LOBYTE(v7) = 0;
  v9 = 0;
  if ( (xmmword_140C3CB94 & 0x40000000) == 0 )
    v9 = xmmword_140C3CBA4;
  v56 = v7;
  v43 = *((_QWORD *)&v50 + 1) - qword_140CF7890;
  v36 = v9;
  v37 = DWORD2(v51) - dword_140CF78A0;
  v10 = PopCalculateTotalHwDripsResidency(qword_140CF7918, v51, v5);
  v11 = v5 + qword_140CF7898 - v50;
  v48 = v10;
  v12 = _InterlockedExchangeAdd64(&qword_140CF79C0, 0LL);
  if ( v12 )
    v12 = (v12 - qword_140CF7888) / 0xA;
  v13 = PpmConvertTime(qword_140CF78C0, PopQpcFrequency, 0xF4240uLL);
  v14 = qword_140CF78E0;
  v44 = v15 - v13;
  v47 = v5 - qword_140CF78D0;
  if ( qword_140CF78D8 )
  {
    if ( qword_140CF7888 <= (unsigned __int64)qword_140CF78D8 )
      v16 = InterruptTimePrecise - qword_140CF78D8;
    else
      v16 = InterruptTimePrecise - qword_140CF7888;
    v14 = v16 + qword_140CF78E0;
  }
  v17 = v14 / 0xA;
  v45 = PpmConvertTime(qword_140CF78F0, PopQpcFrequency, 0xF4240uLL);
  v46 = PpmConvertTime(qword_140CF7900, PopQpcFrequency, v18);
  PopGetModernStandbyTransitionReason(0);
  v39 = 0LL;
  v40 = 0LL;
  v38 = byte_140CF7948;
  PpmGetPlatformSelectionVetoCounts(dword_140CF7A00, &v39, &v40);
  v39 -= qword_140CF7920;
  v40 -= qword_140CF7928;
  if ( qword_140CF78A8 )
    v41 = 100 * qword_140CF78B0 / (unsigned __int64)qword_140CF78A8;
  v54 = 0;
  PopQueryInputSuppressionCount(&v54);
  v53 = 0;
  v54 -= dword_140CF7980;
  PopQueryPowerButtonSuppressionCount(&v53);
  v19 = v53 - dword_140CF7984;
  v20 = v49;
  *(_DWORD *)a1 = v55;
  *(_DWORD *)(a1 + 28) = v36;
  *(_QWORD *)(a1 + 40) = v43;
  *(_DWORD *)(a1 + 56) = v37;
  *(_QWORD *)(a1 + 72) = v44;
  *(_QWORD *)(a1 + 96) = v45;
  *(_QWORD *)(a1 + 104) = v46;
  *(_QWORD *)(a1 + 80) = v47;
  *(_QWORD *)(a1 + 128) = v48;
  *(_BYTE *)(a1 + 160) = v41;
  v21 = 2 * v56;
  *(_DWORD *)(a1 + 24) = v8;
  v22 = v21 ^ v38 & 1;
  *(_QWORD *)(a1 + 32) = v5;
  v23 = *(_BYTE *)(a1 + 125);
  *(_BYTE *)(a1 + 124) = v22;
  *(_OWORD *)(a1 + 8) = v20;
  *(_QWORD *)(a1 + 48) = v11;
  *(_QWORD *)(a1 + 64) = v12;
  *(_QWORD *)(a1 + 88) = v17;
  *(_DWORD *)(a1 + 116) = v24;
  *(_DWORD *)(a1 + 120) = a2;
  *(_QWORD *)(a1 + 136) = v25;
  *(_QWORD *)(a1 + 144) = v26;
  v53 = v19;
  v27 = *(_BYTE *)(a1 + 125) ^ (byte_140CF7949 ^ v23) & 1;
  *(_BYTE *)(a1 + 125) = v27;
  v28 = v27 ^ (byte_140CF7949 ^ v27) & 2;
  *(_BYTE *)(a1 + 125) = v28;
  *(_BYTE *)(a1 + 125) = v28 ^ (byte_140CF7949 ^ v28) & 4;
  *(_DWORD *)(a1 + 164) = dword_140CF7930;
  *(_DWORD *)(a1 + 168) = dword_140CF7934;
  *(_BYTE *)(a1 + 172) = byte_140CF7938;
  *(_DWORD *)(a1 + 176) = dword_140CF793C;
  *(_DWORD *)(a1 + 180) = dword_140CF7940;
  *(_DWORD *)(a1 + 184) = dword_140CF7944;
  *(_DWORD *)(a1 + 188) = dword_140CF794C;
  *(_DWORD *)(a1 + 192) = dword_140CF7950;
  *(_BYTE *)(a1 + 196) = byte_140CF7954;
  *(_DWORD *)(a1 + 200) = HIDWORD(v52[0]);
  *(_DWORD *)(a1 + 204) = DWORD2(v52[0]);
  *(_BYTE *)(a1 + 212) = byte_140CF795C;
  *(_BYTE *)(a1 + 213) = byte_140CF795D;
  *(_DWORD *)(a1 + 216) = dword_140CF7960;
  *(_DWORD *)(a1 + 220) = dword_140CF7964;
  *(_DWORD *)(a1 + 228) = v29;
  *(_DWORD *)(a1 + 328) = v19;
  *(_QWORD *)(a1 + 232) = qword_140CF7908;
  *(_QWORD *)(a1 + 240) = qword_140CF7910;
  *(_DWORD *)(a1 + 224) = dword_140CF7988;
  v30 = KeAcquireSpinLockRaiseToDpc(&qword_140C3C618);
  *(_QWORD *)(a1 + 256) = qword_140C3C608;
  *(_QWORD *)(a1 + 248) = qword_140C3C610;
  *(_QWORD *)(a1 + 264) = PopDisplayOnPerformance;
  v31 = v30;
  result = KxReleaseSpinLock((volatile signed __int64 *)&qword_140C3C618);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v31 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v31 + 1));
      v35 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v35 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v31);
  return result;
}
