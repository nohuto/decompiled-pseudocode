__int64 __fastcall PopBatteryApplyCompositeState(int *a1, int a2)
{
  int v2; // eax
  unsigned int v5; // r12d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __m128i v12; // xmm1
  int v13; // edx
  __int64 v14; // r9
  int v15; // ecx
  unsigned int v16; // edi
  __int64 v17; // rcx
  unsigned int v18; // eax
  int v19; // ebx
  __int64 v20; // r14
  __int64 v21; // r15
  int v22; // esi
  __int64 v23; // rdx
  __int64 v24; // r8
  char *v25; // rdx
  unsigned int v26; // r12d
  __int64 v27; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  int v33; // ecx
  char *v34; // rcx
  char *v35; // rdx
  unsigned int v36; // ecx
  const CHAR *v37; // rdx
  unsigned int v38; // r8d
  unsigned __int8 v39; // r9
  unsigned __int64 v40; // rbx
  __int64 v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // [rsp+20h] [rbp-69h]
  int v46; // [rsp+28h] [rbp-61h]
  int v47; // [rsp+30h] [rbp-59h]
  char v48; // [rsp+40h] [rbp-49h]
  unsigned int v49; // [rsp+44h] [rbp-45h] BYREF
  unsigned int v50; // [rsp+48h] [rbp-41h] BYREF
  unsigned int v51; // [rsp+4Ch] [rbp-3Dh] BYREF
  int v52; // [rsp+50h] [rbp-39h] BYREF
  int v53; // [rsp+54h] [rbp-35h]
  char *v54; // [rsp+58h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+60h] [rbp-29h] BYREF
  int v56[4]; // [rsp+70h] [rbp-19h] BYREF
  _QWORD v57[2]; // [rsp+80h] [rbp-9h] BYREF
  unsigned int *v58; // [rsp+90h] [rbp+7h] BYREF
  __int64 v59; // [rsp+98h] [rbp+Fh]

  v2 = *a1;
  v51 = 0;
  v52 = 0;
  v48 = 0;
  v53 = v2 & 1;
  v5 = !(v2 & 1);
  v50 = v5;
  PopAcquirePolicyLock((_DWORD)a1);
  if ( PopUpdateAcDcState(v5) )
  {
    PopBatteryUpdateAlarms(1, 0LL);
    PopSetNotificationWork(4u, v29, v30, v31);
    PopRecordAcDcState(v5);
    PopInitSIdle(2u);
    PopInitilizeAcDcSettings();
    PpmProfileAcDcUpdate();
    if ( v5 == 1 )
      PopMaxChargeRate = 0LL;
    v48 = 1;
  }
  if ( byte_140C3CB58 )
  {
    PopSetPowerSettingValueAcDc(&GUID_BATTERY_COUNT, 4u, &dword_140C3CB54);
    v32 = qword_140C3CB60;
    v8 = 0LL;
    v6 = 0LL;
    while ( (__int64 *)v32 != &qword_140C3CB60 )
    {
      v33 = *(_DWORD *)(v32 + 104);
      if ( v33 == 2 )
      {
        v6 = (unsigned int)(v6 + 1);
      }
      else if ( v33 == 4 )
      {
        v8 = (unsigned int)(v8 + 1);
      }
      v32 = *(_QWORD *)v32;
    }
    v7 = (unsigned int)dword_140C3CB54;
    if ( PopCachedValidBatteryCount == -1 || PopCachedValidBatteryCount != dword_140C3CB54 )
    {
      PopCachedValidBatteryCount = dword_140C3CB54;
      PopDiagTraceBatteryCountChange((unsigned int)dword_140C3CB54, v6, v8, &qword_140C3CB60);
    }
    v48 = 1;
  }
  PopReleasePolicyLock(v7, v6, v8);
  PopBatteryCheckCompositeCapacity(a1, v5, &v51);
  if ( ((unk_140C3CB80 ^ *(_BYTE *)a1) & 0xF) != 0 || byte_140C3CB58 )
  {
    PopSetNotificationWork(8u, v9, v10, v11);
    byte_140C3CB58 = 0;
  }
  PopAcquireRwLockExclusive((ULONG_PTR)&xmmword_140C3CD18);
  v12 = *(__m128i *)a1;
  v13 = 0;
  HIDWORD(qword_140C3CB8C) = a2;
  v14 = (unsigned int)_mm_cvtsi128_si32(v12);
  if ( a2 != -1 )
    v13 = a2;
  unk_140C3CB80 = v12;
  DbgPrintEx(
    0x92u,
    3u,
    "\n"
    "Composite Status\n"
    "|-- PowerState = 0x%08x\n"
    "|-- Capacity   = %u\n"
    "|-- Voltage    = %u\n"
    "|-- Rate       = %d\n"
    "|-- Est Time   = %u\n",
    v14,
    v12.m128i_i32[1],
    _mm_cvtsi128_si32(_mm_srli_si128(v12, 8)),
    _mm_srli_si128(v12, 8).m128i_i32[1],
    v13);
  xmmword_140C3CD28 = 0LL;
  BYTE7(xmmword_140C3CD28) = dword_140C3CBB8;
  xmmword_140C3CD38 = 0LL;
  LOBYTE(xmmword_140C3CD28) = unk_140C3CB80 & 1;
  if ( dword_140C3CB54 )
  {
    BYTE1(xmmword_140C3CD28) = 1;
    BYTE2(xmmword_140C3CD28) = (unk_140C3CB80 & 4) != 0;
    DWORD2(xmmword_140C3CD28) = HIDWORD(qword_140C3CBA0);
    HIDWORD(xmmword_140C3CD28) = unk_140C3CB84;
    *(_QWORD *)&xmmword_140C3CD38 = qword_140C3CB8C;
    *((_QWORD *)&xmmword_140C3CD38 + 1) = unk_140C3CBA8;
    BYTE3(xmmword_140C3CD28) = byte_140C3CCE8 != 0 || (unk_140C3CB80 & 2) != 0;
  }
  PopAccountCbEnergyChange();
  PopBatteryTraceSystemBatteryStatus(0);
  PopReleaseRwLock((ULONG_PTR)&xmmword_140C3CD18);
  if ( HIDWORD(qword_140C3CBA0) )
    PopRecalculateCBTriggerLevels();
  if ( qword_140C3CBA0
    && (unsigned __int8)PopBatteryCheckTriggerAllBatteries(&unk_140C3CC88, 1LL)
    && (dword_140C3CC8C[0] & 2) == 0 )
  {
    PopGetPolicyWorker(64);
    PopCheckForWork();
  }
  PopAcquirePolicyLock(v15);
  v49 = 0;
  v16 = 0;
  LODWORD(v17) = 0;
  v18 = 0;
  v19 = dword_140C3CB54 != 0 ? 3 : 0;
  do
  {
    v20 = v18;
    v21 = 6LL * v18;
    v54 = (char *)&unk_140C3CC88 + 24 * (unsigned int)v17;
    v22 = dword_140C3CC8C[v21];
    if ( (unsigned __int8)PopBatteryCheckTrigger(v54) )
    {
      if ( PopBatteryCachedFlags[v20] != v22 )
      {
        v34 = v54;
        v35 = (char *)PopPolicy + v21 * 4 + 96;
        PopBatteryCachedFlags[v20] = v22;
        PopDiagTraceBatteryAlarmStatus(v34, v35, &v49);
        v16 = v49;
        v24 = 3LL * v49;
        if ( dword_140C3CC8C[6 * v49] == 128 )
        {
          PopDiagTraceBatteryTriggerMet((char *)&unk_140C3CC88 + 24 * v49, (char *)PopPolicy + 24 * v49 + 96, &v49);
          v16 = v49;
        }
      }
      if ( !byte_140C3CC80 )
        PopExecutePowerAction(
          (unsigned int)&unk_140C3CC88 + 24 * v16,
          8,
          (_DWORD)PopPolicy + 104 + 24 * v16,
          *((_DWORD *)PopPolicy + 6 * v16 + 29),
          1);
      if ( v19 == 3 )
      {
        if ( v16 )
        {
          if ( v16 == 1 )
            v19 = 2;
        }
        else
        {
          v19 = 1;
        }
      }
    }
    else
    {
      PopBatteryCachedFlags[v20] = -1;
      v25 = v54;
      dword_140C3CC8C[v21] = v22 & 0xFFFFFFFC;
      PopDiagTraceBatteryTriggerFlags(&v49, v25);
      v16 = v49;
    }
    v49 = ++v16;
    v18 = v16;
    v17 = v16;
  }
  while ( v16 < 4 );
  v26 = v50;
  if ( dword_140C3CBBC != v19 )
  {
    v52 = v19;
    v47 = 0;
    v46 = 0;
    v45 = 0LL;
    ZwUpdateWnfStateData((__int64)&WNF_PO_BATTERY_CHARGE_LEVEL, (__int64)&v52);
    v36 = dword_140C03928;
    if ( (unsigned int)dword_140C03928 > 5 )
    {
      if ( v19 )
      {
        if ( v19 == 1 )
        {
          v37 = "PoBatteryLevelCritical";
        }
        else if ( v19 == 2 )
        {
          v37 = "PoBatteryLevelLow";
        }
        else
        {
          v37 = "PoBatteryLevelNormal";
        }
      }
      else
      {
        v37 = "PoBatteryLevelUnknown";
      }
      tlgCreate1Sz_char((__int64)v57, v37);
      v50 = v38;
      v58 = &v50;
      v59 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C03928,
        (unsigned __int8 *)byte_140031093,
        0LL,
        0LL,
        4u,
        &v55);
      v36 = dword_140C03928;
    }
    if ( (unsigned int)(v19 - 1) <= 1 != (unsigned int)(dword_140C3CBBC - 1) <= 1
      && v36 > 5
      && tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL) )
    {
      v50 = v39;
      v57[1] = 4LL;
      v57[0] = &v50;
      v49 = v19;
      v58 = &v49;
      v59 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C03928,
        (unsigned __int8 *)byte_140031050,
        0LL,
        0LL,
        4u,
        &v55);
    }
    dword_140C3CBBC = v19;
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE10(PopBsdPowerTransition) = BYTE10(PopBsdPowerTransition) & 0x3F | ((_BYTE)v19 << 6);
    PopBsdHandleRequest(1u);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
  if ( v48 )
    PopTracePowerReconfig();
  PopReleasePolicyLock(v17, v23, v24);
  if ( v51 )
  {
    v49 = (dword_140C3CCEC + 500) / 0x3E8u;
    PopSetPowerSettingValueAcDc(&GUID_BATTERY_PERCENTAGE_REMAINING, 4u, &v49);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    HIBYTE(PopBsdPowerTransition) ^= (HIBYTE(PopBsdPowerTransition) ^ v49) & 0x7F;
    PopBsdHandleRequest(1u);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
    LODWORD(v40) = 0;
    v41 = MEMORY[0xFFFFF78000000008];
    if ( dword_140C3CCEC != -1 )
      v40 = (MEMORY[0xFFFFF78000000008] - qword_140C3CCF0 + 5000) / 0x2710uLL;
    if ( PopPlatformAoAc )
    {
      PopSqmCreateDwordStreamEntry(&v55, v49);
      PopSqmCreateDwordStreamEntry(v56, v51);
      PopSqmCreateDwordStreamEntry(v57, v53);
      PopSqmCreateDwordStreamEntry(&v58, v40);
      PopSqmAddToStream(v43, v42, v44, (__int64)&v55);
    }
    PopBatteryTracePercentageRemaining(v49, v51, v26, (unsigned int)v40, v45, v46, v47);
    qword_140C3CCF0 = v41;
  }
  LOBYTE(v27) = v48;
  return PopEsQueueStateEvaluation(v27);
}
