/*
 * XREFs of EtwTracePowerOnGdiBegin @ 0x1C00CC950
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0d_EtwWriteTransfer @ 0x1C013C2EC (McTemplateK0d_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTracePowerOnGdiBegin(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return McTemplateK0d_EtwWriteTransfer(a1, &PowerOnGdiBegin, a3, (unsigned int)a1);
  return result;
}
