__int64 __fastcall KiConnectInterrupt(__int64 a1)
{
  __int64 v1; // rdi
  char v2; // bp
  int v3; // edx
  char v4; // r14
  unsigned int v5; // r9d
  unsigned __int8 v7; // al
  _KIDTENTRY64 *v8; // rcx
  __int64 (__fastcall *v9)(); // rax
  char *v10; // r10
  __int64 (__fastcall *v11)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16); // rax
  __int64 v12; // r11
  __int64 v13; // r10
  unsigned __int8 v14; // bl
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  char v21[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 (__fastcall *v22)(); // [rsp+28h] [rbp-40h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(unsigned int *)(a1 + 88);
  v2 = 0;
  v3 = *(unsigned __int8 *)(a1 + 92);
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 96);
  v21[0] = 0;
  PreviousAffinity = 0LL;
  if ( (unsigned int)v1 > 0xFF || (unsigned __int8)v3 > 0xFu || v3 != (unsigned int)v1 >> 4 && (_BYTE)v3 )
    return 3221225711LL;
  if ( v5 >= (unsigned int)KeNumberProcessors_0 )
    return 3221225711LL;
  v7 = *(_BYTE *)(a1 + 93);
  if ( v7 < (unsigned __int8)v3 )
  {
    if ( v7 )
      return 3221225711LL;
  }
  KiAcquireInterruptConnectLock(v5, v21, &PreviousAffinity);
  v8 = &KeGetPcr()->IdtBase[v1];
  LOWORD(v22) = v8->OffsetLow;
  WORD1(v22) = v8->OffsetMiddle;
  HIDWORD(v22) = v8->OffsetHigh;
  if ( !*(_BYTE *)(a1 + 95) )
  {
    v9 = KiIsrThunkShadow;
    if ( !KiKvaShadow )
      v9 = KxUnexpectedInterrupt0;
    if ( v22 == (__int64 (__fastcall *)())((char *)v9 + 8 * v1) )
    {
      v10 = (char *)KeGetCurrentPrcb()->InterruptObject[v1];
      if ( !v10 )
      {
        if ( !*(_BYTE *)(a1 + 93) )
        {
          *(_QWORD *)(a1 + 16) = a1 + 8;
          *(_QWORD *)(a1 + 8) = a1 + 8;
          *(_QWORD *)(a1 + 80) = KiChainedDispatch;
        }
        v4 = 1;
        *(_BYTE *)(a1 + 95) = 1;
        goto LABEL_27;
      }
      if ( (unsigned int)v1 >= 0x30 )
      {
        v2 = 1;
        if ( *(_DWORD *)(a1 + 108) == *((_DWORD *)v10 + 27) )
        {
          if ( *(_BYTE *)(a1 + 100) )
          {
            if ( v10[100] )
            {
              if ( *(__int64 (__fastcall **)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))(a1 + 80) == KiInterruptDispatch )
              {
                v11 = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))*((_QWORD *)v10 + 10);
                if ( v11 == KiChainedDispatch || v11 == KiInterruptDispatch )
                {
                  *(_BYTE *)(a1 + 95) = 1;
                  v4 = 1;
                  if ( *((__int64 (__fastcall **)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))v10
                       + 10) != KiChainedDispatch )
                  {
                    *((_QWORD *)v10 + 10) = KiChainedDispatch;
                    *((_QWORD *)v10 + 2) = v10 + 8;
                    *((_QWORD *)v10 + 1) = v10 + 8;
                  }
                  KiInsertInterruptObjectOrdered(v10, a1);
                  if ( !*(_BYTE *)(v13 + 93) )
                  {
                    if ( *(_BYTE *)(a1 + 93) )
                    {
                      *(_QWORD *)(a1 + 80) = v12;
LABEL_27:
                      KeGetCurrentPrcb()->InterruptObject[v1] = (void *)a1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
  {
    v14 = v21[0];
    if ( v21[0] <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v14 = v21[0];
      v19 = ~(unsigned __int16)(-1LL << (v21[0] + 1));
      v20 = (v19 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v19;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v14 = v21[0];
  }
  __writecr8(v14);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( v4 )
    return v2 != 0 ? 0x127 : 0;
  return 3221225711LL;
}
