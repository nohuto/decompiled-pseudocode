/*
 * XREFs of ?IsInputThreadDesktopActive@CMasterInputThread@@QEBA_NXZ @ 0x1C00549D4
 * Callers:
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C0042514 (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1C01F41B0 (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 * Callees:
 *     ?IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ @ 0x1C0054A68 (-IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ.c)
 */

bool __fastcall CMasterInputThread::IsInputThreadDesktopActive(CMasterInputThread *this)
{
  CInputThreadBase *v1; // rsi
  bool v2; // di

  v1 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v1 + 8, 0LL);
  v2 = 0;
  if ( !CInputThreadBase::InputThreadState::IsEmpty((CInputThreadBase *)((char *)v1 + 24)) )
    v2 = *(_QWORD *)(*((_QWORD *)v1 + 4) + 456LL) == (_QWORD)grpdeskRitInput;
  ExReleasePushLockSharedEx((char *)v1 + 8, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
