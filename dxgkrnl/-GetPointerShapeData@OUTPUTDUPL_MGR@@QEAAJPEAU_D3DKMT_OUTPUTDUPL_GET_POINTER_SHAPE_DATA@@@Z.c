__int64 __fastcall OUTPUTDUPL_MGR::GetPointerShapeData(
        OUTPUTDUPL_MGR *this,
        struct _D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *a2)
{
  struct DXGFASTMUTEX *v4; // rbx
  __int64 v5; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  unsigned int PointerShapeData; // ebx
  OUTPUTDUPL_MGR *v9; // rcx
  _BYTE v11[16]; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v12[12]; // [rsp+30h] [rbp-29h] BYREF

  v4 = (struct DXGFASTMUTEX *)(*((_QWORD *)this + 2) + 72LL * a2->VidPnSourceId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, v4, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v5);
  ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(this, (struct _KTHREAD **)v4, CurrentProcess, 0LL);
  if ( ContextForProcess )
    PointerShapeData = OUTPUTDUPL_CONTEXT::GetPointerShapeData(*ContextForProcess, a2);
  else
    PointerShapeData = -1073741275;
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
  {
    memset(v12, 0, 0x58uLL);
    OUTPUTDUPL_MGR::InitializePacketHeader(v9, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v12);
    HIDWORD(v12[6]) = a2->VidPnSourceId;
    v12[7] = *(_QWORD *)&a2->ShapeInfo.Type;
    v12[8] = *(_QWORD *)&a2->ShapeInfo.Height;
    v12[9] = a2->ShapeInfo.HotSpot;
    LODWORD(v12[10]) = a2->BufferSizeSupplied;
    HIDWORD(v12[10]) = a2->BufferSizeRequired;
    HIDWORD(v12[0]) = 88;
    LODWORD(v12[6]) = 9;
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v12, 1);
  }
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  return PointerShapeData;
}
