__int64 __fastcall PopPepInitializeVetoMasks(__int64 a1, unsigned int a2)
{
  __int64 v2; // r12
  __int64 v4; // r13
  int v5; // eax
  ULONG_PTR v6; // r14
  char *v7; // r8
  __int128 v8; // xmm0
  unsigned int i; // edi
  int v10; // ecx
  _DWORD *v11; // r8
  KIRQL v12; // si
  int DeepSleepPlatformStateIndex; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // ecx
  unsigned int *v18; // r14
  unsigned int v19; // esi
  int v20; // r15d
  _DWORD *v21; // r12
  _BYTE *v22; // r13
  unsigned int v23; // edi
  unsigned int v24; // edx
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rax
  unsigned int v28; // edi
  __int64 v29; // rax
  __int64 v30; // r13
  unsigned int v31; // esi
  unsigned int *v32; // r15
  int v33; // edx
  _DWORD *v34; // rax
  _BYTE *v35; // rcx
  unsigned int v36; // eax
  _DWORD *v37; // rcx
  __int64 v38; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v42; // eax
  bool v43; // zf
  __int64 result; // rax
  char v45; // [rsp+20h] [rbp-E0h]
  KIRQL v46; // [rsp+21h] [rbp-DFh]
  int v48; // [rsp+24h] [rbp-DCh]
  ULONG_PTR BugCheckParameter2; // [rsp+28h] [rbp-D8h]
  unsigned int BugCheckParameter2a; // [rsp+28h] [rbp-D8h]
  int v51; // [rsp+30h] [rbp-D0h] BYREF
  int v52; // [rsp+34h] [rbp-CCh]
  __int128 *v53; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v54; // [rsp+40h] [rbp-C0h]
  _DWORD *v55; // [rsp+48h] [rbp-B8h]
  __int64 v56; // [rsp+50h] [rbp-B0h]
  __int64 v57; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter3; // [rsp+60h] [rbp-A0h]
  __int128 v59; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v60[20]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v61[32]; // [rsp+120h] [rbp+20h] BYREF

  v2 = a2;
  v51 = 0;
  v59 = 0LL;
  memset(v60, 0, 0x94uLL);
  v4 = PopPepPlatformState;
  v5 = v60[3];
  v6 = *(_QWORD *)(a1 + 32);
  v7 = (char *)&v60[3];
  v53 = 0LL;
  *(_BYTE *)(a1 + 188) = 0;
  if ( (((unsigned __int8)&v60[16] - 104) & 4) != 0 )
    v5 = 1;
  BugCheckParameter2 = v6;
  v8 = *(_OWORD *)(v6 + 216);
  LODWORD(v60[3]) = v5;
  v56 = v4;
  if ( (((unsigned __int8)&v60[16] - 104) & 4) != 0 )
    v7 = (char *)&v60[3] + 4;
  *(_OWORD *)&v60[1] = v8;
  memset64(v7, 0x100000001uLL, 16LL - ((((unsigned __int8)&v60[16] - 104) & 4) != 0LL));
  if ( (((unsigned __int8)&v60[16] - 104) & 4) != 0 )
    *(_DWORD *)&v7[(-(__int64)((((unsigned __int8)&v60[16] - 104) & 4) != 0LL) & 0xFFFFFFFFFFFFFFFCuLL) + 124] = 1;
  for ( i = 0; i < (unsigned int)v2; ++i )
  {
    LODWORD(v60[0]) = i;
    *(_QWORD *)&v59 = v60;
    DWORD2(v59) = 8;
    v53 = &v59;
    EmClientRuleEvaluate(&GUID_EM_PEP_UPADTE_DEVICE_CONTRAINT, &v53, 1LL, &v51);
    if ( v51 == 2 )
      *(_BYTE *)(a1 + 188) = 1;
  }
  v10 = v61[0];
  v11 = v61;
  if ( (((unsigned __int8)&v60[16] + 32) & 4) != 0 )
    v10 = 1;
  v61[0] = v10;
  if ( (((unsigned __int8)&v60[16] + 32) & 4) != 0 )
    v11 = &v61[1];
  memset64(v11, 0x100000001uLL, 16LL - ((((unsigned __int8)&v60[16] + 32) & 4) != 0LL));
  if ( (((unsigned __int8)&v60[16] + 32) & 4) != 0 )
    *(_DWORD *)((char *)v11 + (-(__int64)((((unsigned __int8)&v60[16] + 32) & 4) != 0LL) & 0xFFFFFFFFFFFFFFFCuLL) + 124) = 1;
  v12 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  v46 = v12;
  if ( *(_DWORD *)(a1 + 172) != 2 )
  {
    DeepSleepPlatformStateIndex = PpmGetDeepSleepPlatformStateIndex();
    v14 = *(_QWORD *)(a1 + 32);
    v52 = DeepSleepPlatformStateIndex;
    if ( PopPluginRequestDeviceIdleConstraints(v14, (__int64)v61, v2) )
    {
      if ( !*(_BYTE *)(a1 + 188) )
        goto LABEL_28;
    }
    else if ( !*(_BYTE *)(a1 + 188) )
    {
LABEL_42:
      v27 = *(int *)(a1 + 168);
      if ( (_DWORD)v27 != 4 )
        PopPepUpdateIdleStateRefCount(0, *(_DWORD *)(a1 + 4 * v27 + 140), 1, (volatile signed __int32 *)(a1 + 184));
      if ( *(_BYTE *)(a1 + 124) )
      {
        v28 = 0;
        v45 = 0;
        for ( BugCheckParameter2a = 0; v28 < *(_DWORD *)(a1 + 180); BugCheckParameter2a = v28 )
        {
          v29 = *(_QWORD *)(*(_QWORD *)(v6 + 832) + 8LL * v28);
          BugCheckParameter3 = v28;
          v30 = a1 + 208LL * v28;
          v57 = v29;
          memset(v61, 0, sizeof(v61));
          if ( PopPluginRequestComponentIdleConstraints(*(_QWORD *)(a1 + 32), v28, (__int64)v61, v2) )
          {
            v31 = 0;
            v32 = v61;
            v33 = 1;
            v48 = 1;
            if ( (_DWORD)v2 )
            {
              v34 = v61;
              v35 = (_BYTE *)(v56 + 57);
              v55 = v61;
              v54 = v56 + 57;
              do
              {
                if ( !*v35 && *v34 )
                  PopFxBugCheck(0x621uLL, v6, BugCheckParameter3, v31);
                v36 = 0;
                if ( *(_DWORD *)(v30 + 380) )
                {
                  v37 = (_DWORD *)(*(_QWORD *)(v30 + 392) + 16LL);
                  do
                  {
                    if ( v36 >= *v32 )
                      break;
                    *v37 |= v33;
                    ++v36;
                    v37 += 6;
                  }
                  while ( v36 < *(_DWORD *)(v30 + 380) );
                }
                if ( v52 != -1 && v31 == v52 && *v32 )
                {
                  v38 = v57 + 200;
                  KxAcquireSpinLock((PKSPIN_LOCK)(v57 + 200));
                  PopFxReinitializeAccountingInstance(v38, 2);
                  *(_DWORD *)(v38 + 12) = *v32;
                  *(_QWORD *)(v38 + 24) = MEMORY[0xFFFFF78000000008];
                  *(_BYTE *)(v38 + 8) = 1;
                  KxReleaseSpinLock((volatile signed __int64 *)v38);
                  v45 = 1;
                  _InterlockedOr((volatile signed __int32 *)(v6 + 824), 0x10u);
                  v33 = v48;
                }
                v33 *= 2;
                v35 = (_BYTE *)(v54 + 448);
                v34 = v55 + 1;
                v48 = v33;
                ++v32;
                v54 += 448LL;
                ++v31;
                ++v55;
              }
              while ( v31 < (unsigned int)v2 );
              v28 = BugCheckParameter2a;
            }
          }
          PopPepUpdateIdleStateRefCount(
            0,
            *(_DWORD *)(*(_QWORD *)(v30 + 392) + 24LL * *(unsigned int *)(v30 + 368) + 16),
            1,
            (volatile signed __int32 *)(v30 + 384));
          if ( v45 )
            _InterlockedOr((volatile signed __int32 *)(v6 + 824), 0x100u);
          else
            _InterlockedAnd((volatile signed __int32 *)(v6 + 824), 0xFFFFFEFF);
          ++v28;
        }
        if ( *(_BYTE *)(a1 + 124) )
          goto LABEL_68;
      }
      if ( *(_BYTE *)(a1 + 188) )
LABEL_68:
        *(_DWORD *)(a1 + 172) = 2;
      v12 = v46;
      goto LABEL_70;
    }
    if ( (_DWORD)v2 )
    {
      v15 = 0LL;
      v16 = v2;
      do
      {
        v17 = *(_DWORD *)((char *)&v60[3] + v15 * 4);
        if ( v61[v15] < v17 )
          v61[v15] = v17;
        ++v15;
        --v16;
      }
      while ( v16 );
      v18 = v61;
      v19 = 0;
      v20 = 1;
      goto LABEL_29;
    }
LABEL_28:
    v19 = 0;
    v18 = v61;
    v20 = 1;
    if ( !(_DWORD)v2 )
    {
LABEL_41:
      v26 = *(_DWORD *)(a1 + 152);
      v6 = BugCheckParameter2;
      *(_QWORD *)(a1 + 156) = *(_QWORD *)(a1 + 144);
      *(_DWORD *)(a1 + 164) = v26;
      goto LABEL_42;
    }
LABEL_29:
    v21 = v61;
    v22 = (_BYTE *)(v4 + 57);
    do
    {
      if ( !*v22 && *v21 != 1 )
        PopFxBugCheck(0x620uLL, BugCheckParameter2, v19, 0LL);
      v23 = *v18;
      v24 = 1;
      do
      {
        if ( v24 >= v23 )
          break;
        v25 = v24++ - 1;
        *(_DWORD *)(a1 + 4 * v25 + 144) |= v20;
      }
      while ( v24 <= 3 );
      if ( v52 != -1 && v19 == v52 && v23 > 1 )
      {
        KxAcquireSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 600));
        PopFxReinitializeAccountingInstance(BugCheckParameter2 + 600, 2);
        *(_DWORD *)(BugCheckParameter2 + 612) = *v18;
        *(_QWORD *)(BugCheckParameter2 + 624) = MEMORY[0xFFFFF78000000008];
        *(_BYTE *)(BugCheckParameter2 + 608) = 1;
        KxReleaseSpinLock((volatile signed __int64 *)(BugCheckParameter2 + 600));
        _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 824), 0x810u);
      }
      ++v18;
      v20 *= 2;
      ++v19;
      v22 += 448;
      ++v21;
    }
    while ( v19 < a2 );
    LODWORD(v2) = a2;
    goto LABEL_41;
  }
LABEL_70:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v12 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v42 = ~(unsigned __int16)(-1LL << (v12 + 1));
      v43 = (v42 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v42;
      if ( v43 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  result = v12;
  __writecr8(v12);
  return result;
}
