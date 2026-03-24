/*
 * XREFs of ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@Z @ 0x1C0002358
 * Callers:
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C00441A4 (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA-AVCInputDest@@AEBU_InputHitTestRes.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C019BC9C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C00025B0 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C005CCF8 (-QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITIO.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0082B80 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     ?GetBaseWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C01FAF60 (-GetBaseWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@.c)
 */

bool __fastcall CSpatialProcessor::ResolveInputSinkToINPUTDEST(
        CSpatialProcessor *this,
        void *a2,
        int a3,
        const struct CONTAINER_ID *a4,
        struct tagINPUTDEST *a5)
{
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  _QWORD *v14; // rbx
  unsigned int v15; // esi
  _QWORD *v16; // rcx
  int v17; // edx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  PVOID Object[2]; // [rsp+30h] [rbp-91h] BYREF
  _OWORD v28[7]; // [rsp+40h] [rbp-81h] BYREF
  __int128 v29; // [rsp+B0h] [rbp-11h] BYREF
  __int128 v30; // [rsp+C0h] [rbp-1h]
  __int128 v31; // [rsp+D0h] [rbp+Fh]
  __int64 v32; // [rsp+E0h] [rbp+1Fh]

  memset(v28, 0, sizeof(v28));
  v8 = v28[1];
  *(_OWORD *)a5 = v28[0];
  v9 = v28[2];
  *((_OWORD *)a5 + 1) = v8;
  v10 = v28[3];
  *((_OWORD *)a5 + 2) = v9;
  v11 = v28[4];
  *((_OWORD *)a5 + 3) = v10;
  v12 = v28[5];
  *((_OWORD *)a5 + 4) = v11;
  v13 = v28[6];
  *((_OWORD *)a5 + 5) = v12;
  *((_OWORD *)a5 + 6) = v13;
  Object[0] = 0LL;
  if ( (int)CompositionInputObject::ResolveHandle(a2, 1u, 1, (struct CompositionInputObject **)Object) >= 0 )
  {
    v14 = Object[0];
    if ( a3 == 1 )
    {
LABEL_6:
      v15 = 1;
      goto LABEL_7;
    }
    if ( a3 != 2 )
    {
      if ( a3 == 3 )
      {
        v15 = 4;
        goto LABEL_7;
      }
      if ( a3 == 4 )
        goto LABEL_6;
      if ( a3 != 5 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d((_DWORD)gBaseLog, 2, 5, 12, (__int64)&WPP_316427a6418039b01983fa5fffe52075_Traceguids, a3);
        goto LABEL_18;
      }
    }
    v15 = 3;
LABEL_7:
    memset(v28, 0, sizeof(v28));
    v32 = 0LL;
    v29 = 0LL;
    v30 = 0LL;
    v31 = 0LL;
    CompositionInputObject::QueryInputQueueForInputType(Object[0], v15, &v29);
    if ( (_DWORD)v29 == 2 )
    {
      Object[0] = 0LL;
      CompositionInputObject::GetWindowForInputType(v14, v15, Object);
      v16 = Object[0];
      if ( Object[0] )
      {
        v17 = 4;
        HIDWORD(v28[5]) = 2;
        LODWORD(v28[0]) = 4;
        *(PVOID *)&v28[5] = Object[0];
        goto LABEL_10;
      }
      goto LABEL_30;
    }
    if ( (_DWORD)v29 != 3 )
    {
      if ( (_DWORD)v29 != 4 )
        goto LABEL_30;
      LODWORD(Object[0]) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 366LL);
    }
    Object[0] = 0LL;
    CompositionInputObject::GetBaseWindowForInputType(v14, v15, Object);
    v16 = Object[0];
    if ( Object[0] )
    {
      v17 = 6;
      LODWORD(v28[0]) = 6;
      *(_OWORD *)((char *)&v28[2] + 8) = v30;
      HIDWORD(v28[5]) = 1;
      *((_QWORD *)&v28[4] + 1) = v32;
      *(PVOID *)&v28[5] = Object[0];
      *(_OWORD *)((char *)&v28[3] + 8) = v31;
      *((_QWORD *)&v28[1] + 1) = *((_QWORD *)&v29 + 1);
      goto LABEL_10;
    }
LABEL_30:
    v16 = *(_QWORD **)&v28[5];
    v17 = v28[0];
LABEL_10:
    if ( (v17 & 4) != 0 )
    {
      v18 = *(_QWORD *)(v16[2] + 424LL);
      if ( v14[2] )
      {
        *((_QWORD *)&v28[0] + 1) = v14[2];
        LODWORD(v28[0]) = v17 | 1;
      }
      if ( a4 )
      {
        HIDWORD(v28[6]) = *(_DWORD *)a4;
        if ( HIDWORD(v28[6]) && HIDWORD(v28[6]) != *(_DWORD *)(v18 + 1088) )
        {
          LODWORD(Object[0]) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 445LL);
        }
      }
      else
      {
        HIDWORD(v28[6]) = *(_DWORD *)(v18 + 1088);
      }
      if ( (*(_DWORD *)(v18 + 820) & 0x800000) != 0 )
        LODWORD(v28[1]) &= ~1u;
      else
        LODWORD(v28[1]) ^= (LOBYTE(v28[1]) ^ (unsigned __int8)*((_DWORD *)v14 + 48)) & 1;
      v19 = *((unsigned int *)v14 + 46);
      v20 = v28[1];
      *(_OWORD *)a5 = v28[0];
      v21 = v28[2];
      *((_OWORD *)a5 + 1) = v20;
      v22 = v28[3];
      *((_OWORD *)a5 + 2) = v21;
      v23 = v28[4];
      *((_OWORD *)a5 + 3) = v22;
      v24 = v28[5];
      *((_OWORD *)a5 + 4) = v23;
      *(_QWORD *)&v28[6] = v19;
      v25 = v28[6];
      *((_OWORD *)a5 + 5) = v24;
      *((_OWORD *)a5 + 6) = v25;
    }
LABEL_18:
    ObfDereferenceObject(v14);
  }
  return *(_DWORD *)a5 != 0;
}
