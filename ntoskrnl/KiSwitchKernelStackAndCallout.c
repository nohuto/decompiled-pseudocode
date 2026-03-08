/*
 * XREFs of KiSwitchKernelStackAndCallout @ 0x14041AC70
 * Callers:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140317800 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSwitchKernelStackAndCallout(int a1, int a2, __int64 a3, int a4, int a5, int a6, __int64 a7)
{
  char v7; // bl
  unsigned __int64 v8; // r8
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r11
  __int64 v12; // r8
  _BYTE v14[24]; // [rsp+0h] [rbp-18h] BYREF

  v7 = a3;
  v8 = a3 & 0xFFFFFFFFFFFFFFFCuLL;
  CurrentThread = KeGetCurrentThread();
  v10 = v8 + 80;
  *(_QWORD *)(v8 + 32) = v14;
  v11 = v8 - 80;
  *(_QWORD *)(v11 + 40) = &KiSwitchKernelStackContinue;
  *(_QWORD *)(v11 + 64) = v14;
  _disable();
  *(_QWORD *)(v8 + 24) = CurrentThread->StackLimit;
  CurrentThread->InitialStack = (void *)v8;
  __writegsqword(0x1A8u, v8);
  CurrentThread->StackBase = (void *)(v8 + 80);
  v12 = 24576LL;
  if ( (v7 & 2) != 0 )
    v12 = 73728LL;
  if ( (v7 & 1) == 0 )
    v12 = (unsigned int)KeKernelStackSize;
  CurrentThread->StackLimit = (void *volatile)(v10 - v12);
  return KxSwitchKernelStackCallout(a1, a2, v12, a4, a5, a6, a7);
}
