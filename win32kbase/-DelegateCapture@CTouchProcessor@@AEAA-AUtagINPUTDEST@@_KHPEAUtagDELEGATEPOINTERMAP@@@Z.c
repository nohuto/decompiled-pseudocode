/*
 * XREFs of ?DelegateCapture@CTouchProcessor@@AEAA?AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01EF640
 * Callers:
 *     ?DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z @ 0x1C01EFAD0 (-DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z.c)
 * Callees:
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0079840 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C007E768 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C01EF9B0 (-DelegateCaptureInt@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z.c)
 *     ?GetPointerCaptureData@CTouchProcessor@@AEAAPEAUCPointerCaptureData@@_K@Z @ 0x1C01F635C (-GetPointerCaptureData@CTouchProcessor@@AEAAPEAUCPointerCaptureData@@_K@Z.c)
 */

_OWORD *__fastcall CTouchProcessor::DelegateCapture(
        struct _KTHREAD **a1,
        _OWORD *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int v8; // edi
  struct CPointerCaptureData *PointerCaptureData; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  const struct tagINPUTDEST *v16; // rax
  __int128 v17; // xmm2
  __int128 v18; // xmm7
  __m128i v19; // xmm0
  __int128 v20; // xmm6
  __int128 v21; // xmm5
  __int128 v22; // xmm4
  __int128 v23; // xmm3
  __int128 v24; // xmm1
  int v26; // [rsp+28h] [rbp-E0h]
  _OWORD v27[7]; // [rsp+38h] [rbp-D0h] BYREF
  char v28; // [rsp+A8h] [rbp-60h]
  _BYTE v29[112]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v30[16]; // [rsp+128h] [rbp+20h] BYREF

  memset(v27, 0, sizeof(v27));
  v8 = 0;
  v28 = 0;
  if ( a1[5] != KeGetCurrentThread() )
  {
    v26 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11145);
  }
  PointerCaptureData = CTouchProcessor::GetPointerCaptureData((CTouchProcessor *)a1, a3);
  if ( PointerCaptureData )
  {
    *(_WORD *)a5 = *((_WORD *)PointerCaptureData + 10);
    *(_DWORD *)(a5 + 4) = *((_DWORD *)PointerCaptureData + 6);
    v16 = (const struct tagINPUTDEST *)CTouchProcessor::DelegateCaptureInt(a1, v29, PointerCaptureData, 1LL, v26);
    CInputDest::CInputDest((CInputDest *)v30, v16);
    CInputDest::operator=((__int64)v27, v30);
    CInputDest::SetEmpty((CInputDest *)v30);
    v17 = v27[5];
    v18 = v27[0];
    v19 = (__m128i)v27[5];
    v20 = v27[1];
    v21 = v27[2];
    v22 = v27[3];
    v23 = v27[4];
    v24 = v27[6];
    *(_OWORD *)(a5 + 8) = v27[0];
    *(_OWORD *)(a5 + 24) = v20;
    *(_OWORD *)(a5 + 40) = v21;
    *(_OWORD *)(a5 + 56) = v22;
    *(_OWORD *)(a5 + 72) = v23;
    *(__m128i *)(a5 + 88) = v19;
    *(_OWORD *)(a5 + 104) = v24;
    LOBYTE(v8) = _mm_cvtsi128_si32(_mm_srli_si128(v19, 12)) != 0;
    *(_DWORD *)(a5 + 120) = v8;
    *a2 = v18;
    a2[1] = v20;
    a2[2] = v21;
    a2[3] = v22;
    a2[4] = v23;
    a2[5] = v17;
    a2[6] = v24;
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11153);
    v10 = v27[1];
    *a2 = v27[0];
    v11 = v27[2];
    a2[1] = v10;
    v12 = v27[3];
    a2[2] = v11;
    v13 = v27[4];
    a2[3] = v12;
    v14 = v27[5];
    a2[4] = v13;
    v15 = v27[6];
    a2[5] = v14;
    a2[6] = v15;
  }
  CInputDest::SetEmpty((CInputDest *)v27);
  return a2;
}
