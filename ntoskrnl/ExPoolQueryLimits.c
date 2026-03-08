/*
 * XREFs of ExPoolQueryLimits @ 0x140604FE0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlULongLongMult @ 0x14024789C (RtlULongLongMult.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     ExSystemExceptionFilter @ 0x140861790 (ExSystemExceptionFilter.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExPoolQueryLimits(void *Src, size_t Size, void *a3, size_t a4, KPROCESSOR_MODE PreviousMode)
{
  _DWORD *v9; // rdi
  NTSTATUS v10; // ebx
  _DWORD *Pool2; // rax
  int v12; // eax
  ULONGLONG v13; // rax
  __int64 i; // r10
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r11
  _QWORD *v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // rdx
  _QWORD *v22; // r8
  __int64 v23; // r11
  unsigned __int8 OldIrql; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v28; // eax
  bool v29; // zf
  ULONGLONG pullResult[3]; // [rsp+28h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-38h] BYREF

  pullResult[0] = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = 0LL;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
  {
    v10 = -1073741727;
    goto LABEL_37;
  }
  if ( Size < 0x38 )
    goto LABEL_5;
  if ( Size > a4 )
    goto LABEL_7;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, Size, 1819242320LL);
  v9 = Pool2;
  pullResult[1] = (ULONGLONG)Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, Src, Size);
    if ( *v9 != 1 || (v12 = v9[1]) == 0 )
    {
LABEL_7:
      v10 = -1073741811;
      goto LABEL_37;
    }
    v10 = RtlULongLongMult((unsigned int)(v12 - 1), 0x30uLL, pullResult);
    if ( v10 >= 0 )
    {
      v13 = pullResult[0] + 56;
      pullResult[0] = v13;
      if ( v13 >= 0x38 )
      {
        if ( v13 > Size )
        {
LABEL_5:
          v10 = -1073741820;
          goto LABEL_37;
        }
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        for ( i = 0LL; (unsigned int)i < v9[1]; i = (unsigned int)(i + 1) )
        {
          v15 = 12 * i;
          v16 = (unsigned int)v9[12 * i + 2];
          v17 = v16 & (-1LL << (dword_140CF7E04 & 0x1F));
          if ( !((unsigned int)dword_140CF7E04 >> 5) )
            goto LABEL_24;
          pullResult[2] = v16 & (-1LL << (dword_140CF7E04 & 0x1F));
          v18 = (char *)qword_140CF7E08
              + 8
              * ((37
                * (BYTE6(v17)
                 + 37
                 * (BYTE5(v17)
                  + 37
                  * (BYTE4(v17)
                   + 37 * (BYTE3(v17) + 37 * (BYTE2(v17) + 37 * (BYTE1(v17) + 37 * ((unsigned __int8)v17 + 11623883)))))))
                + HIBYTE(v17)) & (((unsigned int)dword_140CF7E04 >> 5) - 1));
          while ( 1 )
          {
            v19 = (_QWORD *)*v18;
            v18 = v19;
            if ( ((unsigned __int8)v19 & 1) != 0 )
              break;
            if ( v17 == ((-1LL << (dword_140CF7E04 & 0x1F)) & v19[1]) )
              goto LABEL_23;
          }
          v19 = 0LL;
LABEL_23:
          if ( v19 )
          {
            v21 = &v9[v15 + 6];
            v22 = v19 + 3;
            v23 = 2LL;
            do
            {
              *(v21 - 1) = *(v22 - 1);
              *v21 = *v22;
              v22 += 3;
              v21 += 2;
              --v23;
            }
            while ( v23 );
            v20 = v19[8];
          }
          else
          {
LABEL_24:
            v20 = 0LL;
            *(_OWORD *)&v9[v15 + 4] = 0LL;
            *(_OWORD *)&v9[v15 + 8] = 0LL;
          }
          *(_QWORD *)&v9[v15 + 12] = v20;
        }
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v28 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v29 = (v28 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v28;
            if ( v29 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(OldIrql);
        memmove(a3, v9, Size);
        v10 = 0;
      }
      else
      {
        v10 = -1073741675;
      }
    }
  }
  else
  {
    v10 = -1073741670;
  }
LABEL_37:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)v10;
}
