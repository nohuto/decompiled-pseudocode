bool __fastcall VIDMM_GLOBAL::MustFlushTlbOnValidTransition(VIDMM_GLOBAL *this, unsigned int a2)
{
  __int64 v2; // rbx

  v2 = a2;
  return (!(unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage()
       || (*(_BYTE *)(1616 * v2 + *((_QWORD *)this + 5028) + 444) & 1) != 0)
      && (*(_DWORD *)ADAPTER_RENDER::GetGpuMmuCaps(*((ADAPTER_RENDER **)this + 2), v2) & 0x400) == 0;
}
