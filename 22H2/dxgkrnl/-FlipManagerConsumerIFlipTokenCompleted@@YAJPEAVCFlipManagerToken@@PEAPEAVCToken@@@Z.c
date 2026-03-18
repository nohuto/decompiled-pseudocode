/*
 * XREFs of ?FlipManagerConsumerIFlipTokenCompleted@@YAJPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z @ 0x1C0081CF4
 * Callers:
 *     ?Discard@CFlipManagerToken@@UEAAXXZ @ 0x1C0076DC0 (-Discard@CFlipManagerToken@@UEAAXXZ.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0013814 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0013858 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z @ 0x1C0083570 (-ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z.c)
 */

__int64 __fastcall FlipManagerConsumerIFlipTokenCompleted(struct CFlipManagerToken *a1, struct CToken **a2)
{
  __int64 v2; // rsi
  int v5; // ebx

  v2 = *((_QWORD *)a1 + 9);
  v5 = CPushLock::AcquireLockExclusive((CPushLock *)(v2 + 40));
  if ( v5 >= 0 )
  {
    CFlipManager::ConsumerIFlipTokenCompleted((CFlipManager *)(v2 + 32), a1, a2);
    CPushLock::ReleaseLock((CPushLock *)(v2 + 40));
  }
  return (unsigned int)v5;
}
