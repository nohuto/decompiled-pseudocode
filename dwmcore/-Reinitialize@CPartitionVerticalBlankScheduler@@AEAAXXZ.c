void __fastcall CPartitionVerticalBlankScheduler::Reinitialize(CPartitionVerticalBlankScheduler *this)
{
  __int64 v2; // rcx
  CFrameInfo *v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // r14
  char *v6; // rdi
  __int64 v7; // r15
  __int64 v8; // r12
  char v9; // r13
  LARGE_INTEGER v10; // kr00_8
  char LowPart; // cl
  LARGE_INTEGER v12; // rax
  __int64 v13; // rdx
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp+8h] BYREF

  *((_QWORD *)this + 578) = 0LL;
  *((_QWORD *)this + 528) = 0LL;
  *(_WORD *)((char *)this + 4549) = 0;
  *((_BYTE *)this + 4548) = 0;
  *((_BYTE *)this + 4552) = 0;
  if ( *((_BYTE *)this + 4551) )
  {
    *((_QWORD *)this + 1166) = 0LL;
    *((_QWORD *)this + 1168) = ((unsigned __int64)this + 9344) | (((_QWORD)this + 9344) << 32);
    CPartitionVerticalBlankScheduler::UpdateCurrentTime((LARGE_INTEGER *)this);
    *((_QWORD *)this + 1165) = *((_QWORD *)this + 1166);
  }
  v2 = *((_QWORD *)this + 527);
  v3 = (CPartitionVerticalBlankScheduler *)((char *)this + 96);
  v4 = 0LL;
  v5 = 16LL;
  v6 = (char *)this + 336;
  v7 = *(_QWORD *)(v2 + 16);
  if ( !*((_BYTE *)this + 4551) )
    v4 = *(_QWORD *)(*((_QWORD *)this + 526) + 216LL);
  v8 = *(_QWORD *)(v2 + 216);
  v9 = *(_BYTE *)(v2 + 224);
  LOBYTE(PerformanceCount.LowPart) = *(_BYTE *)(v2 + 226);
  do
  {
    CFrameInfo::Clear(v3);
    *(v6 - 32) = 0;
    *((_QWORD *)v6 - 3) = 0LL;
    *(v6 - 16) = 0;
    *(v6 - 14) = 0;
    v10 = g_qpcFrequency;
    v6[8] = 1;
    *((_QWORD *)v6 - 1) = v10.QuadPart / 60;
    v3 = (CFrameInfo *)((char *)v3 + 256);
    *(_QWORD *)v6 = v10.QuadPart / 60;
    v6 += 256;
    --v5;
  }
  while ( v5 );
  LowPart = PerformanceCount.LowPart;
  *(_QWORD *)(*((_QWORD *)this + 527) + 16LL) = v7;
  *(_QWORD *)(*((_QWORD *)this + 527) + 216LL) = v8;
  *(_BYTE *)(*((_QWORD *)this + 527) + 224LL) = v9;
  *(_BYTE *)(*((_QWORD *)this + 527) + 226LL) = LowPart;
  *(_QWORD *)(*((_QWORD *)this + 526) + 216LL) = v4;
  *(_BYTE *)(*((_QWORD *)this + 527) + 171LL) = 1;
  if ( *((_BYTE *)this + 4551) )
    *((_BYTE *)this + 4551) = 0;
  *((_QWORD *)this + 1159) = this;
  *((_QWORD *)this + 572) = 0LL;
  *((_OWORD *)this + 287) = 0LL;
  *((_DWORD *)this + 1146) = 0;
  *((_OWORD *)this + 288) = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  v12 = PerformanceCount;
  *((_QWORD *)this + 571) = 0LL;
  *((LARGE_INTEGER *)this + 570) = v12;
  LOBYTE(v13) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing>::GetImpl'::`2'::impl,
    v13);
  LinearFitT<256>::Reset(*((_QWORD *)this + 1170));
}
