/*
 * XREFs of UsbhReleasePdoWakeIrpLock @ 0x1C0021170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UsbhReleasePdoWakeIrpLock(PIO_CSQ Csq, KIRQL Irql)
{
  _QWORD *ReservePointer; // rax
  __int64 v4; // r8
  __int64 v5; // rcx

  if ( (UsbhLogMask & 0x10) != 0 )
  {
    ReservePointer = Csq[-18].ReservePointer;
    if ( ReservePointer )
    {
      v4 = ReservePointer[8];
      if ( v4 )
      {
        v5 = *(_QWORD *)(v4 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v4 + 880)) & *(_DWORD *)(v4 + 884));
        *(_DWORD *)v5 = 759986039;
        *(_QWORD *)(v5 + 8) = 0LL;
        *(_QWORD *)(v5 + 16) = 0LL;
        *(_QWORD *)(v5 + 24) = 0LL;
      }
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&Csq[1].Type, Irql);
}
