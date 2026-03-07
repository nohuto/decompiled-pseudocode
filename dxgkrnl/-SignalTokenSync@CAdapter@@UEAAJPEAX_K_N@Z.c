__int64 __fastcall CAdapter::SignalTokenSync(CAdapter *this, void *a2, __int64 a3, char a4)
{
  __int64 result; // rax

  if ( !a4 )
    return DxgkSignalSynchronizationObjectFromGpuByReference(a2, a3, *((unsigned int *)this + 18));
  result = CAdapter::EnsureRenderFenceWait(this, (unsigned __int64 *)this + 11);
  if ( (int)result >= 0 )
    return DxgkSignalSynchronizationObjectFromGpuByReference(a2, a3, *((unsigned int *)this + 18));
  return result;
}
