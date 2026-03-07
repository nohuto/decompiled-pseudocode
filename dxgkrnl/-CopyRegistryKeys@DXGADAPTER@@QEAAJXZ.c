__int64 __fastcall DXGADAPTER::CopyRegistryKeys(DXGADAPTER *this)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  unsigned __int16 v4[264]; // [rsp+20h] [rbp-228h] BYREF

  v1 = 0;
  if ( *((_BYTE *)this + 210) )
  {
    WdLogSingleEntry1(4LL, 12479LL);
    return 0LL;
  }
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 442) >= 0x16u )
  {
    RtlStringCbCopyW(v4, 0x208uLL, (size_t *)L"Classes");
    result = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetRegistryKeys((DXGADAPTER *)((char *)this + 4472), v4);
    if ( (int)result < 0 )
      return result;
    RtlStringCbCopyW(v4, 0x208uLL, (size_t *)L"MediaFoundation\\Transforms");
    return (unsigned int)DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetRegistryKeys((DXGADAPTER *)((char *)this + 4472), v4);
  }
  return v1;
}
