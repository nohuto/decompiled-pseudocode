__int64 __fastcall IopLiveDumpCollectPages(__int64 a1)
{
  int v1; // eax
  __int64 MillisecondCounter; // rbp
  __int64 v4; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  int v6; // edx
  struct _KPRCB *v7; // rdi
  __int64 v8; // rbx
  int v9; // edx
  _OWORD *v10; // rbx
  _CONTEXT *Context; // rax
  __int64 v12; // rcx
  __int128 v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rdi
  int v16; // ebx
  unsigned __int64 v17; // rax
  int v18; // r8d
  int v19; // ebx
  __int64 v20; // rdi
  __int64 v21; // rax

  v1 = *(_DWORD *)(a1 + 80);
  MillisecondCounter = 0LL;
  if ( (v1 & 0x80u) != 0 )
  {
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
    v1 = *(_DWORD *)(a1 + 80);
    v4 = MillisecondCounter - *(_QWORD *)(a1 + 536);
    if ( (v1 & 1) != 0 )
      *(_QWORD *)(a1 + 456) = v4;
    else
      *(_QWORD *)(a1 + 496) = v4;
  }
  if ( (v1 & 1) == 0 )
    IoFillDumpHeader(
      *(char **)(a1 + 560),
      6,
      *(_DWORD *)a1,
      *(_QWORD *)(a1 + 8),
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 24),
      *(_QWORD *)(a1 + 32),
      (__int64)KeGetCurrentThread());
  if ( (*(_DWORD *)(a1 + 80) & 1) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    RtlCaptureContext(CurrentPrcb->Context);
    KiSaveProcessorControlState((__int64)&CurrentPrcb->ProcessorState, v6);
  }
  else
  {
    v7 = KeGetCurrentPrcb();
    v8 = *(_QWORD *)(a1 + 560);
    RtlCaptureContext(v7->Context);
    KiSaveProcessorControlState((__int64)&v7->ProcessorState, v9);
    v10 = (_OWORD *)(v8 + 840);
    if ( v10 )
    {
      memset(v10, 0, 0xBB8uLL);
      Context = v7->Context;
      v12 = 9LL;
      do
      {
        v13 = *(_OWORD *)&Context->P1Home;
        Context = (_CONTEXT *)((char *)Context + 128);
        *v10 = v13;
        v10 += 8;
        *(v10 - 7) = Context[-1].VectorRegister[22];
        *(v10 - 6) = Context[-1].VectorRegister[23];
        *(v10 - 5) = Context[-1].VectorRegister[24];
        *(v10 - 4) = Context[-1].VectorRegister[25];
        *(v10 - 3) = *(_OWORD *)&Context[-1].VectorControl;
        *(v10 - 2) = *(_OWORD *)&Context[-1].LastBranchToRip;
        *(v10 - 1) = *(_OWORD *)&Context[-1].LastExceptionToRip;
        --v12;
      }
      while ( v12 );
      *v10 = *(_OWORD *)&Context->P1Home;
      v10[1] = *(_OWORD *)&Context->P3Home;
      v10[2] = *(_OWORD *)&Context->P5Home;
      v10[3] = *(_OWORD *)&Context->ContextFlags;
      v10[4] = *(_OWORD *)&Context->SegGs;
    }
    if ( SaveSupervisorState )
    {
      KeSaveSupervisorState((__int64)KeGetCurrentPrcb()->ExtendedSupervisorState, MEMORY[0xFFFFF780000005F0] | 0x100LL);
      *(_BYTE *)(a1 + 433) = 1;
    }
  }
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
  {
    v14 = IopLiveDumpGetMillisecondCounter(0);
    IopLiveDumpTraceCaptureProcessorContextDuration(a1, v14 - MillisecondCounter);
  }
  v15 = 0LL;
  if ( (*(_DWORD *)(a1 + 80) & 1) == 0 )
    v15 = a1 + 688;
  v16 = IopLiveDumpMarkRequiredDumpData(a1, v15);
  if ( v16 >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 80) & 1) != 0
      && (v17 = RtlNumberOfSetBitsEx((_QWORD *)(a1 + 544)),
          v18 = *(_DWORD *)(a1 + 80),
          *(_QWORD *)(a1 + 104) = v17,
          (v18 & 0x200) != 0)
      && v17 > (*(_QWORD *)(a1 + 1144) >> 12) + (unsigned __int64)((*(_QWORD *)(a1 + 1144) & 0xFFFLL) != 0) )
    {
      v16 = -1073741670;
      *(_DWORD *)(a1 + 80) = v18 | 0x400;
    }
    else
    {
      v16 = IopLiveDumpMarkImportantDumpData(a1, v15);
      if ( v16 >= 0 )
      {
        if ( (*(_DWORD *)(a1 + 80) & 1) != 0 )
        {
          IopLiveDumpPopulateBitmapForDump(a1);
        }
        else
        {
          if ( *(_QWORD *)(a1 + 696) || *(_QWORD *)(a1 + 704) )
          {
            v19 = *(_DWORD *)(a1 + 44);
            v20 = IopLiveDumpGetMillisecondCounter(0);
            HvlCollectLivedump(v19 & 2, *(_QWORD *)(a1 + 208), (LONGLONG *)(a1 + 192), a1 + 144);
            *(_QWORD *)(a1 + 520) = IopLiveDumpGetMillisecondCounter(0) - v20;
          }
          IopLiveDumpGenerateIptSecondaryData();
          IopLiveDumpPopulateBitmapForDump(a1);
          IopLiveDumpStartDumpDataBuffering(a1);
        }
        v16 = 0;
      }
    }
  }
  IopLiveDumpUncorralProcessors(a1 + 312, 0LL);
  v21 = IopLiveDumpGetMillisecondCounter(0) - *(_QWORD *)(a1 + 536);
  if ( (*(_DWORD *)(a1 + 80) & 1) != 0 )
    *(_QWORD *)(a1 + 448) = v21;
  else
    *(_QWORD *)(a1 + 488) = v21;
  return (unsigned int)v16;
}
