/*
 * XREFs of ?FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z @ 0x1C0017A54
 * Callers:
 *     ?Release@CCompositionFrame@@UEAAJXZ @ 0x1C0017920 (-Release@CCompositionFrame@@UEAAJXZ.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000E098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000E344 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K@Z @ 0x1C0084098 (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K@Z.c)
 */

void __fastcall FlipManagerDwmProcessFlipManagerSignal(struct _LIST_ENTRY *a1, unsigned __int64 a2)
{
  struct CFlipManagerSignal *v4; // rsi
  __int64 v5; // rdi

  while ( a1->Flink != a1 )
  {
    v4 = (struct CFlipManagerSignal *)((__int64)&a1->Flink[-1].Blink & -(__int64)(a1->Flink != 0LL));
    v5 = *((_QWORD *)v4 + 5);
    *((_QWORD *)v4 + 5) = 0LL;
    if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v5 + 40)) >= 0 )
    {
      CFlipManager::ProcessSignal((CFlipManager *)(v5 + 32), v4, a2);
      CPushLock::ReleaseLock((CPushLock *)(v5 + 40));
    }
    ObfDereferenceObject((PVOID)v5);
  }
}
