/*
 * XREFs of EtwTraceGdiCreateHandle @ 0x1C001E804
 * Callers:
 *     HmgAlloc @ 0x1C001E6F0 (HmgAlloc.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0028DD0 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 * Callees:
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0150614 (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceGdiCreateHandle(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
    return McTemplateK0pqqq_EtwWriteTransfer(a1, (unsigned int)&GdiCreateHandle, a3, a1, a2);
  return result;
}
