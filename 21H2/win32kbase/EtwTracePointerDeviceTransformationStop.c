/*
 * XREFs of EtwTracePointerDeviceTransformationStop @ 0x1C01237E0
 * Callers:
 *     rimTransformGeometry @ 0x1C017CF74 (rimTransformGeometry.c)
 * Callees:
 *     McTemplateK0d_EtwWriteTransfer @ 0x1C0125070 (McTemplateK0d_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTracePointerDeviceTransformationStop(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0d_EtwWriteTransfer(a1, &PointerDeviceTransformationStop, a3, (unsigned int)a1);
  return result;
}
