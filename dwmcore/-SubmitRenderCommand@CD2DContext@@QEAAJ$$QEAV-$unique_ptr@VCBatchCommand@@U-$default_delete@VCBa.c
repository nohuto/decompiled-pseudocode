__int64 __fastcall CD2DContext::SubmitRenderCommand(
        CD2DContext *this,
        __int64 *a2,
        struct CHwLightCollectionBuffer *a3,
        struct ClipPlaneInfoRef *a4)
{
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edi
  _QWORD *v11; // rbp
  CMegaRectBatchCommand *v12; // rsi
  __int64 v13; // rax
  CBatchOptimizer *v14; // rcx
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // ebx
  unsigned int v19; // ecx
  _QWORD *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rbp
  CMegaRectBatchCommand **v23; // rdx
  struct CDrawListPrimitive *Primitive; // rax
  __int64 v25; // rdx

  CD2DContext::EnsureBeginDraw(this);
  v8 = CD2DContext::EnsureDrawListBatch(this, a3, a4);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x209u, 0LL);
    return v10;
  }
  v11 = (_QWORD *)*((_QWORD *)this + 17);
  v10 = 0;
  ++dword_1803E29D8;
  v12 = (CMegaRectBatchCommand *)*a2;
  v13 = v11[3];
  v14 = *(CBatchOptimizer **)(v13 + 160);
  if ( *(_DWORD *)*a2 != 4 )
    v12 = 0LL;
  if ( v14 )
  {
    CBatchOptimizer::AddRenderingCommand(v14);
  }
  else
  {
    v16 = CDrawListBatchManager::AddBatchCommand(v13 + 24, a2);
    v10 = v16;
    v18 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x83u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x20Cu, 0LL);
      return v10;
    }
  }
  if ( v12 )
  {
    v20 = v11 + 14;
    if ( v11[16] <= (unsigned __int64)(v11[18] + 1LL) )
      std::deque<CMegaRect>::_Growmap(v11 + 14);
    v21 = v11[16] - 1LL;
    v11[17] &= v21;
    v22 = v21 & (v11[17] + v11[18]);
    if ( !*(_QWORD *)(v20[1] + 8 * v22) )
      *(_QWORD *)(v20[1] + 8 * v22) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
    v23 = *(CMegaRectBatchCommand ***)(v20[1] + 8 * v22);
    *v23 = v12;
    v23[1] = 0LL;
    v23[2] = 0LL;
    Primitive = CMegaRectBatchCommand::GetPrimitive(v12);
    *(_DWORD *)(v25 + 24) = *((_DWORD *)Primitive + 4);
    ++v20[4];
  }
  return v10;
}
