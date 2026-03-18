/*
 * XREFs of ?Initialize@CIVChannel@@QEAAXXZ @ 0x1C01F38F0
 * Callers:
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C00C0C90 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C00C4910 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C01E52E0 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     IVWorkerThread @ 0x1C01EEA6C (IVWorkerThread.c)
 * Callees:
 *     isChildPartition @ 0x1C004FE70 (isChildPartition.c)
 *     isRootPartition @ 0x1C004FEE8 (isRootPartition.c)
 *     ?ivrIVRegisterChildLifetimeNotifications@@YAJPEAU_ETHREAD@@0P6AJPEAX@ZKPEAPEAX@Z @ 0x1C01EE86C (-ivrIVRegisterChildLifetimeNotifications@@YAJPEAU_ETHREAD@@0P6AJPEAX@ZKPEAPEAX@Z.c)
 *     ?Receive@CIVChannel@@AEAAJXZ @ 0x1C01F3A58 (-Receive@CIVChannel@@AEAAJXZ.c)
 *     ?Reconnect@CIVChannel@@AEAAJXZ @ 0x1C01F3B08 (-Reconnect@CIVChannel@@AEAAJXZ.c)
 */

void __fastcall CIVChannel::Initialize(CIVChannel *this)
{
  int (*v2)(void *); // r8
  int v3; // eax
  int (*v4)(void *); // r8

  if ( !isRootPartition() )
  {
    if ( !isChildPartition() )
      goto LABEL_5;
    if ( ivrIVRegisterChildLifetimeNotifications(gpIVThread, KeGetCurrentThread(), v4, *((_DWORD *)this + 2)) < 0 )
      goto LABEL_11;
    if ( *((_BYTE *)this + 44) )
      v3 = CIVChannel::Reconnect(this);
    else
      v3 = CIVChannel::Receive(this);
LABEL_4:
    if ( v3 >= 0 )
      goto LABEL_5;
LABEL_11:
    KeBugCheck(0x164u);
  }
  if ( !*((_BYTE *)this + 44) )
  {
    v3 = ivrIVRegisterChildLifetimeNotifications(gpIVThread, 0LL, v2, *((_DWORD *)this + 2));
    goto LABEL_4;
  }
LABEL_5:
  *((_BYTE *)this + 44) = 1;
}
