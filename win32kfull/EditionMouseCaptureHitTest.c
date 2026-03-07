__int64 EditionMouseCaptureHitTest()
{
  __int64 result; // rax
  int v1; // r8d
  int v2; // r9d
  const struct tagWND *v3; // r10

  result = IsThreadDesktopComposed(gptiCurrent);
  if ( (_DWORD)result )
    return TransformVectorWithInputTargetPrecedence(v3, v2, v1);
  return result;
}
