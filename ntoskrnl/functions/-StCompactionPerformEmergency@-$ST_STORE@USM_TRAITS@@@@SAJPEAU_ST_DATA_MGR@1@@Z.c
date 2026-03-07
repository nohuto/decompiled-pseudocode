__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionPerformEmergency(__int64 a1)
{
  int v1; // ebx
  int v2; // ebp
  int v3; // r14d
  unsigned int v5; // esi
  int v6; // r13d
  __int64 UnbiasedInterruptTime; // rax
  __int64 v8; // rdx
  _WORD *v9; // r15
  _WORD *v10; // r12
  _WORD *v11; // rbx
  unsigned __int64 v12; // rax
  unsigned int v13; // r11d
  __int64 v15; // rsi
  unsigned int v16; // r9d
  unsigned int v17; // r9d
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned int v20; // r8d
  __int64 v21; // rcx
  unsigned int v23; // [rsp+80h] [rbp+8h]
  int v24; // [rsp+88h] [rbp+10h]
  _WORD *v25; // [rsp+90h] [rbp+18h]
  __int64 v26; // [rsp+98h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 784);
  v2 = 0;
  v24 = v1;
  v3 = 0;
  ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker(a1, 0LL, 0LL);
  v5 = (unsigned int)(v1 - 4096) >> 4;
  v6 = 0;
  v23 = v5;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v8 = *(_QWORD *)(a1 + 1032);
  v26 = UnbiasedInterruptTime;
  v9 = (_WORD *)(v8 + 2LL * *(unsigned int *)(a1 + 1096));
  v25 = v9;
  v10 = (_WORD *)(v8 + 2LL * *(unsigned int *)(a1 + 856));
  while ( 2 )
  {
    v11 = v9;
    if ( v9 >= v10 )
      goto LABEL_29;
    do
    {
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6100LL)
         + *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6592LL)
         + *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6096LL)
        && (v6 & 7) == 0
        && v6 )
      {
        v12 = KiQueryUnbiasedInterruptTime() - v26;
        if ( !(v13 >= 0x40 ? v12 < 0x1C9C380 : v12 < 0x2FAF080) )
          break;
      }
      if ( (*v11 & 0x1FFF) == 0 || (*v11 & 0x1FFFu) > v5 )
        goto LABEL_27;
      v15 = ((__int64)v11 - *(_QWORD *)(a1 + 1032)) >> 1;
      if ( !SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v15) )
      {
        v17 = v16 >> 13;
        if ( *(_BYTE *)(a1 + 776) )
          v17 = 0;
        if ( (_DWORD)v15 == *(_DWORD *)(a1 + 16 * (v17 + 78LL)) )
          goto LABEL_26;
        ++v6;
        if ( (int)ST_STORE<SM_TRAITS>::StCompactRegions(a1, 0LL, v15, 0LL, v15, 0) >= 0 )
          goto LABEL_24;
        if ( (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 2LL, v18) != 2 )
          break;
        v19 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, (unsigned int)v15, 0LL, 1LL);
        if ( v19 )
        {
          if ( v19 != -1 )
          {
            if ( (int)ST_STORE<SM_TRAITS>::StCompactRegions(a1, v19, v15, v19, v15, 0) < 0 )
              NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
            ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, (unsigned int)v15);
LABEL_24:
            v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 6216LL) + 8LL * (unsigned int)v15);
            if ( v21 >= 0 )
            {
              v20 = (16 * (*v11 & 0x1FFF) + 4095) & 0xFFFFF000;
              MmStoreDecommitVirtualMemory(v20 + (v21 & 0x7FFFFFFFFFFF0000LL), v24 - v20);
            }
            goto LABEL_26;
          }
        }
      }
      v3 = 1;
LABEL_26:
      v5 = v23;
LABEL_27:
      ++v11;
    }
    while ( v11 < v10 );
    v9 = v25;
    v5 = v23;
LABEL_29:
    if ( v11 == v10 )
    {
      if ( v9 != *(_WORD **)(a1 + 1032) )
      {
        v10 = v9;
        v25 = *(_WORD **)(a1 + 1032);
        v9 = v25;
        continue;
      }
    }
    else
    {
      v2 = ((__int64)v11 - *(_QWORD *)(a1 + 1032)) >> 1;
    }
    break;
  }
  *(_DWORD *)(a1 + 1096) = v2;
  return v3 != 0 ? 0xC000022D : 0;
}
