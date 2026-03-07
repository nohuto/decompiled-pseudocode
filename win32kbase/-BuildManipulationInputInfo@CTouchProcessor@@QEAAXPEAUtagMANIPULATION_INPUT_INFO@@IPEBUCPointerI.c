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
  int v14; // eax
  unsigned int v15; // ebp
  __int64 v16; // rsi
  _QWORD *v17; // r14
  __int64 v18; // r8
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // rax
  BOOL v28; // edx
  __int64 v29; // rax
  __int64 v30; // rax

  v7 = CTouchProcessor::CountMTNodesReadyForRouting(this, a4);
  if ( a3 < CTouchProcessor::CalcManipulationInputInfoSize(v8, v7) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 17058);
  if ( a3 >= CTouchProcessor::CalcManipulationInputInfoSize(v9, v7) )
  {
    v11 = 0LL;
    if ( *((_DWORD *)a4 + 12) )
    {
      PointerInfoSize = GetPointerInfoSize(*(_DWORD *)(*((_QWORD *)a4 + 30) + 168LL));
      v11 = PointerInfoSize;
      if ( !PointerInfoSize )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 17068);
    }
    InputProcessContext = CTouchProcessor::GetInputProcessContext(v10, *((void **)a4 + 8));
    if ( InputProcessContext )
      v14 = *((_DWORD *)InputProcessContext + 14);
    else
      v14 = 0;
    *((_DWORD *)a2 + 36) = v14;
    v15 = 0;
    for ( *((_DWORD *)a2 + 37) = 0; v15 < *((_DWORD *)a4 + 12); ++v15 )
    {
      v16 = *((_QWORD *)a4 + 30) + 480LL * v15;
      if ( CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v16) )
      {
        v17 = (_QWORD *)((char *)a2 + 240 * *((unsigned int *)a2 + 37) + 160);
        memmove(v17, (const void *)(v16 + 168), v11);
        v19 = *(_OWORD *)(v16 + 400);
        v20 = *(_OWORD *)(v16 + 416);
        v21 = 240LL * *((unsigned int *)a2 + 37);
        *(_OWORD *)((char *)a2 + v21 + 304) = *(_OWORD *)(v16 + 384);
        *(_OWORD *)((char *)a2 + v21 + 320) = v19;
        *(_OWORD *)((char *)a2 + v21 + 336) = v20;
        if ( (*(_DWORD *)(v16 + 4) & 0x80u) == 0 )
          v22 = 0LL;
        else
          v22 = *(unsigned int *)(v16 + 348);
        *((_DWORD *)a2 + 60 * *((unsigned int *)a2 + 37) + 88) = v22;
        *((_QWORD *)a2 + 30 * *((unsigned int *)a2 + 37) + 45) = *(_QWORD *)(v16 + 448);
        *((_DWORD *)a2 + 60 * *((unsigned int *)a2 + 37) + 92) = *(_DWORD *)(v16 + 456);
        v17[3] = 0LL;
        if ( (unsigned int)ApiSetAddMagnificationOutputTransform((__int64)(v17 + 4), v22, v18) )
          ConvertPointCoordinates(v17[4]);
        if ( (unsigned int)ApiSetAddMagnificationOutputTransform((__int64)(v17 + 6), v23, v24) )
          ConvertPointCoordinates(v17[6]);
        ++*((_DWORD *)a2 + 37);
      }
    }
    if ( *((_DWORD *)a2 + 37) != v7 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 17131);
    *(_OWORD *)a2 = *(_OWORD *)((char *)a4 + 72);
    *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)a4 + 88);
    *((_OWORD *)a2 + 2) = *(_OWORD *)((char *)a4 + 104);
    *((_OWORD *)a2 + 3) = *(_OWORD *)((char *)a4 + 120);
    *((_OWORD *)a2 + 4) = *(_OWORD *)((char *)a4 + 136);
    *((_OWORD *)a2 + 5) = *(_OWORD *)((char *)a4 + 152);
    *((_OWORD *)a2 + 6) = *(_OWORD *)((char *)a4 + 168);
    *((_OWORD *)a2 + 7) = *(_OWORD *)((char *)a4 + 184);
    *((_OWORD *)a2 + 8) = *(_OWORD *)((char *)a4 + 200);
    v25 = *((_DWORD *)a2 + 38) ^ (*((_DWORD *)a2 + 38) ^ (*((int *)a4 + 57) >> 8)) & 1;
    *((_DWORD *)a2 + 38) = v25;
    v26 = *((_QWORD *)a4 + 30);
    v28 = *(_DWORD *)(v26 + 168) == 3
       && *(_DWORD *)(v26 + 444) == 2
       && (v27 = *(_QWORD *)(v26 + 432)) != 0
       && *(_QWORD *)(*(_QWORD *)(v27 + 16) + 1336LL) != 0LL;
    *((_DWORD *)a2 + 38) = (2 * v28) | v25 & 0xFFFFFFFD;
    v29 = HMValidateHandleNoSecure(*((_QWORD *)a4 + 8), 19);
    if ( v29 )
    {
      v30 = *(_QWORD *)(v29 + 472);
      if ( v30 )
        *((_DWORD *)a2 + 39) = *(_DWORD *)(v30 + 956);
      else
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 17150);
    }
  }
}
