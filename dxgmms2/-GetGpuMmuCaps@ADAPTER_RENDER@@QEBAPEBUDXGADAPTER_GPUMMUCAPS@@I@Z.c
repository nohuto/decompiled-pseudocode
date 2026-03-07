const struct DXGADAPTER_GPUMMUCAPS *__fastcall ADAPTER_RENDER::GetGpuMmuCaps(ADAPTER_RENDER *this, unsigned int a2)
{
  __int64 v2; // r8
  const struct DXGADAPTER_GPUMMUCAPS *result; // rax

  v2 = *((_QWORD *)this + 158);
  result = 0LL;
  if ( v2 )
    return (const struct DXGADAPTER_GPUMMUCAPS *)(v2 + 144LL * a2);
  return result;
}
