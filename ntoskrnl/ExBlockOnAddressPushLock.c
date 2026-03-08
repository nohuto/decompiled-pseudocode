/*
 * XREFs of ExBlockOnAddressPushLock @ 0x1402BF8C0
 * Callers:
 *     CmpWaitForLateUnloadWorker @ 0x1402BF844 (CmpWaitForLateUnloadWorker.c)
 *     RtlpCSparseBitmapWaitOnAddress @ 0x1405B50C0 (RtlpCSparseBitmapWaitOnAddress.c)
 *     MiLockImageSection @ 0x1406A7B00 (MiLockImageSection.c)
 *     CmpTransSearchAddTrans @ 0x1406B570C (CmpTransSearchAddTrans.c)
 *     CmLoadAppKey @ 0x1406BDA5C (CmLoadAppKey.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140749B5C (ExpBlockOnLockedHandleEntry.c)
 *     CmpRollbackLightWeightTransaction @ 0x140781EE0 (CmpRollbackLightWeightTransaction.c)
 *     RtlUpdateSwapReference @ 0x140818560 (RtlUpdateSwapReference.c)
 *     PopBatteryUpdateCurrentState @ 0x140870E0C (PopBatteryUpdateCurrentState.c)
 *     PsSetVmProcessorHostProcess @ 0x1409ADB18 (PsSetVmProcessorHostProcess.c)
 *     CmUnRegisterCallback @ 0x140A0C560 (CmUnRegisterCallback.c)
 * Callees:
 *     ExBlockPushLock @ 0x1402BF980 (ExBlockPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1402BF9A0 (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x1402BFD34 (ExpUnblockPushLock.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall ExBlockOnAddressPushLock(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned __int64 a4, __int64 a5)
{
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  bool v12; // zf
  _BYTE v14[64]; // [rsp+20h] [rbp-48h] BYREF

  memset(v14, 0, sizeof(v14));
  ExBlockPushLock(a1, v14);
  if ( a4 > 8 )
    goto LABEL_8;
  v9 = a4 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 2;
      if ( v11 )
      {
        if ( v11 != 4 )
          goto LABEL_8;
        v12 = *a2 == *a3;
      }
      else
      {
        v12 = *(_DWORD *)a2 == *(_DWORD *)a3;
      }
    }
    else
    {
      v12 = *(_WORD *)a2 == *(_WORD *)a3;
    }
  }
  else
  {
    v12 = *(_BYTE *)a2 == *(_BYTE *)a3;
  }
  if ( v12 )
    return ExTimedWaitForUnblockPushLock(a1, v14, a5);
LABEL_8:
  ExpUnblockPushLock(a1, v14, 0LL);
  return 0LL;
}
