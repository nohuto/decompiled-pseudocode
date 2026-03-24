/*
 * XREFs of PsPicoWalkUserStack @ 0x14090BA3C
 * Callers:
 *     EtwpTraceStackWalk @ 0x1405A7074 (EtwpTraceStackWalk.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     PsGetBaseTrapFrame @ 0x140581260 (PsGetBaseTrapFrame.c)
 */

__int64 __fastcall PsPicoWalkUserStack(__int64 a1, unsigned int a2)
{
  _OWORD *BaseTrapFrame; // rcx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  _OWORD *v7; // rax
  __int64 v8; // r9
  __int128 v9; // xmm1
  _BYTE v10[400]; // [rsp+20h] [rbp-1A8h] BYREF

  BaseTrapFrame = (_OWORD *)PsGetBaseTrapFrame((__int64)KeGetCurrentThread(), 0LL);
  result = 0LL;
  if ( (_QWORD)xmmword_140C1E070 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v7 = v10;
    v8 = 3LL;
    do
    {
      *v7 = *BaseTrapFrame;
      v7[1] = BaseTrapFrame[1];
      v7[2] = BaseTrapFrame[2];
      v7[3] = BaseTrapFrame[3];
      v7[4] = BaseTrapFrame[4];
      v7[5] = BaseTrapFrame[5];
      v7[6] = BaseTrapFrame[6];
      v7 += 8;
      v9 = BaseTrapFrame[7];
      BaseTrapFrame += 8;
      *(v7 - 1) = v9;
      --v8;
    }
    while ( v8 );
    *v7 = *BaseTrapFrame;
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    return ((__int64 (__fastcall *)(_BYTE *, __int64, _QWORD))xmmword_140C1E070)(v10, a1, a2);
  }
  return result;
}
