/*
 * XREFs of PsPicoWalkUserStack @ 0x1409B205C
 * Callers:
 *     EtwpTraceStackWalk @ 0x140631A8C (EtwpTraceStackWalk.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PsGetBaseTrapFrame @ 0x14045ECB0 (PsGetBaseTrapFrame.c)
 */

__int64 __fastcall PsPicoWalkUserStack(__int64 a1, unsigned int a2)
{
  _OWORD *BaseTrapFrame; // rcx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  _OWORD *v8; // rax
  __int128 v9; // xmm1
  struct _KTHREAD *v10; // rax
  _BYTE v12[400]; // [rsp+20h] [rbp-1A8h] BYREF

  BaseTrapFrame = (_OWORD *)PsGetBaseTrapFrame((__int64)KeGetCurrentThread(), 0LL);
  result = 0LL;
  if ( (_QWORD)xmmword_140C1BE30 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v7 = 3LL;
    v8 = v12;
    do
    {
      *v8 = *BaseTrapFrame;
      v8[1] = BaseTrapFrame[1];
      v8[2] = BaseTrapFrame[2];
      v8[3] = BaseTrapFrame[3];
      v8[4] = BaseTrapFrame[4];
      v8[5] = BaseTrapFrame[5];
      v8[6] = BaseTrapFrame[6];
      v8 += 8;
      v9 = BaseTrapFrame[7];
      BaseTrapFrame += 8;
      *(v8 - 1) = v9;
      --v7;
    }
    while ( v7 );
    *v8 = *BaseTrapFrame;
    v10 = KeGetCurrentThread();
    if ( v10->SpecialApcDisable++ == -1
      && ($CEA84C04E3712D858E5667A507841A2A *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    return ((__int64 (__fastcall *)(_BYTE *, __int64, _QWORD))xmmword_140C1BE30)(v12, a1, a2);
  }
  return result;
}
