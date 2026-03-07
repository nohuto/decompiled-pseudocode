struct CD3DDevice *__fastcall CDDASwapChain::GetDevice(CDDASwapChain *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  v1 = *((_QWORD *)this - 21);
  if ( !v1 )
    return 0LL;
  v2 = v1 + 8 + *(int *)(*(_QWORD *)(v1 + 8) + 8LL);
  return (struct CD3DDevice *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
}
