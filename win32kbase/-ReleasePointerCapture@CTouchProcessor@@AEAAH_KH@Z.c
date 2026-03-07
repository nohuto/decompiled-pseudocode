__int64 __fastcall CTouchProcessor::ReleasePointerCapture(CTouchProcessor *this, __int64 a2, int a3)
{
  __int64 result; // rax
  struct CPointerCaptureInfo *v6; // rbx

  result = (__int64)CTouchProcessor::GetPointerCaptureData(this, a2);
  if ( result )
  {
    v6 = (struct CPointerCaptureInfo *)(result + (a3 != 0 ? 168LL : 32LL));
    CTouchProcessor::CheckAndDismissWindowResizeHighlight((struct _KTHREAD **)this, v6);
    CTouchProcessor::ReleasePointerCaptureInt(this, v6);
    return 1LL;
  }
  return result;
}
