__int64 __fastcall CExternalLayer::ApplyState(CExternalLayer *this, struct CDrawingContext *a2)
{
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rax
  bool v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0;
  v4 = (*(__int64 (__fastcall **)(CExternalLayer *, struct CDrawingContext *, char *))(*(_QWORD *)this + 64LL))(
         this,
         a2,
         (char *)this + 48);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0xB3u, 0LL);
    goto LABEL_11;
  }
  v7 = CDrawingContext::PushDeviceTransform(a2, (CExternalLayer *)((char *)this + 48), &v13);
  v6 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xB7u, 0LL);
    goto LABEL_11;
  }
  *((_BYTE *)this + 32) = 1;
  v9 = CExternalLayer::ApplyRenderTarget(this, a2);
  v6 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xBBu, 0LL);
LABEL_11:
    CExternalLayer::RestoreState(this, a2);
    return v6;
  }
  if ( !v13 || !(*(unsigned __int8 (__fastcall **)(CExternalLayer *))(*(_QWORD *)this + 72LL))(this) )
  {
    v11 = *((_QWORD *)a2 + 1009);
    *((_QWORD *)a2 + 1009) = 0LL;
    *((_QWORD *)this + 5) = v11;
  }
  return v6;
}
