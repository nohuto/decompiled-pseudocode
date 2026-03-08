/*
 * XREFs of EtwTraceSmoothRotationStop @ 0x1C0164020
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qt_EtwWriteTransfer @ 0x1C0167550 (McTemplateK0qt_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceSmoothRotationStop(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    return McTemplateK0qt_EtwWriteTransfer(a1, a2, a3, (unsigned int)a1, a2);
  return result;
}
