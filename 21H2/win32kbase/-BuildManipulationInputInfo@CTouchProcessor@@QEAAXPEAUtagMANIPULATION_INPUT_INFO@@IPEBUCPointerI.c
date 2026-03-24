/*
 * XREFs of ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x1C0188660
 * Callers:
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C018EAA0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ApiSetAddMagnificationOutputTransform @ 0x1C0043DE8 (ApiSetAddMagnificationOutputTransform.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 *     GetPointerInfoSize @ 0x1C01289FC (GetPointerInfoSize.c)
 *     ?CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z @ 0x1C0188980 (-CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1C018C3B4 (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z @ 0x1C0191B50 (-GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0196890 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ConvertPointCoordinates @ 0x1C01B3900 (ConvertPointCoordinates.c)
 */

void __fastcall CTouchProcessor::BuildManipulationInputInfo(
        CTouchProcessor *this,
        struct tagMANIPULATION_INPUT_INFO *a2,
        unsigned int a3,
        const struct CPointerInputFrame *a4)
{
  unsigned int v7; // r15d
  CTouchProcessor *v8; // rcx
  CTouchProcessor *v9; // rcx
  CTouchProcessor *v10; // rcx
  size_t v11; // r12
  unsigned int PointerInfoSize; // eax
  struct tagPROCESSINFO *InputProcessContext; // rax
  int v14; // ecx
  unsigned int v15; // ebp
  __int64 v16; // rdx
  __int64 v17; // rsi
  _QWORD *v18; // r14
  __int64 v19; // rcx
  int v20; // edx

  v7 = CTouchProcessor::CountMTNodesReadyForRouting(this, a4);
  if ( a3 < CTouchProcessor::CalcManipulationInputInfoSize(v8, v7) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 16350);
  if ( a3 >= CTouchProcessor::CalcManipulationInputInfoSize(v9, v7) )
  {
    v11 = 0LL;
    if ( *((_DWORD *)a4 + 12) )
    {
      PointerInfoSize = GetPointerInfoSize(*(_DWORD *)(*((_QWORD *)a4 + 17) + 168LL));
      v11 = PointerInfoSize;
      if ( !PointerInfoSize )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 16360);
    }
    InputProcessContext = CTouchProcessor::GetInputProcessContext(v10, *((void **)a4 + 8));
    if ( InputProcessContext )
      v14 = *((_DWORD *)InputProcessContext + 14);
    else
      v14 = 0;
    *((_DWORD *)a2 + 10) = v14;
    v15 = 0;
    *((_DWORD *)a2 + 11) = 0;
    for ( LODWORD(v16) = 0; v15 < *((_DWORD *)a4 + 12); ++v15 )
    {
      v17 = *((_QWORD *)a4 + 17) + 480LL * v15;
      if ( (unsigned int)CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v17) )
      {
        v18 = (_QWORD *)((char *)a2 + 240 * v16);
        memmove(v18 + 7, (const void *)(v17 + 168), v11);
        v19 = 240LL * *((unsigned int *)a2 + 11);
        *(_OWORD *)((char *)a2 + v19 + 200) = *(_OWORD *)(v17 + 384);
        *(_OWORD *)((char *)a2 + v19 + 216) = *(_OWORD *)(v17 + 400);
        *(_OWORD *)((char *)a2 + v19 + 232) = *(_OWORD *)(v17 + 416);
        if ( (*(_DWORD *)(v17 + 4) & 0x80u) == 0 )
          v20 = 0;
        else
          v20 = *(_DWORD *)(v17 + 348);
        *((_DWORD *)a2 + 60 * *((unsigned int *)a2 + 11) + 62) = v20;
        *((_QWORD *)a2 + 30 * *((unsigned int *)a2 + 11) + 32) = *(_QWORD *)(v17 + 448);
        *((_DWORD *)a2 + 60 * *((unsigned int *)a2 + 11) + 66) = *(_DWORD *)(v17 + 456);
        v18[10] = 0LL;
        if ( (unsigned int)ApiSetAddMagnificationOutputTransform((__int64)(v18 + 11)) )
          ConvertPointCoordinates(v18[11]);
        if ( (unsigned int)ApiSetAddMagnificationOutputTransform((__int64)(v18 + 13)) )
          ConvertPointCoordinates(v18[13]);
        LODWORD(v16) = ++*((_DWORD *)a2 + 11);
      }
    }
    if ( (_DWORD)v16 != v7 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 16423);
    *(_OWORD *)a2 = *(_OWORD *)((char *)a4 + 72);
    *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)a4 + 88);
    *((_QWORD *)a2 + 4) = *((_QWORD *)a4 + 13);
    *((_DWORD *)a2 + 12) = -__CFSHR__(*((_DWORD *)a4 + 31), 9);
  }
}
