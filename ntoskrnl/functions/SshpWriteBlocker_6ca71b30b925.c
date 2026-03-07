int __fastcall SshpWriteBlocker(PKSPIN_LOCK SpinLock, PVOID *a2, unsigned int *a3)
{
  KSPIN_LOCK v6; // rdi
  unsigned __int64 v7; // r15
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  int v23; // r13d
  unsigned int v24; // r11d
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  bool v29; // zf
  unsigned __int64 Paged; // rax
  unsigned int *v31; // rax
  unsigned int v32; // ebx
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  const EVENT_DESCRIPTOR *v34; // r15
  int v35; // ecx
  __int64 *v36; // rdx
  unsigned int v37; // ecx
  unsigned int *v38; // r9
  ULONG UserDataCount; // r10d
  __int64 v40; // rax
  _DWORD *v41; // rcx
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  char *v44; // rdx
  int v45; // eax
  __int64 v46; // rax
  char *v47; // r14
  __int64 v48; // rax
  __int64 v49; // rcx
  unsigned int *v50; // r8
  __int64 v51; // rcx
  unsigned int v52; // edx
  _DWORD *v53; // rdx
  const wchar_t *v54; // r8
  const wchar_t *v55; // r9
  int v56; // eax
  const wchar_t *v57; // rcx
  int v58; // eax
  int v59; // eax
  char v61; // [rsp+40h] [rbp-C0h] BYREF
  int v62; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v63; // [rsp+48h] [rbp-B8h] BYREF
  int v64; // [rsp+4Ch] [rbp-B4h] BYREF
  int v65; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v66[8]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v67[8]; // [rsp+E0h] [rbp-20h] BYREF

  memset(v66, 0, sizeof(v66));
  v64 = 0;
  memset(v67, 0, sizeof(v67));
  v6 = SpinLock[37];
  v61 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  if ( (SpinLock[1] & 2) != 0 )
    SshpStopBlockerAccounting((__int64)SpinLock, MEMORY[0xFFFFF78000000008], 2);
  v8 = *((_OWORD *)SpinLock + 3);
  v66[0] = *((_OWORD *)SpinLock + 2);
  v9 = *((_OWORD *)SpinLock + 4);
  v66[1] = v8;
  v10 = *((_OWORD *)SpinLock + 5);
  v66[2] = v9;
  v11 = *((_OWORD *)SpinLock + 6);
  v66[3] = v10;
  v12 = *((_OWORD *)SpinLock + 7);
  v66[4] = v11;
  v13 = *((_OWORD *)SpinLock + 8);
  v66[5] = v12;
  v14 = *((_OWORD *)SpinLock + 9);
  v66[6] = v13;
  v15 = *((_OWORD *)SpinLock + 10);
  v66[7] = v14;
  v16 = *((_OWORD *)SpinLock + 11);
  v67[0] = v15;
  v17 = *((_OWORD *)SpinLock + 12);
  v67[1] = v16;
  v18 = *((_OWORD *)SpinLock + 13);
  v67[2] = v17;
  v19 = *((_OWORD *)SpinLock + 14);
  v67[3] = v18;
  v20 = *((_OWORD *)SpinLock + 15);
  v67[4] = v19;
  v21 = *((_OWORD *)SpinLock + 16);
  v67[5] = v20;
  v22 = *((_OWORD *)SpinLock + 17);
  v67[6] = v21;
  v67[7] = v22;
  memset(SpinLock + 4, 0, 0x80uLL);
  memset(SpinLock + 20, 0, 0x80uLL);
  v23 = SpinLock[1] & 4;
  KxReleaseSpinLock((volatile signed __int64 *)SpinLock);
  v24 = 0;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v29 = (v28 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v28;
      if ( v29 )
      {
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        v24 = 0;
      }
    }
  }
  __writecr8(v7);
  Paged = SshpSessionGuid - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
  if ( (_QWORD)SshpSessionGuid == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
    Paged = *((_QWORD *)&SshpSessionGuid + 1) - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
  if ( !Paged && SshpTraceHandleRegistered )
  {
    if ( !v23 )
      goto LABEL_19;
    v31 = *(unsigned int **)(v6 + 96);
    if ( !v31 )
      goto LABEL_19;
    Paged = 2LL * *v31;
    if ( Paged > 0xFFFFFFFF )
      return Paged;
    v32 = Paged + 10;
    if ( (int)Paged + 10 < (unsigned int)Paged )
      return Paged;
    if ( v32 <= 0x14 )
LABEL_19:
      v32 = 20;
    if ( v32 <= *a3 )
      goto LABEL_26;
    if ( *a2 )
    {
      ExFreePoolWithTag(*a2, 0x70687373u);
      *a2 = 0LL;
      *a3 = 0;
    }
    Paged = 16LL * v32;
    if ( Paged <= 0xFFFFFFFF )
    {
      Paged = SSHSupportAllocatePaged((unsigned int)Paged, 1885893491LL);
      v24 = 0;
      *a2 = (PVOID)Paged;
      if ( Paged )
      {
        *a3 = v32;
LABEL_26:
        UserData = (struct _EVENT_DATA_DESCRIPTOR *)*a2;
        if ( v23 )
        {
          if ( *(_QWORD *)(v6 + 96) )
          {
            v34 = (const EVENT_DESCRIPTOR *)SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DETAILED;
            v35 = 8;
            v36 = &SshpSessionId;
          }
          else
          {
            v34 = &SLEEPSTUDY_EVT_SCENARIO_BLOCKER;
            v61 = SshpSessionId;
            v35 = 1;
            v36 = (__int64 *)&v61;
          }
          UserData->Ptr = (ULONGLONG)v36;
          UserData->Size = v35;
          UserData->Reserved = 0;
          UserData[1].Ptr = v6 + 48;
          *(_QWORD *)&UserData[1].Size = 16LL;
          v64 = *(unsigned __int16 *)(v6 + 80) >> 1;
          UserData[2].Ptr = (ULONGLONG)&v64;
          *(_QWORD *)&UserData[2].Size = 4LL;
          v37 = *(unsigned __int16 *)(v6 + 80);
          UserData[3].Ptr = *(_QWORD *)(v6 + 88);
          UserData[4].Ptr = v6 + 64;
          UserData[5].Ptr = (ULONGLONG)v66;
          *(_QWORD *)&UserData[3].Size = v37;
          *(_QWORD *)&UserData[4].Size = 16LL;
          *(_QWORD *)&UserData[5].Size = 8LL;
          v38 = *(unsigned int **)(v6 + 96);
          if ( v38 )
          {
            v40 = *v38;
            v41 = v38 + 2;
            *(_QWORD *)&UserData[6].Size = 2LL;
            v42 = 16LL;
            UserData[7].Ptr = (ULONGLONG)(v38 + 2);
            UserDataCount = 10;
            *(_QWORD *)&UserData[7].Size = 4LL;
            v43 = 4 * v40 + 12;
            if ( v43 > 0x10 )
              v42 = v43;
            UserData[6].Ptr = (ULONGLONG)(v38 + 1);
            v44 = (char *)v38 + v42;
            v45 = 2 * *v41;
            UserData[8].Ptr = (ULONGLONG)v44;
            UserData[8].Size = v45;
            UserData[8].Reserved = 0;
            v46 = (unsigned int)*v41;
            UserData[9].Ptr = (ULONGLONG)v38;
            *(_QWORD *)&UserData[9].Size = 4LL;
            v47 = &v44[2 * v46];
            if ( *v38 )
            {
              do
              {
                v48 = v24++;
                v49 = UserDataCount;
                v50 = &v38[v48 + 3];
                UserData[v49].Ptr = (ULONGLONG)v50;
                *(_QWORD *)&UserData[v49].Size = 4LL;
                v51 = UserDataCount + 1;
                v52 = 2 * *v50;
                UserDataCount += 2;
                UserData[v51].Ptr = (ULONGLONG)v47;
                *(_QWORD *)&UserData[v51].Size = v52;
                v47 += 2 * *v50;
              }
              while ( v24 < *v38 );
            }
          }
          else
          {
            *(_QWORD *)&UserData[6].Size = 8LL;
            UserDataCount = 7;
            UserData[6].Ptr = (ULONGLONG)&SshpSessionId;
          }
          EtwWriteEx(SshpTraceHandle, v34, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
        }
        v53 = *(_DWORD **)(v6 + 104);
        if ( v53 )
        {
          v54 = (const wchar_t *)(v53 + 3);
          v63 = *v53;
          v62 = v53[1];
          v55 = (const wchar_t *)v53 + v63 + 6;
          v56 = v53[2];
          v57 = &v55[v62];
        }
        else
        {
          v54 = &word_14001ECF4;
          v63 = 0;
          v55 = &word_14001ECF4;
          v62 = 0;
          v57 = &word_14001ECF4;
          v56 = 0;
        }
        v65 = v56;
        UserData->Ptr = (ULONGLONG)&SshpSessionId;
        *(_QWORD *)&UserData->Size = 8LL;
        UserData[1].Ptr = v6 + 64;
        UserData[2].Ptr = v6 + 48;
        UserData[3].Ptr = (ULONGLONG)v66;
        UserData[4].Ptr = (ULONGLONG)&v66[5] + 8;
        UserData[5].Ptr = (ULONGLONG)v66 + 8;
        UserData[6].Ptr = (ULONGLONG)&v66[6] + 12;
        UserData[7].Ptr = (ULONGLONG)&v66[3];
        UserData[8].Ptr = (ULONGLONG)v67;
        UserData[9].Ptr = (ULONGLONG)&v67[5] + 8;
        UserData[10].Ptr = (ULONGLONG)v67 + 8;
        UserData[11].Ptr = (ULONGLONG)&v67[6] + 12;
        UserData[12].Ptr = (ULONGLONG)&v67[3];
        UserData[13].Ptr = v6 + 40;
        UserData[14].Ptr = (ULONGLONG)&v62;
        *(_QWORD *)&UserData[1].Size = 16LL;
        *(_QWORD *)&UserData[2].Size = 16LL;
        *(_QWORD *)&UserData[3].Size = 8LL;
        *(_QWORD *)&UserData[4].Size = 20LL;
        *(_QWORD *)&UserData[5].Size = 40LL;
        *(_QWORD *)&UserData[6].Size = 20LL;
        *(_QWORD *)&UserData[7].Size = 40LL;
        *(_QWORD *)&UserData[8].Size = 8LL;
        *(_QWORD *)&UserData[9].Size = 20LL;
        *(_QWORD *)&UserData[10].Size = 40LL;
        *(_QWORD *)&UserData[11].Size = 20LL;
        *(_QWORD *)&UserData[12].Size = 40LL;
        *(_QWORD *)&UserData[13].Size = 4LL;
        *(_QWORD *)&UserData[14].Size = 4LL;
        v58 = 2 * v62;
        UserData[15].Ptr = (ULONGLONG)v55;
        UserData[15].Size = v58;
        UserData[15].Reserved = 0;
        UserData[16].Ptr = (ULONGLONG)&v63;
        *(_QWORD *)&UserData[16].Size = 4LL;
        v59 = 2 * v63;
        UserData[17].Ptr = (ULONGLONG)v54;
        UserData[17].Size = v59;
        UserData[17].Reserved = 0;
        UserData[18].Ptr = (ULONGLONG)&v65;
        *(_QWORD *)&UserData[18].Size = 4LL;
        UserData[19].Size = 2 * v65;
        UserData[19].Ptr = (ULONGLONG)v57;
        UserData[19].Reserved = 0;
        LODWORD(Paged) = EtwWriteEx(
                           SshpTraceHandle,
                           &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_VERBOSE_ACCOUNTING,
                           0LL,
                           0,
                           0LL,
                           0LL,
                           0x14u,
                           UserData);
      }
    }
  }
  return Paged;
}
