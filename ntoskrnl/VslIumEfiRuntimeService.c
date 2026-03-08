/*
 * XREFs of VslIumEfiRuntimeService @ 0x140549420
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     VslpLockPagesForTransfer @ 0x1403C8E74 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1403C90EC (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall VslIumEfiRuntimeService(unsigned int a1, struct _MDL *a2, unsigned int a3, _OWORD *a4)
{
  __int64 v5; // rsi
  unsigned __int64 result; // rax
  __int128 v9; // xmm1
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v12; // rdx
  int v13; // esi
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v16; // r8
  int v17; // eax
  bool v18; // zf
  __int128 v19; // xmm1
  unsigned __int64 v20; // rbx
  __int64 *v21[10]; // [rsp+30h] [rbp-99h] BYREF
  _QWORD v22[14]; // [rsp+80h] [rbp-49h] BYREF

  v5 = a1;
  memset(v22, 0, 0x68uLL);
  memset(v21, 0, 0x48uLL);
  if ( a2 )
  {
    LODWORD(result) = VslpLockPagesForTransfer((__int64)v21, a2, a3, 2, 1u);
    if ( (result & 0x80000000) != 0LL )
      return (int)result;
  }
  v22[2] = v21[0];
  v22[3] = v21[7];
  v22[1] = v5;
  if ( a4 )
  {
    v9 = a4[1];
    *(_OWORD *)&v22[5] = *a4;
    *(_OWORD *)&v22[7] = v9;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v12) = 0x8000;
    else
      v12 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v12;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(&VslpIumEfiLock);
  v13 = VslpEnterIumSecureMode(2u, 250, 0, (__int64)v22);
  ExReleaseSpinLockExclusiveFromDpcLevel(&VslpIumEfiLock);
  if ( KiIrqlFlags )
  {
    v14 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v16 = CurrentPrcb->SchedulerAssist;
      v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v18 = (v17 & v16[5]) == 0;
      v16[5] &= v17;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  if ( a4 )
  {
    v19 = *(_OWORD *)&v22[7];
    *a4 = *(_OWORD *)&v22[5];
    a4[1] = v19;
  }
  if ( v13 == -1073741811 )
  {
    v20 = 0x8000000000000002uLL;
  }
  else if ( v13 == -1073741801 )
  {
    v20 = 0x8000000000000009uLL;
  }
  else
  {
    v20 = v22[4];
    if ( v13 )
      v20 = 0x8000000000000003uLL;
  }
  if ( v21[0] )
    VslpUnlockPagesForTransfer(v21);
  return v20;
}
