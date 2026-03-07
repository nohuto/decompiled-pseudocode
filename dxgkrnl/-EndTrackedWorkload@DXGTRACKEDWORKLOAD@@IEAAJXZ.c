__int64 __fastcall DXGTRACKEDWORKLOAD::EndTrackedWorkload(DXGTRACKEDWORKLOAD *this)
{
  unsigned int v1; // r14d
  TrackedWorkloadMonitor *v3; // rcx
  __int64 v4; // rdi
  signed int v5; // r12d
  unsigned int v6; // r15d
  UINT v7; // ecx
  UINT EffectivePowerLevel; // esi
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // r8
  __int64 v13; // [rsp+20h] [rbp-60h]
  __int64 v14; // [rsp+28h] [rbp-58h]
  __int64 v15; // [rsp+30h] [rbp-50h]
  __int64 v16; // [rsp+38h] [rbp-48h]
  __int64 v17; // [rsp+40h] [rbp-40h]
  unsigned int v18; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v19; // [rsp+54h] [rbp-2Ch] BYREF
  RollingStats *v20; // [rsp+58h] [rbp-28h]
  TrackedWorkloadMonitor *v21; // [rsp+60h] [rbp-20h]
  _DXGKARG_SETTRACKEDWORKLOADPOWERLEVEL v22; // [rsp+68h] [rbp-18h] BYREF

  v1 = 0;
  v3 = (DXGTRACKEDWORKLOAD *)((char *)this + 328);
  v18 = 0;
  LODWORD(v4) = 0;
  v5 = 0;
  v19 = 0;
  v21 = v3;
  v20 = (DXGTRACKEDWORKLOAD *)((char *)this + 232);
  v6 = 0;
  if ( !DXGTRACKEDWORKLOAD::m_enableBypassPowerLevel )
  {
    if ( !TrackedWorkloadMonitor::GetTargetPowerLevel(v3, (DXGTRACKEDWORKLOAD *)((char *)this + 232), &v18, &v19) )
      return (unsigned int)v4;
    v5 = v18;
    v6 = v19;
  }
  v7 = v6;
  *(_QWORD *)&v22.EffectivePowerLevel = 0LL;
  if ( DXGTRACKEDWORKLOAD::m_enableBypassPowerLevel )
    v7 = DXGTRACKEDWORKLOAD::m_bypassPowerLevel;
  EffectivePowerLevel = 1;
  v22.PowerLevel = v7;
  if ( *((_DWORD *)this + 270) )
  {
    while ( 1 )
    {
      v9 = *((_QWORD *)this + v1 + 71);
      v10 = ADAPTER_RENDER::DdiSetTrackedWorkloadPowerLevel(
              *(ADAPTER_RENDER **)(*(_QWORD *)(v9 + 16) + 16LL),
              *(void **)(v9 + 184),
              &v22);
      v4 = v10;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      {
        LODWORD(v17) = v10;
        LODWORD(v16) = v22.EffectivePowerLevel;
        LODWORD(v15) = v6;
        LODWORD(v14) = v5;
        LODWORD(v13) = v1;
        McTemplateK0pqqqqq_EtwWriteTransfer(
          v22.EffectivePowerLevel,
          &TrackedWorkloadSetPowerLevel,
          v11,
          this,
          v13,
          v14,
          v15,
          v16,
          v17);
      }
      if ( (int)v4 < 0 )
        break;
      if ( EffectivePowerLevel <= v22.EffectivePowerLevel )
        EffectivePowerLevel = v22.EffectivePowerLevel;
      if ( ++v1 >= *((_DWORD *)this + 270) )
        goto LABEL_13;
    }
    WdLogSingleEntry2(3LL, v4, 1983LL);
  }
  else
  {
LABEL_13:
    TrackedWorkloadMonitor::SetEffectivePowerLevel(v21, EffectivePowerLevel, 0);
    RollingStats::Scale(v20, (double)v5 / (double)(int)EffectivePowerLevel);
  }
  return (unsigned int)v4;
}
