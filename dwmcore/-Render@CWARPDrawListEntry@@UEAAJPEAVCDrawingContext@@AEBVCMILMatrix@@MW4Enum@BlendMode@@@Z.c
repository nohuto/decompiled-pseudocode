__int64 __fastcall CWARPDrawListEntry::Render(__int64 a1, __int64 a2, CMILMatrix *a3, float a4, unsigned int a5)
{
  int updated; // eax
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // r14
  CBatchCommand *v12; // rcx
  int v13; // eax
  unsigned int v15; // [rsp+20h] [rbp-40h]
  CBatchCommand *v16; // [rsp+38h] [rbp-28h] BYREF
  char v17; // [rsp+40h] [rbp-20h]
  CBatchCommand *v18; // [rsp+80h] [rbp+20h] BYREF

  v18 = 0LL;
  updated = CWARPDrawListEntry::UpdateBitmaps((CWARPDrawListEntry *)(a1 + 64), (struct CDrawingContext *)a2);
  v10 = updated;
  if ( updated < 0 )
  {
    v15 = 148;
    goto LABEL_14;
  }
  v11 = *(_QWORD *)(a2 + 40);
  v16 = 0LL;
  v17 = 1;
  v10 = CDrawListBatchManager::TakeItemFromCache<CBatchCommand>(v11 + 64, &v16);
  if ( v17 )
  {
    v12 = v18;
    v18 = v16;
    if ( v12 )
      CBatchCommand::`scalar deleting destructor'(v12);
  }
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v12, 0LL, 0, v10, 0x98u, 0LL);
    goto LABEL_15;
  }
  CBatchCommand::InitializeForRendering((__int64)v18, (_DWORD *)a1, a5, a4, a3);
  if ( (*(_BYTE *)(a1 + 48) & 4) != 0 )
    *(_BYTE *)(a2 + 8095) = 1;
  if ( (*(_DWORD *)(a1 + 48) & 0x200) != 0 )
  {
    v13 = D2DInterpolationModeFromMilInterpolationMode(*(_DWORD *)(a2 + 332));
    *(_DWORD *)(a1 + 184) = v13;
    *(_DWORD *)(a1 + 264) = v13;
  }
  updated = CD2DContext::SubmitRenderCommand((CD2DContext *)(v11 + 16), (__int64 *)&v18, 0LL, 0LL);
  v10 = updated;
  if ( updated < 0 )
  {
    v15 = 174;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, updated, v15, 0LL);
  }
LABEL_15:
  if ( v18 )
    CBatchCommand::`scalar deleting destructor'(v18);
  return (unsigned int)v10;
}
