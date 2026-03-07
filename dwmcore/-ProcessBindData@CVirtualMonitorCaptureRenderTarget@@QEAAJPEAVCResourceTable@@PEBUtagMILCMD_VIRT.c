__int64 __fastcall CVirtualMonitorCaptureRenderTarget::ProcessBindData(
        CVirtualMonitorCaptureRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VIRTUALMONITORCAPTURERENDERTARGET_BINDDATA *a3,
        enum DXGI_FORMAT a4)
{
  int v6; // ebx
  char v7; // dl
  int v8; // r8d
  unsigned int v9; // ecx
  unsigned int v10; // edx
  __int64 v11; // rcx
  int Textures; // eax
  __int64 v13; // rcx
  void *v15; // [rsp+20h] [rbp-28h]
  struct CHolographicFrameProcessor *v16; // [rsp+58h] [rbp+10h] BYREF

  v16 = a2;
  *((_QWORD *)this + 259) = *((_QWORD *)a3 + 1);
  v6 = 0;
  *((_OWORD *)this + 130) = *((_OWORD *)a3 + 1);
  v7 = *((_BYTE *)a3 + 32);
  *((_BYTE *)this + 2096) = v7;
  *((_DWORD *)this + 525) = *((_DWORD *)a3 + 12) - *((_DWORD *)a3 + 10);
  *((_DWORD *)this + 526) = *((_DWORD *)a3 + 13) - *((_DWORD *)a3 + 11);
  v8 = *((_DWORD *)a3 + 6) - *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 527) = v8;
  v9 = *((_DWORD *)a3 + 7) - *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 528) = v9;
  *((_DWORD *)this + 529) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 530) = *((_DWORD *)a3 + 5);
  if ( v7 )
  {
    if ( !*((_QWORD *)this + 266) )
    {
      *((_QWORD *)this + 266) = 0LL;
      v10 = *((_DWORD *)this + 518);
      v16 = 0LL;
      LODWORD(v15) = v8;
      v6 = CHolographicFrameProcessor::Create(
             *((struct CComposition **)this + 2),
             v10,
             *((void **)this + 245),
             a4,
             v15,
             v9,
             &v16);
      *((_QWORD *)this + 266) = v16;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v6, 0x6Fu, 0LL);
        goto LABEL_10;
      }
    }
  }
  if ( *((_BYTE *)this + 2096) )
  {
    Textures = CVirtualMonitorCaptureRenderTarget::CreateTextures(this, *((_DWORD *)a3 + 9));
    v6 = Textures;
    if ( Textures < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, Textures, 0x74u, 0LL);
LABEL_10:
      CCaptureRenderTarget::ReleaseRenderingResources(this);
    }
  }
  else if ( v6 < 0 )
  {
    goto LABEL_10;
  }
  return (unsigned int)v6;
}
