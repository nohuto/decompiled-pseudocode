__int64 __fastcall PopDiagTraceCsResiliencyExit(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  KIRQL v12; // al
  char v13; // r10
  unsigned __int64 v14; // rbx
  __int64 v15; // r9
  int EnergyDrainFromDischage; // edx
  int v17; // ecx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 *v23; // r11
  __int64 v24; // rsi
  __int64 v25; // rdi
  unsigned __int64 v26; // rax
  __int64 v27; // r11
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v31; // zf
  __int128 v32; // [rsp+20h] [rbp-18h]

  DWORD1(v32) = 0;
  v12 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  v13 = byte_140C3C728;
  v14 = v12;
  xmmword_140C3C768 = *(_OWORD *)a8;
  xmmword_140C3C778 = *(_OWORD *)(a8 + 16);
  v15 = a5;
  qword_140C3C788 = *(_QWORD *)(a8 + 32);
  if ( a5 )
  {
    EnergyDrainFromDischage = PopBatteryGetEnergyDrainFromDischage(
                                (unsigned int)dword_140C3C724,
                                *(unsigned int *)(a2 + 12));
    LODWORD(v32) = xmmword_140C3C730 | *(_DWORD *)a4;
    *((_QWORD *)&v32 + 1) = *((_QWORD *)&xmmword_140C3C730 + 1) - *(_QWORD *)(a4 + 8);
  }
  else
  {
    EnergyDrainFromDischage = 0;
    *((_QWORD *)&v32 + 1) = 0LL;
    LODWORD(v32) = xmmword_140C3C730;
  }
  v17 = 0;
  if ( byte_140C3C722 )
    v17 = 2;
  if ( byte_140C3C721 )
    v17 |= 1u;
  if ( !v13 || !a3 )
    v17 |= 4u;
  if ( byte_140C3C723 )
    v17 |= 8u;
  if ( byte_140C3C751 )
    v17 |= 0x10u;
  if ( byte_140C3C750 )
    v17 |= 0x20u;
  *(_DWORD *)(a1 + 68) = dword_140C3C74C;
  *(_DWORD *)(a1 + 64) = dword_140C3C748;
  *(_DWORD *)(a1 + 56) = dword_140C3C740;
  *(_DWORD *)(a1 + 60) = dword_140C3C744;
  *(_QWORD *)(a1 + 72) = qword_140C3C760;
  *(_QWORD *)(a1 + 16) = a6;
  *(_DWORD *)(a1 + 32) = EnergyDrainFromDischage;
  v18 = PopQpcFrequency;
  *(_QWORD *)(a1 + 24) = a7;
  *(_DWORD *)a1 = v17;
  *(_QWORD *)(a1 + 8) = v15;
  *(_OWORD *)(a1 + 40) = v32;
  v19 = PpmConvertTime(qword_140C3C7A0, v18, 0xF4240uLL);
  v20 = PopQpcFrequency;
  *(_QWORD *)(a1 + 120) = v19;
  v21 = PpmConvertTime(qword_140C3C7A8, v20, 0xF4240uLL);
  v22 = PopQpcFrequency;
  *(_QWORD *)(a1 + 128) = v21;
  *(_QWORD *)(a1 + 136) = PpmConvertTime(qword_140C3C7B0, v22, 0xF4240uLL);
  v23 = (unsigned __int64 *)&unk_140C3C818;
  v24 = 11LL;
  *(_DWORD *)(a1 + 144) = dword_140C3C7B8;
  *(_OWORD *)(a1 + 80) = xmmword_140C3C768;
  *(_OWORD *)(a1 + 96) = xmmword_140C3C778;
  *(_QWORD *)(a1 + 112) = qword_140C3C788;
  v25 = a1 - (_QWORD)&unk_140C3C818;
  do
  {
    v26 = PpmConvertTime(*v23, PopQpcFrequency, 0xF4240uLL);
    *(_QWORD *)(v25 + v27 + 152) = v26;
    v23 = (unsigned __int64 *)(v27 + 8);
    --v24;
  }
  while ( v24 );
  PopCsResiliencyStats[0] = 0;
  result = KxReleaseSpinLock((volatile signed __int64 *)&PopCsResiliencyStatsLock);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v14 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
      v31 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v31 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v14);
  return result;
}
