__int64 __fastcall CComposition::ProcessCommandBatch(
        CComposition *this,
        char *a2,
        unsigned int a3,
        struct CChannelContext *a4,
        unsigned int *a5)
{
  unsigned int v6; // esi
  unsigned __int64 v8; // r15
  CComposition *v10; // rbp
  unsigned int *v11; // rax
  char *v12; // rbx
  unsigned __int64 v13; // rbp
  __int64 v14; // rax
  char *v15; // rdi
  unsigned int v16; // ebp
  int v17; // eax
  __int64 v18; // r9
  int v19; // eax
  unsigned __int64 v20; // rcx
  int v21; // edi
  char *v22; // rax
  CAnimationLoggingManager *v23; // rcx
  int v25; // eax
  unsigned int v26; // ecx
  int v27; // ecx
  void *StackCaptureRootFailureAddress; // rax
  unsigned int *v30; // [rsp+90h] [rbp+28h]

  v6 = 0;
  v8 = a3;
  v10 = this;
  *a5 = 0;
  ++*((_DWORD *)a4 + 22);
  v11 = (unsigned int *)*((_QWORD *)a4 + 4);
  *((_QWORD *)this + 79) = a2;
  *((_DWORD *)this + 160) = a3;
  v30 = v11;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0x_EventWriteTransfer(this, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSQUEUEEVENT, a3);
  v12 = a2;
  if ( v8 )
  {
    if ( v8 >= 8 )
    {
      v13 = *(unsigned int *)a2;
      if ( (unsigned int)v13 >= 8 && (v13 & 3) == 0 )
      {
        v14 = (unsigned int)v13;
        if ( v13 <= v8 )
        {
          v6 = *((_DWORD *)a2 + 1);
          v15 = a2 + 4;
          v16 = v13 - 4;
          v12 = &a2[v14];
          v17 = 0;
          goto LABEL_9;
        }
      }
      v10 = this;
    }
    v21 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147467259, 0x22Fu, 0LL);
    goto LABEL_32;
  }
  v15 = 0LL;
  v16 = 0;
  v17 = 1;
LABEL_9:
  if ( v17 != 1 )
  {
    while ( 1 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400000) != 0 )
        McTemplateU0qq_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_COMMAND_PROCESSED_ONBEHALF,
          *((unsigned int *)a4 + 5),
          v6);
      v18 = v16;
      v10 = this;
      v19 = CComposition::ProcessMessage(this, v6, v15, v18, a4, v30);
      v21 = v19;
      if ( v19 < 0 )
        break;
      v21 = -2147467259;
      v22 = &a2[v8 - (_QWORD)v12];
      if ( !v22 )
      {
        ++*a5;
        goto LABEL_20;
      }
      if ( (unsigned __int64)v22 < 8
        || (v20 = *(unsigned int *)v12, (unsigned int)v20 < 8)
        || (v20 & 3) != 0
        || v20 > (unsigned __int64)v22 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2147467259, 0x253u, 0LL);
        ++*a5;
        goto LABEL_32;
      }
      v6 = *((_DWORD *)v12 + 1);
      v15 = v12 + 4;
      v12 += v20;
      v16 = v20 - 4;
      ++*a5;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x249u, 0LL);
    goto LABEL_32;
  }
  v10 = this;
LABEL_20:
  *(_BYTE *)(*((_QWORD *)v10 + 53) + 448LL) |= 2u;
  v23 = (CAnimationLoggingManager *)*((_QWORD *)a4 + 8);
  if ( v23 && (v25 = CAnimationLoggingManager::LogDebugPropertyUpdates(v23, *((_QWORD *)v10 + 62)), v21 = v25, v25 < 0) )
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x12Eu, 0LL);
  else
    v21 = 0;
  if ( v21 < 0 )
  {
LABEL_32:
    if ( !IsOOM(v21) )
    {
      MilUnexpectedError(v27, L"batch processing error");
      StackCaptureRootFailureAddress = GetStackCaptureRootFailureAddress(v21);
      CComposition::FailFastOnMalformedPacket(v10, (unsigned int)v21, StackCaptureRootFailureAddress);
    }
  }
  return (unsigned int)v21;
}
