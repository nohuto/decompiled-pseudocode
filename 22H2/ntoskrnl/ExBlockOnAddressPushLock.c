/*
 * XREFs of ExBlockOnAddressPushLock @ 0x1402F4BA0
 * Callers:
 *     CmpWaitForLateUnloadWorker @ 0x140347F08 (CmpWaitForLateUnloadWorker.c)
 *     RtlpCSparseBitmapWaitOnAddress @ 0x140595750 (RtlpCSparseBitmapWaitOnAddress.c)
 *     MiLockImageSection @ 0x14063C7FC (MiLockImageSection.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140665448 (ExpBlockOnLockedHandleEntry.c)
 *     CmpRollbackLightWeightTransaction @ 0x1406A5420 (CmpRollbackLightWeightTransaction.c)
 *     CmLoadAppKey @ 0x1406E8CDC (CmLoadAppKey.c)
 *     CmpTransSearchAddTrans @ 0x14076644C (CmpTransSearchAddTrans.c)
 *     PopBatteryUpdateCurrentState @ 0x14078E378 (PopBatteryUpdateCurrentState.c)
 *     RtlUpdateSwapReference @ 0x1407CABDC (RtlUpdateSwapReference.c)
 *     CmUnRegisterCallback @ 0x140869C60 (CmUnRegisterCallback.c)
 *     CmShutdownSystem @ 0x14086B948 (CmShutdownSystem.c)
 *     PsSetVmProcessorHostProcess @ 0x140909DF8 (PsSetVmProcessorHostProcess.c)
 * Callees:
 *     ExBlockPushLock @ 0x1402F4C60 (ExBlockPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1402F4C80 (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x1402F4D68 (ExpUnblockPushLock.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall ExBlockOnAddressPushLock(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned __int64 a4, __int64 a5)
{
  int v9; // ebx
  bool v10; // zf
  int v12; // ebx
  int v13; // ebx
  _BYTE v14[64]; // [rsp+20h] [rbp-48h] BYREF

  memset(v14, 0, sizeof(v14));
  ExBlockPushLock(a1, v14);
  if ( a4 > 8 )
    goto LABEL_10;
  v9 = a4 - 1;
  if ( v9 )
  {
    v12 = v9 - 1;
    if ( v12 )
    {
      v13 = v12 - 2;
      if ( v13 )
      {
        if ( v13 != 4 )
          goto LABEL_10;
        v10 = *a2 == *a3;
      }
      else
      {
        v10 = *(_DWORD *)a2 == *(_DWORD *)a3;
      }
    }
    else
    {
      v10 = *(_WORD *)a2 == *(_WORD *)a3;
    }
  }
  else
  {
    v10 = *(_BYTE *)a2 == *(_BYTE *)a3;
  }
  if ( v10 )
    return ExTimedWaitForUnblockPushLock(a1, v14, a5);
LABEL_10:
  ExpUnblockPushLock(a1, v14, 0LL);
  return 0LL;
}
