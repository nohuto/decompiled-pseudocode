/*
 * XREFs of ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x1C01BE664
 * Callers:
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x1C01C5AE0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0033980 (HMValidateHandleNoSecure.c)
 *     ApiSetAddMagnificationOutputTransform @ 0x1C0034C6C (ApiSetAddMagnificationOutputTransform.c)
 *     ConvertPointCoordinates @ 0x1C003C35C (ConvertPointCoordinates.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ?GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z @ 0x1C00E7FF8 (-GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z.c)
 *     GetPointerInfoSize @ 0x1C015363C (GetPointerInfoSize.c)
 *     ?CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z @ 0x1C01BE990 (-CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1C01C35AC (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE088 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::BuildManipulationInputInfo(
        CTouchProcessor *this,
        struct tagMANIPULATION_INPUT_INFO *a2,
        unsigned int a3,
        const struct CPointerInputFrame *a4)
{
  unsigned int v7; // r15d
  CTouchProcessor *v8; // rcx
  __int64 v9; // rdx
  CTouchProcessor *v10; // rcx
  __int64 v11; // r8
  CTouchProcessor *v12; // rcx
  size_t v13; // r12
  unsigned int PointerInfoSize; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  struct tagPROCESSINFO *InputProcessContext; // rax
  __int64 v18; // r8
  __int64 v19; // rcx
  unsigned int v20; // ebp
  __int64 v21; // rdx
  __int64 v22; // rsi
  _QWORD *v23; // r14
  __int64 v24; // r8
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rcx
  __int128 v33; // xmm1
  __int64 v34; // rax
  __int64 v35; // rcx
  __int128 v36; // xmm1
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  __int128 v42; // [rsp+20h] [rbp-38h] BYREF
  int v43[10]; // [rsp+30h] [rbp-28h] BYREF

  v7 = CTouchProcessor::CountMTNodesReadyForRouting(this, a4);
  if ( a3 < CTouchProcessor::CalcManipulationInputInfoSize(v8, v7) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
  if ( a3 >= CTouchProcessor::CalcManipulationInputInfoSize(v10, v7) )
  {
    v13 = 0LL;
    if ( *((_DWORD *)a4 + 12) )
    {
      PointerInfoSize = GetPointerInfoSize(*(_DWORD *)(*((_QWORD *)a4 + 30) + 168LL));
      v13 = PointerInfoSize;
      if ( !PointerInfoSize )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v15, v16);
    }
    InputProcessContext = CTouchProcessor::GetInputProcessContext(v12, *((void **)a4 + 8));
    if ( InputProcessContext )
      v19 = *((unsigned int *)InputProcessContext + 14);
    else
      v19 = 0LL;
    *((_DWORD *)a2 + 37) = 0;
    v20 = 0;
    v21 = 0LL;
    for ( *((_DWORD *)a2 + 36) = v19; v20 < *((_DWORD *)a4 + 12); ++v20 )
    {
      v22 = *((_QWORD *)a4 + 30) + 480LL * v20;
      if ( (unsigned int)CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v22) )
      {
        v23 = (_QWORD *)((char *)a2 + 240 * v21 + 160);
        memmove(v23, (const void *)(v22 + 168), v13);
        v25 = *(_OWORD *)(v22 + 400);
        v26 = *(_OWORD *)(v22 + 416);
        v27 = 240LL * *((unsigned int *)a2 + 37);
        *(_OWORD *)((char *)a2 + v27 + 304) = *(_OWORD *)(v22 + 384);
        *(_OWORD *)((char *)a2 + v27 + 320) = v25;
        *(_OWORD *)((char *)a2 + v27 + 336) = v26;
        if ( (*(_DWORD *)(v22 + 4) & 0x80u) == 0 )
          v28 = 0LL;
        else
          v28 = *(unsigned int *)(v22 + 348);
        *((_DWORD *)a2 + 60 * *((unsigned int *)a2 + 37) + 88) = v28;
        *((_QWORD *)a2 + 30 * *((unsigned int *)a2 + 37) + 45) = *(_QWORD *)(v22 + 448);
        *((_DWORD *)a2 + 60 * *((unsigned int *)a2 + 37) + 92) = *(_DWORD *)(v22 + 456);
        v23[3] = 0LL;
        if ( (unsigned int)ApiSetAddMagnificationOutputTransform((__int64)(v23 + 4), v28, v24) )
        {
          v31 = *((_QWORD *)a4 + 32);
          v32 = v23[4];
          v33 = *(_OWORD *)(v31 + 160);
          v42 = *(_OWORD *)(v31 + 176);
          *(_OWORD *)v43 = v33;
          ConvertPointCoordinates(v32, v43, (int *)&v42, v23 + 5);
        }
        if ( (unsigned int)ApiSetAddMagnificationOutputTransform((__int64)(v23 + 6), v29, v30) )
        {
          v34 = *((_QWORD *)a4 + 32);
          v35 = v23[6];
          v36 = *(_OWORD *)(v34 + 160);
          *(_OWORD *)v43 = *(_OWORD *)(v34 + 176);
          v42 = v36;
          ConvertPointCoordinates(v35, (int *)&v42, v43, v23 + 7);
        }
        v21 = (unsigned int)++*((_DWORD *)a2 + 37);
      }
    }
    if ( (_DWORD)v21 != v7 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v21, v18);
    *(_OWORD *)a2 = *(_OWORD *)((char *)a4 + 72);
    *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)a4 + 88);
    *((_OWORD *)a2 + 2) = *(_OWORD *)((char *)a4 + 104);
    *((_OWORD *)a2 + 3) = *(_OWORD *)((char *)a4 + 120);
    *((_OWORD *)a2 + 4) = *(_OWORD *)((char *)a4 + 136);
    *((_OWORD *)a2 + 5) = *(_OWORD *)((char *)a4 + 152);
    *((_OWORD *)a2 + 6) = *(_OWORD *)((char *)a4 + 168);
    *((_OWORD *)a2 + 7) = *(_OWORD *)((char *)a4 + 184);
    *((_OWORD *)a2 + 8) = *(_OWORD *)((char *)a4 + 200);
    *((_DWORD *)a2 + 38) = -__CFSHR__(*((_DWORD *)a4 + 57), 9);
    v37 = HMValidateHandleNoSecure(*((_QWORD *)a4 + 8), 19);
    if ( v37 )
    {
      v41 = *(_QWORD *)(v37 + 472);
      if ( v41 )
        *((_DWORD *)a2 + 39) = *(_DWORD *)(v41 + 956);
      else
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40);
    }
  }
}
