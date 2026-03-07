bool __fastcall CBackdropVisualImage::TranslateRenderTargetInfo(
        CBackdropVisualImage *this,
        struct RenderTargetInfo *a2)
{
  const struct RenderTargetInfo *v3; // rdx
  CCachedVisualImage *v4; // rcx
  CCachedVisualImage::CCachedTarget *ExistingCachedTarget; // rax
  __int64 v6; // rbx
  __int64 RenderTargetInfo; // rax
  __int64 v8; // xmm1_8
  bool result; // al
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( !CBackdropVisualImage::IsValid(this) )
    return 0;
  ExistingCachedTarget = CCachedVisualImage::FindExistingCachedTarget(v4, v3);
  v6 = (__int64)ExistingCachedTarget;
  if ( !ExistingCachedTarget || !CCachedVisualImage::CCachedTarget::IsValid(ExistingCachedTarget) || *(_BYTE *)(v6 + 57) )
    return 0;
  RenderTargetInfo = CCachedVisualImage::CCachedTarget::GetRenderTargetInfo(v6, (__int64)v10);
  *(_OWORD *)a2 = *(_OWORD *)RenderTargetInfo;
  v8 = *(_QWORD *)(RenderTargetInfo + 16);
  result = 1;
  *((_QWORD *)a2 + 2) = v8;
  return result;
}
