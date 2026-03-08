/*
 * XREFs of ?VgpuTraceFrequentRead@@YAXEJPEAXPEBG1ZZ @ 0x1C0364F38
 * Callers:
 *     DxgkDdiReadVirtualFunctionConfig @ 0x1C0366180 (DxgkDdiReadVirtualFunctionConfig.c)
 *     DxgkDdiReadVirtualFunctionConfigBlock @ 0x1C0366230 (DxgkDdiReadVirtualFunctionConfigBlock.c)
 *     DxgkDdiWriteVirtualFunctionConfig @ 0x1C0366650 (DxgkDdiWriteVirtualFunctionConfig.c)
 *     DxgkDdiWriteVirtualFunctionConfigBlock @ 0x1C0366700 (DxgkDdiWriteVirtualFunctionConfigBlock.c)
 *     ?VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z @ 0x1C036B3C0 (-VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     McTemplateK0pzzq_EtwWriteTransfer @ 0x1C005A830 (McTemplateK0pzzq_EtwWriteTransfer.c)
 */

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
