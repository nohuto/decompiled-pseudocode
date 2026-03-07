NTSTATUS lambda_4f3bdbd8a6fa7b11fd9fa329091dc79e_::_lambda_invoker_cdecl_()
{
  NTSTATUS result; // eax

  result = MmUnmapViewInSessionSpace(gpvSharedBase);
  gpvSharedBase = 0LL;
  return result;
}
