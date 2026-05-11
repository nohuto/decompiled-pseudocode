/*
 * XREFs of UsbHwFrameCountTimestamp @ 0x1C0003E1C
 * Callers:
 *     USBHwGetClockRatio @ 0x1C0003F84 (USBHwGetClockRatio.c)
 * Callees:
 *     USBHwGetCurrentFrame @ 0x1C0003D68 (USBHwGetCurrentFrame.c)
 *     USBMidiInGetCurrentTime @ 0x1C0003DC0 (USBMidiInGetCurrentTime.c)
 */

__int64 __fastcall UsbHwFrameCountTimestamp(__int64 a1, _DWORD *a2, unsigned __int64 *a3)
{
  char v4; // r12
  unsigned __int64 CurrentTime; // rax
  __int64 v6; // rdi
  KSPIN_LOCK *v7; // rbp
  unsigned __int64 v8; // r13
  KIRQL v9; // si
  int CurrentFrame; // ebx
  int v11; // r15d
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rdi
  unsigned __int64 *v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-58h]
  int v17; // [rsp+80h] [rbp+8h] BYREF
  _DWORD *v18; // [rsp+88h] [rbp+10h]
  unsigned __int64 *v19; // [rsp+90h] [rbp+18h]
  int v20; // [rsp+98h] [rbp+20h] BYREF

  v19 = a3;
  v18 = a2;
  v17 = 0;
  v20 = 0;
  v4 = 0;
  CurrentTime = USBMidiInGetCurrentTime();
  v6 = *(_QWORD *)(a1 + 16);
  v7 = (KSPIN_LOCK *)(a1 + 112);
  v16 = v6;
  v8 = CurrentTime;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 112));
  CurrentFrame = USBHwGetCurrentFrame(v6, &v17);
  if ( CurrentFrame >= 0 )
  {
    v11 = v17;
    do
    {
      if ( v4 )
        break;
      v12 = USBMidiInGetCurrentTime();
      CurrentFrame = USBHwGetCurrentFrame(v6, &v20);
      v13 = USBMidiInGetCurrentTime();
      KeReleaseSpinLock(v7, v9);
      if ( v20 == v11 )
      {
        if ( v13 - v8 > 0x5208 )
          CurrentFrame = -1073741275;
      }
      else
      {
        CurrentFrame = -1073741275;
        if ( v20 == v11 + 1 && v13 - v8 < 0x2904 && v13 - v12 < 0x7D0 )
        {
          CurrentFrame = 0;
          v14 = v19;
          v4 = 1;
          *v18 = v20;
          *v14 = (v13 + v12) >> 1;
        }
      }
      v6 = v16;
      v9 = KeAcquireSpinLockRaiseToDpc(v7);
    }
    while ( CurrentFrame >= 0 );
  }
  KeReleaseSpinLock(v7, v9);
  return (unsigned int)CurrentFrame;
}
