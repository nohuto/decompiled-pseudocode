__int64 __fastcall CIndirectSwapchainRenderTarget::ProcessUpdateTargetBounds(
        CIndirectSwapchainRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UPDATETARGETBOUNDS *a3)
{
  _DWORD *v3; // rdi
  unsigned int v4; // ebx
  _DWORD *v5; // r14
  int v8; // eax
  __int64 v9; // rcx

  v3 = (_DWORD *)((char *)this + 1964);
  v4 = 0;
  v5 = (_DWORD *)((char *)a3 + 20);
  if ( *((_DWORD *)this + 490) == *((_DWORD *)a3 + 4) && *v3 == *v5
    || (v8 = CIndirectSwapchainRenderTarget::ReportSizeChangeMetaData(this), v4 = v8, v8 >= 0) )
  {
    *((_DWORD *)this + 44) = COERCE_UNSIGNED_INT((float)*((int *)a3 + 2)) ^ _xmm;
    *((_DWORD *)this + 45) = COERCE_UNSIGNED_INT((float)*((int *)a3 + 3)) ^ _xmm;
    *((_DWORD *)this + 490) = *((_DWORD *)a3 + 4);
    *v3 = *v5;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x7Eu, 0LL);
  }
  return v4;
}
