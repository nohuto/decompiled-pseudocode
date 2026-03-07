__int64 __fastcall MiComputeSystemTrimCriteria(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v5; // r14d
  unsigned __int64 AvailablePagesBelowPriority; // rbp
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int StandbyRepurposed; // eax
  __int64 v10; // r9
  unsigned int v11; // ecx
  unsigned __int64 v12; // r8
  unsigned int v13; // r11d
  unsigned __int64 v14; // r8
  __int64 v15; // rdx
  unsigned __int8 v16; // r12
  unsigned __int64 v17; // rdi
  BOOL v18; // r10d
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rdx
  int v24; // r10d
  int v25; // r11d
  int v26; // r15d
  unsigned int v27; // ecx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int8 v30; // cl
  unsigned __int64 v31; // rdx
  unsigned __int16 v32; // ax
  unsigned __int64 v33; // rax
  __int16 v35; // ax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  int v44; // [rsp+60h] [rbp+8h]
  unsigned int v45; // [rsp+70h] [rbp+18h]
  unsigned __int64 v46; // [rsp+78h] [rbp+20h]

  v2 = a1[2115];
  v44 = 0;
  v5 = *(_DWORD *)(v2 + 40);
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(a1, 6u);
  StandbyRepurposed = MiGetStandbyRepurposed(a1, 1LL, v7, v8);
  v11 = *(_DWORD *)(v2 + 44);
  v12 = *(_QWORD *)(v2 + 2400);
  *(_DWORD *)(v2 + 44) = StandbyRepurposed;
  v13 = v11 < StandbyRepurposed ? StandbyRepurposed - v11 : 0;
  v45 = v13;
  if ( AvailablePagesBelowPriority <= v12 )
    v14 = v12 - AvailablePagesBelowPriority;
  else
    v14 = AvailablePagesBelowPriority - v12;
  v15 = *(_DWORD *)(v2 + 120) & 7;
  v16 = 0;
  v17 = 0LL;
  *(_QWORD *)(v2 + 2200) += (v14 >> 3) - (*(_QWORD *)(v2 + 8 * v15 + 2208) >> 3);
  *(_QWORD *)(v2 + 8 * v15 + 2208) = v14;
  v18 = *(_DWORD *)(v2 + 80) == 4 && *(_WORD *)(v2 + 2348) && *(_BYTE *)(v2 + 2350) && *(_BYTE *)(v2 + 2351)
     || AvailablePagesBelowPriority <= 0x120;
  v19 = *(_QWORD *)(v2 + 2400);
  v20 = v19;
  if ( v18 )
  {
    v21 = 0LL;
  }
  else
  {
    v21 = AvailablePagesBelowPriority - *(_QWORD *)(v2 + 2368);
    v20 = v19 >> 2;
  }
  if ( AvailablePagesBelowPriority < v20 )
  {
    v36 = v19 - v21;
  }
  else
  {
    if ( AvailablePagesBelowPriority >= 4 * v19 )
      goto LABEL_9;
    if ( v21 >= 0 )
      goto LABEL_9;
    v36 = v19 - v21;
    if ( AvailablePagesBelowPriority >= v36 )
      goto LABEL_9;
  }
  v17 = *(_QWORD *)(v2 + 2384);
  v37 = v36 - AvailablePagesBelowPriority;
  v16 = 1;
  if ( v37 <= v17 )
    v17 = v37;
LABEL_9:
  v46 = v13;
  if ( v13 >= AvailablePagesBelowPriority >> 2 )
  {
    v38 = v13 - (AvailablePagesBelowPriority >> 2);
    if ( v38 > v17 && v17 < 0x2000 && !v18 )
    {
      v17 = v13 - (AvailablePagesBelowPriority >> 2);
      v16 = 3;
      if ( v38 > 0x2000 )
        v17 = 0x2000LL;
    }
  }
  v22 = MiGetStandbyRepurposed(a1, 4LL, 1LL, v10);
  v26 = v22;
  if ( v17 )
  {
    if ( v17 < 0x1000 && !v24 )
      v17 = 4096LL;
  }
  else if ( !v24 )
  {
    v27 = v22 - *(_DWORD *)(v2 + 48);
    if ( v27 > 0x20000 )
    {
      v39 = a1[2152];
      if ( v39 >= 0x100000 || v39 >= a1[2130] >> 2 )
      {
        *(_DWORD *)(v2 + 48) = v22;
      }
      else
      {
        v17 = 0x8000LL;
        v16 = 2;
      }
    }
    else if ( v25 && v27 > 0x18000 && *(_QWORD *)(v2 + 2408) < 0x20000uLL )
    {
      v44 = 1;
    }
  }
  v28 = *(_QWORD *)(v2 + 2400);
  if ( AvailablePagesBelowPriority < 4 * v28 )
  {
    v23 = *(_QWORD *)(v2 + 2200);
    v40 = 4 * v23;
    if ( 4 * v23 >= v28 )
    {
      v42 = 2 * v23;
      if ( 2 * v23 <= v28 )
        goto LABEL_17;
      v41 = *(_QWORD *)(v2 + 2384);
      *(_QWORD *)(v2 + 2400) = v42;
      if ( v42 <= v41 )
        goto LABEL_17;
    }
    else
    {
      v41 = *(_QWORD *)(v2 + 2376);
      *(_QWORD *)(v2 + 2400) = v40;
      if ( v40 >= v41 )
        goto LABEL_17;
    }
    *(_QWORD *)(v2 + 2400) = v41;
    goto LABEL_17;
  }
  if ( AvailablePagesBelowPriority > 16 * v28 )
    *(_QWORD *)(v2 + 2400) = *(_QWORD *)(v2 + 2392);
LABEL_17:
  *(_QWORD *)(v2 + 2368) = AvailablePagesBelowPriority;
  if ( !v17 )
  {
    v29 = *(_QWORD *)(v2 + 2360);
    v30 = 0;
    if ( v29 )
    {
      if ( v29 > *(_QWORD *)(v2 + 2408) )
      {
        v31 = v46;
        v30 = 10;
        if ( *(_WORD *)(v2 + 2346) < 0xFAu )
          *(_WORD *)(v2 + 2346) = 250;
        goto LABEL_24;
      }
      *(_QWORD *)(v2 + 2360) = 0LL;
    }
    if ( *(_QWORD *)(v2 + 2408) < (unsigned __int64)(4LL * *(_QWORD *)(v2 + 2384)) )
    {
      if ( !*(_WORD *)(v2 + 2346) )
        goto LABEL_21;
      v35 = MiComputeAgeDistribution((__int64)a1, 1);
      *(_WORD *)(v2 + 2346) = v35;
      if ( !v35 )
      {
        v30 = 0;
LABEL_21:
        v31 = v46;
        if ( v46 >= AvailablePagesBelowPriority >> 4 )
        {
          v30 = 9;
        }
        else if ( v44 )
        {
          v30 = 8;
        }
        goto LABEL_24;
      }
      v30 = 11;
    }
    v31 = v46;
LABEL_24:
    v32 = *(_WORD *)(v2 + 2348);
    if ( v32 )
    {
      if ( *(_WORD *)(v2 + 2346) < v32 )
        *(_WORD *)(v2 + 2346) = v32;
      if ( !v30 )
      {
        v30 = 12;
        *(_WORD *)(v2 + 2346) = v32;
      }
    }
    *(_BYTE *)a2 = 0;
    *(_QWORD *)(a2 + 96) = 0LL;
    *(_QWORD *)(a2 + 80) = 0LL;
    *(_QWORD *)(a2 + 72) = a1[2152];
    *(_QWORD *)(a2 + 104) = 0LL;
    *(_BYTE *)(a2 + 2) = v30;
    *(_OWORD *)(a2 + 8) = 0LL;
    *(_OWORD *)(a2 + 24) = 0LL;
    *(_OWORD *)(a2 + 40) = 0LL;
    *(_OWORD *)(a2 + 56) = 0LL;
    if ( v30 )
    {
      ++*(_DWORD *)(v2 + 4LL * v30 + 2488);
      v5 |= 2u;
    }
    else if ( *(_BYTE *)(v2 + 55) )
    {
      v5 |= 0x40u;
      *(_WORD *)(v2 + 2346) = 10;
    }
    else if ( !v5 )
    {
      v5 = 32;
    }
    goto LABEL_29;
  }
  MiPulseLowAvailableEvent(a1, v23, 0LL);
  if ( (unsigned __int8)(v16 - 2) <= 1u )
    *(_QWORD *)(v2 + 2360) = v17;
  v31 = v46;
  *(_BYTE *)a2 = 0;
  *(_QWORD *)(a2 + 96) = 0LL;
  v5 |= 1u;
  *(_QWORD *)(a2 + 80) = v17;
  v43 = a1[2152];
  *(_QWORD *)(a2 + 104) = 0LL;
  *(_QWORD *)(a2 + 72) = v17 + v43;
  *(_BYTE *)(a2 + 2) = v16;
  *(_OWORD *)(a2 + 8) = 0LL;
  *(_OWORD *)(a2 + 24) = 0LL;
  *(_OWORD *)(a2 + 40) = 0LL;
  *(_OWORD *)(a2 + 56) = 0LL;
  *(_DWORD *)(v2 + 48) = v26;
  ++*(_DWORD *)(v2 + 4LL * v16 + 2488);
LABEL_29:
  if ( AvailablePagesBelowPriority && v31 < AvailablePagesBelowPriority )
    v33 = 100 * v45 / AvailablePagesBelowPriority;
  else
    LOBYTE(v33) = 100;
  *(_BYTE *)(a2 + 3) = v33;
  if ( (v5 & 1) == 0 )
    *(_BYTE *)(a2 + 4) = 1;
  if ( v16 )
    MiPruneProcessLargePageCaches(a1, 0LL);
  return v5;
}
