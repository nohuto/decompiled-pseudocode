/*
 * XREFs of ?DelegateCapture@CTouchProcessor@@AEAA?AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C018C7E4
 * Callers:
 *     ?DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z @ 0x1C018CCA4 (-DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0043D04 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0043EC0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0044A10 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C018CB84 (-DelegateCaptureInt@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z.c)
 */

_OWORD *__fastcall CTouchProcessor::DelegateCapture(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct _KTHREAD *v8; // rcx
  int v9; // edi
  __int64 v10; // r8
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  const struct tagINPUTDEST *v17; // rax
  __int128 v18; // xmm2
  __int128 v19; // xmm7
  __m128i v20; // xmm0
  __int128 v21; // xmm6
  __int128 v22; // xmm5
  __int128 v23; // xmm4
  __int128 v24; // xmm3
  __int128 v25; // xmm1
  int v27; // [rsp+28h] [rbp-E0h]
  _OWORD v28[7]; // [rsp+38h] [rbp-D0h] BYREF
  char v29; // [rsp+A8h] [rbp-60h]
  _BYTE v30[112]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v31[16]; // [rsp+128h] [rbp+20h] BYREF

  memset(v28, 0, sizeof(v28));
  v8 = *(struct _KTHREAD **)(a1 + 48);
  v9 = 0;
  v29 = 0;
  if ( v8 != KeGetCurrentThread() )
  {
    v27 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 10425);
    v8 = *(struct _KTHREAD **)(a1 + 48);
  }
  if ( v8 != KeGetCurrentThread() )
  {
    v27 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 10191);
  }
  v10 = *(_QWORD *)(a3 + 40);
  if ( v10 )
  {
    *(_WORD *)a5 = *(_WORD *)(v10 + 20);
    *(_DWORD *)(a5 + 4) = *(_DWORD *)(v10 + 24);
    v17 = (const struct tagINPUTDEST *)CTouchProcessor::DelegateCaptureInt(a1, v30, v10, 1LL, v27);
    CInputDest::CInputDest((CInputDest *)v31, v17);
    CInputDest::operator=((__int64)v28, v31);
    CInputDest::SetEmpty((CInputDest *)v31);
    v18 = v28[5];
    v19 = v28[0];
    v20 = (__m128i)v28[5];
    v21 = v28[1];
    v22 = v28[2];
    v23 = v28[3];
    v24 = v28[4];
    v25 = v28[6];
    *(_OWORD *)(a5 + 8) = v28[0];
    *(_OWORD *)(a5 + 24) = v21;
    *(_OWORD *)(a5 + 40) = v22;
    *(_OWORD *)(a5 + 56) = v23;
    *(_OWORD *)(a5 + 72) = v24;
    *(__m128i *)(a5 + 88) = v20;
    *(_OWORD *)(a5 + 104) = v25;
    LOBYTE(v9) = _mm_cvtsi128_si32(_mm_srli_si128(v20, 12)) != 0;
    *(_DWORD *)(a5 + 120) = v9;
    *a2 = v19;
    a2[1] = v21;
    a2[2] = v22;
    a2[3] = v23;
    a2[4] = v24;
    a2[5] = v18;
    a2[6] = v25;
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 10433);
    v11 = v28[1];
    *a2 = v28[0];
    v12 = v28[2];
    a2[1] = v11;
    v13 = v28[3];
    a2[2] = v12;
    v14 = v28[4];
    a2[3] = v13;
    v15 = v28[5];
    a2[4] = v14;
    v16 = v28[6];
    a2[5] = v15;
    a2[6] = v16;
  }
  CInputDest::SetEmpty((CInputDest *)v28);
  return a2;
}
