TargetingInfo *__fastcall TargetingInfo::`scalar deleting destructor'(TargetingInfo *this)
{
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)this + 1);
  return this;
}
