void __fastcall CVisualCapture::SendCaptureCompleted(CVisualCapture *this)
{
  __int64 v2; // r10
  __int64 v3; // rax
  unsigned int v4; // ecx
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1240LL) + 40LL);
  if ( v2 )
  {
    v3 = *((_QWORD *)this + 6);
    if ( v3 )
      v4 = *(_DWORD *)(v3 + 76);
    else
      v4 = 0;
    v5[0] = v4;
    v5[1] = *((unsigned int *)this + 16);
    CoreUICallSend(v2, v5, 2LL, 17LL, 0, &unk_18033940E, v4);
  }
  *((_BYTE *)this + 1913) = 1;
  if ( *((_BYTE *)this + 1912) )
    CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 216LL), this);
}
