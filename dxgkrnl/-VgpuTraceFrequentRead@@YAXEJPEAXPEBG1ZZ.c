void VgpuTraceFrequentRead(char a1, int a2, void *a3, const unsigned __int16 *a4, wchar_t *Format, ...)
{
  __int64 v9; // rcx
  wchar_t *v10; // r8
  const EVENT_DESCRIPTOR *v11; // rdx
  int v12; // [rsp+30h] [rbp-258h]
  wchar_t Dst[256]; // [rsp+50h] [rbp-238h] BYREF
  va_list ArgList; // [rsp+2B8h] [rbp+30h] BYREF

  va_start(ArgList, Format);
  memset(Dst, 0, sizeof(Dst));
  v10 = Format;
  if ( Format )
    vswprintf_s(Dst, 0x100uLL, Format, ArgList);
  if ( a1 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) == 0 )
      return;
    v12 = 0;
    v11 = (const EVENT_DESCRIPTOR *)&EventGpuPartitioningStart;
  }
  else
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) == 0 )
      return;
    v12 = a2;
    v11 = (const EVENT_DESCRIPTOR *)&EventGpuPartitioningEnd;
  }
  McTemplateK0pzzq_EtwWriteTransfer(v9, v11, (__int64)v10, a3, a4, Dst, v12);
}
