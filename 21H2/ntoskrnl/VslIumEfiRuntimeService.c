/*
 * XREFs of VslIumEfiRuntimeService @ 0x1404FCB20
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     VslpUnlockPagesForTransfer @ 0x1403941C4 (VslpUnlockPagesForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x140394218 (VslpLockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 */

unsigned __int64 __fastcall VslIumEfiRuntimeService(unsigned int a1, struct _MDL *a2, ULONG a3, _OWORD *a4)
{
  __int64 v5; // rsi
  unsigned __int64 result; // rax
  __int128 v9; // xmm1
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  NTSTATUS v12; // esi
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf
  __int128 v18; // xmm1
  unsigned __int64 v19; // rbx
  __int64 *v20[10]; // [rsp+30h] [rbp-99h] BYREF
  _QWORD v21[14]; // [rsp+80h] [rbp-49h] BYREF

  v5 = a1;
  memset(v21, 0, 0x68uLL);
  memset(v20, 0, 0x48uLL);
  if ( a2 )
  {
    LODWORD(result) = VslpLockPagesForTransfer((__int64)v20, a2, a3, 2, 1u);
    if ( (result & 0x80000000) != 0LL )
      return (int)result;
  }
  v21[2] = v20[0];
  v21[3] = v20[7];
  v21[1] = v5;
  if ( a4 )
  {
    v9 = a4[1];
    *(_OWORD *)&v21[5] = *a4;
    *(_OWORD *)&v21[7] = v9;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(&VslpIumEfiLock);
  v12 = VslpEnterIumSecureMode(2u, 250, 0, (__int64)v21);
  ExReleaseSpinLockExclusiveFromDpcLevel(&VslpIumEfiLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v13 = KeGetCurrentIrql();
      if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v17 = (v16 & v15[5]) == 0;
        v15[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( a4 )
  {
    v18 = *(_OWORD *)&v21[7];
    *a4 = *(_OWORD *)&v21[5];
    a4[1] = v18;
  }
  if ( v12 == -1073741811 )
  {
    v19 = 0x8000000000000002uLL;
  }
  else if ( v12 == -1073741801 )
  {
    v19 = 0x8000000000000009uLL;
  }
  else
  {
    v19 = v21[4];
    if ( v12 )
      v19 = 0x8000000000000003uLL;
  }
  if ( v20[0] )
    VslpUnlockPagesForTransfer(v20);
  return v19;
}
