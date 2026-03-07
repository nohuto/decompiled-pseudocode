__int64 __fastcall OUTPUTDUPL_MGR::GetMetaData(OUTPUTDUPL_MGR *this, struct _D3DKMT_OUTPUTDUPL_METADATA *a2)
{
  const void ***v4; // rdi
  __int64 v5; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  D3DKMT_OUTPUTDUPL_METADATATYPE *p_Type; // r14
  int DirtyRects; // esi
  __int64 v10; // rcx
  __int64 v11; // rcx
  void *v12; // rdx
  char *Buffer; // rax
  char *v14; // rdi
  OUTPUTDUPL_MGR *v15; // rcx
  UINT v16; // eax
  _BYTE v18[16]; // [rsp+50h] [rbp-18h] BYREF

  v4 = (const void ***)(*((_QWORD *)this + 2) + 72LL * a2->VidPnSourceId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, (struct DXGFASTMUTEX *const)v4, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v5);
  ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(this, (struct _KTHREAD **)v4, CurrentProcess, 0LL);
  p_Type = &a2->Type;
  if ( ContextForProcess )
  {
    if ( *p_Type )
    {
      if ( *p_Type != D3DKMT_OUTPUTDUPL_METADATATYPE_MOVE_RECTS )
      {
        WdLogSingleEntry1(2LL, *(int *)p_Type);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid output duplication meta data type: ",
          *(int *)p_Type,
          0LL,
          0LL,
          0LL,
          0LL);
        DirtyRects = -1073741811;
        goto LABEL_13;
      }
      v10 = *((_QWORD *)*ContextForProcess + 33);
      if ( *(_DWORD *)(v10 + 16) == 2 )
      {
        v11 = *(_QWORD *)(v10 + 8);
        v12 = **(void ***)(v11 + 48);
        LODWORD(v11) = 24 * *(_DWORD *)(v11 + 44);
        a2->BufferSizeRequired = v11;
        if ( a2->BufferSizeSupplied < (unsigned int)v11 )
        {
          DirtyRects = -1073741789;
          goto LABEL_13;
        }
        a2->pBuffer = v12;
      }
      else
      {
        a2->BufferSizeRequired = 0;
      }
      DirtyRects = 0;
    }
    else
    {
      DirtyRects = OUTPUTDUPL_CONTEXT::GetDirtyRects(*ContextForProcess, a2);
    }
  }
  else
  {
    DirtyRects = -1073741275;
  }
LABEL_13:
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
  {
    Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer(v4[7], a2->BufferSizeRequired + 72, 0);
    v14 = Buffer;
    if ( Buffer )
    {
      memset(Buffer, 0, 0x48uLL);
      OUTPUTDUPL_MGR::InitializePacketHeader(v15, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v14);
      v16 = a2->BufferSizeRequired + 72;
      *((_DWORD *)v14 + 12) = 8;
      *((_DWORD *)v14 + 1) = v16;
      *((_DWORD *)v14 + 13) = a2->VidPnSourceId;
      *((D3DKMT_OUTPUTDUPL_METADATATYPE *)v14 + 14) = *p_Type;
      *((_DWORD *)v14 + 15) = a2->BufferSizeSupplied;
      *((_DWORD *)v14 + 16) = a2->BufferSizeRequired;
      *((_DWORD *)v14 + 17) = DirtyRects;
      if ( DirtyRects >= 0 )
        memmove(v14 + 72, a2->pBuffer, a2->BufferSizeRequired);
      OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v14, 1);
    }
    else
    {
      WdLogSingleEntry1(6LL, 1878LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to expand tmp buffer for meta data logging packet.",
        1878LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DirtyRects = -1073741801;
    }
  }
  if ( v18[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
  return (unsigned int)DirtyRects;
}
