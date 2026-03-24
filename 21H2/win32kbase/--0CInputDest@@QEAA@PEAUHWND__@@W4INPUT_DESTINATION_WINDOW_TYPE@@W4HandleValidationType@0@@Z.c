/*
 * XREFs of ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01829F0
 * Callers:
 *     NtUserReportInertia @ 0x1C0004160 (NtUserReportInertia.c)
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C0188B24 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0198DC0 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0199310 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C019BC9C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C01A8D64 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1C01A9010 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 * Callees:
 *     HMAssignmentLock @ 0x1C0030310 (HMAssignmentLock.c)
 *     ValidateHwndEx @ 0x1C0038620 (ValidateHwndEx.c)
 *     HMValidateHandleNoSecure @ 0x1C00454C0 (HMValidateHandleNoSecure.c)
 *     INPUTDEST_FROM_PWND @ 0x1C009E550 (INPUTDEST_FROM_PWND.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     ValidateHbwnd @ 0x1C01152C0 (ValidateHbwnd.c)
 *     INPUTDEST_FROM_BASEWND @ 0x1C0183164 (INPUTDEST_FROM_BASEWND.c)
 */

__m128i *__fastcall CInputDest::CInputDest(__m128i *a1, unsigned __int64 a2, int a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rax
  __m128i *v10; // rax
  __m128i v11; // xmm7
  __m128i v12; // xmm8
  __m128i v13; // xmm9
  __m128i v14; // xmm10
  __m128i v15; // xmm11
  __m128i v16; // xmm6
  __m128i v17; // xmm12
  __int64 v18; // rax
  __m128i *result; // rax
  __int128 v20; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v21; // [rsp+30h] [rbp-D8h]
  _OWORD v22[14]; // [rsp+38h] [rbp-D0h] BYREF

  memset(a1, 0, 0x70uLL);
  a1[7].m128i_i8[0] = 0;
  memset(v22, 0, 0x70uLL);
  if ( a3 == 2 )
  {
    if ( a4 == 2 )
    {
      v9 = ValidateHwndEx(a2, 1, 0);
    }
    else
    {
      if ( a4 != 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 252);
      v9 = HMValidateHandleNoSecure(a2, 1);
    }
    v10 = (__m128i *)INPUTDEST_FROM_PWND(v22, v9);
LABEL_8:
    v11 = *v10;
    v12 = v10[1];
    v13 = v10[2];
    v14 = v10[3];
    v15 = v10[4];
    v16 = v10[5];
    v17 = v10[6];
    goto LABEL_17;
  }
  if ( a3 == 1 )
  {
    if ( a4 == 2 )
    {
      v18 = ValidateHbwnd(a2, v8);
    }
    else
    {
      if ( a4 != 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 266);
      v18 = HMValidateHandleNoSecure(a2, 23);
    }
    v10 = (__m128i *)INPUTDEST_FROM_BASEWND(v22, v18);
    goto LABEL_8;
  }
  v17 = (__m128i)v22[6];
  v16 = (__m128i)v22[5];
  v15 = (__m128i)v22[4];
  v14 = (__m128i)v22[3];
  v13 = (__m128i)v22[2];
  v12 = (__m128i)v22[1];
  v11 = (__m128i)v22[0];
LABEL_17:
  if ( _mm_cvtsi128_si32(_mm_srli_si128(v16, 12)) )
  {
    if ( !v16.m128i_i64[0] )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 278);
    v21 = v16.m128i_i64[0];
    *((_QWORD *)&v20 + 1) = a1 + 5;
    HMAssignmentLock((__int64 **)&v20 + 1);
  }
  result = a1;
  *a1 = v11;
  a1[1] = v12;
  a1[2] = v13;
  a1[3] = v14;
  a1[4] = v15;
  a1[5] = v16;
  a1[6] = v17;
  return result;
}
