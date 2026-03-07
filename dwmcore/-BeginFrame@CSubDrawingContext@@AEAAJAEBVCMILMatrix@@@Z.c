__int64 __fastcall CSubDrawingContext::BeginFrame(CSubDrawingContext *this, const struct CMILMatrix *a2)
{
  __int64 v4; // rsi
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // r10
  __int64 v8; // rbx
  __int64 v10; // rbx
  CVisual *v11; // rax
  struct CTreeData *TreeData; // rax
  __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v16; // [rsp+50h] [rbp+8h] BYREF

  CScopedClipStack::DuplicateScopeToClipStack(
    (CScopedClipStack *)(*(_QWORD *)this + 896LL),
    (struct CScopedClipStack *)(*((_QWORD *)this + 1) + 896LL),
    a2);
  v4 = 0LL;
  v5 = CDrawingContext::BeginFrame(
         *((CDrawingContext **)this + 1),
         *(struct IDeviceTarget **)(*(_QWORD *)this + 32LL),
         a2,
         0LL,
         0LL);
  if ( v5 < 0 )
  {
    v13 = 87LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\subdrawingcontext.cpp",
      (const char *)(unsigned int)v5,
      v14);
    return (unsigned int)v5;
  }
  v6 = *(_QWORD *)this + 3248LL;
  v16 = (int)FLOAT_1_0;
  *((_BYTE *)this + 96) = 1;
  CWatermarkStack<float,64,2,10>::Top(v6, &v16);
  v5 = CWatermarkStack<float,64,2,10>::Push(v7 + *((_QWORD *)this + 1), &v16);
  if ( v5 < 0 )
  {
    v13 = 93LL;
    goto LABEL_11;
  }
  v8 = *((_QWORD *)this + 1);
  if ( CScopedClipStack::HasCpuClipsInScope((CScopedClipStack *)(v8 + 896)) )
  {
    v10 = *(_QWORD *)(v8 + 904);
    v11 = (CVisual *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)this + 24LL) + 32LL))(*(_QWORD *)this + 24LL);
    TreeData = CVisual::FindTreeData(v11, *(const struct CVisualTree **)(*(_QWORD *)this + 8056LL));
    if ( CCpuClippingData::TransformToDifferentScope(
           (struct CTreeData *)((char *)TreeData + 88),
           (CSubDrawingContext *)((char *)this + 16),
           (const struct CMILMatrix *)(v10 - 84),
           a2) )
    {
      *(_QWORD *)(*((_QWORD *)this + 1) + 216LL) = (char *)this + 16;
    }
  }
  *(_QWORD *)(*((_QWORD *)this + 1) + 200LL) = *(_QWORD *)(*(_QWORD *)this + 200LL);
  *(_DWORD *)(*((_QWORD *)this + 1) + 332LL) = *(_DWORD *)(*(_QWORD *)this + 332LL);
  *(_DWORD *)(*((_QWORD *)this + 1) + 336LL) = *(_DWORD *)(*(_QWORD *)this + 336LL);
  *(_DWORD *)(*((_QWORD *)this + 1) + 360LL) = *(_DWORD *)(*(_QWORD *)this + 360LL);
  *(_DWORD *)(*((_QWORD *)this + 1) + 340LL) = *(_DWORD *)(*(_QWORD *)this + 340LL);
  *(_DWORD *)(*((_QWORD *)this + 1) + 344LL) = *(_DWORD *)(*(_QWORD *)this + 344LL);
  *(_DWORD *)(*((_QWORD *)this + 1) + 348LL) = *(_DWORD *)(*(_QWORD *)this + 348LL);
  do
  {
    *(_BYTE *)(*((_QWORD *)this + 1) + v4 + 8169) = *(_BYTE *)(*(_QWORD *)this + v4 + 8169);
    ++v4;
  }
  while ( v4 < 2 );
  return 0LL;
}
